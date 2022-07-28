pub fn get_doc_for_mud_id(mud_id: &str) -> Option<String> {
    match mud_id {
        "\"mud-version\"" => Some(MUD_VERSION_DOCSTRING.to_string()),
        "\"mud-url\"" => Some(MUD_URL_DOCSTRING.to_string()),
        "\"last-update\"" => Some(LAST_UPDATE_DOCSTRING.to_string()),
        "\"mud-signature\"" => Some(MUD_SIGNATURE_DOCSTRING.to_string()),
        "\"cache-validity\"" => Some(CACHE_VALIDITY_DOCSTRING.to_string()),
        "\"is-supported\"" => Some(IS_SUPPORTED_DOCSTRING.to_string()),
        "\"systeminfo\"" => Some(SYSTEMINFO_DOCSTRING.to_string()),
        "\"mfg-name\"" => Some(REV_NAME_DOCSTRING.to_string() + SEP + MFG_NAME_DOC_YANG),
        "\"model-name\"" => Some(REV_NAME_DOCSTRING.to_string() + SEP + MODEL_NAME_DOC_YANG),
        "\"firmware-rev\"" => Some(REV_NAME_DOCSTRING.to_string() + SEP + FIRMWARE_REV_DOC_YANG),
        "\"software-rev\"" => Some(REV_NAME_DOCSTRING.to_string() + SEP + SOFTWARE_REV_DOC_YANG),
        "\"documentation\"" => Some(DOCUMENTATION_DOCSTRING.to_string()),
        "\"extensions\"" => Some(EXTENSIONS_DOCSTRING.to_string()),
        "\"to-device-policy\"" => {
            Some(DEVICE_POLICY_DOCSTRING.to_string() + SEP + TO_DEVICE_POLICY_YANG)
        }
        "\"from-device-policy\"" => {
            Some(DEVICE_POLICY_DOCSTRING.to_string() + SEP + FROM_DEVICE_POLICY_YANG)
        }
        "\"ietf-access-control-list:acls\"" => Some(
            IETF_ACL_EXPLAINER.to_string() + SEP + ROOT_CONTAINER_SENTENCE + SEP + IETF_ACLS_YANG,
        ),
        "\"ietf-mud:mud\"" => Some(
            IETF_MUD_EXPLAINER.to_string() + SEP + ROOT_CONTAINER_SENTENCE + SEP + IETF_MUD_YANG,
        ),
        "\"controller\"" => Some(CONTROLLER_DOCSTRING.to_string() + SEP + CONTROLLER_YANG),
        "\"my-controller\"" => Some(MY_CONTROLLER_DOCSTRING.to_string() + SEP + MY_CONTROLLER_YANG),
        "\"model\"" => Some(MODEL_DOCSTRING.to_string() + SEP + MODEL_YANG),
        "\"manufacturer\"" => Some(MANUFACTURER_DOCSTRING.to_string() + SEP + MANUFACTURER_YANG),
        "\"same-manufacturer\"" => {
            Some(SAME_MANUFACTURER_DOCSTRING.to_string() + SEP + SAME_MANUFACTURER_YANG)
        }
        "\"local-networks\"" => {
            Some(LOCAL_NETWORKS_DOCSTRING.to_string() + SEP + LOCAL_NETWORKS_YANG)
        }
        _ => None,
    }
}

const SEP: &str = "\n---\n";

const CACHE_VALIDITY_DOCSTRING: &str = r#"
# 3.5.  cache-validity

This uint8 is the period of time in hours that a network management station MUST wait since its last retrieval before checking for an update.
It is RECOMMENDED that this value be no less than 24, and it MUST NOT be more than 168 for any Thing that is supported.
This period SHOULD be no shorter than any period determined through HTTP caching directives (e.g., "cache-control" or "Expires").
N.B., the expiring of this timer does not require the MUD manager to discard the MUD file, nor terminate access to a Thing.
See Section 16 for more information.
"#;

const MUD_VERSION_DOCSTRING: &str = r#"
# 3.1.  mud-version

This node specifies the integer version of the MUD specification.
This memo specifies version 1.
"#;

const MUD_URL_DOCSTRING: &str = r#"
# 3.2.  MUD URL

This URL identifies the MUD file.
This is useful when the file and associated signature are manually uploaded, say, in an offline mode.
"#;

const DEVICE_POLICY_DOCSTRING: &str = r#"
# 3.3.  to-device-policy and from-device-policy Containers

[RFC8519] describes access lists.
In the case of MUD, a MUD file must be explicit in describing the communication pattern of a Thing, and that includes indicating what is to be permitted or denied in either direction of communication
Hence, each of these containers indicates the appropriate direction of a flow in association with a particular Thing
They contain references to specific access lists.
"#;

const LAST_UPDATE_DOCSTRING: &str = r#"
# 3.4.  last-update

This is a date-and-time value of when the MUD file was generated.
This is akin to a version number.
Its form is taken from [RFC6991].
"#;

const IS_SUPPORTED_DOCSTRING: &str = r#"
# 3.6.  is-supported

This boolean is an indication from the manufacturer to the network administrator as to whether or not the Thing is supported
In this context, a Thing is said to not be supported if the manufacturer intends never to issue a firmware or software update to the Thing or never to update the MUD file
A MUD manager MAY still periodically check for updates.
"#;

const SYSTEMINFO_DOCSTRING: &str = r#"
# 3.7.  systeminfo

This is a textual UTF-8 description of the Thing to be connected.
The intent is for administrators to be able to see a brief displayable description of the Thing.
It SHOULD NOT exceed 60 characters worth of display space.
"#;

const REV_NAME_DOCSTRING: &str = r#"
# 3.8.  mfg-name, software-rev, model-name, and firmware-rev

These optional fields are filled in as specified by [RFC8348].
Note that firmware-rev and software-rev MUST NOT be populated in a MUD file if the device can be upgraded but the MUD URL cannot be.
This would be the case, for instance, with MUD URLs that are contained in 802.1AR certificates.
"#;

const EXTENSIONS_DOCSTRING: &str = r#"
# 3.9.  extensions

This optional leaf-list names MUD extensions that are used in the MUD file.
Note that MUD extensions MUST NOT be used in a MUD file without the extensions being declared.
Implementations MUST ignore any node in this file that they do not understand.

Note that extensions can either extend the MUD file as described in the previous paragraph or reference other work.
An extension example can be found in Appendix B.
"#;

const MUD_SIGNATURE_DOCSTRING: &str = r#"
    leaf mud-signature {
      type inet:uri;
      description
        "A URI that resolves to a signature as
         described in this specification.";
    }
"#;

const DOCUMENTATION_DOCSTRING: &str = r#"
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

const MFG_NAME_DOC_YANG: &str = r#"
    leaf mfg-name {
      type string;
      description
        "Manufacturer name, as described in
         the ietf-hardware YANG module.";
    }
"#;

const MODEL_NAME_DOC_YANG: &str = r#"
    leaf model-name {
      type string;
      description
        "Model name, as described in the
         ietf-hardware YANG module.";
    }
"#;

const FIRMWARE_REV_DOC_YANG: &str = r#"
    leaf firmware-rev {
      type string;
      description
        "firmware-rev, as described in the
         ietf-hardware YANG module.  Note that this field
         MUST NOT be included when the device can be
         updated but the MUD URL cannot.";
    }
"#;

const SOFTWARE_REV_DOC_YANG: &str = r#"
    leaf software-rev {
      type string;
      description
        "software-rev, as described in the
         ietf-hardware YANG module.  Note that this field
         MUST NOT be included when the device can be
         updated but the MUD URL cannot.";
    }
"#;

const TO_DEVICE_POLICY_YANG: &str = r#"
    container to-device-policy {
      description
        "The policies that should be enforced on traffic
         going to the device.  These policies are not
         necessarily intended to be enforced at a single
         point but may be rendered by the controller to any
         relevant enforcement points in the network or
         elsewhere.";
      uses access-lists;
    }
"#;

const FROM_DEVICE_POLICY_YANG: &str = r#"
    container from-device-policy {
      description
        "The policies that should be enforced on traffic
         coming from the device.  These policies are not
         necessarily intended to be enforced at a single
         point but may be rendered by the controller to any
         relevant enforcement points in the network or
         elsewhere.";
      uses access-lists;
    }
"#;

const ROOT_CONTAINER_SENTENCE: &str = r#"
A valid MUD file will contain two root objects: a "mud" container and an "acls" container.
Extensions may add additional root objects as required. [RFC8520]
"#;

const IETF_ACLS_YANG: &str = r#"
    container acls {
      description
        "This is a top-level container for Access Control Lists.
         It can have one or more acl nodes.";
    ...
"#;

const IETF_ACL_EXPLAINER: &str = r#"
`ietf-access-control-list:acls` lists _access control lists_ (ACLs).
"#;

const IETF_MUD_EXPLAINER: &str = r#"
# 2.1.  The IETF-MUD YANG Module

[...]

- [...]
  The "mud" container, holds information that is relevant to retrieval and validity of the MUD file itself, as well as policy intended to and from the Thing.

[...]
"#;

const IETF_MUD_YANG: &str = r#"
    container mud {
      presence "Enabled for this particular MUD URL";
      description
        "MUD-related information, as specified
         by RFC 8520.";
      uses mud-grouping;
    }
"#;

const MODEL_DOCSTRING: &str = r#"
# 4.4.  model

This string matches the entire MUD URL, thus covering the model that is unique within the context of the authority.
It may contain not only model information, but versioning information as well, and any other information that the manufacturer wishes to add.
The intended use is for devices of this precise class to match, to permit or deny communication between one another.
"#;

const LOCAL_NETWORKS_DOCSTRING: &str = r#"
# 4.5.  local-networks

This null-valued node expands to include local networks.
Its default expansion is that packets must not traverse toward a default route that is received from the router.
However, administrators may expand the expression as is appropriate in their deployments.
"#;

const CONTROLLER_DOCSTRING: &str = r#"
# 4.6.  controller

This URI specifies a value that a controller will register with the MUD manager.
The node then is expanded to the set of hosts that are so registered.
This node may also be a URN.
In this case, the URN describes a well-known service, such as DNS or NTP, that has been standardized.
Both of those URNs may be found in Section 17.7.

When "my-controller" is used, it is possible that the administrator will be prompted to populate that class for each and every model.
Use of "controller" with a named class allows the user to populate that class only once for many different models that a manufacturer may produce.

Controller URIs MAY take the form of a URL (e.g., "http[s]://").
However, MUD managers MUST NOT resolve and retrieve such files, and it is RECOMMENDED that there be no such file at this time, as their form and function may be defined at a point in the future.
For now, URLs should serve simply as class names and may be populated by the local deployment administrator.

Great care should be taken by MUD managers when invoking the controller class in the form of URLs.
For one thing, it requires some understanding by the administrator as to when it is appropriate.

Pre-registration in such classes by controllers with the MUD server is encouraged.
The mechanism to do that is beyond the scope of this work.
"#;

const MY_CONTROLLER_DOCSTRING: &str = r#"
# 4.7.  my-controller

This null-valued node signals to the MUD manager to use whatever mapping it has for this MUD URL to a particular group of hosts.
This may require prompting the administrator for class members.
Future work should seek to automate membership management.
"#;

const MANUFACTURER_DOCSTRING: &str = r#"
# 4.1.  manufacturer

This node consists of a hostname that would be matched against the authority component of another Thing's MUD URL.
In its simplest form, "manufacturer" and "same-manufacturer" may be implemented as access lists.
In more complex forms, additional network capabilities may be used.
For example, if one saw the line "manufacturer" : "flobbidy.example.com", then all Things that registered with a MUD URL that contained flobbity.example.com in its authority section would match.
"#;

const SAME_MANUFACTURER_DOCSTRING: &str = r#"
# 4.2.  same-manufacturer

This null-valued node is an equivalent for when the manufacturer element is used to indicate that the authority found in another Thing's MUD URL matches that of the authority found in this Thing's MUD URL.
For example, if the Thing's MUD URL were "https://b1.example.com/ThingV1", then all devices that had a MUD URL with an authority section of b1.example.com would match.
"#;

const MANUFACTURER_YANG: &str = r#"
    leaf manufacturer {
      type inet:host;
      description
        "A domain that is intended to match the authority
         section of the MUD URL.  This node is used to specify
         one or more manufacturers a device should
         be authorized to access.";
    }
"#;

const SAME_MANUFACTURER_YANG: &str = r#"
    leaf same-manufacturer {
      type empty;
      description
        "This node matches the authority section of the MUD URL
         of a Thing.  It is intended to grant access to all
         devices with the same authority section.";
    }
"#;

const MODEL_YANG: &str = r#"
    leaf model {
      type inet:uri;
      description
        "Devices of the specified model type will match if
         they have an identical MUD URL.";
    }
"#;

const LOCAL_NETWORKS_YANG: &str = r#"
    leaf local-networks {
      type empty;
      description
        "IP addresses will match this node if they are
         considered local addresses.  A local address may be
         a list of locally defined prefixes and masks
         that indicate a particular administrative scope.";
    }
"#;

const CONTROLLER_YANG: &str = r#"
    leaf controller {
      type inet:uri;
      description
        "This node names a class that has associated with it
         zero or more IP addresses to match against.  These
         may be scoped to a manufacturer or via a standard
         URN.";
    }
"#;

const MY_CONTROLLER_YANG: &str = r#"
    leaf my-controller {
      type empty;
      description
        "This node matches one or more network elements that
         have been configured to be the controller for this
         Thing, based on its MUD URL.";
    }
"#;
