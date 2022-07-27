pub fn get_doc_for_mud_id(mud_id: &str) -> Option<&str> {
    match mud_id {
        "\"mud-version\"" => Some(MUD_VERSION_DOCSTRING),
        "\"mud-url\"" => Some(MUD_URL_DOCSTRING),
        "\"last-update\"" => Some(LAST_UPDATE_DOCSTRING),
        "\"mud-signature\"" => Some(MUD_SIGNATURE_DOCSTRING),
        "\"cache-validity\"" => Some(CACHE_VALIDITY_DOCSTRING),
        "\"is-supported\"" => Some(IS_SUPPORTED_DOCSTRING),
        "\"systeminfo\"" => Some(SYSTEMINFO_DOCSTRING),
        "\"mfg-name\"" | "\"model-name\"" | "\"firmware-rev\"" | "\"software-rev\"" => {
            Some(REV_NAME_DOCSTRING)
        }
        "\"documentation\"" => Some(DOCUMENTATION_DOCSTRING),
        "\"extensions\"" => Some(EXTENSIONS_DOCSTRING),
        "\"to-device-policy\"" | "\"from-device-policy\"" => Some(DEVICE_POLICY_DOCSTRING),
        _ => None,
    }
}

pub const CACHE_VALIDITY_DOCSTRING: &str = r#"
# 3.5.  cache-validity

This uint8 is the period of time in hours that a network management station MUST wait since its last retrieval before checking for an update.
It is RECOMMENDED that this value be no less than 24, and it MUST NOT be more than 168 for any Thing that is supported.
This period SHOULD be no shorter than any period determined through HTTP caching directives (e.g., "cache-control" or "Expires").
N.B., the expiring of this timer does not require the MUD manager to discard the MUD file, nor terminate access to a Thing.
See Section 16 for more information.
"#;

pub const MUD_VERSION_DOCSTRING: &str = r#"
# 3.1.  mud-version

This node specifies the integer version of the MUD specification.
This memo specifies version 1.
"#;

pub const MUD_URL_DOCSTRING: &str = r#"
# 3.2.  MUD URL

This URL identifies the MUD file.
This is useful when the file and associated signature are manually uploaded, say, in an offline mode.
"#;

pub const DEVICE_POLICY_DOCSTRING: &str = r#"
# 3.3.  to-device-policy and from-device-policy Containers

[RFC8519] describes access lists.
In the case of MUD, a MUD file must be explicit in describing the communication pattern of a Thing, and that includes indicating what is to be permitted or denied in either direction of communication
Hence, each of these containers indicates the appropriate direction of a flow in association with a particular Thing
They contain references to specific access lists.
"#;

pub const LAST_UPDATE_DOCSTRING: &str = r#"
# 3.4.  last-update

This is a date-and-time value of when the MUD file was generated.
This is akin to a version number.
Its form is taken from [RFC6991].
"#;

pub const IS_SUPPORTED_DOCSTRING: &str = r#"
# 3.6.  is-supported

This boolean is an indication from the manufacturer to the network administrator as to whether or not the Thing is supported
In this context, a Thing is said to not be supported if the manufacturer intends never to issue a firmware or software update to the Thing or never to update the MUD file
A MUD manager MAY still periodically check for updates.
"#;

pub const SYSTEMINFO_DOCSTRING: &str = r#"
# 3.7.  systeminfo

This is a textual UTF-8 description of the Thing to be connected.
The intent is for administrators to be able to see a brief displayable description of the Thing.
It SHOULD NOT exceed 60 characters worth of display space.
"#;

pub const REV_NAME_DOCSTRING: &str = r#"
# 3.8.  mfg-name, software-rev, model-name, and firmware-rev

These optional fields are filled in as specified by [RFC8348].
Note that firmware-rev and software-rev MUST NOT be populated in a MUD file if the device can be upgraded but the MUD URL cannot be.
This would be the case, for instance, with MUD URLs that are contained in 802.1AR certificates.
"#;

pub const EXTENSIONS_DOCSTRING: &str = r#"
# 3.9.  extensions

This optional leaf-list names MUD extensions that are used in the MUD file.
Note that MUD extensions MUST NOT be used in a MUD file without the extensions being declared.
Implementations MUST ignore any node in this file that they do not understand.

Note that extensions can either extend the MUD file as described in the previous paragraph or reference other work.
An extension example can be found in Appendix B.
"#;

pub const MUD_SIGNATURE_DOCSTRING: &str = r#"
    leaf mud-signature {
      type inet:uri;
      description
        "A URI that resolves to a signature as
         described in this specification.";
    }
"#;

pub const DOCUMENTATION_DOCSTRING: &str = r#"
# 4.3.  documentation

This URI consists of a URL that points to documentation relating to the device and the MUD file.
This can prove particularly useful when the "controller" class is used, so that its use can be explained.

    leaf documentation {
      type inet:uri;
      description
        "This URL points to documentation that
         relates to this device and any classes that it uses
         in its MUD file.  A caution: MUD managers need
         not resolve this URL on their own but rather simply
         provide it to the administrator.  Parsing HTML is
         not an intended function of a MUD manager.";
    }
"#;
