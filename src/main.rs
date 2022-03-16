use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};

#[derive(Debug)]
struct Backend {
    client: Client,
}

#[tower_lsp::async_trait]
impl LanguageServer for Backend {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        eprintln!("\n -> got an init request");
        let mut result = InitializeResult::default();
        result.capabilities.hover_provider = Some(HoverProviderCapability::Simple(true));
        result.capabilities.definition_provider = Some(OneOf::Left(true));
        result.capabilities.text_document_sync =
            Some(TextDocumentSyncCapability::Kind(TextDocumentSyncKind::FULL));
        result.capabilities.completion_provider = Some(CompletionOptions::default());
        Ok(result)
    }

    async fn did_open(&self, _params: DidOpenTextDocumentParams) {
        eprintln!("\n -> did open");
    }

    async fn did_change(&self, params: DidChangeTextDocumentParams) {
        eprintln!("\n -> change notified");

        let diagnostics: Vec<Diagnostic> = vec![];

        self.client
            .publish_diagnostics(params.text_document.uri, diagnostics, None)
            .await;
    }

    async fn goto_definition(
        &self,
        _: GotoDefinitionParams,
    ) -> Result<Option<GotoDefinitionResponse>> {
        eprintln!("\n -> got a def request");

        Ok(Some(GotoDefinitionResponse::Scalar(Location::new(
            Url::from_file_path("/tmp/out").unwrap(),
            Range::default(),
        ))))
    }

    async fn initialized(&self, _: InitializedParams) {
        eprintln!("\n -> was notified of initialization");
        self.client
            .log_message(MessageType::INFO, "server initialized!")
            .await;
    }

    async fn shutdown(&self) -> Result<()> {
        eprintln!("\n -> was asked to shut down");
        Ok(())
    }

    async fn completion(&self, _: CompletionParams) -> Result<Option<CompletionResponse>> {
        Ok(Some(CompletionResponse::Array(vec![
            CompletionItem::new_simple("Hello".to_string(), "Some detail".to_string()),
            CompletionItem::new_simple("Bye".to_string(), "More detail".to_string()),
        ])))
    }

    async fn hover(&self, _params: HoverParams) -> Result<Option<Hover>> {
        eprintln!("\n -> was asked for hover info");

        let response = "you're hovering!".to_string();

        Ok(Some(Hover {
            contents: HoverContents::Scalar(MarkedString::String(response)),
            range: None,
        }))
    }
}

impl Backend {
}

#[tokio::main]
async fn main() {
    eprintln!("starting muddles");

    let stdin = tokio::io::stdin();
    let stdout = tokio::io::stdout();

    let (service, messages) = LspService::new(|client| Backend {
        client,
    });
    Server::new(stdin, stdout)
        .interleave(messages)
        .serve(service)
        .await;
}
