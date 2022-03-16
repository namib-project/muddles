use std::collections::HashMap;
use std::sync::{Arc, RwLock};

use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};

use tree_sitter::{Node, Parser, Query, QueryCursor, Tree};

use log::{debug, error};

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
                .get_errors()
                .iter()
                .map(|range| Diagnostic::new_simple(*range, "parser error".to_string()))
                .collect();
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
                .get_errors()
                .iter()
                .map(|range| Diagnostic::new_simple(*range, "parser error".to_string()))
                .collect();
        }

        self.client
            .publish_diagnostics(params.text_document.uri, diagnostics, None)
            .await;
    }

    async fn goto_definition(
        &self,
        _: GotoDefinitionParams,
    ) -> Result<Option<GotoDefinitionResponse>> {
        debug!("got a def request");

        Ok(Some(GotoDefinitionResponse::Scalar(Location::new(
            Url::from_file_path("/tmp/out").unwrap(),
            Range::default(),
        ))))
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
                    MudLocation::AclNameValue => doc
                        .get_acl_names()
                        .iter()
                        .map(|s| CompletionItem::new_simple(s.clone(), "ACL name".to_string()))
                        .collect(),
                    MudLocation::Unknown => vec![],
                },
                None => vec![],
            }
        }

        Ok(Some(CompletionResponse::Array(completions)))
    }

    async fn hover(&self, _params: HoverParams) -> Result<Option<Hover>> {
        debug!("was asked for hover info");

        let response = "you're hovering!".to_string();

        Ok(Some(Hover {
            contents: HoverContents::Scalar(MarkedString::String(response)),
            range: None,
        }))
    }
}

impl Backend {}

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

    fn get_errors(&self) -> Vec<Range> {
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
                let query = Query::new(tree_sitter_mud::language(), "(ERROR) @error")
                    .expect("unable to create query");
                let mut cursor = QueryCursor::new();
                cursor
                    .captures(&query, tree.root_node(), self.source.as_bytes())
                    .map(|c| {
                        c.0.captures.iter().map(|x| {
                            let start = x.node.start_position();
                            let end = x.node.end_position();
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
                    })
                    .flatten()
                    .collect()
            }
        }
    }

    fn get_acl_names(&self) -> Vec<String> {
        match &self.tree {
            None => vec![],
            Some(tree) => {
                let query = Query::new(
                    tree_sitter_mud::language(),
                    "(acl_name name: (string ((string_quoted_content) @name)))",
                )
                .expect("unable to create query");
                let mut cursor = QueryCursor::new();
                cursor
                    .captures(&query, tree.root_node(), self.source.as_bytes())
                    .map(|x| x.0.captures)
                    .flatten()
                    .map(|x| {
                        x.node
                            .utf8_text(self.source.as_bytes())
                            .expect("cannot get node content")
                            .to_string()
                    })
                    .collect()
            }
        }
    }

    fn get_mud_location(&self, pos: Position) -> MudLocation {
        // TODO(ja_he):
        //  definite performance concerns with this approach once we add more stuff to
        //  search for.
        match &self.tree {
            None => MudLocation::Unknown,
            Some(tree) => {
                let query = Query::new(
                    tree_sitter_mud::language(),
                    "(policy_acl_name name: (string ((string_quoted_content) @insertable)))",
                )
                .expect("unable to create query");
                let mut cursor = QueryCursor::new();
                let on_policy_acl_name = cursor
                    .captures(&query, tree.root_node(), self.source.as_bytes())
                    .map(|x| x.0.captures)
                    .flatten()
                    .any(|c| c.node.contains_lsp_pos(pos));
                if on_policy_acl_name {
                    MudLocation::AclNameValue
                } else {
                    MudLocation::Unknown
                }
            }
        }
    }
}

enum MudLocation {
    AclNameValue,
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