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
#define STATE_COUNT 345
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE = 4,
  anon_sym_COLON = 5,
  anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE = 6,
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
  sym_acl = 74,
  sym_acl_object = 75,
  sym_ace = 76,
  sym_ace_object = 77,
  sym_matches = 78,
  sym_actions = 79,
  sym_acl_name_def = 80,
  sym_policy_acl_name = 81,
  sym_matches_object = 82,
  sym_mud_matches_augment = 83,
  sym_eth_matches = 84,
  sym_ipv4_matches = 85,
  sym_ipv6_matches = 86,
  sym_tcp_matches = 87,
  sym_udp_matches = 88,
  sym_icmp_matches = 89,
  sym_controller = 90,
  sym_my_controller = 91,
  sym_manufacturer = 92,
  sym_same_manufacturer = 93,
  sym_local_networks = 94,
  sym_model = 95,
  sym_ip_header_proto = 96,
  sym_ietf_acldns = 97,
  sym_source_port = 98,
  sym_destination_port = 99,
  sym_range_or_operator = 100,
  sym_port_range = 101,
  sym_port_operator = 102,
  sym_direction_initiated = 103,
  sym_type = 104,
  sym_code = 105,
  sym_rest_of_header = 106,
  sym_uint8 = 107,
  sym_binary = 108,
  sym_forwarding_action = 109,
  sym_action = 110,
  sym_mud_version = 111,
  sym_mud_url = 112,
  sym_last_update = 113,
  sym_cache_validity = 114,
  sym_is_supported = 115,
  sym_systeminfo = 116,
  sym_from_device_policy = 117,
  sym_to_device_policy = 118,
  sym_mud_signature = 119,
  sym_mfg_name = 120,
  sym_model_name = 121,
  sym_firmware_rev = 122,
  sym_software_rev = 123,
  sym_documentation = 124,
  sym_extensions = 125,
  sym_policy = 126,
  sym_access_list = 127,
  sym_string = 128,
  sym_string_quoted_content = 129,
  sym_bool = 130,
  sym_null_valued = 131,
  sym_json_value_fallback = 132,
  sym_json_object_fallback = 133,
  sym_json_array_fallback = 134,
  sym_json_pair_fallback = 135,
  aux_sym_source_repeat1 = 136,
  aux_sym_ietf_mud_repeat1 = 137,
  aux_sym_acl_repeat1 = 138,
  aux_sym_ace_repeat1 = 139,
  aux_sym_matches_object_repeat1 = 140,
  aux_sym_mud_matches_augment_repeat1 = 141,
  aux_sym_eth_matches_repeat1 = 142,
  aux_sym_ipv4_matches_repeat1 = 143,
  aux_sym_tcp_matches_repeat1 = 144,
  aux_sym_icmp_matches_repeat1 = 145,
  aux_sym_port_range_repeat1 = 146,
  aux_sym_port_operator_repeat1 = 147,
  aux_sym_access_list_repeat1 = 148,
  aux_sym_string_quoted_content_repeat1 = 149,
  aux_sym_json_array_fallback_repeat1 = 150,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = "\"ietf-mud:mud\"",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE] = "\"ietf-access-control-list:acls\"",
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
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE] = anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE,
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
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE] = {
    .visible = true,
    .named = false,
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
  field_info = 4,
  field_mud_id = 5,
  field_name = 6,
  field_policy = 7,
  field_rev = 8,
  field_supported = 9,
  field_timestamp = 10,
  field_uri = 11,
  field_url = 12,
  field_version = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_authority] = "authority",
  [field_extensions] = "extensions",
  [field_hours] = "hours",
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mud_id, 0},
    {field_version, 2},
  [2] =
    {field_mud_id, 0},
    {field_url, 2},
  [4] =
    {field_mud_id, 0},
    {field_timestamp, 2},
  [6] =
    {field_hours, 2},
    {field_mud_id, 0},
  [8] =
    {field_mud_id, 0},
    {field_supported, 2},
  [10] =
    {field_info, 2},
    {field_mud_id, 0},
  [12] =
    {field_mud_id, 0},
    {field_policy, 2},
  [14] =
    {field_mud_id, 0},
    {field_uri, 2},
  [16] =
    {field_mud_id, 0},
    {field_name, 2},
  [18] =
    {field_mud_id, 0},
    {field_rev, 2},
  [20] =
    {field_extensions, 2},
    {field_mud_id, 0},
  [22] =
    {field_name, 2},
  [23] =
    {field_uri, 2},
  [24] =
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
      if (lookahead == ':') ADVANCE(568);
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
      if (lookahead == '"') ADVANCE(567);
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
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(603);
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
      if (lookahead == '-') ADVANCE(124);
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
      if (lookahead == '-') ADVANCE(123);
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
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(535);
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
      if (lookahead == ':') ADVANCE(568);
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
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE);
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
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 0},
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
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 43},
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
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 50},
  [118] = {.lex_state = 43},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 50},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 43},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 43},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 50},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 43},
  [140] = {.lex_state = 43},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 50},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
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
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 0},
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
  [186] = {.lex_state = 50},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 43},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 43},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 43},
  [206] = {.lex_state = 43},
  [207] = {.lex_state = 43},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 43},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 43},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
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
  [252] = {.lex_state = 50},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 43},
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
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 50},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 50},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 50},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 50},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 50},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 43},
  [312] = {.lex_state = 0},
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
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 50},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE] = ACTIONS(1),
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
    [sym_source] = STATE(281),
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
    STATE(329), 1,
      sym_string,
    STATE(34), 16,
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
    STATE(329), 1,
      sym_string,
    STATE(103), 16,
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
    STATE(329), 1,
      sym_string,
    STATE(70), 8,
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
    STATE(329), 1,
      sym_string,
    STATE(208), 8,
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
    STATE(329), 1,
      sym_string,
    STATE(55), 7,
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
    STATE(329), 1,
      sym_string,
    STATE(169), 7,
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
    STATE(51), 1,
      sym_json_value_fallback,
    STATE(60), 3,
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
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(329), 1,
      sym_string,
    STATE(44), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [366] = 6,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_json_value_fallback,
    STATE(60), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [390] = 6,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_json_value_fallback,
    STATE(60), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(79), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
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
    STATE(329), 1,
      sym_string,
    STATE(47), 4,
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
    STATE(329), 1,
      sym_string,
    STATE(45), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [470] = 7,
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
    STATE(329), 1,
      sym_string,
    STATE(146), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [495] = 7,
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
    STATE(329), 1,
      sym_string,
    STATE(134), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [520] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(329), 1,
      sym_string,
    STATE(53), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [544] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_string,
    STATE(52), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [568] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE,
    STATE(329), 1,
      sym_string,
    STATE(67), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [592] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(329), 1,
      sym_string,
    STATE(159), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [613] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(109), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE,
    STATE(329), 1,
      sym_string,
    STATE(163), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [634] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(49), 1,
      sym_json_pair_fallback,
    STATE(329), 1,
      sym_string,
  [653] = 5,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_json_pair_fallback,
    STATE(329), 1,
      sym_string,
  [669] = 5,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_json_pair_fallback,
    STATE(329), 1,
      sym_string,
  [685] = 3,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(121), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [696] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_range_or_operator,
    STATE(150), 2,
      sym_port_range,
      sym_port_operator,
  [707] = 3,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_actions,
    STATE(242), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [718] = 3,
    STATE(32), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(311), 1,
      sym_string_quoted_content,
    ACTIONS(128), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [729] = 1,
    ACTIONS(130), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [736] = 4,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_json_pair_fallback,
    STATE(329), 1,
      sym_string,
  [749] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_range_or_operator,
    STATE(150), 2,
      sym_port_range,
      sym_port_operator,
  [760] = 3,
    ACTIONS(134), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(132), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [771] = 3,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(140), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [782] = 2,
    STATE(318), 1,
      sym_action,
    ACTIONS(142), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [791] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_ietf_mud_repeat1,
  [801] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_tcp_matches_repeat1,
  [811] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_tcp_matches_repeat1,
  [821] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_tcp_matches_repeat1,
  [831] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_ipv4_matches_repeat1,
  [841] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_ipv4_matches_repeat1,
  [851] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_eth_matches_repeat1,
  [861] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_mud_matches_augment_repeat1,
  [871] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_port_operator_repeat1,
  [881] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_source_repeat1,
  [891] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_icmp_matches_repeat1,
  [901] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_tcp_matches_repeat1,
  [911] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_json_array_fallback_repeat1,
  [921] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_tcp_matches_repeat1,
  [931] = 1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [937] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_eth_matches_repeat1,
  [947] = 1,
    ACTIONS(200), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [953] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_json_array_fallback_repeat1,
  [963] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_ipv4_matches_repeat1,
  [973] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_ipv4_matches_repeat1,
  [983] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_eth_matches_repeat1,
  [993] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1003] = 2,
    STATE(161), 1,
      sym_bool,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
  [1011] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_icmp_matches_repeat1,
  [1021] = 3,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_matches_object_repeat1,
  [1031] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1041] = 1,
    ACTIONS(228), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1047] = 3,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_ipv4_matches_repeat1,
  [1057] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_source_repeat1,
  [1067] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_string,
    STATE(136), 1,
      sym_binary,
  [1077] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_icmp_matches_repeat1,
  [1087] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_port_range_repeat1,
  [1097] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_matches_object_repeat1,
  [1107] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_source_repeat1,
  [1117] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_port_operator_repeat1,
  [1127] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_ietf_mud_repeat1,
  [1137] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_matches_object_repeat1,
  [1147] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_port_range_repeat1,
  [1157] = 1,
    ACTIONS(264), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1163] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_eth_matches_repeat1,
  [1173] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_port_operator_repeat1,
  [1183] = 1,
    ACTIONS(270), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1189] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_json_array_fallback_repeat1,
  [1199] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_port_range_repeat1,
  [1209] = 3,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(276), 1,
      sym_matches_object,
    STATE(277), 1,
      sym_matches,
  [1219] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ace_repeat1,
  [1229] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ace_repeat1,
  [1239] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ace_repeat1,
  [1249] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_ace_object,
  [1259] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_access_list_repeat1,
  [1269] = 3,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_access_list_repeat1,
  [1279] = 3,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_access_list_repeat1,
  [1289] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_acl_repeat1,
  [1299] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_ietf_mud_repeat1,
  [1309] = 3,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_acl_object,
  [1319] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_acl_repeat1,
  [1329] = 1,
    ACTIONS(322), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1335] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_eth_matches_repeat1,
  [1345] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_acl_repeat1,
  [1355] = 1,
    ACTIONS(334), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1361] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1366] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1371] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1376] = 1,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1381] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1386] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1391] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1396] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1401] = 1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1406] = 1,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1411] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1416] = 1,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1421] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1426] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1431] = 2,
    ACTIONS(358), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(338), 1,
      sym_acl_name_def,
  [1438] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1443] = 2,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    STATE(330), 1,
      sym_access_list,
  [1450] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_string,
  [1457] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1467] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_acl_object,
  [1474] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1479] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1484] = 2,
    ACTIONS(372), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(374), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1491] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      sym_string,
  [1498] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1503] = 1,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1508] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1513] = 1,
    ACTIONS(380), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1518] = 2,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_acl,
  [1525] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1530] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_string,
  [1537] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1542] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1547] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1552] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(313), 1,
      sym_string,
  [1559] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
  [1566] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_string,
  [1573] = 2,
    ACTIONS(396), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(306), 1,
      sym_policy_acl_name,
  [1580] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1585] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1590] = 1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1595] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1600] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1605] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1610] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(303), 1,
      sym_string,
  [1617] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      sym_string,
  [1624] = 2,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_ace,
  [1631] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1636] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1641] = 1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1646] = 1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1651] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1656] = 1,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1661] = 2,
    ACTIONS(396), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(293), 1,
      sym_policy_acl_name,
  [1668] = 1,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1673] = 1,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1678] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1683] = 1,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1688] = 1,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1693] = 1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1698] = 1,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1703] = 1,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1708] = 1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1713] = 1,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1718] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1723] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1728] = 1,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1733] = 1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1738] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1743] = 2,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_ace_object,
  [1750] = 1,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1755] = 1,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1760] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(236), 1,
      sym_string,
  [1767] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1772] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1777] = 1,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1782] = 1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1787] = 1,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1792] = 1,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1797] = 1,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1802] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1807] = 1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1812] = 1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1817] = 1,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1822] = 1,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1827] = 1,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1832] = 1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1837] = 2,
    ACTIONS(474), 1,
      sym_number,
    STATE(137), 1,
      sym_uint8,
  [1844] = 2,
    ACTIONS(474), 1,
      sym_number,
    STATE(138), 1,
      sym_uint8,
  [1851] = 1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1856] = 1,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1861] = 1,
    ACTIONS(480), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1866] = 1,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1871] = 1,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1876] = 1,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1881] = 1,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1886] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_string,
  [1893] = 2,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(172), 1,
      sym_null_valued,
  [1900] = 2,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_null_valued,
  [1907] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_string,
  [1914] = 2,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      sym_null_valued,
  [1921] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_string,
  [1928] = 1,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1933] = 1,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1938] = 1,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1943] = 1,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1948] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
  [1955] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_string,
  [1962] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [1969] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_string,
  [1976] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
  [1983] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_string,
  [1990] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_string,
  [1997] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2002] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_string,
  [2009] = 2,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_policy,
  [2016] = 2,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_policy,
  [2023] = 1,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2028] = 1,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2033] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      sym_string,
  [2040] = 1,
    ACTIONS(506), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [2045] = 1,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2050] = 1,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2055] = 1,
    ACTIONS(512), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [2059] = 1,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [2063] = 1,
    ACTIONS(516), 1,
      anon_sym_COLON,
  [2067] = 1,
    ACTIONS(518), 1,
      sym_number,
  [2071] = 1,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [2075] = 1,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [2079] = 1,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [2083] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [2087] = 1,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [2091] = 1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [2095] = 1,
    ACTIONS(532), 1,
      anon_sym_COLON,
  [2099] = 1,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [2103] = 1,
    ACTIONS(536), 1,
      anon_sym_COLON,
  [2107] = 1,
    ACTIONS(538), 1,
      anon_sym_COLON,
  [2111] = 1,
    ACTIONS(540), 1,
      sym_number,
  [2115] = 1,
    ACTIONS(542), 1,
      anon_sym_COMMA,
  [2119] = 1,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [2123] = 1,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
  [2127] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2131] = 1,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [2135] = 1,
    ACTIONS(552), 1,
      anon_sym_COLON,
  [2139] = 1,
    ACTIONS(554), 1,
      anon_sym_COLON,
  [2143] = 1,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [2147] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [2151] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
  [2155] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [2159] = 1,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
  [2163] = 1,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
  [2167] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [2171] = 1,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [2175] = 1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
  [2179] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [2183] = 1,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
  [2187] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [2191] = 1,
    ACTIONS(580), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [2195] = 1,
    ACTIONS(582), 1,
      anon_sym_COLON,
  [2199] = 1,
    ACTIONS(584), 1,
      sym_number,
  [2203] = 1,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
  [2207] = 1,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [2211] = 1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [2215] = 1,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [2219] = 1,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [2223] = 1,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [2227] = 1,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [2231] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [2235] = 1,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [2239] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [2243] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [2247] = 1,
    ACTIONS(608), 1,
      anon_sym_COLON,
  [2251] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [2255] = 1,
    ACTIONS(612), 1,
      anon_sym_COLON,
  [2259] = 1,
    ACTIONS(614), 1,
      anon_sym_COLON,
  [2263] = 1,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [2267] = 1,
    ACTIONS(618), 1,
      anon_sym_COLON,
  [2271] = 1,
    ACTIONS(620), 1,
      anon_sym_COLON,
  [2275] = 1,
    ACTIONS(622), 1,
      anon_sym_COMMA,
  [2279] = 1,
    ACTIONS(624), 1,
      anon_sym_COLON,
  [2283] = 1,
    ACTIONS(626), 1,
      anon_sym_COLON,
  [2287] = 1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [2291] = 1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [2295] = 1,
    ACTIONS(632), 1,
      anon_sym_null,
  [2299] = 1,
    ACTIONS(634), 1,
      anon_sym_COLON,
  [2303] = 1,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
  [2307] = 1,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
  [2311] = 1,
    ACTIONS(640), 1,
      anon_sym_COLON,
  [2315] = 1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [2319] = 1,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
  [2323] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [2327] = 1,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
  [2331] = 1,
    ACTIONS(650), 1,
      anon_sym_COLON,
  [2335] = 1,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
  [2339] = 1,
    ACTIONS(654), 1,
      anon_sym_COLON,
  [2343] = 1,
    ACTIONS(656), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [2347] = 1,
    ACTIONS(658), 1,
      anon_sym_LBRACK,
  [2351] = 1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [2355] = 1,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [2359] = 1,
    ACTIONS(664), 1,
      anon_sym_COLON,
  [2363] = 1,
    ACTIONS(666), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [2367] = 1,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [2371] = 1,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [2375] = 1,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [2379] = 1,
    ACTIONS(674), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [2383] = 1,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [2387] = 1,
    ACTIONS(678), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [2391] = 1,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
  [2395] = 1,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
  [2399] = 1,
    ACTIONS(684), 1,
      anon_sym_COLON,
  [2403] = 1,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
  [2407] = 1,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [2411] = 1,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [2415] = 1,
    ACTIONS(692), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [2419] = 1,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [2423] = 1,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
  [2427] = 1,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
  [2431] = 1,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
  [2435] = 1,
    ACTIONS(702), 1,
      anon_sym_COMMA,
  [2439] = 1,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [2443] = 1,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [2447] = 1,
    ACTIONS(708), 1,
      anon_sym_COLON,
  [2451] = 1,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
  [2455] = 1,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [2459] = 1,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
  [2463] = 1,
    ACTIONS(716), 1,
      anon_sym_COLON,
  [2467] = 1,
    ACTIONS(718), 1,
      sym_number,
  [2471] = 1,
    ACTIONS(720), 1,
      anon_sym_COMMA,
  [2475] = 1,
    ACTIONS(722), 1,
      sym_number,
  [2479] = 1,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [2483] = 1,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [2487] = 1,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
  [2491] = 1,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
  [2495] = 1,
    ACTIONS(732), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [2499] = 1,
    ACTIONS(734), 1,
      anon_sym_COLON,
  [2503] = 1,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
  [2507] = 1,
    ACTIONS(738), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [2511] = 1,
    ACTIONS(740), 1,
      anon_sym_COLON,
  [2515] = 1,
    ACTIONS(742), 1,
      anon_sym_COLON,
  [2519] = 1,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [2523] = 1,
    ACTIONS(746), 1,
      anon_sym_COLON,
  [2527] = 1,
    ACTIONS(748), 1,
      anon_sym_COLON,
  [2531] = 1,
    ACTIONS(750), 1,
      anon_sym_COLON,
  [2535] = 1,
    ACTIONS(752), 1,
      anon_sym_COMMA,
  [2539] = 1,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
  [2543] = 1,
    ACTIONS(756), 1,
      sym_number,
  [2547] = 1,
    ACTIONS(758), 1,
      anon_sym_COLON,
  [2551] = 1,
    ACTIONS(760), 1,
      sym_number,
  [2555] = 1,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [2559] = 1,
    ACTIONS(764), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 414,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 669,
  [SMALL_STATE(24)] = 685,
  [SMALL_STATE(25)] = 696,
  [SMALL_STATE(26)] = 707,
  [SMALL_STATE(27)] = 718,
  [SMALL_STATE(28)] = 729,
  [SMALL_STATE(29)] = 736,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 760,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 791,
  [SMALL_STATE(35)] = 801,
  [SMALL_STATE(36)] = 811,
  [SMALL_STATE(37)] = 821,
  [SMALL_STATE(38)] = 831,
  [SMALL_STATE(39)] = 841,
  [SMALL_STATE(40)] = 851,
  [SMALL_STATE(41)] = 861,
  [SMALL_STATE(42)] = 871,
  [SMALL_STATE(43)] = 881,
  [SMALL_STATE(44)] = 891,
  [SMALL_STATE(45)] = 901,
  [SMALL_STATE(46)] = 911,
  [SMALL_STATE(47)] = 921,
  [SMALL_STATE(48)] = 931,
  [SMALL_STATE(49)] = 937,
  [SMALL_STATE(50)] = 947,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 963,
  [SMALL_STATE(53)] = 973,
  [SMALL_STATE(54)] = 983,
  [SMALL_STATE(55)] = 993,
  [SMALL_STATE(56)] = 1003,
  [SMALL_STATE(57)] = 1011,
  [SMALL_STATE(58)] = 1021,
  [SMALL_STATE(59)] = 1031,
  [SMALL_STATE(60)] = 1041,
  [SMALL_STATE(61)] = 1047,
  [SMALL_STATE(62)] = 1057,
  [SMALL_STATE(63)] = 1067,
  [SMALL_STATE(64)] = 1077,
  [SMALL_STATE(65)] = 1087,
  [SMALL_STATE(66)] = 1097,
  [SMALL_STATE(67)] = 1107,
  [SMALL_STATE(68)] = 1117,
  [SMALL_STATE(69)] = 1127,
  [SMALL_STATE(70)] = 1137,
  [SMALL_STATE(71)] = 1147,
  [SMALL_STATE(72)] = 1157,
  [SMALL_STATE(73)] = 1163,
  [SMALL_STATE(74)] = 1173,
  [SMALL_STATE(75)] = 1183,
  [SMALL_STATE(76)] = 1189,
  [SMALL_STATE(77)] = 1199,
  [SMALL_STATE(78)] = 1209,
  [SMALL_STATE(79)] = 1219,
  [SMALL_STATE(80)] = 1229,
  [SMALL_STATE(81)] = 1239,
  [SMALL_STATE(82)] = 1249,
  [SMALL_STATE(83)] = 1259,
  [SMALL_STATE(84)] = 1269,
  [SMALL_STATE(85)] = 1279,
  [SMALL_STATE(86)] = 1289,
  [SMALL_STATE(87)] = 1299,
  [SMALL_STATE(88)] = 1309,
  [SMALL_STATE(89)] = 1319,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1335,
  [SMALL_STATE(92)] = 1345,
  [SMALL_STATE(93)] = 1355,
  [SMALL_STATE(94)] = 1361,
  [SMALL_STATE(95)] = 1366,
  [SMALL_STATE(96)] = 1371,
  [SMALL_STATE(97)] = 1376,
  [SMALL_STATE(98)] = 1381,
  [SMALL_STATE(99)] = 1386,
  [SMALL_STATE(100)] = 1391,
  [SMALL_STATE(101)] = 1396,
  [SMALL_STATE(102)] = 1401,
  [SMALL_STATE(103)] = 1406,
  [SMALL_STATE(104)] = 1411,
  [SMALL_STATE(105)] = 1416,
  [SMALL_STATE(106)] = 1421,
  [SMALL_STATE(107)] = 1426,
  [SMALL_STATE(108)] = 1431,
  [SMALL_STATE(109)] = 1438,
  [SMALL_STATE(110)] = 1443,
  [SMALL_STATE(111)] = 1450,
  [SMALL_STATE(112)] = 1457,
  [SMALL_STATE(113)] = 1462,
  [SMALL_STATE(114)] = 1467,
  [SMALL_STATE(115)] = 1474,
  [SMALL_STATE(116)] = 1479,
  [SMALL_STATE(117)] = 1484,
  [SMALL_STATE(118)] = 1491,
  [SMALL_STATE(119)] = 1498,
  [SMALL_STATE(120)] = 1503,
  [SMALL_STATE(121)] = 1508,
  [SMALL_STATE(122)] = 1513,
  [SMALL_STATE(123)] = 1518,
  [SMALL_STATE(124)] = 1525,
  [SMALL_STATE(125)] = 1530,
  [SMALL_STATE(126)] = 1537,
  [SMALL_STATE(127)] = 1542,
  [SMALL_STATE(128)] = 1547,
  [SMALL_STATE(129)] = 1552,
  [SMALL_STATE(130)] = 1559,
  [SMALL_STATE(131)] = 1566,
  [SMALL_STATE(132)] = 1573,
  [SMALL_STATE(133)] = 1580,
  [SMALL_STATE(134)] = 1585,
  [SMALL_STATE(135)] = 1590,
  [SMALL_STATE(136)] = 1595,
  [SMALL_STATE(137)] = 1600,
  [SMALL_STATE(138)] = 1605,
  [SMALL_STATE(139)] = 1610,
  [SMALL_STATE(140)] = 1617,
  [SMALL_STATE(141)] = 1624,
  [SMALL_STATE(142)] = 1631,
  [SMALL_STATE(143)] = 1636,
  [SMALL_STATE(144)] = 1641,
  [SMALL_STATE(145)] = 1646,
  [SMALL_STATE(146)] = 1651,
  [SMALL_STATE(147)] = 1656,
  [SMALL_STATE(148)] = 1661,
  [SMALL_STATE(149)] = 1668,
  [SMALL_STATE(150)] = 1673,
  [SMALL_STATE(151)] = 1678,
  [SMALL_STATE(152)] = 1683,
  [SMALL_STATE(153)] = 1688,
  [SMALL_STATE(154)] = 1693,
  [SMALL_STATE(155)] = 1698,
  [SMALL_STATE(156)] = 1703,
  [SMALL_STATE(157)] = 1708,
  [SMALL_STATE(158)] = 1713,
  [SMALL_STATE(159)] = 1718,
  [SMALL_STATE(160)] = 1723,
  [SMALL_STATE(161)] = 1728,
  [SMALL_STATE(162)] = 1733,
  [SMALL_STATE(163)] = 1738,
  [SMALL_STATE(164)] = 1743,
  [SMALL_STATE(165)] = 1750,
  [SMALL_STATE(166)] = 1755,
  [SMALL_STATE(167)] = 1760,
  [SMALL_STATE(168)] = 1767,
  [SMALL_STATE(169)] = 1772,
  [SMALL_STATE(170)] = 1777,
  [SMALL_STATE(171)] = 1782,
  [SMALL_STATE(172)] = 1787,
  [SMALL_STATE(173)] = 1792,
  [SMALL_STATE(174)] = 1797,
  [SMALL_STATE(175)] = 1802,
  [SMALL_STATE(176)] = 1807,
  [SMALL_STATE(177)] = 1812,
  [SMALL_STATE(178)] = 1817,
  [SMALL_STATE(179)] = 1822,
  [SMALL_STATE(180)] = 1827,
  [SMALL_STATE(181)] = 1832,
  [SMALL_STATE(182)] = 1837,
  [SMALL_STATE(183)] = 1844,
  [SMALL_STATE(184)] = 1851,
  [SMALL_STATE(185)] = 1856,
  [SMALL_STATE(186)] = 1861,
  [SMALL_STATE(187)] = 1866,
  [SMALL_STATE(188)] = 1871,
  [SMALL_STATE(189)] = 1876,
  [SMALL_STATE(190)] = 1881,
  [SMALL_STATE(191)] = 1886,
  [SMALL_STATE(192)] = 1893,
  [SMALL_STATE(193)] = 1900,
  [SMALL_STATE(194)] = 1907,
  [SMALL_STATE(195)] = 1914,
  [SMALL_STATE(196)] = 1921,
  [SMALL_STATE(197)] = 1928,
  [SMALL_STATE(198)] = 1933,
  [SMALL_STATE(199)] = 1938,
  [SMALL_STATE(200)] = 1943,
  [SMALL_STATE(201)] = 1948,
  [SMALL_STATE(202)] = 1955,
  [SMALL_STATE(203)] = 1962,
  [SMALL_STATE(204)] = 1969,
  [SMALL_STATE(205)] = 1976,
  [SMALL_STATE(206)] = 1983,
  [SMALL_STATE(207)] = 1990,
  [SMALL_STATE(208)] = 1997,
  [SMALL_STATE(209)] = 2002,
  [SMALL_STATE(210)] = 2009,
  [SMALL_STATE(211)] = 2016,
  [SMALL_STATE(212)] = 2023,
  [SMALL_STATE(213)] = 2028,
  [SMALL_STATE(214)] = 2033,
  [SMALL_STATE(215)] = 2040,
  [SMALL_STATE(216)] = 2045,
  [SMALL_STATE(217)] = 2050,
  [SMALL_STATE(218)] = 2055,
  [SMALL_STATE(219)] = 2059,
  [SMALL_STATE(220)] = 2063,
  [SMALL_STATE(221)] = 2067,
  [SMALL_STATE(222)] = 2071,
  [SMALL_STATE(223)] = 2075,
  [SMALL_STATE(224)] = 2079,
  [SMALL_STATE(225)] = 2083,
  [SMALL_STATE(226)] = 2087,
  [SMALL_STATE(227)] = 2091,
  [SMALL_STATE(228)] = 2095,
  [SMALL_STATE(229)] = 2099,
  [SMALL_STATE(230)] = 2103,
  [SMALL_STATE(231)] = 2107,
  [SMALL_STATE(232)] = 2111,
  [SMALL_STATE(233)] = 2115,
  [SMALL_STATE(234)] = 2119,
  [SMALL_STATE(235)] = 2123,
  [SMALL_STATE(236)] = 2127,
  [SMALL_STATE(237)] = 2131,
  [SMALL_STATE(238)] = 2135,
  [SMALL_STATE(239)] = 2139,
  [SMALL_STATE(240)] = 2143,
  [SMALL_STATE(241)] = 2147,
  [SMALL_STATE(242)] = 2151,
  [SMALL_STATE(243)] = 2155,
  [SMALL_STATE(244)] = 2159,
  [SMALL_STATE(245)] = 2163,
  [SMALL_STATE(246)] = 2167,
  [SMALL_STATE(247)] = 2171,
  [SMALL_STATE(248)] = 2175,
  [SMALL_STATE(249)] = 2179,
  [SMALL_STATE(250)] = 2183,
  [SMALL_STATE(251)] = 2187,
  [SMALL_STATE(252)] = 2191,
  [SMALL_STATE(253)] = 2195,
  [SMALL_STATE(254)] = 2199,
  [SMALL_STATE(255)] = 2203,
  [SMALL_STATE(256)] = 2207,
  [SMALL_STATE(257)] = 2211,
  [SMALL_STATE(258)] = 2215,
  [SMALL_STATE(259)] = 2219,
  [SMALL_STATE(260)] = 2223,
  [SMALL_STATE(261)] = 2227,
  [SMALL_STATE(262)] = 2231,
  [SMALL_STATE(263)] = 2235,
  [SMALL_STATE(264)] = 2239,
  [SMALL_STATE(265)] = 2243,
  [SMALL_STATE(266)] = 2247,
  [SMALL_STATE(267)] = 2251,
  [SMALL_STATE(268)] = 2255,
  [SMALL_STATE(269)] = 2259,
  [SMALL_STATE(270)] = 2263,
  [SMALL_STATE(271)] = 2267,
  [SMALL_STATE(272)] = 2271,
  [SMALL_STATE(273)] = 2275,
  [SMALL_STATE(274)] = 2279,
  [SMALL_STATE(275)] = 2283,
  [SMALL_STATE(276)] = 2287,
  [SMALL_STATE(277)] = 2291,
  [SMALL_STATE(278)] = 2295,
  [SMALL_STATE(279)] = 2299,
  [SMALL_STATE(280)] = 2303,
  [SMALL_STATE(281)] = 2307,
  [SMALL_STATE(282)] = 2311,
  [SMALL_STATE(283)] = 2315,
  [SMALL_STATE(284)] = 2319,
  [SMALL_STATE(285)] = 2323,
  [SMALL_STATE(286)] = 2327,
  [SMALL_STATE(287)] = 2331,
  [SMALL_STATE(288)] = 2335,
  [SMALL_STATE(289)] = 2339,
  [SMALL_STATE(290)] = 2343,
  [SMALL_STATE(291)] = 2347,
  [SMALL_STATE(292)] = 2351,
  [SMALL_STATE(293)] = 2355,
  [SMALL_STATE(294)] = 2359,
  [SMALL_STATE(295)] = 2363,
  [SMALL_STATE(296)] = 2367,
  [SMALL_STATE(297)] = 2371,
  [SMALL_STATE(298)] = 2375,
  [SMALL_STATE(299)] = 2379,
  [SMALL_STATE(300)] = 2383,
  [SMALL_STATE(301)] = 2387,
  [SMALL_STATE(302)] = 2391,
  [SMALL_STATE(303)] = 2395,
  [SMALL_STATE(304)] = 2399,
  [SMALL_STATE(305)] = 2403,
  [SMALL_STATE(306)] = 2407,
  [SMALL_STATE(307)] = 2411,
  [SMALL_STATE(308)] = 2415,
  [SMALL_STATE(309)] = 2419,
  [SMALL_STATE(310)] = 2423,
  [SMALL_STATE(311)] = 2427,
  [SMALL_STATE(312)] = 2431,
  [SMALL_STATE(313)] = 2435,
  [SMALL_STATE(314)] = 2439,
  [SMALL_STATE(315)] = 2443,
  [SMALL_STATE(316)] = 2447,
  [SMALL_STATE(317)] = 2451,
  [SMALL_STATE(318)] = 2455,
  [SMALL_STATE(319)] = 2459,
  [SMALL_STATE(320)] = 2463,
  [SMALL_STATE(321)] = 2467,
  [SMALL_STATE(322)] = 2471,
  [SMALL_STATE(323)] = 2475,
  [SMALL_STATE(324)] = 2479,
  [SMALL_STATE(325)] = 2483,
  [SMALL_STATE(326)] = 2487,
  [SMALL_STATE(327)] = 2491,
  [SMALL_STATE(328)] = 2495,
  [SMALL_STATE(329)] = 2499,
  [SMALL_STATE(330)] = 2503,
  [SMALL_STATE(331)] = 2507,
  [SMALL_STATE(332)] = 2511,
  [SMALL_STATE(333)] = 2515,
  [SMALL_STATE(334)] = 2519,
  [SMALL_STATE(335)] = 2523,
  [SMALL_STATE(336)] = 2527,
  [SMALL_STATE(337)] = 2531,
  [SMALL_STATE(338)] = 2535,
  [SMALL_STATE(339)] = 2539,
  [SMALL_STATE(340)] = 2543,
  [SMALL_STATE(341)] = 2547,
  [SMALL_STATE(342)] = 2551,
  [SMALL_STATE(343)] = 2555,
  [SMALL_STATE(344)] = 2559,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(117),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(10),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(7),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(19),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2), SHIFT_REPEAT(15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(122),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(164),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(302),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(29),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(114),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_signature, 3, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mfg_name, 3, .production_id = 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_name, 3, .production_id = 9),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_firmware_rev, 3, .production_id = 10),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_rev, 3, .production_id = 10),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3, .production_id = 8),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, .production_id = 11),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_header, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint8, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 14),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 13),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [638] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 10),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 9),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_acl_name, 3, .production_id = 12),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_name_def, 3, .production_id = 12),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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
