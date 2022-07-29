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
#define STATE_COUNT 324
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 48,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 49,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 50,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 51,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 52,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 53,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 54,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 55,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 56,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 57,
  aux_sym_string_quoted_content_token1 = 58,
  sym__escape_sequence = 59,
  sym_number = 60,
  anon_sym_true = 61,
  anon_sym_false = 62,
  anon_sym_null = 63,
  sym_source = 64,
  sym_ietf_mud = 65,
  sym_ietf_acls = 66,
  sym_acl = 67,
  sym_acl_object = 68,
  sym_ace = 69,
  sym_ace_object = 70,
  sym_matches = 71,
  sym_actions = 72,
  sym_acl_name_def = 73,
  sym_policy_acl_name = 74,
  sym_matches_object = 75,
  sym_mud_matches_augment = 76,
  sym_eth_matches = 77,
  sym_ipv4_matches = 78,
  sym_ipv6_matches = 79,
  sym_tcp_matches = 80,
  sym_udp_matches = 81,
  sym_icmp_matches = 82,
  sym_controller = 83,
  sym_my_controller = 84,
  sym_manufacturer = 85,
  sym_same_manufacturer = 86,
  sym_local_networks = 87,
  sym_model = 88,
  sym_ip_header_proto = 89,
  sym_ietf_acldns = 90,
  sym_source_port = 91,
  sym_destination_port = 92,
  sym_range_or_operator = 93,
  sym_port_range = 94,
  sym_port_operator = 95,
  sym_direction_initiated = 96,
  sym_type = 97,
  sym_code = 98,
  sym_rest_of_header = 99,
  sym_uint8 = 100,
  sym_binary = 101,
  sym_forwarding_action = 102,
  sym_action = 103,
  sym_mud_version = 104,
  sym_mud_url = 105,
  sym_last_update = 106,
  sym_cache_validity = 107,
  sym_is_supported = 108,
  sym_systeminfo = 109,
  sym_from_device_policy = 110,
  sym_to_device_policy = 111,
  sym_policy = 112,
  sym_access_list = 113,
  sym_string = 114,
  sym_string_quoted_content = 115,
  sym_bool = 116,
  sym_null_valued = 117,
  sym_json_value_fallback = 118,
  sym_json_object_fallback = 119,
  sym_json_array_fallback = 120,
  sym_json_pair_fallback = 121,
  aux_sym_source_repeat1 = 122,
  aux_sym_ietf_mud_repeat1 = 123,
  aux_sym_acl_repeat1 = 124,
  aux_sym_ace_repeat1 = 125,
  aux_sym_matches_object_repeat1 = 126,
  aux_sym_mud_matches_augment_repeat1 = 127,
  aux_sym_eth_matches_repeat1 = 128,
  aux_sym_ipv4_matches_repeat1 = 129,
  aux_sym_tcp_matches_repeat1 = 130,
  aux_sym_icmp_matches_repeat1 = 131,
  aux_sym_port_range_repeat1 = 132,
  aux_sym_port_operator_repeat1 = 133,
  aux_sym_access_list_repeat1 = 134,
  aux_sym_string_quoted_content_repeat1 = 135,
  aux_sym_json_array_fallback_repeat1 = 136,
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
  [anon_sym_DQUOTEmud_DASHversion_DQUOTE] = "\"mud-version\"",
  [anon_sym_DQUOTEmud_DASHurl_DQUOTE] = "\"mud-url\"",
  [anon_sym_DQUOTElast_DASHupdate_DQUOTE] = "\"last-update\"",
  [anon_sym_DQUOTEcache_DASHvalidity_DQUOTE] = "\"cache-validity\"",
  [anon_sym_DQUOTEis_DASHsupported_DQUOTE] = "\"is-supported\"",
  [anon_sym_DQUOTEsysteminfo_DQUOTE] = "\"systeminfo\"",
  [anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE] = "\"from-device-policy\"",
  [anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE] = "\"to-device-policy\"",
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
  [anon_sym_DQUOTEmud_DASHversion_DQUOTE] = anon_sym_DQUOTEmud_DASHversion_DQUOTE,
  [anon_sym_DQUOTEmud_DASHurl_DQUOTE] = anon_sym_DQUOTEmud_DASHurl_DQUOTE,
  [anon_sym_DQUOTElast_DASHupdate_DQUOTE] = anon_sym_DQUOTElast_DASHupdate_DQUOTE,
  [anon_sym_DQUOTEcache_DASHvalidity_DQUOTE] = anon_sym_DQUOTEcache_DASHvalidity_DQUOTE,
  [anon_sym_DQUOTEis_DASHsupported_DQUOTE] = anon_sym_DQUOTEis_DASHsupported_DQUOTE,
  [anon_sym_DQUOTEsysteminfo_DQUOTE] = anon_sym_DQUOTEsysteminfo_DQUOTE,
  [anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE] = anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE,
  [anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE] = anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE,
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
  [anon_sym_DQUOTEmud_DASHversion_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEmud_DASHurl_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTElast_DASHupdate_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEcache_DASHvalidity_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEis_DASHsupported_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEsysteminfo_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE] = {
    .visible = true,
    .named = false,
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
  field_hours = 2,
  field_info = 3,
  field_name = 4,
  field_policy = 5,
  field_supported = 6,
  field_timestamp = 7,
  field_uri = 8,
  field_url = 9,
  field_version = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_authority] = "authority",
  [field_hours] = "hours",
  [field_info] = "info",
  [field_name] = "name",
  [field_policy] = "policy",
  [field_supported] = "supported",
  [field_timestamp] = "timestamp",
  [field_uri] = "uri",
  [field_url] = "url",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 2},
  [1] =
    {field_url, 2},
  [2] =
    {field_timestamp, 2},
  [3] =
    {field_hours, 2},
  [4] =
    {field_supported, 2},
  [5] =
    {field_info, 2},
  [6] =
    {field_policy, 2},
  [7] =
    {field_name, 2},
  [8] =
    {field_uri, 2},
  [9] =
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
      if (eof) ADVANCE(486);
      if (lookahead == '"') ADVANCE(519);
      if (lookahead == ',') ADVANCE(488);
      if (lookahead == ':') ADVANCE(491);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(484);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\\') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(502);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(505);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(506);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(537);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(507);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(503);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(504);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(496);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(513);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(544);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(514);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(508);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(539);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(548);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(545);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(543);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(528);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(490);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(547);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(510);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(509);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(546);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(512);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(538);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(529);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(550);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(511);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(549);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(534);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(492);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(520);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(524);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(521);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(526);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(527);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(493);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(497);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(541);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(499);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(533);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(540);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(542);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(501);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(500);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(532);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(535);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(530);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(531);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(536);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(551);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(462);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(472);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(460);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(266);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(288);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == '4') ADVANCE(7);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(163);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(515);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(282);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 224:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 228:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 229:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 231:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 232:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 259:
      if (lookahead == 'j') ADVANCE(206);
      END_STATE();
    case 260:
      if (lookahead == 'k') ADVANCE(408);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 281:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(466);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(364);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 470:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 471:
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 472:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 473:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 474:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 475:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 476:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 477:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 478:
      if (lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 479:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 480:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 481:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 482:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 483:
      if (lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 484:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 485:
      if (eof) ADVANCE(486);
      if (lookahead == '"') ADVANCE(519);
      if (lookahead == ',') ADVANCE(488);
      if (lookahead == ':') ADVANCE(491);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DQUOTEeth_DQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv4_DQUOTE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv6_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTEtcp_DQUOTE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTEudp_DQUOTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTEicmp_DQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DQUOTEcontroller_DQUOTE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DQUOTEmy_DASHcontroller_DQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTEmanufacturer_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DQUOTElocal_DASHnetworks_DQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DQUOTEmodel_DQUOTE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DQUOTEprotocol_DQUOTE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHacldns_COLON);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_src_DASHdnsname);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_dst_DASHdnsname);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(370);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DQUOTEsource_DASHport_DQUOTE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DQUOTEdestination_DASHport_DQUOTE);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DQUOTElower_DASHport_DQUOTE);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DQUOTEupper_DASHport_DQUOTE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DQUOTEoperator_DQUOTE);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DQUOTEport_DQUOTE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DQUOTE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DQUOTE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DQUOTEcode_DQUOTE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
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
  [63] = {.lex_state = 35},
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
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 42},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 42},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 42},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 42},
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
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 35},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 35},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 35},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 35},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 42},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 35},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 42},
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
  [264] = {.lex_state = 42},
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
  [275] = {.lex_state = 42},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 42},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 42},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 42},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
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
  [323] = {.lex_state = 42},
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
    [anon_sym_DQUOTEmud_DASHversion_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmud_DASHurl_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTElast_DASHupdate_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEcache_DASHvalidity_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEis_DASHsupported_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEsysteminfo_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(263),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTEmud_DASHversion_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTEmud_DASHurl_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTElast_DASHupdate_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTEcache_DASHvalidity_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTEis_DASHsupported_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTEsysteminfo_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    STATE(308), 1,
      sym_string,
    STATE(40), 9,
      sym_mud_version,
      sym_mud_url,
      sym_last_update,
      sym_cache_validity,
      sym_is_supported,
      sym_systeminfo,
      sym_from_device_policy,
      sym_to_device_policy,
      sym_json_pair_fallback,
  [48] = 12,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTEmud_DASHversion_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTEmud_DASHurl_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTElast_DASHupdate_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTEcache_DASHvalidity_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTEis_DASHsupported_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTEsysteminfo_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    STATE(308), 1,
      sym_string,
    STATE(181), 9,
      sym_mud_version,
      sym_mud_url,
      sym_last_update,
      sym_cache_validity,
      sym_is_supported,
      sym_systeminfo,
      sym_from_device_policy,
      sym_to_device_policy,
      sym_json_pair_fallback,
  [93] = 12,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTEeth_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTEipv4_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTEipv6_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTEtcp_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTEudp_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTEicmp_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(80), 8,
      sym_mud_matches_augment,
      sym_eth_matches,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [137] = 11,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTEeth_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTEipv4_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTEipv6_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTEtcp_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTEudp_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTEicmp_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(187), 8,
      sym_mud_matches_augment,
      sym_eth_matches,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [178] = 11,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_DQUOTEcontroller_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTEmanufacturer_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEmodel_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(64), 7,
      sym_controller,
      sym_my_controller,
      sym_manufacturer,
      sym_same_manufacturer,
      sym_local_networks,
      sym_model,
      sym_json_pair_fallback,
  [218] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTEcontroller_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTEmanufacturer_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEmodel_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(153), 7,
      sym_controller,
      sym_my_controller,
      sym_manufacturer,
      sym_same_manufacturer,
      sym_local_networks,
      sym_model,
      sym_json_pair_fallback,
  [255] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_json_value_fallback,
    STATE(71), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [282] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(50), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [310] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(51), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [338] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      sym_json_value_fallback,
    STATE(71), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [362] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_json_value_fallback,
    STATE(71), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [386] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_string,
    STATE(52), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [414] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(69), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(120), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [439] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(131), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [464] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(69), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [488] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(308), 1,
      sym_string,
    STATE(54), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [512] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(93), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_string,
    STATE(34), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [536] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(87), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONacls_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(149), 3,
      sym_ietf_mud,
      sym_ietf_acls,
      sym_json_pair_fallback,
  [557] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(93), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(308), 1,
      sym_string,
    STATE(144), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [578] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(42), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [597] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [613] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [629] = 3,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_range_or_operator,
    STATE(135), 2,
      sym_port_range,
      sym_port_operator,
  [640] = 3,
    ACTIONS(109), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(107), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [651] = 1,
    ACTIONS(113), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [658] = 3,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(117), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [669] = 3,
    STATE(32), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(290), 1,
      sym_string_quoted_content,
    ACTIONS(120), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [680] = 2,
    STATE(297), 1,
      sym_action,
    ACTIONS(122), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [689] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_actions,
    STATE(221), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [700] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [713] = 3,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(128), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [724] = 3,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_range_or_operator,
    STATE(135), 2,
      sym_port_range,
      sym_port_operator,
  [735] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_ipv4_matches_repeat1,
  [745] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_eth_matches_repeat1,
  [755] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_tcp_matches_repeat1,
  [765] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_tcp_matches_repeat1,
  [775] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_ipv4_matches_repeat1,
  [785] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_ipv4_matches_repeat1,
  [795] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_ietf_mud_repeat1,
  [805] = 1,
    ACTIONS(152), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [811] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_eth_matches_repeat1,
  [821] = 1,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [827] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_json_array_fallback_repeat1,
  [837] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [847] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_mud_matches_augment_repeat1,
  [857] = 3,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_port_operator_repeat1,
  [867] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_tcp_matches_repeat1,
  [877] = 2,
    STATE(186), 1,
      sym_bool,
    ACTIONS(178), 2,
      anon_sym_true,
      anon_sym_false,
  [885] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_icmp_matches_repeat1,
  [895] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_tcp_matches_repeat1,
  [905] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_tcp_matches_repeat1,
  [915] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_ipv4_matches_repeat1,
  [925] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_ipv4_matches_repeat1,
  [935] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_ietf_mud_repeat1,
  [945] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [955] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [965] = 1,
    ACTIONS(206), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [971] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [981] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_icmp_matches_repeat1,
  [991] = 1,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [997] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_json_array_fallback_repeat1,
  [1007] = 3,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_string,
    STATE(124), 1,
      sym_binary,
  [1017] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1027] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_icmp_matches_repeat1,
  [1037] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_matches_object_repeat1,
  [1047] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1057] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_port_range_repeat1,
  [1067] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_source_repeat1,
  [1077] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_port_operator_repeat1,
  [1087] = 1,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1093] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_access_list_repeat1,
  [1103] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_port_range_repeat1,
  [1113] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_matches_object_repeat1,
  [1123] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_ietf_mud_repeat1,
  [1133] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_acl_object,
  [1143] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_port_operator_repeat1,
  [1153] = 1,
    ACTIONS(266), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1159] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [1169] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_matches_object_repeat1,
  [1179] = 1,
    ACTIONS(275), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1185] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_json_array_fallback_repeat1,
  [1195] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_port_range_repeat1,
  [1205] = 3,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_matches_object,
    STATE(261), 1,
      sym_matches,
  [1215] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_ace_repeat1,
  [1225] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_acl_repeat1,
  [1235] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_ace_repeat1,
  [1245] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_ace_repeat1,
  [1255] = 3,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_ace_object,
  [1265] = 3,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_access_list_repeat1,
  [1275] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_access_list_repeat1,
  [1285] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_acl_repeat1,
  [1295] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_acl_repeat1,
  [1305] = 1,
    ACTIONS(322), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1310] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1315] = 2,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_acl_object,
  [1322] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1327] = 1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1332] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_string,
  [1339] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(310), 1,
      sym_string,
  [1346] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1351] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1356] = 1,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1361] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1366] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1371] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1376] = 2,
    ACTIONS(340), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1383] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1388] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1393] = 1,
    ACTIONS(348), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1398] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(306), 1,
      sym_string,
  [1405] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
  [1412] = 2,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_acl,
  [1419] = 2,
    ACTIONS(356), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(298), 1,
      sym_policy_acl_name,
  [1426] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_string,
  [1433] = 1,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1438] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1443] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_string,
  [1450] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1455] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1460] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_string,
  [1467] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(283), 1,
      sym_ace,
  [1474] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1479] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1484] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1489] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1494] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1499] = 2,
    ACTIONS(356), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(278), 1,
      sym_policy_acl_name,
  [1506] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1511] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1516] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1521] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1526] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1531] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1536] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1541] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1546] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1551] = 1,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1556] = 1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1561] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1566] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1571] = 1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1576] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_ace_object,
  [1583] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1588] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1593] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(265), 1,
      sym_string,
  [1600] = 1,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1605] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1610] = 1,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1615] = 2,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    STATE(322), 1,
      sym_access_list,
  [1622] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1627] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1632] = 1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1637] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1642] = 1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1647] = 2,
    ACTIONS(416), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(273), 1,
      sym_acl_name_def,
  [1654] = 1,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1659] = 1,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1664] = 1,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1669] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1674] = 1,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1679] = 1,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1684] = 1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1689] = 2,
    ACTIONS(432), 1,
      sym_number,
    STATE(125), 1,
      sym_uint8,
  [1696] = 2,
    ACTIONS(432), 1,
      sym_number,
    STATE(126), 1,
      sym_uint8,
  [1703] = 1,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1708] = 1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1713] = 1,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1718] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1723] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_string,
  [1730] = 1,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1735] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      sym_string,
  [1742] = 1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1747] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_string,
  [1754] = 2,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(155), 1,
      sym_null_valued,
  [1761] = 1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1766] = 2,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(157), 1,
      sym_null_valued,
  [1773] = 1,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1778] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      sym_string,
  [1785] = 1,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1790] = 1,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1795] = 1,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1800] = 1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1805] = 2,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_null_valued,
  [1812] = 1,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1817] = 1,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1822] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1827] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      sym_string,
  [1834] = 1,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1839] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1844] = 1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1849] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string,
  [1856] = 2,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_policy,
  [1863] = 1,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1868] = 2,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_policy,
  [1875] = 1,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1880] = 1,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1885] = 1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1890] = 1,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1895] = 1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1900] = 1,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1905] = 1,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1910] = 1,
    ACTIONS(482), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [1915] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [1919] = 1,
    ACTIONS(486), 1,
      anon_sym_COLON,
  [1923] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON,
  [1927] = 1,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
  [1931] = 1,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [1935] = 1,
    ACTIONS(494), 1,
      anon_sym_COLON,
  [1939] = 1,
    ACTIONS(496), 1,
      anon_sym_COLON,
  [1943] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [1947] = 1,
    ACTIONS(500), 1,
      anon_sym_COLON,
  [1951] = 1,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [1955] = 1,
    ACTIONS(504), 1,
      anon_sym_COLON,
  [1959] = 1,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [1963] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [1967] = 1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [1971] = 1,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [1975] = 1,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [1979] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [1983] = 1,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [1987] = 1,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [1991] = 1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [1995] = 1,
    ACTIONS(524), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [1999] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [2003] = 1,
    ACTIONS(528), 1,
      anon_sym_COMMA,
  [2007] = 1,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
  [2011] = 1,
    ACTIONS(532), 1,
      sym_number,
  [2015] = 1,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
  [2019] = 1,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
  [2023] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [2027] = 1,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
  [2031] = 1,
    ACTIONS(542), 1,
      sym_number,
  [2035] = 1,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
  [2039] = 1,
    ACTIONS(546), 1,
      sym_number,
  [2043] = 1,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
  [2047] = 1,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [2051] = 1,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [2055] = 1,
    ACTIONS(554), 1,
      anon_sym_COLON,
  [2059] = 1,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [2063] = 1,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [2067] = 1,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [2071] = 1,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [2075] = 1,
    ACTIONS(564), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [2079] = 1,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [2083] = 1,
    ACTIONS(568), 1,
      anon_sym_COLON,
  [2087] = 1,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [2091] = 1,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [2095] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [2099] = 1,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [2103] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [2107] = 1,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [2111] = 1,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
  [2115] = 1,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [2119] = 1,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [2123] = 1,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [2127] = 1,
    ACTIONS(590), 1,
      anon_sym_null,
  [2131] = 1,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [2135] = 1,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [2139] = 1,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [2143] = 1,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [2147] = 1,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
  [2151] = 1,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
  [2155] = 1,
    ACTIONS(604), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [2159] = 1,
    ACTIONS(606), 1,
      anon_sym_COMMA,
  [2163] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
  [2167] = 1,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
  [2171] = 1,
    ACTIONS(612), 1,
      anon_sym_COLON,
  [2175] = 1,
    ACTIONS(614), 1,
      anon_sym_COLON,
  [2179] = 1,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
  [2183] = 1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [2187] = 1,
    ACTIONS(620), 1,
      anon_sym_COLON,
  [2191] = 1,
    ACTIONS(622), 1,
      anon_sym_COMMA,
  [2195] = 1,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
  [2199] = 1,
    ACTIONS(626), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [2203] = 1,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
  [2207] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [2211] = 1,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [2215] = 1,
    ACTIONS(634), 1,
      anon_sym_COLON,
  [2219] = 1,
    ACTIONS(636), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [2223] = 1,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
  [2227] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [2231] = 1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [2235] = 1,
    ACTIONS(644), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [2239] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [2243] = 1,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
  [2247] = 1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [2251] = 1,
    ACTIONS(652), 1,
      anon_sym_COLON,
  [2255] = 1,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
  [2259] = 1,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
  [2263] = 1,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
  [2267] = 1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [2271] = 1,
    ACTIONS(662), 1,
      anon_sym_COLON,
  [2275] = 1,
    ACTIONS(664), 1,
      anon_sym_COLON,
  [2279] = 1,
    ACTIONS(666), 1,
      anon_sym_COLON,
  [2283] = 1,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [2287] = 1,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [2291] = 1,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [2295] = 1,
    ACTIONS(674), 1,
      anon_sym_COLON,
  [2299] = 1,
    ACTIONS(676), 1,
      sym_number,
  [2303] = 1,
    ACTIONS(678), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [2307] = 1,
    ACTIONS(680), 1,
      sym_number,
  [2311] = 1,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
  [2315] = 1,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [2319] = 1,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
  [2323] = 1,
    ACTIONS(688), 1,
      anon_sym_COMMA,
  [2327] = 1,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
  [2331] = 1,
    ACTIONS(692), 1,
      anon_sym_COLON,
  [2335] = 1,
    ACTIONS(694), 1,
      anon_sym_COLON,
  [2339] = 1,
    ACTIONS(696), 1,
      anon_sym_COMMA,
  [2343] = 1,
    ACTIONS(698), 1,
      anon_sym_COLON,
  [2347] = 1,
    ACTIONS(700), 1,
      anon_sym_COLON,
  [2351] = 1,
    ACTIONS(702), 1,
      anon_sym_COLON,
  [2355] = 1,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [2359] = 1,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [2363] = 1,
    ACTIONS(708), 1,
      anon_sym_COLON,
  [2367] = 1,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
  [2371] = 1,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
  [2375] = 1,
    ACTIONS(714), 1,
      sym_number,
  [2379] = 1,
    ACTIONS(716), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [2383] = 1,
    ACTIONS(718), 1,
      sym_number,
  [2387] = 1,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [2391] = 1,
    ACTIONS(722), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 255,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 414,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 488,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 536,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 597,
  [SMALL_STATE(23)] = 613,
  [SMALL_STATE(24)] = 629,
  [SMALL_STATE(25)] = 640,
  [SMALL_STATE(26)] = 651,
  [SMALL_STATE(27)] = 658,
  [SMALL_STATE(28)] = 669,
  [SMALL_STATE(29)] = 680,
  [SMALL_STATE(30)] = 689,
  [SMALL_STATE(31)] = 700,
  [SMALL_STATE(32)] = 713,
  [SMALL_STATE(33)] = 724,
  [SMALL_STATE(34)] = 735,
  [SMALL_STATE(35)] = 745,
  [SMALL_STATE(36)] = 755,
  [SMALL_STATE(37)] = 765,
  [SMALL_STATE(38)] = 775,
  [SMALL_STATE(39)] = 785,
  [SMALL_STATE(40)] = 795,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 811,
  [SMALL_STATE(43)] = 821,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 837,
  [SMALL_STATE(46)] = 847,
  [SMALL_STATE(47)] = 857,
  [SMALL_STATE(48)] = 867,
  [SMALL_STATE(49)] = 877,
  [SMALL_STATE(50)] = 885,
  [SMALL_STATE(51)] = 895,
  [SMALL_STATE(52)] = 905,
  [SMALL_STATE(53)] = 915,
  [SMALL_STATE(54)] = 925,
  [SMALL_STATE(55)] = 935,
  [SMALL_STATE(56)] = 945,
  [SMALL_STATE(57)] = 955,
  [SMALL_STATE(58)] = 965,
  [SMALL_STATE(59)] = 971,
  [SMALL_STATE(60)] = 981,
  [SMALL_STATE(61)] = 991,
  [SMALL_STATE(62)] = 997,
  [SMALL_STATE(63)] = 1007,
  [SMALL_STATE(64)] = 1017,
  [SMALL_STATE(65)] = 1027,
  [SMALL_STATE(66)] = 1037,
  [SMALL_STATE(67)] = 1047,
  [SMALL_STATE(68)] = 1057,
  [SMALL_STATE(69)] = 1067,
  [SMALL_STATE(70)] = 1077,
  [SMALL_STATE(71)] = 1087,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1103,
  [SMALL_STATE(74)] = 1113,
  [SMALL_STATE(75)] = 1123,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1143,
  [SMALL_STATE(78)] = 1153,
  [SMALL_STATE(79)] = 1159,
  [SMALL_STATE(80)] = 1169,
  [SMALL_STATE(81)] = 1179,
  [SMALL_STATE(82)] = 1185,
  [SMALL_STATE(83)] = 1195,
  [SMALL_STATE(84)] = 1205,
  [SMALL_STATE(85)] = 1215,
  [SMALL_STATE(86)] = 1225,
  [SMALL_STATE(87)] = 1235,
  [SMALL_STATE(88)] = 1245,
  [SMALL_STATE(89)] = 1255,
  [SMALL_STATE(90)] = 1265,
  [SMALL_STATE(91)] = 1275,
  [SMALL_STATE(92)] = 1285,
  [SMALL_STATE(93)] = 1295,
  [SMALL_STATE(94)] = 1305,
  [SMALL_STATE(95)] = 1310,
  [SMALL_STATE(96)] = 1315,
  [SMALL_STATE(97)] = 1322,
  [SMALL_STATE(98)] = 1327,
  [SMALL_STATE(99)] = 1332,
  [SMALL_STATE(100)] = 1339,
  [SMALL_STATE(101)] = 1346,
  [SMALL_STATE(102)] = 1351,
  [SMALL_STATE(103)] = 1356,
  [SMALL_STATE(104)] = 1361,
  [SMALL_STATE(105)] = 1366,
  [SMALL_STATE(106)] = 1371,
  [SMALL_STATE(107)] = 1376,
  [SMALL_STATE(108)] = 1383,
  [SMALL_STATE(109)] = 1388,
  [SMALL_STATE(110)] = 1393,
  [SMALL_STATE(111)] = 1398,
  [SMALL_STATE(112)] = 1405,
  [SMALL_STATE(113)] = 1412,
  [SMALL_STATE(114)] = 1419,
  [SMALL_STATE(115)] = 1426,
  [SMALL_STATE(116)] = 1433,
  [SMALL_STATE(117)] = 1438,
  [SMALL_STATE(118)] = 1443,
  [SMALL_STATE(119)] = 1450,
  [SMALL_STATE(120)] = 1455,
  [SMALL_STATE(121)] = 1460,
  [SMALL_STATE(122)] = 1467,
  [SMALL_STATE(123)] = 1474,
  [SMALL_STATE(124)] = 1479,
  [SMALL_STATE(125)] = 1484,
  [SMALL_STATE(126)] = 1489,
  [SMALL_STATE(127)] = 1494,
  [SMALL_STATE(128)] = 1499,
  [SMALL_STATE(129)] = 1506,
  [SMALL_STATE(130)] = 1511,
  [SMALL_STATE(131)] = 1516,
  [SMALL_STATE(132)] = 1521,
  [SMALL_STATE(133)] = 1526,
  [SMALL_STATE(134)] = 1531,
  [SMALL_STATE(135)] = 1536,
  [SMALL_STATE(136)] = 1541,
  [SMALL_STATE(137)] = 1546,
  [SMALL_STATE(138)] = 1551,
  [SMALL_STATE(139)] = 1556,
  [SMALL_STATE(140)] = 1561,
  [SMALL_STATE(141)] = 1566,
  [SMALL_STATE(142)] = 1571,
  [SMALL_STATE(143)] = 1576,
  [SMALL_STATE(144)] = 1583,
  [SMALL_STATE(145)] = 1588,
  [SMALL_STATE(146)] = 1593,
  [SMALL_STATE(147)] = 1600,
  [SMALL_STATE(148)] = 1605,
  [SMALL_STATE(149)] = 1610,
  [SMALL_STATE(150)] = 1615,
  [SMALL_STATE(151)] = 1622,
  [SMALL_STATE(152)] = 1627,
  [SMALL_STATE(153)] = 1632,
  [SMALL_STATE(154)] = 1637,
  [SMALL_STATE(155)] = 1642,
  [SMALL_STATE(156)] = 1647,
  [SMALL_STATE(157)] = 1654,
  [SMALL_STATE(158)] = 1659,
  [SMALL_STATE(159)] = 1664,
  [SMALL_STATE(160)] = 1669,
  [SMALL_STATE(161)] = 1674,
  [SMALL_STATE(162)] = 1679,
  [SMALL_STATE(163)] = 1684,
  [SMALL_STATE(164)] = 1689,
  [SMALL_STATE(165)] = 1696,
  [SMALL_STATE(166)] = 1703,
  [SMALL_STATE(167)] = 1708,
  [SMALL_STATE(168)] = 1713,
  [SMALL_STATE(169)] = 1718,
  [SMALL_STATE(170)] = 1723,
  [SMALL_STATE(171)] = 1730,
  [SMALL_STATE(172)] = 1735,
  [SMALL_STATE(173)] = 1742,
  [SMALL_STATE(174)] = 1747,
  [SMALL_STATE(175)] = 1754,
  [SMALL_STATE(176)] = 1761,
  [SMALL_STATE(177)] = 1766,
  [SMALL_STATE(178)] = 1773,
  [SMALL_STATE(179)] = 1778,
  [SMALL_STATE(180)] = 1785,
  [SMALL_STATE(181)] = 1790,
  [SMALL_STATE(182)] = 1795,
  [SMALL_STATE(183)] = 1800,
  [SMALL_STATE(184)] = 1805,
  [SMALL_STATE(185)] = 1812,
  [SMALL_STATE(186)] = 1817,
  [SMALL_STATE(187)] = 1822,
  [SMALL_STATE(188)] = 1827,
  [SMALL_STATE(189)] = 1834,
  [SMALL_STATE(190)] = 1839,
  [SMALL_STATE(191)] = 1844,
  [SMALL_STATE(192)] = 1849,
  [SMALL_STATE(193)] = 1856,
  [SMALL_STATE(194)] = 1863,
  [SMALL_STATE(195)] = 1868,
  [SMALL_STATE(196)] = 1875,
  [SMALL_STATE(197)] = 1880,
  [SMALL_STATE(198)] = 1885,
  [SMALL_STATE(199)] = 1890,
  [SMALL_STATE(200)] = 1895,
  [SMALL_STATE(201)] = 1900,
  [SMALL_STATE(202)] = 1905,
  [SMALL_STATE(203)] = 1910,
  [SMALL_STATE(204)] = 1915,
  [SMALL_STATE(205)] = 1919,
  [SMALL_STATE(206)] = 1923,
  [SMALL_STATE(207)] = 1927,
  [SMALL_STATE(208)] = 1931,
  [SMALL_STATE(209)] = 1935,
  [SMALL_STATE(210)] = 1939,
  [SMALL_STATE(211)] = 1943,
  [SMALL_STATE(212)] = 1947,
  [SMALL_STATE(213)] = 1951,
  [SMALL_STATE(214)] = 1955,
  [SMALL_STATE(215)] = 1959,
  [SMALL_STATE(216)] = 1963,
  [SMALL_STATE(217)] = 1967,
  [SMALL_STATE(218)] = 1971,
  [SMALL_STATE(219)] = 1975,
  [SMALL_STATE(220)] = 1979,
  [SMALL_STATE(221)] = 1983,
  [SMALL_STATE(222)] = 1987,
  [SMALL_STATE(223)] = 1991,
  [SMALL_STATE(224)] = 1995,
  [SMALL_STATE(225)] = 1999,
  [SMALL_STATE(226)] = 2003,
  [SMALL_STATE(227)] = 2007,
  [SMALL_STATE(228)] = 2011,
  [SMALL_STATE(229)] = 2015,
  [SMALL_STATE(230)] = 2019,
  [SMALL_STATE(231)] = 2023,
  [SMALL_STATE(232)] = 2027,
  [SMALL_STATE(233)] = 2031,
  [SMALL_STATE(234)] = 2035,
  [SMALL_STATE(235)] = 2039,
  [SMALL_STATE(236)] = 2043,
  [SMALL_STATE(237)] = 2047,
  [SMALL_STATE(238)] = 2051,
  [SMALL_STATE(239)] = 2055,
  [SMALL_STATE(240)] = 2059,
  [SMALL_STATE(241)] = 2063,
  [SMALL_STATE(242)] = 2067,
  [SMALL_STATE(243)] = 2071,
  [SMALL_STATE(244)] = 2075,
  [SMALL_STATE(245)] = 2079,
  [SMALL_STATE(246)] = 2083,
  [SMALL_STATE(247)] = 2087,
  [SMALL_STATE(248)] = 2091,
  [SMALL_STATE(249)] = 2095,
  [SMALL_STATE(250)] = 2099,
  [SMALL_STATE(251)] = 2103,
  [SMALL_STATE(252)] = 2107,
  [SMALL_STATE(253)] = 2111,
  [SMALL_STATE(254)] = 2115,
  [SMALL_STATE(255)] = 2119,
  [SMALL_STATE(256)] = 2123,
  [SMALL_STATE(257)] = 2127,
  [SMALL_STATE(258)] = 2131,
  [SMALL_STATE(259)] = 2135,
  [SMALL_STATE(260)] = 2139,
  [SMALL_STATE(261)] = 2143,
  [SMALL_STATE(262)] = 2147,
  [SMALL_STATE(263)] = 2151,
  [SMALL_STATE(264)] = 2155,
  [SMALL_STATE(265)] = 2159,
  [SMALL_STATE(266)] = 2163,
  [SMALL_STATE(267)] = 2167,
  [SMALL_STATE(268)] = 2171,
  [SMALL_STATE(269)] = 2175,
  [SMALL_STATE(270)] = 2179,
  [SMALL_STATE(271)] = 2183,
  [SMALL_STATE(272)] = 2187,
  [SMALL_STATE(273)] = 2191,
  [SMALL_STATE(274)] = 2195,
  [SMALL_STATE(275)] = 2199,
  [SMALL_STATE(276)] = 2203,
  [SMALL_STATE(277)] = 2207,
  [SMALL_STATE(278)] = 2211,
  [SMALL_STATE(279)] = 2215,
  [SMALL_STATE(280)] = 2219,
  [SMALL_STATE(281)] = 2223,
  [SMALL_STATE(282)] = 2227,
  [SMALL_STATE(283)] = 2231,
  [SMALL_STATE(284)] = 2235,
  [SMALL_STATE(285)] = 2239,
  [SMALL_STATE(286)] = 2243,
  [SMALL_STATE(287)] = 2247,
  [SMALL_STATE(288)] = 2251,
  [SMALL_STATE(289)] = 2255,
  [SMALL_STATE(290)] = 2259,
  [SMALL_STATE(291)] = 2263,
  [SMALL_STATE(292)] = 2267,
  [SMALL_STATE(293)] = 2271,
  [SMALL_STATE(294)] = 2275,
  [SMALL_STATE(295)] = 2279,
  [SMALL_STATE(296)] = 2283,
  [SMALL_STATE(297)] = 2287,
  [SMALL_STATE(298)] = 2291,
  [SMALL_STATE(299)] = 2295,
  [SMALL_STATE(300)] = 2299,
  [SMALL_STATE(301)] = 2303,
  [SMALL_STATE(302)] = 2307,
  [SMALL_STATE(303)] = 2311,
  [SMALL_STATE(304)] = 2315,
  [SMALL_STATE(305)] = 2319,
  [SMALL_STATE(306)] = 2323,
  [SMALL_STATE(307)] = 2327,
  [SMALL_STATE(308)] = 2331,
  [SMALL_STATE(309)] = 2335,
  [SMALL_STATE(310)] = 2339,
  [SMALL_STATE(311)] = 2343,
  [SMALL_STATE(312)] = 2347,
  [SMALL_STATE(313)] = 2351,
  [SMALL_STATE(314)] = 2355,
  [SMALL_STATE(315)] = 2359,
  [SMALL_STATE(316)] = 2363,
  [SMALL_STATE(317)] = 2367,
  [SMALL_STATE(318)] = 2371,
  [SMALL_STATE(319)] = 2375,
  [SMALL_STATE(320)] = 2379,
  [SMALL_STATE(321)] = 2383,
  [SMALL_STATE(322)] = 2387,
  [SMALL_STATE(323)] = 2391,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(27),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(107),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2), SHIFT_REPEAT(14),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(7),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(31),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(11),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(110),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(143),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(286),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(96),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_header, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint8, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 11),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 9),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 10),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 9),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [602] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 10),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 9),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_acl_name, 3, .production_id = 8),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_name_def, 3, .production_id = 8),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
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
