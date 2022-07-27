#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 346
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE = 5,
  sym_ietf_access_control_list_acls = 6,
  anon_sym_DQUOTEacl_DQUOTE = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_DQUOTEtype_DQUOTE = 10,
  anon_sym_DQUOTEaces_DQUOTE = 11,
  anon_sym_DQUOTEace_DQUOTE = 12,
  anon_sym_DQUOTEname_DQUOTE = 13,
  anon_sym_DQUOTEmatches_DQUOTE = 14,
  anon_sym_DQUOTEactions_DQUOTE = 15,
  anon_sym_DQUOTEeth_DQUOTE = 16,
  anon_sym_DQUOTEipv4_DQUOTE = 17,
  anon_sym_DQUOTEipv6_DQUOTE = 18,
  anon_sym_DQUOTEtcp_DQUOTE = 19,
  anon_sym_DQUOTEudp_DQUOTE = 20,
  anon_sym_DQUOTEicmp_DQUOTE = 21,
  anon_sym_DQUOTEcontroller_DQUOTE = 22,
  anon_sym_DQUOTEmy_DASHcontroller_DQUOTE = 23,
  anon_sym_DQUOTEmanufacturer_DQUOTE = 24,
  anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE = 25,
  anon_sym_DQUOTElocal_DASHnetworks_DQUOTE = 26,
  anon_sym_DQUOTEmodel_DQUOTE = 27,
  anon_sym_DQUOTEprotocol_DQUOTE = 28,
  anon_sym_DQUOTEietf_DASHacldns_COLON = 29,
  anon_sym_src_DASHdnsname = 30,
  anon_sym_dst_DASHdnsname = 31,
  anon_sym_DQUOTE = 32,
  anon_sym_DQUOTEsource_DASHport_DQUOTE = 33,
  anon_sym_DQUOTEdestination_DASHport_DQUOTE = 34,
  anon_sym_DQUOTElower_DASHport_DQUOTE = 35,
  anon_sym_DQUOTEupper_DASHport_DQUOTE = 36,
  anon_sym_DQUOTEoperator_DQUOTE = 37,
  anon_sym_DQUOTEport_DQUOTE = 38,
  anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE = 39,
  anon_sym_DQUOTEto_DASHdevice_DQUOTE = 40,
  anon_sym_DQUOTEfrom_DASHdevice_DQUOTE = 41,
  anon_sym_DQUOTEcode_DQUOTE = 42,
  anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE = 43,
  anon_sym_DQUOTEforwarding_DQUOTE = 44,
  anon_sym_DQUOTEaccept_DQUOTE = 45,
  anon_sym_DQUOTEdrop_DQUOTE = 46,
  anon_sym_DQUOTEreject_DQUOTE = 47,
  sym_mud_version_id = 48,
  sym_mud_url_id = 49,
  sym_last_update_id = 50,
  sym_cache_validity_id = 51,
  sym_is_supported_id = 52,
  sym_systeminfo_id = 53,
  sym_from_device_policy_id = 54,
  sym_to_device_policy_id = 55,
  sym_mud_signature_id = 56,
  sym_mfg_name_id = 57,
  sym_model_name_id = 58,
  sym_firmware_rev_id = 59,
  sym_software_rev_id = 60,
  sym_documentation_id = 61,
  sym_extensions_id = 62,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 63,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 64,
  aux_sym_string_quoted_content_token1 = 65,
  sym__escape_sequence = 66,
  sym_number = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  anon_sym_null = 70,
  sym_source = 71,
  sym_ietf_mud = 72,
  sym_ietf_acls = 73,
  sym_ietf_mud_mud = 74,
  sym_acl = 75,
  sym_acl_object = 76,
  sym_ace = 77,
  sym_ace_object = 78,
  sym_matches = 79,
  sym_actions = 80,
  sym_acl_name_def = 81,
  sym_policy_acl_name = 82,
  sym_matches_object = 83,
  sym_mud_matches_augment = 84,
  sym_eth_matches = 85,
  sym_ipv4_matches = 86,
  sym_ipv6_matches = 87,
  sym_tcp_matches = 88,
  sym_udp_matches = 89,
  sym_icmp_matches = 90,
  sym_controller = 91,
  sym_my_controller = 92,
  sym_manufacturer = 93,
  sym_same_manufacturer = 94,
  sym_local_networks = 95,
  sym_model = 96,
  sym_ip_header_proto = 97,
  sym_ietf_acldns = 98,
  sym_source_port = 99,
  sym_destination_port = 100,
  sym_range_or_operator = 101,
  sym_port_range = 102,
  sym_port_operator = 103,
  sym_direction_initiated = 104,
  sym_type = 105,
  sym_code = 106,
  sym_rest_of_header = 107,
  sym_uint8 = 108,
  sym_binary = 109,
  sym_forwarding_action = 110,
  sym_action = 111,
  sym_mud_version = 112,
  sym_mud_url = 113,
  sym_last_update = 114,
  sym_cache_validity = 115,
  sym_is_supported = 116,
  sym_systeminfo = 117,
  sym_from_device_policy = 118,
  sym_to_device_policy = 119,
  sym_mud_signature = 120,
  sym_mfg_name = 121,
  sym_model_name = 122,
  sym_firmware_rev = 123,
  sym_software_rev = 124,
  sym_documentation = 125,
  sym_extensions = 126,
  sym_policy = 127,
  sym_access_list = 128,
  sym_string = 129,
  sym_string_quoted_content = 130,
  sym_bool = 131,
  sym_null_valued = 132,
  sym_json_value_fallback = 133,
  sym_json_object_fallback = 134,
  sym_json_array_fallback = 135,
  sym_json_pair_fallback = 136,
  aux_sym_source_repeat1 = 137,
  aux_sym_ietf_mud_repeat1 = 138,
  aux_sym_acl_repeat1 = 139,
  aux_sym_ace_repeat1 = 140,
  aux_sym_matches_object_repeat1 = 141,
  aux_sym_mud_matches_augment_repeat1 = 142,
  aux_sym_eth_matches_repeat1 = 143,
  aux_sym_ipv4_matches_repeat1 = 144,
  aux_sym_tcp_matches_repeat1 = 145,
  aux_sym_icmp_matches_repeat1 = 146,
  aux_sym_port_range_repeat1 = 147,
  aux_sym_port_operator_repeat1 = 148,
  aux_sym_access_list_repeat1 = 149,
  aux_sym_string_quoted_content_repeat1 = 150,
  aux_sym_json_array_fallback_repeat1 = 151,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = "\"ietf-mud:mud\"",
  [sym_ietf_access_control_list_acls] = "ietf_access_control_list_acls",
  [anon_sym_DQUOTEacl_DQUOTE] = "\"acl\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTEtype_DQUOTE] = "\"type\"",
  [anon_sym_DQUOTEaces_DQUOTE] = "\"aces\"",
  [anon_sym_DQUOTEace_DQUOTE] = "\"ace\"",
  [anon_sym_DQUOTEname_DQUOTE] = "\"name\"",
  [anon_sym_DQUOTEmatches_DQUOTE] = "\"matches\"",
  [anon_sym_DQUOTEactions_DQUOTE] = "\"actions\"",
  [anon_sym_DQUOTEeth_DQUOTE] = "\"eth\"",
  [anon_sym_DQUOTEipv4_DQUOTE] = "\"ipv4\"",
  [anon_sym_DQUOTEipv6_DQUOTE] = "\"ipv6\"",
  [anon_sym_DQUOTEtcp_DQUOTE] = "\"tcp\"",
  [anon_sym_DQUOTEudp_DQUOTE] = "\"udp\"",
  [anon_sym_DQUOTEicmp_DQUOTE] = "\"icmp\"",
  [anon_sym_DQUOTEcontroller_DQUOTE] = "\"controller\"",
  [anon_sym_DQUOTEmy_DASHcontroller_DQUOTE] = "\"my-controller\"",
  [anon_sym_DQUOTEmanufacturer_DQUOTE] = "\"manufacturer\"",
  [anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE] = "\"same-manufacturer\"",
  [anon_sym_DQUOTElocal_DASHnetworks_DQUOTE] = "\"local-networks\"",
  [anon_sym_DQUOTEmodel_DQUOTE] = "\"model\"",
  [anon_sym_DQUOTEprotocol_DQUOTE] = "\"protocol\"",
  [anon_sym_DQUOTEietf_DASHacldns_COLON] = "\"ietf-acldns:",
  [anon_sym_src_DASHdnsname] = "src-dnsname",
  [anon_sym_dst_DASHdnsname] = "dst-dnsname",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTEsource_DASHport_DQUOTE] = "\"source-port\"",
  [anon_sym_DQUOTEdestination_DASHport_DQUOTE] = "\"destination-port\"",
  [anon_sym_DQUOTElower_DASHport_DQUOTE] = "\"lower-port\"",
  [anon_sym_DQUOTEupper_DASHport_DQUOTE] = "\"upper-port\"",
  [anon_sym_DQUOTEoperator_DQUOTE] = "\"operator\"",
  [anon_sym_DQUOTEport_DQUOTE] = "\"port\"",
  [anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE] = "\"ietf-mud:direction-initiated\"",
  [anon_sym_DQUOTEto_DASHdevice_DQUOTE] = "\"to-device\"",
  [anon_sym_DQUOTEfrom_DASHdevice_DQUOTE] = "\"from-device\"",
  [anon_sym_DQUOTEcode_DQUOTE] = "\"code\"",
  [anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE] = "\"rest-of-header\"",
  [anon_sym_DQUOTEforwarding_DQUOTE] = "\"forwarding\"",
  [anon_sym_DQUOTEaccept_DQUOTE] = "\"accept\"",
  [anon_sym_DQUOTEdrop_DQUOTE] = "\"drop\"",
  [anon_sym_DQUOTEreject_DQUOTE] = "\"reject\"",
  [sym_mud_version_id] = "mud_version_id",
  [sym_mud_url_id] = "mud_url_id",
  [sym_last_update_id] = "last_update_id",
  [sym_cache_validity_id] = "cache_validity_id",
  [sym_is_supported_id] = "is_supported_id",
  [sym_systeminfo_id] = "systeminfo_id",
  [sym_from_device_policy_id] = "from_device_policy_id",
  [sym_to_device_policy_id] = "to_device_policy_id",
  [sym_mud_signature_id] = "mud_signature_id",
  [sym_mfg_name_id] = "mfg_name_id",
  [sym_model_name_id] = "model_name_id",
  [sym_firmware_rev_id] = "firmware_rev_id",
  [sym_software_rev_id] = "software_rev_id",
  [sym_documentation_id] = "documentation_id",
  [sym_extensions_id] = "extensions_id",
  [anon_sym_DQUOTEaccess_DASHlists_DQUOTE] = "\"access-lists\"",
  [anon_sym_DQUOTEaccess_DASHlist_DQUOTE] = "\"access-list\"",
  [aux_sym_string_quoted_content_token1] = "string_quoted_content_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [sym_source] = "source",
  [sym_ietf_mud] = "ietf_mud",
  [sym_ietf_acls] = "ietf_acls",
  [sym_ietf_mud_mud] = "ietf_mud_mud",
  [sym_acl] = "acl",
  [sym_acl_object] = "acl_object",
  [sym_ace] = "ace",
  [sym_ace_object] = "ace_object",
  [sym_matches] = "matches",
  [sym_actions] = "actions",
  [sym_acl_name_def] = "acl_name_def",
  [sym_policy_acl_name] = "policy_acl_name",
  [sym_matches_object] = "matches_object",
  [sym_mud_matches_augment] = "mud_matches_augment",
  [sym_eth_matches] = "eth_matches",
  [sym_ipv4_matches] = "ipv4_matches",
  [sym_ipv6_matches] = "ipv6_matches",
  [sym_tcp_matches] = "tcp_matches",
  [sym_udp_matches] = "udp_matches",
  [sym_icmp_matches] = "icmp_matches",
  [sym_controller] = "controller",
  [sym_my_controller] = "my_controller",
  [sym_manufacturer] = "manufacturer",
  [sym_same_manufacturer] = "same_manufacturer",
  [sym_local_networks] = "local_networks",
  [sym_model] = "model",
  [sym_ip_header_proto] = "ip_header_proto",
  [sym_ietf_acldns] = "ietf_acldns",
  [sym_source_port] = "source_port",
  [sym_destination_port] = "destination_port",
  [sym_range_or_operator] = "range_or_operator",
  [sym_port_range] = "port_range",
  [sym_port_operator] = "port_operator",
  [sym_direction_initiated] = "direction_initiated",
  [sym_type] = "type",
  [sym_code] = "code",
  [sym_rest_of_header] = "rest_of_header",
  [sym_uint8] = "uint8",
  [sym_binary] = "binary",
  [sym_forwarding_action] = "forwarding_action",
  [sym_action] = "action",
  [sym_mud_version] = "mud_version",
  [sym_mud_url] = "mud_url",
  [sym_last_update] = "last_update",
  [sym_cache_validity] = "cache_validity",
  [sym_is_supported] = "is_supported",
  [sym_systeminfo] = "systeminfo",
  [sym_from_device_policy] = "from_device_policy",
  [sym_to_device_policy] = "to_device_policy",
  [sym_mud_signature] = "mud_signature",
  [sym_mfg_name] = "mfg_name",
  [sym_model_name] = "model_name",
  [sym_firmware_rev] = "firmware_rev",
  [sym_software_rev] = "software_rev",
  [sym_documentation] = "documentation",
  [sym_extensions] = "extensions",
  [sym_policy] = "policy",
  [sym_access_list] = "access_list",
  [sym_string] = "string",
  [sym_string_quoted_content] = "string_quoted_content",
  [sym_bool] = "bool",
  [sym_null_valued] = "null_valued",
  [sym_json_value_fallback] = "json_value_fallback",
  [sym_json_object_fallback] = "json_object_fallback",
  [sym_json_array_fallback] = "json_array_fallback",
  [sym_json_pair_fallback] = "json_pair_fallback",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_ietf_mud_repeat1] = "ietf_mud_repeat1",
  [aux_sym_acl_repeat1] = "acl_repeat1",
  [aux_sym_ace_repeat1] = "ace_repeat1",
  [aux_sym_matches_object_repeat1] = "matches_object_repeat1",
  [aux_sym_mud_matches_augment_repeat1] = "mud_matches_augment_repeat1",
  [aux_sym_eth_matches_repeat1] = "eth_matches_repeat1",
  [aux_sym_ipv4_matches_repeat1] = "ipv4_matches_repeat1",
  [aux_sym_tcp_matches_repeat1] = "tcp_matches_repeat1",
  [aux_sym_icmp_matches_repeat1] = "icmp_matches_repeat1",
  [aux_sym_port_range_repeat1] = "port_range_repeat1",
  [aux_sym_port_operator_repeat1] = "port_operator_repeat1",
  [aux_sym_access_list_repeat1] = "access_list_repeat1",
  [aux_sym_string_quoted_content_repeat1] = "string_quoted_content_repeat1",
  [aux_sym_json_array_fallback_repeat1] = "json_array_fallback_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
  [sym_ietf_access_control_list_acls] = sym_ietf_access_control_list_acls,
  [anon_sym_DQUOTEacl_DQUOTE] = anon_sym_DQUOTEacl_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTEtype_DQUOTE] = anon_sym_DQUOTEtype_DQUOTE,
  [anon_sym_DQUOTEaces_DQUOTE] = anon_sym_DQUOTEaces_DQUOTE,
  [anon_sym_DQUOTEace_DQUOTE] = anon_sym_DQUOTEace_DQUOTE,
  [anon_sym_DQUOTEname_DQUOTE] = anon_sym_DQUOTEname_DQUOTE,
  [anon_sym_DQUOTEmatches_DQUOTE] = anon_sym_DQUOTEmatches_DQUOTE,
  [anon_sym_DQUOTEactions_DQUOTE] = anon_sym_DQUOTEactions_DQUOTE,
  [anon_sym_DQUOTEeth_DQUOTE] = anon_sym_DQUOTEeth_DQUOTE,
  [anon_sym_DQUOTEipv4_DQUOTE] = anon_sym_DQUOTEipv4_DQUOTE,
  [anon_sym_DQUOTEipv6_DQUOTE] = anon_sym_DQUOTEipv6_DQUOTE,
  [anon_sym_DQUOTEtcp_DQUOTE] = anon_sym_DQUOTEtcp_DQUOTE,
  [anon_sym_DQUOTEudp_DQUOTE] = anon_sym_DQUOTEudp_DQUOTE,
  [anon_sym_DQUOTEicmp_DQUOTE] = anon_sym_DQUOTEicmp_DQUOTE,
  [anon_sym_DQUOTEcontroller_DQUOTE] = anon_sym_DQUOTEcontroller_DQUOTE,
  [anon_sym_DQUOTEmy_DASHcontroller_DQUOTE] = anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
  [anon_sym_DQUOTEmanufacturer_DQUOTE] = anon_sym_DQUOTEmanufacturer_DQUOTE,
  [anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE] = anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
  [anon_sym_DQUOTElocal_DASHnetworks_DQUOTE] = anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
  [anon_sym_DQUOTEmodel_DQUOTE] = anon_sym_DQUOTEmodel_DQUOTE,
  [anon_sym_DQUOTEprotocol_DQUOTE] = anon_sym_DQUOTEprotocol_DQUOTE,
  [anon_sym_DQUOTEietf_DASHacldns_COLON] = anon_sym_DQUOTEietf_DASHacldns_COLON,
  [anon_sym_src_DASHdnsname] = anon_sym_src_DASHdnsname,
  [anon_sym_dst_DASHdnsname] = anon_sym_dst_DASHdnsname,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTEsource_DASHport_DQUOTE] = anon_sym_DQUOTEsource_DASHport_DQUOTE,
  [anon_sym_DQUOTEdestination_DASHport_DQUOTE] = anon_sym_DQUOTEdestination_DASHport_DQUOTE,
  [anon_sym_DQUOTElower_DASHport_DQUOTE] = anon_sym_DQUOTElower_DASHport_DQUOTE,
  [anon_sym_DQUOTEupper_DASHport_DQUOTE] = anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [anon_sym_DQUOTEoperator_DQUOTE] = anon_sym_DQUOTEoperator_DQUOTE,
  [anon_sym_DQUOTEport_DQUOTE] = anon_sym_DQUOTEport_DQUOTE,
  [anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE] = anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
  [anon_sym_DQUOTEto_DASHdevice_DQUOTE] = anon_sym_DQUOTEto_DASHdevice_DQUOTE,
  [anon_sym_DQUOTEfrom_DASHdevice_DQUOTE] = anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [anon_sym_DQUOTEcode_DQUOTE] = anon_sym_DQUOTEcode_DQUOTE,
  [anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE] = anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
  [anon_sym_DQUOTEforwarding_DQUOTE] = anon_sym_DQUOTEforwarding_DQUOTE,
  [anon_sym_DQUOTEaccept_DQUOTE] = anon_sym_DQUOTEaccept_DQUOTE,
  [anon_sym_DQUOTEdrop_DQUOTE] = anon_sym_DQUOTEdrop_DQUOTE,
  [anon_sym_DQUOTEreject_DQUOTE] = anon_sym_DQUOTEreject_DQUOTE,
  [sym_mud_version_id] = sym_mud_version_id,
  [sym_mud_url_id] = sym_mud_url_id,
  [sym_last_update_id] = sym_last_update_id,
  [sym_cache_validity_id] = sym_cache_validity_id,
  [sym_is_supported_id] = sym_is_supported_id,
  [sym_systeminfo_id] = sym_systeminfo_id,
  [sym_from_device_policy_id] = sym_from_device_policy_id,
  [sym_to_device_policy_id] = sym_to_device_policy_id,
  [sym_mud_signature_id] = sym_mud_signature_id,
  [sym_mfg_name_id] = sym_mfg_name_id,
  [sym_model_name_id] = sym_model_name_id,
  [sym_firmware_rev_id] = sym_firmware_rev_id,
  [sym_software_rev_id] = sym_software_rev_id,
  [sym_documentation_id] = sym_documentation_id,
  [sym_extensions_id] = sym_extensions_id,
  [anon_sym_DQUOTEaccess_DASHlists_DQUOTE] = anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [anon_sym_DQUOTEaccess_DASHlist_DQUOTE] = anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [aux_sym_string_quoted_content_token1] = aux_sym_string_quoted_content_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [sym_source] = sym_source,
  [sym_ietf_mud] = sym_ietf_mud,
  [sym_ietf_acls] = sym_ietf_acls,
  [sym_ietf_mud_mud] = sym_ietf_mud_mud,
  [sym_acl] = sym_acl,
  [sym_acl_object] = sym_acl_object,
  [sym_ace] = sym_ace,
  [sym_ace_object] = sym_ace_object,
  [sym_matches] = sym_matches,
  [sym_actions] = sym_actions,
  [sym_acl_name_def] = sym_acl_name_def,
  [sym_policy_acl_name] = sym_policy_acl_name,
  [sym_matches_object] = sym_matches_object,
  [sym_mud_matches_augment] = sym_mud_matches_augment,
  [sym_eth_matches] = sym_eth_matches,
  [sym_ipv4_matches] = sym_ipv4_matches,
  [sym_ipv6_matches] = sym_ipv6_matches,
  [sym_tcp_matches] = sym_tcp_matches,
  [sym_udp_matches] = sym_udp_matches,
  [sym_icmp_matches] = sym_icmp_matches,
  [sym_controller] = sym_controller,
  [sym_my_controller] = sym_my_controller,
  [sym_manufacturer] = sym_manufacturer,
  [sym_same_manufacturer] = sym_same_manufacturer,
  [sym_local_networks] = sym_local_networks,
  [sym_model] = sym_model,
  [sym_ip_header_proto] = sym_ip_header_proto,
  [sym_ietf_acldns] = sym_ietf_acldns,
  [sym_source_port] = sym_source_port,
  [sym_destination_port] = sym_destination_port,
  [sym_range_or_operator] = sym_range_or_operator,
  [sym_port_range] = sym_port_range,
  [sym_port_operator] = sym_port_operator,
  [sym_direction_initiated] = sym_direction_initiated,
  [sym_type] = sym_type,
  [sym_code] = sym_code,
  [sym_rest_of_header] = sym_rest_of_header,
  [sym_uint8] = sym_uint8,
  [sym_binary] = sym_binary,
  [sym_forwarding_action] = sym_forwarding_action,
  [sym_action] = sym_action,
  [sym_mud_version] = sym_mud_version,
  [sym_mud_url] = sym_mud_url,
  [sym_last_update] = sym_last_update,
  [sym_cache_validity] = sym_cache_validity,
  [sym_is_supported] = sym_is_supported,
  [sym_systeminfo] = sym_systeminfo,
  [sym_from_device_policy] = sym_from_device_policy,
  [sym_to_device_policy] = sym_to_device_policy,
  [sym_mud_signature] = sym_mud_signature,
  [sym_mfg_name] = sym_mfg_name,
  [sym_model_name] = sym_model_name,
  [sym_firmware_rev] = sym_firmware_rev,
  [sym_software_rev] = sym_software_rev,
  [sym_documentation] = sym_documentation,
  [sym_extensions] = sym_extensions,
  [sym_policy] = sym_policy,
  [sym_access_list] = sym_access_list,
  [sym_string] = sym_string,
  [sym_string_quoted_content] = sym_string_quoted_content,
  [sym_bool] = sym_bool,
  [sym_null_valued] = sym_null_valued,
  [sym_json_value_fallback] = sym_json_value_fallback,
  [sym_json_object_fallback] = sym_json_object_fallback,
  [sym_json_array_fallback] = sym_json_array_fallback,
  [sym_json_pair_fallback] = sym_json_pair_fallback,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_ietf_mud_repeat1] = aux_sym_ietf_mud_repeat1,
  [aux_sym_acl_repeat1] = aux_sym_acl_repeat1,
  [aux_sym_ace_repeat1] = aux_sym_ace_repeat1,
  [aux_sym_matches_object_repeat1] = aux_sym_matches_object_repeat1,
  [aux_sym_mud_matches_augment_repeat1] = aux_sym_mud_matches_augment_repeat1,
  [aux_sym_eth_matches_repeat1] = aux_sym_eth_matches_repeat1,
  [aux_sym_ipv4_matches_repeat1] = aux_sym_ipv4_matches_repeat1,
  [aux_sym_tcp_matches_repeat1] = aux_sym_tcp_matches_repeat1,
  [aux_sym_icmp_matches_repeat1] = aux_sym_icmp_matches_repeat1,
  [aux_sym_port_range_repeat1] = aux_sym_port_range_repeat1,
  [aux_sym_port_operator_repeat1] = aux_sym_port_operator_repeat1,
  [aux_sym_access_list_repeat1] = aux_sym_access_list_repeat1,
  [aux_sym_string_quoted_content_repeat1] = aux_sym_string_quoted_content_repeat1,
  [aux_sym_json_array_fallback_repeat1] = aux_sym_json_array_fallback_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_ietf_access_control_list_acls] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEacl_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEtype_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEaces_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEace_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEname_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEmatches_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEactions_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEeth_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEipv4_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEipv6_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEtcp_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEudp_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEicmp_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEcontroller_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEmy_DASHcontroller_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEmanufacturer_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTElocal_DASHnetworks_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEmodel_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEprotocol_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEietf_DASHacldns_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_src_DASHdnsname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dst_DASHdnsname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEsource_DASHport_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEdestination_DASHport_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTElower_DASHport_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEupper_DASHport_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEoperator_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEport_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEto_DASHdevice_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEfrom_DASHdevice_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEcode_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEforwarding_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEaccept_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEdrop_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEreject_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_mud_version_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_url_id] = {
    .visible = true,
    .named = true,
  },
  [sym_last_update_id] = {
    .visible = true,
    .named = true,
  },
  [sym_cache_validity_id] = {
    .visible = true,
    .named = true,
  },
  [sym_is_supported_id] = {
    .visible = true,
    .named = true,
  },
  [sym_systeminfo_id] = {
    .visible = true,
    .named = true,
  },
  [sym_from_device_policy_id] = {
    .visible = true,
    .named = true,
  },
  [sym_to_device_policy_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_signature_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mfg_name_id] = {
    .visible = true,
    .named = true,
  },
  [sym_model_name_id] = {
    .visible = true,
    .named = true,
  },
  [sym_firmware_rev_id] = {
    .visible = true,
    .named = true,
  },
  [sym_software_rev_id] = {
    .visible = true,
    .named = true,
  },
  [sym_documentation_id] = {
    .visible = true,
    .named = true,
  },
  [sym_extensions_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEaccess_DASHlists_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEaccess_DASHlist_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_quoted_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_ietf_mud] = {
    .visible = true,
    .named = true,
  },
  [sym_ietf_acls] = {
    .visible = true,
    .named = true,
  },
  [sym_ietf_mud_mud] = {
    .visible = true,
    .named = true,
  },
  [sym_acl] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_object] = {
    .visible = true,
    .named = true,
  },
  [sym_ace] = {
    .visible = true,
    .named = true,
  },
  [sym_ace_object] = {
    .visible = true,
    .named = true,
  },
  [sym_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_actions] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_name_def] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_acl_name] = {
    .visible = true,
    .named = true,
  },
  [sym_matches_object] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_matches_augment] = {
    .visible = true,
    .named = true,
  },
  [sym_eth_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_tcp_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_udp_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_icmp_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_controller] = {
    .visible = true,
    .named = true,
  },
  [sym_my_controller] = {
    .visible = true,
    .named = true,
  },
  [sym_manufacturer] = {
    .visible = true,
    .named = true,
  },
  [sym_same_manufacturer] = {
    .visible = true,
    .named = true,
  },
  [sym_local_networks] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_header_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_ietf_acldns] = {
    .visible = true,
    .named = true,
  },
  [sym_source_port] = {
    .visible = true,
    .named = true,
  },
  [sym_destination_port] = {
    .visible = true,
    .named = true,
  },
  [sym_range_or_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_port_range] = {
    .visible = true,
    .named = true,
  },
  [sym_port_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_initiated] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_header] = {
    .visible = true,
    .named = true,
  },
  [sym_uint8] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_forwarding_action] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_version] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_url] = {
    .visible = true,
    .named = true,
  },
  [sym_last_update] = {
    .visible = true,
    .named = true,
  },
  [sym_cache_validity] = {
    .visible = true,
    .named = true,
  },
  [sym_is_supported] = {
    .visible = true,
    .named = true,
  },
  [sym_systeminfo] = {
    .visible = true,
    .named = true,
  },
  [sym_from_device_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_to_device_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_mfg_name] = {
    .visible = true,
    .named = true,
  },
  [sym_model_name] = {
    .visible = true,
    .named = true,
  },
  [sym_firmware_rev] = {
    .visible = true,
    .named = true,
  },
  [sym_software_rev] = {
    .visible = true,
    .named = true,
  },
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [sym_extensions] = {
    .visible = true,
    .named = true,
  },
  [sym_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_access_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_quoted_content] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_null_valued] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value_fallback] = {
    .visible = true,
    .named = true,
  },
  [sym_json_object_fallback] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array_fallback] = {
    .visible = true,
    .named = true,
  },
  [sym_json_pair_fallback] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ietf_mud_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_acl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matches_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mud_matches_augment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eth_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ipv4_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tcp_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_icmp_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_port_range_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_port_operator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_access_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_quoted_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_fallback_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_authority = 1,
  field_extensions = 2,
  field_hours = 3,
  field_ietf_mud_toplevel_id = 4,
  field_info = 5,
  field_mud_id = 6,
  field_name = 7,
  field_policy = 8,
  field_rev = 9,
  field_supported = 10,
  field_timestamp = 11,
  field_uri = 12,
  field_url = 13,
  field_version = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_authority] = "authority",
  [field_extensions] = "extensions",
  [field_hours] = "hours",
  [field_ietf_mud_toplevel_id] = "ietf_mud_toplevel_id",
  [field_info] = "info",
  [field_mud_id] = "mud_id",
  [field_name] = "name",
  [field_policy] = "policy",
  [field_rev] = "rev",
  [field_supported] = "supported",
  [field_timestamp] = "timestamp",
  [field_uri] = "uri",
  [field_url] = "url",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ietf_mud_toplevel_id, 0},
  [1] =
    {field_mud_id, 0},
    {field_version, 2},
  [3] =
    {field_mud_id, 0},
    {field_url, 2},
  [5] =
    {field_mud_id, 0},
    {field_timestamp, 2},
  [7] =
    {field_hours, 2},
    {field_mud_id, 0},
  [9] =
    {field_mud_id, 0},
    {field_supported, 2},
  [11] =
    {field_info, 2},
    {field_mud_id, 0},
  [13] =
    {field_mud_id, 0},
    {field_policy, 2},
  [15] =
    {field_mud_id, 0},
    {field_uri, 2},
  [17] =
    {field_mud_id, 0},
    {field_name, 2},
  [19] =
    {field_mud_id, 0},
    {field_rev, 2},
  [21] =
    {field_extensions, 2},
    {field_mud_id, 0},
  [23] =
    {field_name, 2},
  [24] =
    {field_uri, 2},
  [25] =
    {field_authority, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(563);
      if (lookahead == '"') ADVANCE(596);
      if (lookahead == ',') ADVANCE(565);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == '[') ADVANCE(571);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == ']') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '{') ADVANCE(564);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(562)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '"') ADVANCE(595);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead != 0) ADVANCE(638);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(579);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(582);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(583);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(614);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(584);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(580);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(581);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(573);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(590);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(590);
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(621);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(629);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(591);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(585);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(634);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(616);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(630);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(625);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(622);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(620);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(605);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(631);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(568);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(624);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(587);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(632);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(633);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(628);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(586);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(623);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(589);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(615);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(606);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(627);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(588);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(626);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(611);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(569);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(597);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(601);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(599);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(595);
      if (lookahead == '[') ADVANCE(571);
      if (lookahead == ']') ADVANCE(572);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '{') ADVANCE(564);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(600);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(570);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(574);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(618);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(576);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(610);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(617);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(619);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(578);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(577);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(609);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(612);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(607);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(608);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(636);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(613);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(635);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(467);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(352);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(332);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(438);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(448);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(335);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(421);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 102:
      if (lookahead == '4') ADVANCE(7);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(592);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(327);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(543);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(539);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(499);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(526);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 257:
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 258:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 260:
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 261:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 262:
      if (lookahead == 'f') ADVANCE(384);
      END_STATE();
    case 263:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 264:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 265:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 266:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 268:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 269:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 270:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(357);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 302:
      if (lookahead == 'j') ADVANCE(237);
      END_STATE();
    case 303:
      if (lookahead == 'k') ADVANCE(474);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(536);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 406:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 407:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(377);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(423);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(509);
      if (lookahead == 's') ADVANCE(482);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(396);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(494);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(454);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(447);
      END_STATE();
    case 541:
      if (lookahead == 'u') ADVANCE(453);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 543:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 544:
      if (lookahead == 'v') ADVANCE(296);
      END_STATE();
    case 545:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 546:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 547:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 548:
      if (lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 549:
      if (lookahead == 'v') ADVANCE(300);
      END_STATE();
    case 550:
      if (lookahead == 'v') ADVANCE(301);
      END_STATE();
    case 551:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 552:
      if (lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 553:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 554:
      if (lookahead == 'w') ADVANCE(383);
      END_STATE();
    case 555:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 556:
      if (lookahead == 'x') ADVANCE(494);
      END_STATE();
    case 557:
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 558:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 559:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 560:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 561:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 562:
      if (eof) ADVANCE(563);
      if (lookahead == '"') ADVANCE(596);
      if (lookahead == ',') ADVANCE(565);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == '[') ADVANCE(571);
      if (lookahead == ']') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '{') ADVANCE(564);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(562)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ietf_access_control_list_acls);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_DQUOTEeth_DQUOTE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv4_DQUOTE);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv6_DQUOTE);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_DQUOTEtcp_DQUOTE);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_DQUOTEudp_DQUOTE);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_DQUOTEicmp_DQUOTE);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DQUOTEcontroller_DQUOTE);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DQUOTEmy_DASHcontroller_DQUOTE);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DQUOTEmanufacturer_DQUOTE);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_DQUOTElocal_DASHnetworks_DQUOTE);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_DQUOTEmodel_DQUOTE);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_DQUOTEprotocol_DQUOTE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHacldns_COLON);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_src_DASHdnsname);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_dst_DASHdnsname);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DQUOTEsource_DASHport_DQUOTE);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_DQUOTEdestination_DASHport_DQUOTE);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_DQUOTElower_DASHport_DQUOTE);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DQUOTEupper_DASHport_DQUOTE);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DQUOTEoperator_DQUOTE);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DQUOTEport_DQUOTE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DQUOTE);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DQUOTE);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DQUOTEcode_DQUOTE);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_mud_version_id);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_mud_url_id);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_last_update_id);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_cache_validity_id);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_is_supported_id);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_systeminfo_id);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_from_device_policy_id);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_to_device_policy_id);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_mud_signature_id);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_mfg_name_id);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_model_name_id);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_firmware_rev_id);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_software_rev_id);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_documentation_id);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_extensions_id);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(638);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 50},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 43},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 43},
  [118] = {.lex_state = 50},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 50},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 43},
  [130] = {.lex_state = 43},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 50},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 43},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 50},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 43},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 50},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 43},
  [198] = {.lex_state = 43},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 43},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 43},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 43},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 43},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 50},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 43},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 50},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 50},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 50},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 50},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 50},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 50},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 43},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 50},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = ACTIONS(1),
    [sym_ietf_access_control_list_acls] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTEtype_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEeth_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEipv4_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEipv6_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEtcp_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEudp_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEicmp_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEcontroller_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmy_DASHcontroller_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmanufacturer_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTElocal_DASHnetworks_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmodel_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEprotocol_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEietf_DASHacldns_COLON] = ACTIONS(1),
    [anon_sym_src_DASHdnsname] = ACTIONS(1),
    [anon_sym_dst_DASHdnsname] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEsource_DASHport_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEdestination_DASHport_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEcode_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEforwarding_DQUOTE] = ACTIONS(1),
    [sym_mud_version_id] = ACTIONS(1),
    [sym_mud_url_id] = ACTIONS(1),
    [sym_last_update_id] = ACTIONS(1),
    [sym_cache_validity_id] = ACTIONS(1),
    [sym_is_supported_id] = ACTIONS(1),
    [sym_systeminfo_id] = ACTIONS(1),
    [sym_from_device_policy_id] = ACTIONS(1),
    [sym_to_device_policy_id] = ACTIONS(1),
    [sym_mud_signature_id] = ACTIONS(1),
    [sym_mfg_name_id] = ACTIONS(1),
    [sym_model_name_id] = ACTIONS(1),
    [sym_firmware_rev_id] = ACTIONS(1),
    [sym_software_rev_id] = ACTIONS(1),
    [sym_documentation_id] = ACTIONS(1),
    [sym_extensions_id] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(220),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym_mud_version_id,
    ACTIONS(11), 1,
      sym_mud_url_id,
    ACTIONS(13), 1,
      sym_last_update_id,
    ACTIONS(15), 1,
      sym_cache_validity_id,
    ACTIONS(17), 1,
      sym_is_supported_id,
    ACTIONS(19), 1,
      sym_systeminfo_id,
    ACTIONS(21), 1,
      sym_from_device_policy_id,
    ACTIONS(23), 1,
      sym_to_device_policy_id,
    ACTIONS(25), 1,
      sym_mud_signature_id,
    ACTIONS(27), 1,
      sym_mfg_name_id,
    ACTIONS(29), 1,
      sym_model_name_id,
    ACTIONS(31), 1,
      sym_firmware_rev_id,
    ACTIONS(33), 1,
      sym_software_rev_id,
    ACTIONS(35), 1,
      sym_documentation_id,
    ACTIONS(37), 1,
      sym_extensions_id,
    ACTIONS(39), 1,
      sym_number,
    STATE(330), 1,
      sym_string,
    STATE(52), 16,
      sym_mud_version,
      sym_mud_url,
      sym_last_update,
      sym_cache_validity,
      sym_is_supported,
      sym_systeminfo,
      sym_from_device_policy,
      sym_to_device_policy,
      sym_mud_signature,
      sym_mfg_name,
      sym_model_name,
      sym_firmware_rev,
      sym_software_rev,
      sym_documentation,
      sym_extensions,
      sym_json_pair_fallback,
  [76] = 19,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym_mud_version_id,
    ACTIONS(11), 1,
      sym_mud_url_id,
    ACTIONS(13), 1,
      sym_last_update_id,
    ACTIONS(15), 1,
      sym_cache_validity_id,
    ACTIONS(17), 1,
      sym_is_supported_id,
    ACTIONS(19), 1,
      sym_systeminfo_id,
    ACTIONS(21), 1,
      sym_from_device_policy_id,
    ACTIONS(23), 1,
      sym_to_device_policy_id,
    ACTIONS(25), 1,
      sym_mud_signature_id,
    ACTIONS(27), 1,
      sym_mfg_name_id,
    ACTIONS(29), 1,
      sym_model_name_id,
    ACTIONS(31), 1,
      sym_firmware_rev_id,
    ACTIONS(33), 1,
      sym_software_rev_id,
    ACTIONS(35), 1,
      sym_documentation_id,
    ACTIONS(37), 1,
      sym_extensions_id,
    ACTIONS(39), 1,
      sym_number,
    STATE(330), 1,
      sym_string,
    STATE(106), 16,
      sym_mud_version,
      sym_mud_url,
      sym_last_update,
      sym_cache_validity,
      sym_is_supported,
      sym_systeminfo,
      sym_from_device_policy,
      sym_to_device_policy,
      sym_mud_signature,
      sym_mfg_name,
      sym_model_name,
      sym_firmware_rev,
      sym_software_rev,
      sym_documentation,
      sym_extensions,
      sym_json_pair_fallback,
  [149] = 12,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTEeth_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTEipv4_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTEipv6_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTEtcp_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTEudp_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEicmp_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(73), 8,
      sym_mud_matches_augment,
      sym_eth_matches,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [193] = 11,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTEeth_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTEipv4_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTEipv6_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTEtcp_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTEudp_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEicmp_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(209), 8,
      sym_mud_matches_augment,
      sym_eth_matches,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [234] = 11,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_DQUOTEcontroller_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTEmanufacturer_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTEmodel_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(60), 7,
      sym_controller,
      sym_my_controller,
      sym_manufacturer,
      sym_same_manufacturer,
      sym_local_networks,
      sym_model,
      sym_json_pair_fallback,
  [274] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(59), 1,
      anon_sym_DQUOTEcontroller_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTEmanufacturer_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTEmodel_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(170), 7,
      sym_controller,
      sym_my_controller,
      sym_manufacturer,
      sym_same_manufacturer,
      sym_local_networks,
      sym_model,
      sym_json_pair_fallback,
  [311] = 7,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_json_value_fallback,
    STATE(69), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [338] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(49), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [366] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_string,
    STATE(48), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [394] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(47), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [422] = 6,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_json_value_fallback,
    STATE(69), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [446] = 6,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_json_value_fallback,
    STATE(69), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [470] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(103), 1,
      sym_ietf_access_control_list_acls,
    STATE(327), 1,
      sym_ietf_mud_mud,
    STATE(330), 1,
      sym_string,
    STATE(68), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [497] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(93), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(133), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [522] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(330), 1,
      sym_string,
    STATE(145), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [547] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(330), 1,
      sym_string,
    STATE(50), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [571] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(103), 1,
      sym_ietf_access_control_list_acls,
    STATE(327), 1,
      sym_ietf_mud_mud,
    STATE(330), 1,
      sym_string,
    STATE(181), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [595] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_string,
    STATE(51), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [619] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(330), 1,
      sym_string,
    STATE(160), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [640] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(37), 1,
      sym_json_pair_fallback,
    STATE(330), 1,
      sym_string,
  [659] = 5,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_json_pair_fallback,
    STATE(330), 1,
      sym_string,
  [675] = 5,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_json_pair_fallback,
    STATE(330), 1,
      sym_string,
  [691] = 3,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_range_or_operator,
    STATE(149), 2,
      sym_port_range,
      sym_port_operator,
  [702] = 3,
    ACTIONS(123), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(121), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [713] = 3,
    STATE(30), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(312), 1,
      sym_string_quoted_content,
    ACTIONS(127), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [724] = 1,
    ACTIONS(129), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [731] = 3,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(133), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [742] = 2,
    STATE(319), 1,
      sym_action,
    ACTIONS(136), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [751] = 3,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(140), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [762] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym_actions,
    STATE(243), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [773] = 4,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_json_pair_fallback,
    STATE(330), 1,
      sym_string,
  [786] = 3,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_range_or_operator,
    STATE(149), 2,
      sym_port_range,
      sym_port_operator,
  [797] = 1,
    ACTIONS(144), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [803] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_string,
    STATE(136), 1,
      sym_binary,
  [813] = 1,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [819] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_eth_matches_repeat1,
  [829] = 1,
    ACTIONS(152), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [835] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_json_array_fallback_repeat1,
  [845] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_tcp_matches_repeat1,
  [855] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ipv4_matches_repeat1,
  [865] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ipv4_matches_repeat1,
  [875] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_eth_matches_repeat1,
  [885] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_mud_matches_augment_repeat1,
  [895] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_port_operator_repeat1,
  [905] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_acl_repeat1,
  [915] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_icmp_matches_repeat1,
  [925] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_tcp_matches_repeat1,
  [935] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_tcp_matches_repeat1,
  [945] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_ipv4_matches_repeat1,
  [955] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_ipv4_matches_repeat1,
  [965] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_ietf_mud_repeat1,
  [975] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_eth_matches_repeat1,
  [985] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ipv4_matches_repeat1,
  [995] = 1,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1001] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_eth_matches_repeat1,
  [1011] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_tcp_matches_repeat1,
  [1021] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_source_repeat1,
  [1031] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_json_array_fallback_repeat1,
  [1041] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1051] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_source_repeat1,
  [1061] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_matches_object_repeat1,
  [1071] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_tcp_matches_repeat1,
  [1081] = 2,
    STATE(148), 1,
      sym_bool,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
  [1089] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_icmp_matches_repeat1,
  [1099] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_icmp_matches_repeat1,
  [1109] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_port_range_repeat1,
  [1119] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_source_repeat1,
  [1129] = 1,
    ACTIONS(251), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1135] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_port_operator_repeat1,
  [1145] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_matches_object_repeat1,
  [1155] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1165] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_matches_object_repeat1,
  [1175] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_port_range_repeat1,
  [1185] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_port_operator_repeat1,
  [1195] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym_matches_object,
    STATE(280), 1,
      sym_matches,
  [1205] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_ietf_mud_repeat1,
  [1215] = 3,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_acl_object,
  [1225] = 3,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ace_repeat1,
  [1235] = 1,
    ACTIONS(285), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1241] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_eth_matches_repeat1,
  [1251] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ace_repeat1,
  [1261] = 1,
    ACTIONS(296), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1267] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_json_array_fallback_repeat1,
  [1277] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_ace_repeat1,
  [1287] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_port_range_repeat1,
  [1297] = 3,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_ace_object,
  [1307] = 3,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_access_list_repeat1,
  [1317] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_access_list_repeat1,
  [1327] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_access_list_repeat1,
  [1337] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_acl_repeat1,
  [1347] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_ietf_mud_repeat1,
  [1357] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_acl_repeat1,
  [1367] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1372] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1377] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1382] = 1,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1387] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1392] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1397] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1402] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1407] = 1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1422] = 1,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1427] = 1,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1432] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1437] = 2,
    ACTIONS(362), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(339), 1,
      sym_acl_name_def,
  [1444] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1449] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_string,
  [1456] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1461] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1466] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1471] = 2,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_acl_object,
  [1478] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1483] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(328), 1,
      sym_access_list,
  [1490] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      sym_string,
  [1497] = 2,
    ACTIONS(376), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1504] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1509] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1514] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1519] = 1,
    ACTIONS(384), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1524] = 2,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_acl,
  [1531] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_string,
  [1538] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1543] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1548] = 1,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1553] = 1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1558] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_string,
  [1565] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string,
  [1572] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1577] = 2,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
  [1584] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1589] = 2,
    ACTIONS(402), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(306), 1,
      sym_policy_acl_name,
  [1596] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1601] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1606] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1611] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1616] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1621] = 2,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(303), 1,
      sym_ace,
  [1628] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      sym_string,
  [1635] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_string,
  [1642] = 1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1647] = 1,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1652] = 1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1657] = 1,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1662] = 1,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1667] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1672] = 1,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1677] = 1,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1682] = 2,
    ACTIONS(402), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(218), 1,
      sym_policy_acl_name,
  [1689] = 1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1694] = 1,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1699] = 1,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1704] = 1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1709] = 1,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1714] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1719] = 1,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1724] = 1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1729] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1734] = 1,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1739] = 1,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1744] = 1,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1749] = 1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1754] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_ace_object,
  [1761] = 1,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1766] = 1,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1771] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      sym_string,
  [1778] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1783] = 1,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1788] = 1,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1793] = 1,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1798] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1803] = 1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1808] = 1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1813] = 1,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1818] = 1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1823] = 1,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1828] = 1,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1833] = 1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1838] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1843] = 1,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1848] = 2,
    ACTIONS(476), 1,
      sym_number,
    STATE(137), 1,
      sym_uint8,
  [1855] = 2,
    ACTIONS(476), 1,
      sym_number,
    STATE(138), 1,
      sym_uint8,
  [1862] = 1,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1867] = 1,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1872] = 1,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1877] = 1,
    ACTIONS(484), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1882] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string,
  [1889] = 1,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1894] = 1,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1899] = 1,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1904] = 1,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1909] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_string,
  [1916] = 2,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_null_valued,
  [1923] = 2,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    STATE(174), 1,
      sym_null_valued,
  [1930] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string,
  [1937] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
  [1944] = 2,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym_null_valued,
  [1951] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_string,
  [1958] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_string,
  [1965] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
  [1972] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_string,
  [1979] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [1986] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_string,
  [1993] = 2,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_policy,
  [2000] = 2,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_policy,
  [2007] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string,
  [2014] = 1,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2019] = 1,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2024] = 1,
    ACTIONS(500), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2029] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_string,
  [2036] = 1,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2041] = 1,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2046] = 1,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2051] = 1,
    ACTIONS(508), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [2056] = 1,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2061] = 1,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [2065] = 1,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [2069] = 1,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
  [2073] = 1,
    ACTIONS(518), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [2077] = 1,
    ACTIONS(520), 1,
      sym_number,
  [2081] = 1,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [2085] = 1,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [2089] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [2093] = 1,
    ACTIONS(528), 1,
      anon_sym_LBRACK,
  [2097] = 1,
    ACTIONS(530), 1,
      anon_sym_COLON,
  [2101] = 1,
    ACTIONS(532), 1,
      anon_sym_COLON,
  [2105] = 1,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [2109] = 1,
    ACTIONS(536), 1,
      anon_sym_COLON,
  [2113] = 1,
    ACTIONS(538), 1,
      anon_sym_COLON,
  [2117] = 1,
    ACTIONS(540), 1,
      anon_sym_COLON,
  [2121] = 1,
    ACTIONS(542), 1,
      anon_sym_COLON,
  [2125] = 1,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [2129] = 1,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [2133] = 1,
    ACTIONS(548), 1,
      sym_number,
  [2137] = 1,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [2141] = 1,
    ACTIONS(552), 1,
      anon_sym_COLON,
  [2145] = 1,
    ACTIONS(554), 1,
      anon_sym_COLON,
  [2149] = 1,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [2153] = 1,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [2157] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
  [2161] = 1,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [2165] = 1,
    ACTIONS(564), 1,
      anon_sym_COMMA,
  [2169] = 1,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [2173] = 1,
    ACTIONS(568), 1,
      anon_sym_COMMA,
  [2177] = 1,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [2181] = 1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
  [2185] = 1,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [2189] = 1,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [2193] = 1,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [2197] = 1,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [2201] = 1,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [2205] = 1,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [2209] = 1,
    ACTIONS(586), 1,
      sym_number,
  [2213] = 1,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
  [2217] = 1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [2221] = 1,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [2225] = 1,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [2229] = 1,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
  [2233] = 1,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [2237] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [2241] = 1,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [2245] = 1,
    ACTIONS(604), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [2249] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [2253] = 1,
    ACTIONS(608), 1,
      anon_sym_COLON,
  [2257] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [2261] = 1,
    ACTIONS(612), 1,
      anon_sym_COLON,
  [2265] = 1,
    ACTIONS(614), 1,
      anon_sym_COLON,
  [2269] = 1,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [2273] = 1,
    ACTIONS(618), 1,
      anon_sym_COLON,
  [2277] = 1,
    ACTIONS(620), 1,
      anon_sym_COLON,
  [2281] = 1,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
  [2285] = 1,
    ACTIONS(624), 1,
      anon_sym_COLON,
  [2289] = 1,
    ACTIONS(626), 1,
      anon_sym_COLON,
  [2293] = 1,
    ACTIONS(628), 1,
      anon_sym_COLON,
  [2297] = 1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [2301] = 1,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [2305] = 1,
    ACTIONS(634), 1,
      anon_sym_null,
  [2309] = 1,
    ACTIONS(636), 1,
      anon_sym_COMMA,
  [2313] = 1,
    ACTIONS(638), 1,
      anon_sym_COLON,
  [2317] = 1,
    ACTIONS(640), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [2321] = 1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [2325] = 1,
    ACTIONS(644), 1,
      anon_sym_COMMA,
  [2329] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [2333] = 1,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
  [2337] = 1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [2341] = 1,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
  [2345] = 1,
    ACTIONS(654), 1,
      anon_sym_COLON,
  [2349] = 1,
    ACTIONS(656), 1,
      anon_sym_COLON,
  [2353] = 1,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
  [2357] = 1,
    ACTIONS(660), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [2361] = 1,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [2365] = 1,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
  [2369] = 1,
    ACTIONS(666), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [2373] = 1,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [2377] = 1,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [2381] = 1,
    ACTIONS(672), 1,
      anon_sym_COLON,
  [2385] = 1,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [2389] = 1,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
  [2393] = 1,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [2397] = 1,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
  [2401] = 1,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
  [2405] = 1,
    ACTIONS(684), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [2409] = 1,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
  [2413] = 1,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [2417] = 1,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [2421] = 1,
    ACTIONS(692), 1,
      anon_sym_COLON,
  [2425] = 1,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [2429] = 1,
    ACTIONS(696), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [2433] = 1,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
  [2437] = 1,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
  [2441] = 1,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
  [2445] = 1,
    ACTIONS(704), 1,
      anon_sym_COMMA,
  [2449] = 1,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [2453] = 1,
    ACTIONS(708), 1,
      anon_sym_COLON,
  [2457] = 1,
    ACTIONS(710), 1,
      anon_sym_COLON,
  [2461] = 1,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [2465] = 1,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [2469] = 1,
    ACTIONS(716), 1,
      anon_sym_LBRACK,
  [2473] = 1,
    ACTIONS(718), 1,
      anon_sym_COLON,
  [2477] = 1,
    ACTIONS(720), 1,
      sym_number,
  [2481] = 1,
    ACTIONS(722), 1,
      anon_sym_COLON,
  [2485] = 1,
    ACTIONS(724), 1,
      sym_number,
  [2489] = 1,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
  [2493] = 1,
    ACTIONS(728), 1,
      anon_sym_COMMA,
  [2497] = 1,
    ACTIONS(730), 1,
      anon_sym_COLON,
  [2501] = 1,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
  [2505] = 1,
    ACTIONS(734), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [2509] = 1,
    ACTIONS(736), 1,
      anon_sym_COLON,
  [2513] = 1,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
  [2517] = 1,
    ACTIONS(740), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [2521] = 1,
    ACTIONS(742), 1,
      anon_sym_COLON,
  [2525] = 1,
    ACTIONS(744), 1,
      anon_sym_COLON,
  [2529] = 1,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [2533] = 1,
    ACTIONS(748), 1,
      anon_sym_COLON,
  [2537] = 1,
    ACTIONS(750), 1,
      anon_sym_COLON,
  [2541] = 1,
    ACTIONS(752), 1,
      anon_sym_COLON,
  [2545] = 1,
    ACTIONS(754), 1,
      anon_sym_COMMA,
  [2549] = 1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
  [2553] = 1,
    ACTIONS(758), 1,
      sym_number,
  [2557] = 1,
    ACTIONS(760), 1,
      anon_sym_COLON,
  [2561] = 1,
    ACTIONS(762), 1,
      sym_number,
  [2565] = 1,
    ACTIONS(764), 1,
      anon_sym_COLON,
  [2569] = 1,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 149,
  [SMALL_STATE(5)] = 193,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 274,
  [SMALL_STATE(8)] = 311,
  [SMALL_STATE(9)] = 338,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 394,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 446,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 547,
  [SMALL_STATE(18)] = 571,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 619,
  [SMALL_STATE(21)] = 640,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 702,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 724,
  [SMALL_STATE(28)] = 731,
  [SMALL_STATE(29)] = 742,
  [SMALL_STATE(30)] = 751,
  [SMALL_STATE(31)] = 762,
  [SMALL_STATE(32)] = 773,
  [SMALL_STATE(33)] = 786,
  [SMALL_STATE(34)] = 797,
  [SMALL_STATE(35)] = 803,
  [SMALL_STATE(36)] = 813,
  [SMALL_STATE(37)] = 819,
  [SMALL_STATE(38)] = 829,
  [SMALL_STATE(39)] = 835,
  [SMALL_STATE(40)] = 845,
  [SMALL_STATE(41)] = 855,
  [SMALL_STATE(42)] = 865,
  [SMALL_STATE(43)] = 875,
  [SMALL_STATE(44)] = 885,
  [SMALL_STATE(45)] = 895,
  [SMALL_STATE(46)] = 905,
  [SMALL_STATE(47)] = 915,
  [SMALL_STATE(48)] = 925,
  [SMALL_STATE(49)] = 935,
  [SMALL_STATE(50)] = 945,
  [SMALL_STATE(51)] = 955,
  [SMALL_STATE(52)] = 965,
  [SMALL_STATE(53)] = 975,
  [SMALL_STATE(54)] = 985,
  [SMALL_STATE(55)] = 995,
  [SMALL_STATE(56)] = 1001,
  [SMALL_STATE(57)] = 1011,
  [SMALL_STATE(58)] = 1021,
  [SMALL_STATE(59)] = 1031,
  [SMALL_STATE(60)] = 1041,
  [SMALL_STATE(61)] = 1051,
  [SMALL_STATE(62)] = 1061,
  [SMALL_STATE(63)] = 1071,
  [SMALL_STATE(64)] = 1081,
  [SMALL_STATE(65)] = 1089,
  [SMALL_STATE(66)] = 1099,
  [SMALL_STATE(67)] = 1109,
  [SMALL_STATE(68)] = 1119,
  [SMALL_STATE(69)] = 1129,
  [SMALL_STATE(70)] = 1135,
  [SMALL_STATE(71)] = 1145,
  [SMALL_STATE(72)] = 1155,
  [SMALL_STATE(73)] = 1165,
  [SMALL_STATE(74)] = 1175,
  [SMALL_STATE(75)] = 1185,
  [SMALL_STATE(76)] = 1195,
  [SMALL_STATE(77)] = 1205,
  [SMALL_STATE(78)] = 1215,
  [SMALL_STATE(79)] = 1225,
  [SMALL_STATE(80)] = 1235,
  [SMALL_STATE(81)] = 1241,
  [SMALL_STATE(82)] = 1251,
  [SMALL_STATE(83)] = 1261,
  [SMALL_STATE(84)] = 1267,
  [SMALL_STATE(85)] = 1277,
  [SMALL_STATE(86)] = 1287,
  [SMALL_STATE(87)] = 1297,
  [SMALL_STATE(88)] = 1307,
  [SMALL_STATE(89)] = 1317,
  [SMALL_STATE(90)] = 1327,
  [SMALL_STATE(91)] = 1337,
  [SMALL_STATE(92)] = 1347,
  [SMALL_STATE(93)] = 1357,
  [SMALL_STATE(94)] = 1367,
  [SMALL_STATE(95)] = 1372,
  [SMALL_STATE(96)] = 1377,
  [SMALL_STATE(97)] = 1382,
  [SMALL_STATE(98)] = 1387,
  [SMALL_STATE(99)] = 1392,
  [SMALL_STATE(100)] = 1397,
  [SMALL_STATE(101)] = 1402,
  [SMALL_STATE(102)] = 1407,
  [SMALL_STATE(103)] = 1412,
  [SMALL_STATE(104)] = 1417,
  [SMALL_STATE(105)] = 1422,
  [SMALL_STATE(106)] = 1427,
  [SMALL_STATE(107)] = 1432,
  [SMALL_STATE(108)] = 1437,
  [SMALL_STATE(109)] = 1444,
  [SMALL_STATE(110)] = 1449,
  [SMALL_STATE(111)] = 1456,
  [SMALL_STATE(112)] = 1461,
  [SMALL_STATE(113)] = 1466,
  [SMALL_STATE(114)] = 1471,
  [SMALL_STATE(115)] = 1478,
  [SMALL_STATE(116)] = 1483,
  [SMALL_STATE(117)] = 1490,
  [SMALL_STATE(118)] = 1497,
  [SMALL_STATE(119)] = 1504,
  [SMALL_STATE(120)] = 1509,
  [SMALL_STATE(121)] = 1514,
  [SMALL_STATE(122)] = 1519,
  [SMALL_STATE(123)] = 1524,
  [SMALL_STATE(124)] = 1531,
  [SMALL_STATE(125)] = 1538,
  [SMALL_STATE(126)] = 1543,
  [SMALL_STATE(127)] = 1548,
  [SMALL_STATE(128)] = 1553,
  [SMALL_STATE(129)] = 1558,
  [SMALL_STATE(130)] = 1565,
  [SMALL_STATE(131)] = 1572,
  [SMALL_STATE(132)] = 1577,
  [SMALL_STATE(133)] = 1584,
  [SMALL_STATE(134)] = 1589,
  [SMALL_STATE(135)] = 1596,
  [SMALL_STATE(136)] = 1601,
  [SMALL_STATE(137)] = 1606,
  [SMALL_STATE(138)] = 1611,
  [SMALL_STATE(139)] = 1616,
  [SMALL_STATE(140)] = 1621,
  [SMALL_STATE(141)] = 1628,
  [SMALL_STATE(142)] = 1635,
  [SMALL_STATE(143)] = 1642,
  [SMALL_STATE(144)] = 1647,
  [SMALL_STATE(145)] = 1652,
  [SMALL_STATE(146)] = 1657,
  [SMALL_STATE(147)] = 1662,
  [SMALL_STATE(148)] = 1667,
  [SMALL_STATE(149)] = 1672,
  [SMALL_STATE(150)] = 1677,
  [SMALL_STATE(151)] = 1682,
  [SMALL_STATE(152)] = 1689,
  [SMALL_STATE(153)] = 1694,
  [SMALL_STATE(154)] = 1699,
  [SMALL_STATE(155)] = 1704,
  [SMALL_STATE(156)] = 1709,
  [SMALL_STATE(157)] = 1714,
  [SMALL_STATE(158)] = 1719,
  [SMALL_STATE(159)] = 1724,
  [SMALL_STATE(160)] = 1729,
  [SMALL_STATE(161)] = 1734,
  [SMALL_STATE(162)] = 1739,
  [SMALL_STATE(163)] = 1744,
  [SMALL_STATE(164)] = 1749,
  [SMALL_STATE(165)] = 1754,
  [SMALL_STATE(166)] = 1761,
  [SMALL_STATE(167)] = 1766,
  [SMALL_STATE(168)] = 1771,
  [SMALL_STATE(169)] = 1778,
  [SMALL_STATE(170)] = 1783,
  [SMALL_STATE(171)] = 1788,
  [SMALL_STATE(172)] = 1793,
  [SMALL_STATE(173)] = 1798,
  [SMALL_STATE(174)] = 1803,
  [SMALL_STATE(175)] = 1808,
  [SMALL_STATE(176)] = 1813,
  [SMALL_STATE(177)] = 1818,
  [SMALL_STATE(178)] = 1823,
  [SMALL_STATE(179)] = 1828,
  [SMALL_STATE(180)] = 1833,
  [SMALL_STATE(181)] = 1838,
  [SMALL_STATE(182)] = 1843,
  [SMALL_STATE(183)] = 1848,
  [SMALL_STATE(184)] = 1855,
  [SMALL_STATE(185)] = 1862,
  [SMALL_STATE(186)] = 1867,
  [SMALL_STATE(187)] = 1872,
  [SMALL_STATE(188)] = 1877,
  [SMALL_STATE(189)] = 1882,
  [SMALL_STATE(190)] = 1889,
  [SMALL_STATE(191)] = 1894,
  [SMALL_STATE(192)] = 1899,
  [SMALL_STATE(193)] = 1904,
  [SMALL_STATE(194)] = 1909,
  [SMALL_STATE(195)] = 1916,
  [SMALL_STATE(196)] = 1923,
  [SMALL_STATE(197)] = 1930,
  [SMALL_STATE(198)] = 1937,
  [SMALL_STATE(199)] = 1944,
  [SMALL_STATE(200)] = 1951,
  [SMALL_STATE(201)] = 1958,
  [SMALL_STATE(202)] = 1965,
  [SMALL_STATE(203)] = 1972,
  [SMALL_STATE(204)] = 1979,
  [SMALL_STATE(205)] = 1986,
  [SMALL_STATE(206)] = 1993,
  [SMALL_STATE(207)] = 2000,
  [SMALL_STATE(208)] = 2007,
  [SMALL_STATE(209)] = 2014,
  [SMALL_STATE(210)] = 2019,
  [SMALL_STATE(211)] = 2024,
  [SMALL_STATE(212)] = 2029,
  [SMALL_STATE(213)] = 2036,
  [SMALL_STATE(214)] = 2041,
  [SMALL_STATE(215)] = 2046,
  [SMALL_STATE(216)] = 2051,
  [SMALL_STATE(217)] = 2056,
  [SMALL_STATE(218)] = 2061,
  [SMALL_STATE(219)] = 2065,
  [SMALL_STATE(220)] = 2069,
  [SMALL_STATE(221)] = 2073,
  [SMALL_STATE(222)] = 2077,
  [SMALL_STATE(223)] = 2081,
  [SMALL_STATE(224)] = 2085,
  [SMALL_STATE(225)] = 2089,
  [SMALL_STATE(226)] = 2093,
  [SMALL_STATE(227)] = 2097,
  [SMALL_STATE(228)] = 2101,
  [SMALL_STATE(229)] = 2105,
  [SMALL_STATE(230)] = 2109,
  [SMALL_STATE(231)] = 2113,
  [SMALL_STATE(232)] = 2117,
  [SMALL_STATE(233)] = 2121,
  [SMALL_STATE(234)] = 2125,
  [SMALL_STATE(235)] = 2129,
  [SMALL_STATE(236)] = 2133,
  [SMALL_STATE(237)] = 2137,
  [SMALL_STATE(238)] = 2141,
  [SMALL_STATE(239)] = 2145,
  [SMALL_STATE(240)] = 2149,
  [SMALL_STATE(241)] = 2153,
  [SMALL_STATE(242)] = 2157,
  [SMALL_STATE(243)] = 2161,
  [SMALL_STATE(244)] = 2165,
  [SMALL_STATE(245)] = 2169,
  [SMALL_STATE(246)] = 2173,
  [SMALL_STATE(247)] = 2177,
  [SMALL_STATE(248)] = 2181,
  [SMALL_STATE(249)] = 2185,
  [SMALL_STATE(250)] = 2189,
  [SMALL_STATE(251)] = 2193,
  [SMALL_STATE(252)] = 2197,
  [SMALL_STATE(253)] = 2201,
  [SMALL_STATE(254)] = 2205,
  [SMALL_STATE(255)] = 2209,
  [SMALL_STATE(256)] = 2213,
  [SMALL_STATE(257)] = 2217,
  [SMALL_STATE(258)] = 2221,
  [SMALL_STATE(259)] = 2225,
  [SMALL_STATE(260)] = 2229,
  [SMALL_STATE(261)] = 2233,
  [SMALL_STATE(262)] = 2237,
  [SMALL_STATE(263)] = 2241,
  [SMALL_STATE(264)] = 2245,
  [SMALL_STATE(265)] = 2249,
  [SMALL_STATE(266)] = 2253,
  [SMALL_STATE(267)] = 2257,
  [SMALL_STATE(268)] = 2261,
  [SMALL_STATE(269)] = 2265,
  [SMALL_STATE(270)] = 2269,
  [SMALL_STATE(271)] = 2273,
  [SMALL_STATE(272)] = 2277,
  [SMALL_STATE(273)] = 2281,
  [SMALL_STATE(274)] = 2285,
  [SMALL_STATE(275)] = 2289,
  [SMALL_STATE(276)] = 2293,
  [SMALL_STATE(277)] = 2297,
  [SMALL_STATE(278)] = 2301,
  [SMALL_STATE(279)] = 2305,
  [SMALL_STATE(280)] = 2309,
  [SMALL_STATE(281)] = 2313,
  [SMALL_STATE(282)] = 2317,
  [SMALL_STATE(283)] = 2321,
  [SMALL_STATE(284)] = 2325,
  [SMALL_STATE(285)] = 2329,
  [SMALL_STATE(286)] = 2333,
  [SMALL_STATE(287)] = 2337,
  [SMALL_STATE(288)] = 2341,
  [SMALL_STATE(289)] = 2345,
  [SMALL_STATE(290)] = 2349,
  [SMALL_STATE(291)] = 2353,
  [SMALL_STATE(292)] = 2357,
  [SMALL_STATE(293)] = 2361,
  [SMALL_STATE(294)] = 2365,
  [SMALL_STATE(295)] = 2369,
  [SMALL_STATE(296)] = 2373,
  [SMALL_STATE(297)] = 2377,
  [SMALL_STATE(298)] = 2381,
  [SMALL_STATE(299)] = 2385,
  [SMALL_STATE(300)] = 2389,
  [SMALL_STATE(301)] = 2393,
  [SMALL_STATE(302)] = 2397,
  [SMALL_STATE(303)] = 2401,
  [SMALL_STATE(304)] = 2405,
  [SMALL_STATE(305)] = 2409,
  [SMALL_STATE(306)] = 2413,
  [SMALL_STATE(307)] = 2417,
  [SMALL_STATE(308)] = 2421,
  [SMALL_STATE(309)] = 2425,
  [SMALL_STATE(310)] = 2429,
  [SMALL_STATE(311)] = 2433,
  [SMALL_STATE(312)] = 2437,
  [SMALL_STATE(313)] = 2441,
  [SMALL_STATE(314)] = 2445,
  [SMALL_STATE(315)] = 2449,
  [SMALL_STATE(316)] = 2453,
  [SMALL_STATE(317)] = 2457,
  [SMALL_STATE(318)] = 2461,
  [SMALL_STATE(319)] = 2465,
  [SMALL_STATE(320)] = 2469,
  [SMALL_STATE(321)] = 2473,
  [SMALL_STATE(322)] = 2477,
  [SMALL_STATE(323)] = 2481,
  [SMALL_STATE(324)] = 2485,
  [SMALL_STATE(325)] = 2489,
  [SMALL_STATE(326)] = 2493,
  [SMALL_STATE(327)] = 2497,
  [SMALL_STATE(328)] = 2501,
  [SMALL_STATE(329)] = 2505,
  [SMALL_STATE(330)] = 2509,
  [SMALL_STATE(331)] = 2513,
  [SMALL_STATE(332)] = 2517,
  [SMALL_STATE(333)] = 2521,
  [SMALL_STATE(334)] = 2525,
  [SMALL_STATE(335)] = 2529,
  [SMALL_STATE(336)] = 2533,
  [SMALL_STATE(337)] = 2537,
  [SMALL_STATE(338)] = 2541,
  [SMALL_STATE(339)] = 2545,
  [SMALL_STATE(340)] = 2549,
  [SMALL_STATE(341)] = 2553,
  [SMALL_STATE(342)] = 2557,
  [SMALL_STATE(343)] = 2561,
  [SMALL_STATE(344)] = 2565,
  [SMALL_STATE(345)] = 2569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(118),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(114),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(16),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2), SHIFT_REPEAT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(165),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(32),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(12),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(122),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(300),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_signature, 3, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mfg_name, 3, .production_id = 10),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_name, 3, .production_id = 10),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_firmware_rev, 3, .production_id = 11),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_rev, 3, .production_id = 11),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3, .production_id = 9),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, .production_id = 12),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_header, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint8, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3, .production_id = 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 7),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 14),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 15),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 14),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [516] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 10),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 9),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_acl_name, 3, .production_id = 13),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_name_def, 3, .production_id = 13),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud_mud, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mud(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
