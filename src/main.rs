use std::collections::HashMap;
use std::sync::{Arc, RwLock};

use chrono::Local;
use serde_json::json;
use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};

use tree_sitter::{Node, Parser, Query, QueryCursor, Tree};

use log::{debug, error};

macro_rules! query_for_nodes {
    ($query:expr,$node:expr,$source:expr) => {
        QueryCursor::new()
            .captures(
                &Query::new(tree_sitter_mud::language(), $query).expect("unable to create query"),
                $node,
                $source.as_bytes(),
            )
            .map(|x| x.0.captures)
            .flatten()
            .map(|c| c.node)
    };
}

macro_rules! to_lsp_range {
    ($node:expr) => {
        Range {
            start: Position {
                line: $node.start_position().row as u32,
                character: $node.start_position().column as u32,
            },
            end: Position {
                line: $node.end_position().row as u32,
                character: $node.end_position().column as u32,
            },
        }
    };
}

macro_rules! query_for_ranges {
    ($query:expr,$node:expr,$source:expr) => {
        query_for_nodes!($query, $node, $source).map(|node| {
            let start = node.start_position();
            let end = node.end_position();
            Range {
                start: Position {
                    line: start.row as u32,
                    character: start.column as u32,
                },
                end: Position {
                    line: end.row as u32,
                    character: end.column as u32,
                },
            }
        })
    };
}

macro_rules! diagnostic_warn {
    ($range:expr,$message:expr) => {
        Diagnostic::new(
            $range,
            Some(DiagnosticSeverity::WARNING),
            None,
            Some("muddles".to_string()),
            $message,
            None,
            None,
        )
    };
}

struct Backend {
    client: Client,
    docs: Arc<RwLock<HashMap<String, Document>>>,
}

#[tower_lsp::async_trait]
impl LanguageServer for Backend {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        debug!("got an init request");
        let mut result = InitializeResult::default();
        result.capabilities.hover_provider = Some(HoverProviderCapability::Simple(true));
        result.capabilities.definition_provider = Some(OneOf::Left(true));
        result.capabilities.text_document_sync =
            Some(TextDocumentSyncCapability::Kind(TextDocumentSyncKind::FULL));
        result.capabilities.completion_provider = Some(CompletionOptions::default());
        result.capabilities.code_action_provider = Some(CodeActionProviderCapability::Simple(true));
        result.capabilities.execute_command_provider = Some(ExecuteCommandOptions {
            commands: vec!["updateLastUpdateTimestamp".to_string()],
            work_done_progress_options: WorkDoneProgressOptions {
                work_done_progress: None,
            },
        });
        Ok(result)
    }

    async fn did_open(&self, params: DidOpenTextDocumentParams) {
        debug!("did open");

        let mut diagnostics: Vec<Diagnostic>;
        {
            let mut doc = Document::new();
            doc.update(params.text_document.text);

            let mut docs = self.docs.write().unwrap();
            docs.insert(params.text_document.uri.to_string(), doc);
            diagnostics = docs
                .get(&params.text_document.uri.to_string())
                .unwrap()
                .get_parser_errors()
                .iter()
                .map(|range| Diagnostic::new_simple(*range, "parser error".to_string()))
                .collect();
            diagnostics.append(
                &mut docs
                    .get(&params.text_document.uri.to_string())
                    .unwrap()
                    .get_warnings(),
            );
        }
        self.client
            .publish_diagnostics(params.text_document.uri, diagnostics, None)
            .await;
    }

    async fn did_change(&self, params: DidChangeTextDocumentParams) {
        debug!("change notified");

        let mut diagnostics: Vec<Diagnostic>;
        {
            let mut doc = Document::new();
            // NOTE(ja_he):
            //  for now we use _full_ synchronization, meaning we get the complete contents of the
            //  document after the change. we _should_ look to use incremental changes, but I think
            //  it might be a bit of a pain to get it to work with treesitter.
            doc.update(params.content_changes[0].text.clone());

            let mut docs = self.docs.write().unwrap();
            docs.insert(params.text_document.uri.to_string(), doc);
            diagnostics = docs
                .get(&params.text_document.uri.to_string())
                .unwrap()
                .get_parser_errors()
                .iter()
                .map(|range| Diagnostic::new_simple(*range, "parser error".to_string()))
                .collect();
            diagnostics.append(
                &mut docs
                    .get(&params.text_document.uri.to_string())
                    .unwrap()
                    .get_warnings(),
            );
        }

        self.client
            .publish_diagnostics(params.text_document.uri, diagnostics, None)
            .await;
    }

    async fn goto_definition(
        &self,
        params: GotoDefinitionParams,
    ) -> Result<Option<GotoDefinitionResponse>> {
        debug!("got a def request");

        let url = params.text_document_position_params.text_document.uri;
        let pos = params.text_document_position_params.position;

        let locations = {
            let docs = self.docs.read().unwrap();
            let doc = docs
                .get(url.as_str())
                .unwrap_or_else(|| panic!("no doc '{}' on goto-definition reqest!", url));
            doc.get_definition_location(pos)
        }
        .iter()
        .map(|r| Location::new(url.clone(), *r))
        .collect();

        Ok(Some(GotoDefinitionResponse::Array(locations)))
    }

    async fn initialized(&self, _: InitializedParams) {
        debug!("was notified of initialization");
        self.client
            .log_message(MessageType::INFO, "server initialized!")
            .await;
    }

    async fn shutdown(&self) -> Result<()> {
        debug!("was asked to shut down");
        Ok(())
    }

    async fn completion(&self, params: CompletionParams) -> Result<Option<CompletionResponse>> {
        let completions: Vec<CompletionItem>;
        {
            let docs = self.docs.read().unwrap();
            completions = match docs
                .get(&params.text_document_position.text_document.uri.to_string())
            {
                Some(doc) => match doc.get_mud_location(params.text_document_position.position) {
                    MudLocation::MudAclNameReference => doc
                        .get_acl_names()
                        .iter()
                        .map(|s| CompletionItem::new_simple(s.clone(), "ACL name".to_string()))
                        .collect(),
                    MudLocation::AclNameDefinition => vec![],
                    MudLocation::CacheValidity => vec![],
                    MudLocation::Unknown => vec![],
                },
                None => vec![],
            }
        }

        Ok(Some(CompletionResponse::Array(completions)))
    }

    async fn code_action(&self, params: CodeActionParams) -> Result<Option<CodeActionResponse>> {
        let mut response = vec![];

        response
            .append(&mut self.get_version_insertion_code_action(params.text_document.uri.clone()));

        response.push(CodeActionOrCommand::Command(Command::new(
            "update 'last-update' timestamp".to_string(),
            "updateLastUpdateTimestamp".to_string(),
            Some(vec![json!(params.text_document.uri)]),
        )));

        Ok(Some(response))
    }

    async fn execute_command(
        &self,
        params: ExecuteCommandParams,
    ) -> Result<Option<serde_json::Value>> {
        let command = params.command.as_str();
        if let Ok(url) = serde_json::from_value::<Url>(params.arguments[0].clone()) {
            match command {
                "updateLastUpdateTimestamp" => {
                    let edit = {
                        let docs = self.docs.read().unwrap();
                        let doc = docs.get(url.as_str()).unwrap_or_else(|| {
                            panic!("no doc '{}' on goto-definition reqest!", url)
                        });
                        doc.get_timestamp_update_edit()
                    };
                    match edit {
                        Some(edit) => {
                            let mut changes = HashMap::new();
                            changes.insert(url, vec![edit]);
                            self.client.apply_edit(WorkspaceEdit::new(changes)).await?;
                        }
                        None => {
                            self.client
                                .show_message(
                                    MessageType::ERROR,
                                    "could not get timestamp update edit".to_string(),
                                )
                                .await
                        }
                    }
                }
                unknown => {
                    self.client
                        .show_message(
                            MessageType::ERROR,
                            format!("unknown command requested: '{}'", unknown),
                        )
                        .await
                }
            };
        }

        Ok(None)
    }

    async fn hover(&self, params: HoverParams) -> Result<Option<Hover>> {
        debug!("was asked for hover info");

        let response = {
            let docs = self.docs.read().unwrap();
            match docs.get(
                &params
                    .text_document_position_params
                    .text_document
                    .uri
                    .to_string(),
            ) {
                Some(doc) => {
                    match doc.get_mud_location(params.text_document_position_params.position) {
                        MudLocation::CacheValidity => CACHE_VALIDITY_DOCSTRING.to_string(),
                        _ => "no info available".to_string(),
                    }
                }
                None => "no info available".to_string(),
            }
        };

        Ok(Some(Hover {
            contents: HoverContents::Markup(MarkupContent {
                kind: MarkupKind::PlainText,
                value: response,
            }),
            range: None,
        }))
    }
}

impl Backend {
    fn get_version_insertion_code_action(&self, url: Url) -> CodeActionResponse {
        let ietf_mud_pos: Option<Position> = {
            let docs = self.docs.read().unwrap();
            match docs.get(&url.to_string()) {
                Some(doc) => doc.find_ietf_mud_start(),
                None => None,
            }
        };

        match ietf_mud_pos {
            Some(ietf_mud_pos) => {
                let mut edits = HashMap::new();

                edits.insert(
                    url,
                    vec![TextEdit::new(
                        Range::new(ietf_mud_pos, ietf_mud_pos),
                        "    \"mud-version\" : 1,\n".to_string(),
                    )],
                );

                let response = vec![CodeActionOrCommand::CodeAction(CodeAction {
                    title: "Insert mud-version key with value 1 under ietf-mud:mud".to_string(),
                    kind: None,
                    diagnostics: None,
                    edit: Some(WorkspaceEdit::new(edits)),
                    command: None,
                    is_preferred: None,
                    disabled: None,
                    data: None,
                })];

                response
            }
            None => vec![],
        }
    }
}

#[tokio::main]
async fn main() {
    env_logger::builder()
        .filter_level(log::LevelFilter::Debug)
        .init();

    debug!("starting muddles");

    let stdin = tokio::io::stdin();
    let stdout = tokio::io::stdout();

    let (service, messages) = LspService::new(|client| Backend {
        client,
        docs: Arc::new(RwLock::new(HashMap::new())),
    });
    Server::new(stdin, stdout)
        .interleave(messages)
        .serve(service)
        .await;
}

struct Document {
    parser: Parser,
    tree: Option<Tree>,
    source: String,
}

impl Document {
    fn new() -> Document {
        let mut parser = Parser::new();
        if let Err(err) = parser.set_language(tree_sitter_mud::language()) {
            panic!("{}", err);
        }
        Document {
            parser,
            tree: None,
            source: "".to_string(),
        }
    }

    fn update(&mut self, new_source: String) {
        self.source = new_source;
        self.tree = self.parser.parse(&self.source, None);
        if self.tree.is_none() {
            panic!("after parsing, tree is None");
        }
    }

    fn get_definition_location(&self, pos: Position) -> Vec<Range> {
        match &self.tree {
            None => {
                error!("tree was None when looking for definition location");
                vec![]
            }
            Some(tree) => {
                let maybe_ref = query_for_nodes!(
                    "(policy_acl_name name: (string ((string_quoted_content) @ref)))",
                    tree.root_node(),
                    self.source
                )
                .filter(|node| node.contains_lsp_pos(pos))
                .next()
                .map(|node| {
                    node.utf8_text(self.source.as_bytes())
                        .expect("cannot get ref node content (looking for def)")
                });

                match maybe_ref {
                    None => vec![],
                    Some(ref_name) => query_for_nodes!(
                        "(acl_name_def name: (string ((string_quoted_content) @def)))",
                        tree.root_node(),
                        self.source
                    )
                    .filter(|def_node| {
                        def_node
                            .utf8_text(self.source.as_bytes())
                            .expect("cannot get def node content looking for def")
                            .eq(ref_name)
                    })
                    .map(|def_node| to_lsp_range!(def_node))
                    .collect(),
                }
            }
        }
    }

    fn get_parser_errors(&self) -> Vec<Range> {
        match &self.tree {
            None => {
                error!("tree was None when looking for parser errors");
                vec![Range {
                    start: Position {
                        line: 0,
                        character: 0,
                    },
                    end: Position {
                        line: 1,
                        character: 0,
                    },
                }]
            }
            Some(tree) => {
                query_for_ranges!("(ERROR) @error", tree.root_node(), self.source).collect()
            }
        }
    }

    fn get_warnings(&self) -> Vec<Diagnostic> {
        match &self.tree {
            None => {
                error!("tree was None when linting");
                vec![]
            }
            Some(tree) => {
                let fallback_warnings: Vec<Diagnostic> = {
                    query_for_ranges!(FALLBACK_QUERY, tree.root_node(), self.source)
                        .map(|range| {
                            diagnostic_warn!(range, "not part of MUD specification".to_string())
                        })
                        .collect()
                };
                let eth_warning: Vec<Diagnostic> = {
                    query_for_ranges!("(eth_matches) @eth", tree.root_node(), self.source)
                        .map(|range| {
                            diagnostic_warn!(
                                range,
                                concat!(
                                    "RFC8520 omits support for 'match-on-eth'\n",
                                    "which the '.../acl:matches/' node 'eth' depends on."
                                )
                                .to_string()
                            )
                        })
                        .collect()
                };
                let uint8_type_constraint_warnings: Vec<Diagnostic> = {
                    query_for_nodes!("(uint8) @u", tree.root_node(), self.source)
                        .filter_map(|node| {
                            let value = node
                                .utf8_text(self.source.as_bytes())
                                .unwrap()
                                .parse::<i64>();
                            match value {
                                Ok(value) => {
                                    if (0..256).contains(&value) {
                                        None
                                    } else {
                                        Some(diagnostic_warn!(
                                            to_lsp_range!(node),
                                            "value out-of-bounds for type `uint8`".to_string()
                                        ))
                                    }
                                }
                                Err(_) => Some(diagnostic_warn!(
                                    to_lsp_range!(node),
                                    "cannot parse this as a number".to_string()
                                )),
                            }
                        })
                        .collect()
                };

                fallback_warnings
                    .into_iter()
                    .chain(eth_warning)
                    .chain(uint8_type_constraint_warnings)
                    .collect()
            }
        }
    }

    fn get_acl_names(&self) -> Vec<String> {
        match &self.tree {
            None => vec![],
            Some(tree) => query_for_nodes!(
                "(acl_name_def name: (string ((string_quoted_content) @name)))",
                tree.root_node(),
                self.source
            )
            .map(|node| {
                node.utf8_text(self.source.as_bytes())
                    .expect("cannot get node content")
                    .to_string()
            })
            .collect(),
        }
    }

    fn find_ietf_mud_start(&self) -> Option<Position> {
        match &self.tree {
            None => None,
            Some(tree) => query_for_nodes!(IETF_MUD_START_QUERY, tree.root_node(), self.source)
                .map(|node| {
                    let brace_pos = node.end_position();
                    let next_line_start = Position {
                        line: (brace_pos.row + 1) as u32,
                        character: 0,
                    };
                    Some(next_line_start)
                })
                .next()
                .unwrap_or(None),
        }
    }

    // TODO(ja_he): I want to get rid of this.
    //              In most cases we'll care if we're in one specific type of places, and even if
    //              not, this can still just become a macro and if you care about multiple just
    //              call it multiple times. So far performance is easily good enough anyways, but
    //              this single function is gonna blow up in complexity otherwise for no real
    //              benefit (imo).
    fn get_mud_location(&self, pos: Position) -> MudLocation {
        // TODO(ja_he):
        //  definite performance concerns with this approach once we add more stuff to
        //  search for.
        match &self.tree {
            None => MudLocation::Unknown,
            Some(tree) => {
                {
                    if query_for_nodes!(
                        "(policy_acl_name name: (string ((string_quoted_content) @insertable)))",
                        tree.root_node(),
                        self.source
                    )
                    .any(|node| node.contains_lsp_pos(pos))
                    {
                        return MudLocation::MudAclNameReference;
                    }
                }

                {
                    if query_for_nodes!(
                        r#"(cache_validity) @cache_validity"#,
                        tree.root_node(),
                        self.source
                    )
                    .any(|node| node.contains_lsp_pos(pos))
                    {
                        return MudLocation::CacheValidity;
                    }
                }

                MudLocation::Unknown
            }
        }
    }

    fn get_timestamp_update_edit(&self) -> Option<TextEdit> {
        match &self.tree {
            None => {
                error!("tree was None when getting timestamp update edit");
                None
            }
            Some(tree) => {
                let range = query_for_ranges!(
                    "(last_update timestamp: (string) @timestamp)",
                    tree.root_node(),
                    self.source
                )
                .next();
                match range {
                    Some(range) => Some(TextEdit::new(
                        range,
                        format!("\"{}\"", Local::now().to_rfc3339()),
                    )),
                    None => {
                        error!("no range found for last-update timestamp");
                        None
                    }
                }
            }
        }
    }
}

enum MudLocation {
    /// a reference to an ACL name in the MUD container
    MudAclNameReference,
    /// an ACL name in an ACL definition
    AclNameDefinition,
    /// the "cache-validity" definition
    CacheValidity,
    /// any other position in the document that is none of the above
    Unknown,
}

trait ContainsPos {
    fn contains_lsp_pos(&self, pos: Position) -> bool;
}

impl ContainsPos for Node<'_> {
    fn contains_lsp_pos(&self, pos: Position) -> bool {
        let start = self.start_position();
        let end = self.end_position();

        let start: Position = Position {
            line: start.row as u32,
            character: start.column as u32,
        };
        let end: Position = Position {
            line: end.row as u32,
            character: end.column as u32,
        };

        pos >= start && pos <= end
    }
}

const CACHE_VALIDITY_DOCSTRING: &str = r#"
3.5.  cache-validity

   This uint8 is the period of time in hours that a network management
   station MUST wait since its last retrieval before checking for an
   update.  It is RECOMMENDED that this value be no less than 24, and it
   MUST NOT be more than 168 for any Thing that is supported.  This
   period SHOULD be no shorter than any period determined through HTTP
   caching directives (e.g., "cache-control" or "Expires").  N.B., the
   expiring of this timer does not require the MUD manager to discard
   the MUD file, nor terminate access to a Thing.  See Section 16 for
   more information.
"#;

const FALLBACK_QUERY: &str = r#"(json_pair_fallback) @unknown
(json_value_fallback) @unknown
(json_array_fallback) @unknown
(json_object_fallback) @unknown"#;

// here, because it messes up my editor's brace matching
const IETF_MUD_START_QUERY: &str = r#"(ietf_mud "{" @type)"#;
