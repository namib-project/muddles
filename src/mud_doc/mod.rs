    pub const CACHE_VALIDITY_DOCSTRING: &str = r#"
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
