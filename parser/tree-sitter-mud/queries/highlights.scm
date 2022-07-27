(json_pair_fallback) @comment
(json_value_fallback) @comment
(json_array_fallback) @comment
(json_object_fallback) @comment

(_ mud_id: (_) @function) ; any MUD identifier
(ietf_mud (_ mud_id: (_) @attribute)) ; MUD identifier as ietf-mud:mud fields

(string) @string
(_ url: (_ (string_quoted_content) @URI))

("{" @punctuation.bracket)
("}" @punctuation.bracket)
("[" @punctuation.bracket)
("]" @punctuation.bracket)
(":" @punctuation.special)
("," @punctuation.delimiter)
