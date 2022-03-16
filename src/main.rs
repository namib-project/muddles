use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};

use tree_sitter::Parser;

use log::debug;

#[derive(Debug)]
struct Backend {
    client: Client,
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

    async fn did_open(&self, _params: DidOpenTextDocumentParams) {
        debug!("did open");
    }

    async fn did_change(&self, params: DidChangeTextDocumentParams) {
        debug!("change notified");

        let diagnostics: Vec<Diagnostic> = vec![];

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

    async fn completion(&self, _: CompletionParams) -> Result<Option<CompletionResponse>> {
        Ok(Some(CompletionResponse::Array(vec![
            CompletionItem::new_simple("Hello".to_string(), "Some detail".to_string()),
            CompletionItem::new_simple("Bye".to_string(), "More detail".to_string()),
        ])))
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

    let (service, messages) = LspService::new(|client| Backend { client });
    Server::new(stdin, stdout)
        .interleave(messages)
        .serve(service)
        .await;
}
