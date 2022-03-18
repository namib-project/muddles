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
