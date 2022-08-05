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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 358
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 21

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
  sym_aces_id = 10,
  anon_sym_DQUOTEtype_DQUOTE = 11,
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
  sym_controller_id = 22,
  sym_my_controller_id = 23,
  sym_manufacturer_id = 24,
  sym_same_manufacturer_id = 25,
  sym_local_networks_id = 26,
  sym_model_id = 27,
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
  sym_type_id = 77,
  sym_ace = 78,
  sym_ace_object = 79,
  sym_matches = 80,
  sym_actions = 81,
  sym_acl_name_def = 82,
  sym_policy_acl_name = 83,
  sym_matches_object = 84,
  sym_mud_matches_augment = 85,
  sym_eth_matches = 86,
  sym_ipv4_matches = 87,
  sym_ipv6_matches = 88,
  sym_tcp_matches = 89,
  sym_udp_matches = 90,
  sym_icmp_matches = 91,
  sym_controller = 92,
  sym_my_controller = 93,
  sym_manufacturer = 94,
  sym_same_manufacturer = 95,
  sym_local_networks = 96,
  sym_model = 97,
  sym_ip_header_proto = 98,
  sym_ietf_acldns = 99,
  sym_source_port = 100,
  sym_destination_port = 101,
  sym_range_or_operator = 102,
  sym_port_range = 103,
  sym_port_operator = 104,
  sym_direction_initiated = 105,
  sym_type = 106,
  sym_code = 107,
  sym_rest_of_header = 108,
  sym_uint8 = 109,
  sym_binary = 110,
  sym_forwarding_action = 111,
  sym_action = 112,
  sym_mud_version = 113,
  sym_mud_url = 114,
  sym_last_update = 115,
  sym_cache_validity = 116,
  sym_is_supported = 117,
  sym_systeminfo = 118,
  sym_from_device_policy = 119,
  sym_to_device_policy = 120,
  sym_mud_signature = 121,
  sym_mfg_name = 122,
  sym_model_name = 123,
  sym_firmware_rev = 124,
  sym_software_rev = 125,
  sym_documentation = 126,
  sym_extensions = 127,
  sym_policy = 128,
  sym_access_list = 129,
  sym_string = 130,
  sym_string_quoted_content = 131,
  sym_bool = 132,
  sym_null_valued = 133,
  sym_json_value_fallback = 134,
  sym_json_object_fallback = 135,
  sym_json_array_fallback = 136,
  sym_json_pair_fallback = 137,
  aux_sym_source_repeat1 = 138,
  aux_sym_ietf_mud_repeat1 = 139,
  aux_sym_acl_repeat1 = 140,
  aux_sym_acl_object_repeat1 = 141,
  aux_sym_ace_repeat1 = 142,
  aux_sym_matches_object_repeat1 = 143,
  aux_sym_mud_matches_augment_repeat1 = 144,
  aux_sym_eth_matches_repeat1 = 145,
  aux_sym_ipv4_matches_repeat1 = 146,
  aux_sym_tcp_matches_repeat1 = 147,
  aux_sym_icmp_matches_repeat1 = 148,
  aux_sym_port_range_repeat1 = 149,
  aux_sym_port_operator_repeat1 = 150,
  aux_sym_access_list_repeat1 = 151,
  aux_sym_string_quoted_content_repeat1 = 152,
  aux_sym_json_array_fallback_repeat1 = 153,
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
  [sym_aces_id] = "aces_id",
  [anon_sym_DQUOTEtype_DQUOTE] = "\"type\"",
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
  [sym_controller_id] = "controller_id",
  [sym_my_controller_id] = "my_controller_id",
  [sym_manufacturer_id] = "manufacturer_id",
  [sym_same_manufacturer_id] = "same_manufacturer_id",
  [sym_local_networks_id] = "local_networks_id",
  [sym_model_id] = "model_id",
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
  [sym_type_id] = "type_id",
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
  [aux_sym_acl_object_repeat1] = "acl_object_repeat1",
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
  [sym_aces_id] = sym_aces_id,
  [anon_sym_DQUOTEtype_DQUOTE] = anon_sym_DQUOTEtype_DQUOTE,
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
  [sym_controller_id] = sym_controller_id,
  [sym_my_controller_id] = sym_my_controller_id,
  [sym_manufacturer_id] = sym_manufacturer_id,
  [sym_same_manufacturer_id] = sym_same_manufacturer_id,
  [sym_local_networks_id] = sym_local_networks_id,
  [sym_model_id] = sym_model_id,
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
  [sym_type_id] = sym_type_id,
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
  [aux_sym_acl_object_repeat1] = aux_sym_acl_object_repeat1,
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
  [sym_aces_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEtype_DQUOTE] = {
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
  [sym_controller_id] = {
    .visible = true,
    .named = true,
  },
  [sym_my_controller_id] = {
    .visible = true,
    .named = true,
  },
  [sym_manufacturer_id] = {
    .visible = true,
    .named = true,
  },
  [sym_same_manufacturer_id] = {
    .visible = true,
    .named = true,
  },
  [sym_local_networks_id] = {
    .visible = true,
    .named = true,
  },
  [sym_model_id] = {
    .visible = true,
    .named = true,
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
  [sym_type_id] = {
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
  [aux_sym_acl_object_repeat1] = {
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
  field_mud_matches_augment_id = 7,
  field_name = 8,
  field_policy = 9,
  field_rev = 10,
  field_supported = 11,
  field_timestamp = 12,
  field_uri = 13,
  field_url = 14,
  field_version = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_authority] = "authority",
  [field_extensions] = "extensions",
  [field_hours] = "hours",
  [field_ietf_mud_toplevel_id] = "ietf_mud_toplevel_id",
  [field_info] = "info",
  [field_mud_id] = "mud_id",
  [field_mud_matches_augment_id] = "mud_matches_augment_id",
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
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 1},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 2},
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
    {field_mud_id, 2, .inherited = true},
  [25] =
    {field_mud_id, 0, .inherited = true},
    {field_mud_id, 1, .inherited = true},
  [27] =
    {field_mud_id, 1},
  [28] =
    {field_mud_id, 1},
    {field_mud_id, 4, .inherited = true},
  [30] =
    {field_mud_matches_augment_id, 0},
    {field_uri, 2},
  [32] =
    {field_mud_matches_augment_id, 0},
  [33] =
    {field_authority, 2},
    {field_mud_matches_augment_id, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
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
      if (lookahead == '"') ADVANCE(574);
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
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(600);
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
      if (lookahead == '}') ADVANCE(566);
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
      if (lookahead == '"') ADVANCE(573);
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
      if (lookahead == 'y') ADVANCE(415);
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
      ACCEPT_TOKEN(sym_aces_id);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
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
      ACCEPT_TOKEN(sym_controller_id);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_my_controller_id);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_manufacturer_id);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_same_manufacturer_id);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_local_networks_id);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_model_id);
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
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
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
  [61] = {.lex_state = 43},
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
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 43},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 50},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 43},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 50},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 43},
  [133] = {.lex_state = 43},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 43},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 50},
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
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 43},
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
  [180] = {.lex_state = 50},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 50},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 43},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 43},
  [213] = {.lex_state = 43},
  [214] = {.lex_state = 43},
  [215] = {.lex_state = 43},
  [216] = {.lex_state = 43},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 43},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 43},
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
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 43},
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
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 50},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 50},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 50},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 50},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 43},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 50},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 50},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
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
    [sym_controller_id] = ACTIONS(1),
    [sym_my_controller_id] = ACTIONS(1),
    [sym_manufacturer_id] = ACTIONS(1),
    [sym_same_manufacturer_id] = ACTIONS(1),
    [sym_local_networks_id] = ACTIONS(1),
    [sym_model_id] = ACTIONS(1),
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
    [sym_source] = STATE(239),
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
    STATE(342), 1,
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
    STATE(342), 1,
      sym_string,
    STATE(110), 16,
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
    STATE(342), 1,
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
    STATE(342), 1,
      sym_string,
    STATE(221), 8,
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
      sym_controller_id,
    ACTIONS(61), 1,
      sym_my_controller_id,
    ACTIONS(63), 1,
      sym_manufacturer_id,
    ACTIONS(65), 1,
      sym_same_manufacturer_id,
    ACTIONS(67), 1,
      sym_local_networks_id,
    ACTIONS(69), 1,
      sym_model_id,
    STATE(342), 1,
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
      sym_controller_id,
    ACTIONS(61), 1,
      sym_my_controller_id,
    ACTIONS(63), 1,
      sym_manufacturer_id,
    ACTIONS(65), 1,
      sym_same_manufacturer_id,
    ACTIONS(67), 1,
      sym_local_networks_id,
    ACTIONS(69), 1,
      sym_model_id,
    STATE(342), 1,
      sym_string,
    STATE(187), 7,
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
    STATE(41), 1,
      sym_json_value_fallback,
    STATE(36), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [338] = 6,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_json_value_fallback,
    STATE(36), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [362] = 6,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_json_value_fallback,
    STATE(36), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [386] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(342), 1,
      sym_string,
    STATE(47), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [414] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(342), 1,
      sym_string,
    STATE(48), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [442] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      sym_string,
    STATE(49), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [470] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(342), 1,
      sym_string,
    STATE(145), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [495] = 8,
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
    STATE(339), 1,
      sym_ietf_mud_mud,
    STATE(342), 1,
      sym_string,
    STATE(74), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [522] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(342), 1,
      sym_string,
    STATE(161), 4,
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
    STATE(342), 1,
      sym_string,
    STATE(51), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [571] = 7,
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
    STATE(342), 1,
      sym_string,
    STATE(50), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [595] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(103), 1,
      sym_ietf_access_control_list_acls,
    STATE(339), 1,
      sym_ietf_mud_mud,
    STATE(342), 1,
      sym_string,
    STATE(198), 3,
      sym_ietf_mud,
      sym_ietf_acls,
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
    STATE(342), 1,
      sym_string,
    STATE(181), 3,
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
    STATE(39), 1,
      sym_json_pair_fallback,
    STATE(342), 1,
      sym_string,
  [659] = 6,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_aces_id,
    ACTIONS(121), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(65), 1,
      sym_acl_name_def,
    STATE(344), 1,
      sym_type_id,
  [678] = 5,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_json_pair_fallback,
    STATE(342), 1,
      sym_string,
  [694] = 5,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_json_pair_fallback,
    STATE(342), 1,
      sym_string,
  [710] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTEname_DQUOTE,
    ACTIONS(127), 1,
      sym_aces_id,
    STATE(137), 1,
      sym_acl_name_def,
    STATE(332), 1,
      sym_type_id,
  [726] = 3,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(131), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [737] = 3,
    ACTIONS(135), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(133), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [748] = 3,
    STATE(26), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(324), 1,
      sym_string_quoted_content,
    ACTIONS(139), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [759] = 4,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_json_pair_fallback,
    STATE(342), 1,
      sym_string,
  [772] = 3,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    STATE(254), 1,
      sym_actions,
    STATE(255), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [783] = 2,
    STATE(331), 1,
      sym_action,
    ACTIONS(143), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [792] = 3,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_range_or_operator,
    STATE(172), 2,
      sym_port_range,
      sym_port_operator,
  [803] = 3,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_range_or_operator,
    STATE(172), 2,
      sym_port_range,
      sym_port_operator,
  [814] = 3,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(149), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [825] = 1,
    ACTIONS(152), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [832] = 1,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [838] = 3,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_tcp_matches_repeat1,
  [848] = 1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [854] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_eth_matches_repeat1,
  [864] = 1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [870] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_json_array_fallback_repeat1,
  [880] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_tcp_matches_repeat1,
  [890] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_ipv4_matches_repeat1,
  [900] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_ipv4_matches_repeat1,
  [910] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_eth_matches_repeat1,
  [920] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_mud_matches_augment_repeat1,
  [930] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_icmp_matches_repeat1,
  [940] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_tcp_matches_repeat1,
  [950] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_tcp_matches_repeat1,
  [960] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_ipv4_matches_repeat1,
  [970] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_ipv4_matches_repeat1,
  [980] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_ietf_mud_repeat1,
  [990] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_eth_matches_repeat1,
  [1000] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_port_operator_repeat1,
  [1010] = 1,
    ACTIONS(212), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1016] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_eth_matches_repeat1,
  [1026] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [1036] = 1,
    ACTIONS(221), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1042] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_json_array_fallback_repeat1,
  [1052] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1062] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym_string,
    STATE(149), 1,
      sym_binary,
  [1072] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_matches_object_repeat1,
  [1082] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_icmp_matches_repeat1,
  [1092] = 2,
    STATE(158), 1,
      sym_bool,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
  [1100] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_acl_object_repeat1,
  [1110] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1120] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_ipv4_matches_repeat1,
  [1130] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [1140] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_tcp_matches_repeat1,
  [1150] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_icmp_matches_repeat1,
  [1160] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_matches_object_repeat1,
  [1170] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_port_range_repeat1,
  [1180] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_matches_object_repeat1,
  [1190] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_source_repeat1,
  [1200] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_port_operator_repeat1,
  [1210] = 3,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_matches,
    STATE(295), 1,
      sym_matches_object,
  [1220] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_ietf_mud_repeat1,
  [1230] = 3,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym_acl_object,
  [1240] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_access_list_repeat1,
  [1250] = 1,
    ACTIONS(290), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1256] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_eth_matches_repeat1,
  [1266] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_port_range_repeat1,
  [1276] = 1,
    ACTIONS(299), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1282] = 3,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_json_array_fallback_repeat1,
  [1292] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_access_list_repeat1,
  [1302] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_ace_repeat1,
  [1312] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_access_list_repeat1,
  [1322] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_ace_repeat1,
  [1332] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_ace_repeat1,
  [1342] = 3,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_ace_object,
  [1352] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_acl_object_repeat1,
  [1362] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_acl_object_repeat1,
  [1372] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_acl_object_repeat1,
  [1382] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_acl_object_repeat1,
  [1392] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_port_operator_repeat1,
  [1402] = 3,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_ietf_mud_repeat1,
  [1412] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_port_range_repeat1,
  [1422] = 3,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_acl_repeat1,
  [1432] = 3,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_acl_repeat1,
  [1442] = 3,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_acl_repeat1,
  [1452] = 1,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1457] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1467] = 1,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1472] = 1,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1477] = 1,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1482] = 1,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1487] = 1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1492] = 1,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1497] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1502] = 1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1507] = 1,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1512] = 1,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1517] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1522] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_string,
  [1529] = 1,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1534] = 1,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1539] = 1,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1544] = 1,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1549] = 2,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_acl_object,
  [1556] = 2,
    ACTIONS(395), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1563] = 2,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
    STATE(338), 1,
      sym_access_list,
  [1570] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_ace,
  [1577] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_string,
  [1584] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_string,
  [1591] = 1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1596] = 1,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1601] = 1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1606] = 1,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1611] = 1,
    ACTIONS(409), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1616] = 2,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_acl,
  [1623] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_string,
  [1630] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_string,
  [1637] = 1,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1642] = 1,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1647] = 1,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1652] = 1,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1657] = 1,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1662] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1667] = 1,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1672] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_string,
  [1679] = 1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1684] = 1,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1689] = 1,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1694] = 1,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1699] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_ace,
  [1706] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_string,
  [1713] = 1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1718] = 1,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1723] = 1,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1728] = 1,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1733] = 2,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
  [1740] = 1,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1745] = 2,
    ACTIONS(447), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(313), 1,
      sym_policy_acl_name,
  [1752] = 1,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1757] = 1,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1762] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1767] = 1,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1772] = 1,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1777] = 1,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1782] = 1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1787] = 1,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1792] = 1,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1797] = 2,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_ace_object,
  [1804] = 1,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1809] = 1,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1814] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(308), 1,
      sym_string,
  [1821] = 1,
    ACTIONS(469), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1826] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      sym_string,
  [1833] = 1,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1838] = 1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1843] = 1,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1848] = 1,
    ACTIONS(475), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1853] = 1,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1858] = 1,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1863] = 1,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1868] = 1,
    ACTIONS(483), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1873] = 1,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1878] = 1,
    ACTIONS(487), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1883] = 2,
    ACTIONS(447), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(299), 1,
      sym_policy_acl_name,
  [1890] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1895] = 1,
    ACTIONS(489), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1900] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1905] = 1,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1910] = 1,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1915] = 1,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1920] = 1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1925] = 1,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1930] = 1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1935] = 1,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1940] = 1,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1945] = 1,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1950] = 1,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1955] = 1,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1960] = 1,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1965] = 1,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1970] = 1,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1975] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1980] = 1,
    ACTIONS(515), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1985] = 2,
    ACTIONS(517), 1,
      sym_number,
    STATE(155), 1,
      sym_uint8,
  [1992] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
  [1999] = 2,
    ACTIONS(517), 1,
      sym_number,
    STATE(156), 1,
      sym_uint8,
  [2006] = 1,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2011] = 1,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2016] = 1,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2021] = 1,
    ACTIONS(525), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [2026] = 1,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2031] = 1,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2036] = 1,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2041] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string,
  [2048] = 1,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2053] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_string,
  [2060] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
  [2067] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_string,
  [2074] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string,
  [2081] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
  [2088] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_string,
  [2095] = 2,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_policy,
  [2102] = 2,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_policy,
  [2109] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_string,
  [2116] = 1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2121] = 2,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    STATE(192), 1,
      sym_null_valued,
  [2128] = 2,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_null_valued,
  [2135] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      sym_string,
  [2142] = 1,
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2147] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_string,
  [2154] = 2,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      sym_null_valued,
  [2161] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
  [2168] = 1,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2173] = 1,
    ACTIONS(543), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2178] = 1,
    ACTIONS(545), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2183] = 1,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2188] = 1,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2193] = 1,
    ACTIONS(551), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [2198] = 1,
    ACTIONS(553), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2203] = 1,
    ACTIONS(555), 1,
      anon_sym_COMMA,
  [2207] = 1,
    ACTIONS(557), 1,
      anon_sym_COMMA,
  [2211] = 1,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
  [2215] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [2219] = 1,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [2223] = 1,
    ACTIONS(565), 1,
      anon_sym_COLON,
  [2227] = 1,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
  [2231] = 1,
    ACTIONS(569), 1,
      anon_sym_COLON,
  [2235] = 1,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [2239] = 1,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [2243] = 1,
    ACTIONS(575), 1,
      anon_sym_COLON,
  [2247] = 1,
    ACTIONS(577), 1,
      anon_sym_COLON,
  [2251] = 1,
    ACTIONS(579), 1,
      anon_sym_COLON,
  [2255] = 1,
    ACTIONS(581), 1,
      anon_sym_COLON,
  [2259] = 1,
    ACTIONS(583), 1,
      anon_sym_COLON,
  [2263] = 1,
    ACTIONS(585), 1,
      anon_sym_COLON,
  [2267] = 1,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [2271] = 1,
    ACTIONS(589), 1,
      anon_sym_COLON,
  [2275] = 1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
  [2279] = 1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [2283] = 1,
    ACTIONS(595), 1,
      anon_sym_COLON,
  [2287] = 1,
    ACTIONS(597), 1,
      anon_sym_COLON,
  [2291] = 1,
    ACTIONS(599), 1,
      anon_sym_COLON,
  [2295] = 1,
    ACTIONS(601), 1,
      sym_number,
  [2299] = 1,
    ACTIONS(603), 1,
      anon_sym_COMMA,
  [2303] = 1,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [2307] = 1,
    ACTIONS(607), 1,
      anon_sym_COLON,
  [2311] = 1,
    ACTIONS(609), 1,
      anon_sym_COLON,
  [2315] = 1,
    ACTIONS(611), 1,
      anon_sym_COLON,
  [2319] = 1,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
  [2323] = 1,
    ACTIONS(615), 1,
      anon_sym_COLON,
  [2327] = 1,
    ACTIONS(617), 1,
      sym_number,
  [2331] = 1,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
  [2335] = 1,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [2339] = 1,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
  [2343] = 1,
    ACTIONS(625), 1,
      anon_sym_COLON,
  [2347] = 1,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [2351] = 1,
    ACTIONS(629), 1,
      anon_sym_COLON,
  [2355] = 1,
    ACTIONS(631), 1,
      anon_sym_COLON,
  [2359] = 1,
    ACTIONS(633), 1,
      anon_sym_COLON,
  [2363] = 1,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
  [2367] = 1,
    ACTIONS(637), 1,
      anon_sym_COLON,
  [2371] = 1,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
  [2375] = 1,
    ACTIONS(641), 1,
      anon_sym_COLON,
  [2379] = 1,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
  [2383] = 1,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
  [2387] = 1,
    ACTIONS(647), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [2391] = 1,
    ACTIONS(649), 1,
      anon_sym_COLON,
  [2395] = 1,
    ACTIONS(651), 1,
      anon_sym_COLON,
  [2399] = 1,
    ACTIONS(653), 1,
      anon_sym_COLON,
  [2403] = 1,
    ACTIONS(655), 1,
      anon_sym_COLON,
  [2407] = 1,
    ACTIONS(657), 1,
      anon_sym_COLON,
  [2411] = 1,
    ACTIONS(659), 1,
      anon_sym_COLON,
  [2415] = 1,
    ACTIONS(661), 1,
      anon_sym_COLON,
  [2419] = 1,
    ACTIONS(663), 1,
      anon_sym_COLON,
  [2423] = 1,
    ACTIONS(665), 1,
      anon_sym_null,
  [2427] = 1,
    ACTIONS(667), 1,
      anon_sym_COLON,
  [2431] = 1,
    ACTIONS(669), 1,
      anon_sym_COLON,
  [2435] = 1,
    ACTIONS(671), 1,
      anon_sym_COMMA,
  [2439] = 1,
    ACTIONS(673), 1,
      anon_sym_COMMA,
  [2443] = 1,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
  [2447] = 1,
    ACTIONS(677), 1,
      sym_number,
  [2451] = 1,
    ACTIONS(679), 1,
      anon_sym_COLON,
  [2455] = 1,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [2459] = 1,
    ACTIONS(683), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [2463] = 1,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
  [2467] = 1,
    ACTIONS(687), 1,
      anon_sym_COLON,
  [2471] = 1,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [2475] = 1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [2479] = 1,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
  [2483] = 1,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
  [2487] = 1,
    ACTIONS(697), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [2491] = 1,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
  [2495] = 1,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
  [2499] = 1,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
  [2503] = 1,
    ACTIONS(705), 1,
      anon_sym_COLON,
  [2507] = 1,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
  [2511] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [2515] = 1,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
  [2519] = 1,
    ACTIONS(713), 1,
      anon_sym_COLON,
  [2523] = 1,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
  [2527] = 1,
    ACTIONS(717), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [2531] = 1,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
  [2535] = 1,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
  [2539] = 1,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
  [2543] = 1,
    ACTIONS(725), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [2547] = 1,
    ACTIONS(727), 1,
      anon_sym_COLON,
  [2551] = 1,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
  [2555] = 1,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
  [2559] = 1,
    ACTIONS(733), 1,
      anon_sym_RBRACK,
  [2563] = 1,
    ACTIONS(735), 1,
      anon_sym_COLON,
  [2567] = 1,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [2571] = 1,
    ACTIONS(739), 1,
      anon_sym_COLON,
  [2575] = 1,
    ACTIONS(741), 1,
      anon_sym_COLON,
  [2579] = 1,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
  [2583] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
  [2587] = 1,
    ACTIONS(747), 1,
      anon_sym_COLON,
  [2591] = 1,
    ACTIONS(749), 1,
      anon_sym_COLON,
  [2595] = 1,
    ACTIONS(751), 1,
      sym_number,
  [2599] = 1,
    ACTIONS(753), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [2603] = 1,
    ACTIONS(755), 1,
      sym_number,
  [2607] = 1,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
  [2611] = 1,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
  [2615] = 1,
    ACTIONS(761), 1,
      anon_sym_COLON,
  [2619] = 1,
    ACTIONS(763), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [2623] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [2627] = 1,
    ACTIONS(767), 1,
      anon_sym_COLON,
  [2631] = 1,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
  [2635] = 1,
    ACTIONS(771), 1,
      anon_sym_COLON,
  [2639] = 1,
    ACTIONS(773), 1,
      anon_sym_COLON,
  [2643] = 1,
    ACTIONS(775), 1,
      anon_sym_COLON,
  [2647] = 1,
    ACTIONS(777), 1,
      anon_sym_COLON,
  [2651] = 1,
    ACTIONS(779), 1,
      anon_sym_COLON,
  [2655] = 1,
    ACTIONS(781), 1,
      anon_sym_COLON,
  [2659] = 1,
    ACTIONS(783), 1,
      anon_sym_COLON,
  [2663] = 1,
    ACTIONS(785), 1,
      anon_sym_COLON,
  [2667] = 1,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
  [2671] = 1,
    ACTIONS(789), 1,
      sym_number,
  [2675] = 1,
    ACTIONS(791), 1,
      anon_sym_COLON,
  [2679] = 1,
    ACTIONS(793), 1,
      sym_number,
  [2683] = 1,
    ACTIONS(795), 1,
      anon_sym_COLON,
  [2687] = 1,
    ACTIONS(797), 1,
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
  [SMALL_STATE(10)] = 362,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 414,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 547,
  [SMALL_STATE(18)] = 571,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 619,
  [SMALL_STATE(21)] = 640,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 678,
  [SMALL_STATE(24)] = 694,
  [SMALL_STATE(25)] = 710,
  [SMALL_STATE(26)] = 726,
  [SMALL_STATE(27)] = 737,
  [SMALL_STATE(28)] = 748,
  [SMALL_STATE(29)] = 759,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 783,
  [SMALL_STATE(32)] = 792,
  [SMALL_STATE(33)] = 803,
  [SMALL_STATE(34)] = 814,
  [SMALL_STATE(35)] = 825,
  [SMALL_STATE(36)] = 832,
  [SMALL_STATE(37)] = 838,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 854,
  [SMALL_STATE(40)] = 864,
  [SMALL_STATE(41)] = 870,
  [SMALL_STATE(42)] = 880,
  [SMALL_STATE(43)] = 890,
  [SMALL_STATE(44)] = 900,
  [SMALL_STATE(45)] = 910,
  [SMALL_STATE(46)] = 920,
  [SMALL_STATE(47)] = 930,
  [SMALL_STATE(48)] = 940,
  [SMALL_STATE(49)] = 950,
  [SMALL_STATE(50)] = 960,
  [SMALL_STATE(51)] = 970,
  [SMALL_STATE(52)] = 980,
  [SMALL_STATE(53)] = 990,
  [SMALL_STATE(54)] = 1000,
  [SMALL_STATE(55)] = 1010,
  [SMALL_STATE(56)] = 1016,
  [SMALL_STATE(57)] = 1026,
  [SMALL_STATE(58)] = 1036,
  [SMALL_STATE(59)] = 1042,
  [SMALL_STATE(60)] = 1052,
  [SMALL_STATE(61)] = 1062,
  [SMALL_STATE(62)] = 1072,
  [SMALL_STATE(63)] = 1082,
  [SMALL_STATE(64)] = 1092,
  [SMALL_STATE(65)] = 1100,
  [SMALL_STATE(66)] = 1110,
  [SMALL_STATE(67)] = 1120,
  [SMALL_STATE(68)] = 1130,
  [SMALL_STATE(69)] = 1140,
  [SMALL_STATE(70)] = 1150,
  [SMALL_STATE(71)] = 1160,
  [SMALL_STATE(72)] = 1170,
  [SMALL_STATE(73)] = 1180,
  [SMALL_STATE(74)] = 1190,
  [SMALL_STATE(75)] = 1200,
  [SMALL_STATE(76)] = 1210,
  [SMALL_STATE(77)] = 1220,
  [SMALL_STATE(78)] = 1230,
  [SMALL_STATE(79)] = 1240,
  [SMALL_STATE(80)] = 1250,
  [SMALL_STATE(81)] = 1256,
  [SMALL_STATE(82)] = 1266,
  [SMALL_STATE(83)] = 1276,
  [SMALL_STATE(84)] = 1282,
  [SMALL_STATE(85)] = 1292,
  [SMALL_STATE(86)] = 1302,
  [SMALL_STATE(87)] = 1312,
  [SMALL_STATE(88)] = 1322,
  [SMALL_STATE(89)] = 1332,
  [SMALL_STATE(90)] = 1342,
  [SMALL_STATE(91)] = 1352,
  [SMALL_STATE(92)] = 1362,
  [SMALL_STATE(93)] = 1372,
  [SMALL_STATE(94)] = 1382,
  [SMALL_STATE(95)] = 1392,
  [SMALL_STATE(96)] = 1402,
  [SMALL_STATE(97)] = 1412,
  [SMALL_STATE(98)] = 1422,
  [SMALL_STATE(99)] = 1432,
  [SMALL_STATE(100)] = 1442,
  [SMALL_STATE(101)] = 1452,
  [SMALL_STATE(102)] = 1457,
  [SMALL_STATE(103)] = 1462,
  [SMALL_STATE(104)] = 1467,
  [SMALL_STATE(105)] = 1472,
  [SMALL_STATE(106)] = 1477,
  [SMALL_STATE(107)] = 1482,
  [SMALL_STATE(108)] = 1487,
  [SMALL_STATE(109)] = 1492,
  [SMALL_STATE(110)] = 1497,
  [SMALL_STATE(111)] = 1502,
  [SMALL_STATE(112)] = 1507,
  [SMALL_STATE(113)] = 1512,
  [SMALL_STATE(114)] = 1517,
  [SMALL_STATE(115)] = 1522,
  [SMALL_STATE(116)] = 1529,
  [SMALL_STATE(117)] = 1534,
  [SMALL_STATE(118)] = 1539,
  [SMALL_STATE(119)] = 1544,
  [SMALL_STATE(120)] = 1549,
  [SMALL_STATE(121)] = 1556,
  [SMALL_STATE(122)] = 1563,
  [SMALL_STATE(123)] = 1570,
  [SMALL_STATE(124)] = 1577,
  [SMALL_STATE(125)] = 1584,
  [SMALL_STATE(126)] = 1591,
  [SMALL_STATE(127)] = 1596,
  [SMALL_STATE(128)] = 1601,
  [SMALL_STATE(129)] = 1606,
  [SMALL_STATE(130)] = 1611,
  [SMALL_STATE(131)] = 1616,
  [SMALL_STATE(132)] = 1623,
  [SMALL_STATE(133)] = 1630,
  [SMALL_STATE(134)] = 1637,
  [SMALL_STATE(135)] = 1642,
  [SMALL_STATE(136)] = 1647,
  [SMALL_STATE(137)] = 1652,
  [SMALL_STATE(138)] = 1657,
  [SMALL_STATE(139)] = 1662,
  [SMALL_STATE(140)] = 1667,
  [SMALL_STATE(141)] = 1672,
  [SMALL_STATE(142)] = 1679,
  [SMALL_STATE(143)] = 1684,
  [SMALL_STATE(144)] = 1689,
  [SMALL_STATE(145)] = 1694,
  [SMALL_STATE(146)] = 1699,
  [SMALL_STATE(147)] = 1706,
  [SMALL_STATE(148)] = 1713,
  [SMALL_STATE(149)] = 1718,
  [SMALL_STATE(150)] = 1723,
  [SMALL_STATE(151)] = 1728,
  [SMALL_STATE(152)] = 1733,
  [SMALL_STATE(153)] = 1740,
  [SMALL_STATE(154)] = 1745,
  [SMALL_STATE(155)] = 1752,
  [SMALL_STATE(156)] = 1757,
  [SMALL_STATE(157)] = 1762,
  [SMALL_STATE(158)] = 1767,
  [SMALL_STATE(159)] = 1772,
  [SMALL_STATE(160)] = 1777,
  [SMALL_STATE(161)] = 1782,
  [SMALL_STATE(162)] = 1787,
  [SMALL_STATE(163)] = 1792,
  [SMALL_STATE(164)] = 1797,
  [SMALL_STATE(165)] = 1804,
  [SMALL_STATE(166)] = 1809,
  [SMALL_STATE(167)] = 1814,
  [SMALL_STATE(168)] = 1821,
  [SMALL_STATE(169)] = 1826,
  [SMALL_STATE(170)] = 1833,
  [SMALL_STATE(171)] = 1838,
  [SMALL_STATE(172)] = 1843,
  [SMALL_STATE(173)] = 1848,
  [SMALL_STATE(174)] = 1853,
  [SMALL_STATE(175)] = 1858,
  [SMALL_STATE(176)] = 1863,
  [SMALL_STATE(177)] = 1868,
  [SMALL_STATE(178)] = 1873,
  [SMALL_STATE(179)] = 1878,
  [SMALL_STATE(180)] = 1883,
  [SMALL_STATE(181)] = 1890,
  [SMALL_STATE(182)] = 1895,
  [SMALL_STATE(183)] = 1900,
  [SMALL_STATE(184)] = 1905,
  [SMALL_STATE(185)] = 1910,
  [SMALL_STATE(186)] = 1915,
  [SMALL_STATE(187)] = 1920,
  [SMALL_STATE(188)] = 1925,
  [SMALL_STATE(189)] = 1930,
  [SMALL_STATE(190)] = 1935,
  [SMALL_STATE(191)] = 1940,
  [SMALL_STATE(192)] = 1945,
  [SMALL_STATE(193)] = 1950,
  [SMALL_STATE(194)] = 1955,
  [SMALL_STATE(195)] = 1960,
  [SMALL_STATE(196)] = 1965,
  [SMALL_STATE(197)] = 1970,
  [SMALL_STATE(198)] = 1975,
  [SMALL_STATE(199)] = 1980,
  [SMALL_STATE(200)] = 1985,
  [SMALL_STATE(201)] = 1992,
  [SMALL_STATE(202)] = 1999,
  [SMALL_STATE(203)] = 2006,
  [SMALL_STATE(204)] = 2011,
  [SMALL_STATE(205)] = 2016,
  [SMALL_STATE(206)] = 2021,
  [SMALL_STATE(207)] = 2026,
  [SMALL_STATE(208)] = 2031,
  [SMALL_STATE(209)] = 2036,
  [SMALL_STATE(210)] = 2041,
  [SMALL_STATE(211)] = 2048,
  [SMALL_STATE(212)] = 2053,
  [SMALL_STATE(213)] = 2060,
  [SMALL_STATE(214)] = 2067,
  [SMALL_STATE(215)] = 2074,
  [SMALL_STATE(216)] = 2081,
  [SMALL_STATE(217)] = 2088,
  [SMALL_STATE(218)] = 2095,
  [SMALL_STATE(219)] = 2102,
  [SMALL_STATE(220)] = 2109,
  [SMALL_STATE(221)] = 2116,
  [SMALL_STATE(222)] = 2121,
  [SMALL_STATE(223)] = 2128,
  [SMALL_STATE(224)] = 2135,
  [SMALL_STATE(225)] = 2142,
  [SMALL_STATE(226)] = 2147,
  [SMALL_STATE(227)] = 2154,
  [SMALL_STATE(228)] = 2161,
  [SMALL_STATE(229)] = 2168,
  [SMALL_STATE(230)] = 2173,
  [SMALL_STATE(231)] = 2178,
  [SMALL_STATE(232)] = 2183,
  [SMALL_STATE(233)] = 2188,
  [SMALL_STATE(234)] = 2193,
  [SMALL_STATE(235)] = 2198,
  [SMALL_STATE(236)] = 2203,
  [SMALL_STATE(237)] = 2207,
  [SMALL_STATE(238)] = 2211,
  [SMALL_STATE(239)] = 2215,
  [SMALL_STATE(240)] = 2219,
  [SMALL_STATE(241)] = 2223,
  [SMALL_STATE(242)] = 2227,
  [SMALL_STATE(243)] = 2231,
  [SMALL_STATE(244)] = 2235,
  [SMALL_STATE(245)] = 2239,
  [SMALL_STATE(246)] = 2243,
  [SMALL_STATE(247)] = 2247,
  [SMALL_STATE(248)] = 2251,
  [SMALL_STATE(249)] = 2255,
  [SMALL_STATE(250)] = 2259,
  [SMALL_STATE(251)] = 2263,
  [SMALL_STATE(252)] = 2267,
  [SMALL_STATE(253)] = 2271,
  [SMALL_STATE(254)] = 2275,
  [SMALL_STATE(255)] = 2279,
  [SMALL_STATE(256)] = 2283,
  [SMALL_STATE(257)] = 2287,
  [SMALL_STATE(258)] = 2291,
  [SMALL_STATE(259)] = 2295,
  [SMALL_STATE(260)] = 2299,
  [SMALL_STATE(261)] = 2303,
  [SMALL_STATE(262)] = 2307,
  [SMALL_STATE(263)] = 2311,
  [SMALL_STATE(264)] = 2315,
  [SMALL_STATE(265)] = 2319,
  [SMALL_STATE(266)] = 2323,
  [SMALL_STATE(267)] = 2327,
  [SMALL_STATE(268)] = 2331,
  [SMALL_STATE(269)] = 2335,
  [SMALL_STATE(270)] = 2339,
  [SMALL_STATE(271)] = 2343,
  [SMALL_STATE(272)] = 2347,
  [SMALL_STATE(273)] = 2351,
  [SMALL_STATE(274)] = 2355,
  [SMALL_STATE(275)] = 2359,
  [SMALL_STATE(276)] = 2363,
  [SMALL_STATE(277)] = 2367,
  [SMALL_STATE(278)] = 2371,
  [SMALL_STATE(279)] = 2375,
  [SMALL_STATE(280)] = 2379,
  [SMALL_STATE(281)] = 2383,
  [SMALL_STATE(282)] = 2387,
  [SMALL_STATE(283)] = 2391,
  [SMALL_STATE(284)] = 2395,
  [SMALL_STATE(285)] = 2399,
  [SMALL_STATE(286)] = 2403,
  [SMALL_STATE(287)] = 2407,
  [SMALL_STATE(288)] = 2411,
  [SMALL_STATE(289)] = 2415,
  [SMALL_STATE(290)] = 2419,
  [SMALL_STATE(291)] = 2423,
  [SMALL_STATE(292)] = 2427,
  [SMALL_STATE(293)] = 2431,
  [SMALL_STATE(294)] = 2435,
  [SMALL_STATE(295)] = 2439,
  [SMALL_STATE(296)] = 2443,
  [SMALL_STATE(297)] = 2447,
  [SMALL_STATE(298)] = 2451,
  [SMALL_STATE(299)] = 2455,
  [SMALL_STATE(300)] = 2459,
  [SMALL_STATE(301)] = 2463,
  [SMALL_STATE(302)] = 2467,
  [SMALL_STATE(303)] = 2471,
  [SMALL_STATE(304)] = 2475,
  [SMALL_STATE(305)] = 2479,
  [SMALL_STATE(306)] = 2483,
  [SMALL_STATE(307)] = 2487,
  [SMALL_STATE(308)] = 2491,
  [SMALL_STATE(309)] = 2495,
  [SMALL_STATE(310)] = 2499,
  [SMALL_STATE(311)] = 2503,
  [SMALL_STATE(312)] = 2507,
  [SMALL_STATE(313)] = 2511,
  [SMALL_STATE(314)] = 2515,
  [SMALL_STATE(315)] = 2519,
  [SMALL_STATE(316)] = 2523,
  [SMALL_STATE(317)] = 2527,
  [SMALL_STATE(318)] = 2531,
  [SMALL_STATE(319)] = 2535,
  [SMALL_STATE(320)] = 2539,
  [SMALL_STATE(321)] = 2543,
  [SMALL_STATE(322)] = 2547,
  [SMALL_STATE(323)] = 2551,
  [SMALL_STATE(324)] = 2555,
  [SMALL_STATE(325)] = 2559,
  [SMALL_STATE(326)] = 2563,
  [SMALL_STATE(327)] = 2567,
  [SMALL_STATE(328)] = 2571,
  [SMALL_STATE(329)] = 2575,
  [SMALL_STATE(330)] = 2579,
  [SMALL_STATE(331)] = 2583,
  [SMALL_STATE(332)] = 2587,
  [SMALL_STATE(333)] = 2591,
  [SMALL_STATE(334)] = 2595,
  [SMALL_STATE(335)] = 2599,
  [SMALL_STATE(336)] = 2603,
  [SMALL_STATE(337)] = 2607,
  [SMALL_STATE(338)] = 2611,
  [SMALL_STATE(339)] = 2615,
  [SMALL_STATE(340)] = 2619,
  [SMALL_STATE(341)] = 2623,
  [SMALL_STATE(342)] = 2627,
  [SMALL_STATE(343)] = 2631,
  [SMALL_STATE(344)] = 2635,
  [SMALL_STATE(345)] = 2639,
  [SMALL_STATE(346)] = 2643,
  [SMALL_STATE(347)] = 2647,
  [SMALL_STATE(348)] = 2651,
  [SMALL_STATE(349)] = 2655,
  [SMALL_STATE(350)] = 2659,
  [SMALL_STATE(351)] = 2663,
  [SMALL_STATE(352)] = 2667,
  [SMALL_STATE(353)] = 2671,
  [SMALL_STATE(354)] = 2675,
  [SMALL_STATE(355)] = 2679,
  [SMALL_STATE(356)] = 2683,
  [SMALL_STATE(357)] = 2687,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(121),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2), SHIFT_REPEAT(14),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(306),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(29),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(10),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(164),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_object_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_object_repeat1, 2, .production_id = 15),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(130),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(120),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3, .production_id = 19),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_signature, 3, .production_id = 9),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mfg_name, 3, .production_id = 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_name, 3, .production_id = 10),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_firmware_rev, 3, .production_id = 11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_rev, 3, .production_id = 11),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3, .production_id = 9),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, .production_id = 12),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_name_def, 3, .production_id = 13),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_object_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 4, .production_id = 14),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 5, .production_id = 16),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_header, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 6, .production_id = 17),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_object_repeat1, 4, .production_id = 16),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint8, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 6),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 18),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3, .production_id = 19),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 20),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3, .production_id = 19),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 18),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [561] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 10),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 9),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_acl_name, 3, .production_id = 13),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud_mud, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
