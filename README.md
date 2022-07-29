# muddles

A language server for the Manufacturer Usage Description (MUD) format.

## Details

The Language Server Protocol (LSP) defines common interactions between an Editor
(or IDE) as a client and a "Language Server", which conventionally is a tool
that parses and analyzes source code and can infer type information, provide
completions, warn of errors or likely mistakes, etc.
Language server examples are LLVM's clangd or Rust's rust-analyzer.

The editor (client) can synchronize document states with the server, ask it for
contextual information (e.g. documentation or type hints), completion, etc.
The server can in turn register diagnostic messages such as "this bit of source
is syntactically incorrect" or "this thing is not used".

LSP can certainly be applied to non-programming languages and this PoC explores
how it might be applied to support the editing of MUD files.

To handle the complexities of parsing to a syntax tree and then understanding
that syntax tree, Tree-sitter is used.
A (not necessarily complete) Tree-sitter grammar for MUD can be found in
[`parser/tree-sitter-mud/grammar.js`](./parser/tree-sitter-mud/grammar.js).
This grammar is intentionally permissive to make parsing more reliable and allow
the language server to provide more detailed errors and warnings beyond "unable
to parse".

Tree-sitter's parsing can even be done incrementally, and LSP also supports
incremental synchronization (as opposed to no synchronization or sending the
complete contents on every change), but currently the language server always
updates the complete tree for simplicity's sake.
Tree-sitter also allows querying tree via Scheme queries. This, e.g., allows
easily finding syntax nodes of a certain type but much more complex queries are
possible.

## Try it!

You can build (and install) this project with `cargo`.
For example, to install the release version (likely to `$HOME/.cargo`; see
`cargo help install`), run:

    $ cargo install --path .

You will need a C compiler on your system for this to work because Cargo needs
to compile the Tree-sitter-generated parser sources.

To use it, of course you'll need to configure your (LSP-capable) text editor.
While we can't go over complete configuration in this document, here's some
snippets to hopefully get you most of the way.

#### Emacs

You can use muddles in Emacs with [lsp-mode], declaring a new major `mud-mode` derived from [json-mode].
You can install both [lsp-mode] and [json-mode] from [MELPA] (`M-x package-install lsp-mode`, `M-x package-install json-mode`)

Here is an example configuration:

[lsp-mode]: <https://github.com/emacs-lsp/lsp-mode>
[json-mode]: <https://github.com/joshwnj/json-mode>
[MELPA]: <https://melpa.org/#/getting-started>

```lisp
(require 'lsp-mode)
(require 'json-mode)
(define-derived-mode mud-mode json-mode "MUD")
(add-to-list 'lsp-language-id-configuration '(mud-mode . "mud"))
(lsp-register-client
  (make-lsp-client :new-connection (lsp-stdio-connection "/path/to/muddles")
                   :major-modes '(mud-mode)
                   :server-id 'muddles))
(add-hook 'mud-mode-hook #'lsp)
```

For the best experience, I recommend installing [flycheck](https://github.com/flycheck/flycheck) (`M-x package-install flycheck`) for in-line linting and [lsp-ui](https://emacs-lsp.github.io/lsp-ui/) (`M-x package-install lsp-ui`) for documentation-on-hover. Both need no additional configuration.

#### Neovim

Assuming you are already using the [lspconfig] plugin, here's what the
configuration contents could look like:

[lspconfig]: <https://github.com/neovim/nvim-lspconfig>

```lua
local lspconfig = require'lspconfig'
local configs = require'lspconfig.configs'

-- ...

if not configs.muddles then
  configs.muddles = {
    default_config = {
      cmd = {'/path/to/my/binary/called/muddles'};
      filetypes = {'mud'}; -- requires ':set ft=mud' in document
      root_dir = function(fname)
        return lspconfig.util.path.dirname(fname)
      end;
    };
  }
end
lspconfig.muddles.setup{}
```

#### VSCode

`TODO`

## License

Both the Tree-sitter grammar and the language server implementation are licensed
under either of
* Apache License, Version 2.0
  ([LICENSE-APACHE](LICENSE-APACHE) or http://www.apache.org/licenses/LICENSE-2.0)
* MIT license
  ([LICENSE-MIT](LICENSE-MIT) or http://opensource.org/licenses/MIT)


The grammar takes some inspiration from
[tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json) which is
licensed under the MIT license `(c) 2014 Max Brunsfeld`.

## Contribution

Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in the work by you, as defined in the Apache-2.0 license, shall be
dual licensed as above, without any additional terms or conditions.

## Maintainers

This project is currently maintained by the following developers:

|    Name    |       Email Address          |            GitHub Username        |
|:----------:|:----------------------------:|:---------------------------------:|
| Jan Hensel | <mailto:ja_he@uni-bremen.de> | [ja-he](https://github.com/ja-he) |
