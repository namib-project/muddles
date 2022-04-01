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
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
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
  anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE = 6,
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
  aux_sym_ietf_mud_repeat1 = 122,
  aux_sym_acl_repeat1 = 123,
  aux_sym_ace_repeat1 = 124,
  aux_sym_matches_object_repeat1 = 125,
  aux_sym_mud_matches_augment_repeat1 = 126,
  aux_sym_eth_matches_repeat1 = 127,
  aux_sym_ipv4_matches_repeat1 = 128,
  aux_sym_tcp_matches_repeat1 = 129,
  aux_sym_icmp_matches_repeat1 = 130,
  aux_sym_port_range_repeat1 = 131,
  aux_sym_port_operator_repeat1 = 132,
  aux_sym_access_list_repeat1 = 133,
  aux_sym_string_quoted_content_repeat1 = 134,
  aux_sym_json_array_fallback_repeat1 = 135,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = "\"ietf-mud:mud\"",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE] = "\"ietf-access-control-list:access-lists\"",
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
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE] = anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
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
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE] = {
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
      if (eof) ADVANCE(493);
      if (lookahead == '"') ADVANCE(526);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '[') ADVANCE(501);
      if (lookahead == '\\') ADVANCE(491);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '{') ADVANCE(494);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(492)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\\') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(509);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(512);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(513);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(544);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(514);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(510);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(511);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(503);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(520);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(551);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(521);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(515);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(546);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(555);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(552);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(550);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(535);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(497);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(554);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(517);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(516);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(553);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(519);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(545);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(536);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(557);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(518);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(556);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(541);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(527);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(529);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '[') ADVANCE(501);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '{') ADVANCE(494);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(530);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(528);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(533);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(534);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(500);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(504);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(548);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(506);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(540);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(547);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(549);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(508);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(507);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(539);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(542);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(537);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(538);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(559);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(543);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(558);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(499);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(469);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(303);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(467);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(282);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(366);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(365);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 91:
      if (lookahead == '4') ADVANCE(7);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(164);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(522);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(163);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(285);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(488);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(246);
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
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 228:
      if (lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 229:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 231:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 232:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 233:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 234:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 262:
      if (lookahead == 'j') ADVANCE(208);
      END_STATE();
    case 263:
      if (lookahead == 'k') ADVANCE(413);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(473);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 477:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 478:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 479:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 480:
      if (lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 481:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 482:
      if (lookahead == 'v') ADVANCE(261);
      END_STATE();
    case 483:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 484:
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 485:
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 486:
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 487:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 488:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 489:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 490:
      if (lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 491:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 492:
      if (eof) ADVANCE(493);
      if (lookahead == '"') ADVANCE(526);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '[') ADVANCE(501);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '{') ADVANCE(494);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(492)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DQUOTEeth_DQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv4_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv6_DQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DQUOTEtcp_DQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DQUOTEudp_DQUOTE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DQUOTEicmp_DQUOTE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DQUOTEcontroller_DQUOTE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_DQUOTEmy_DASHcontroller_DQUOTE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DQUOTEmanufacturer_DQUOTE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTElocal_DASHnetworks_DQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DQUOTEmodel_DQUOTE);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DQUOTEprotocol_DQUOTE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHacldns_COLON);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_src_DASHdnsname);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_dst_DASHdnsname);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(349);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DQUOTEsource_DASHport_DQUOTE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DQUOTEdestination_DASHport_DQUOTE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DQUOTElower_DASHport_DQUOTE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DQUOTEupper_DASHport_DQUOTE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DQUOTEoperator_DQUOTE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DQUOTEport_DQUOTE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DQUOTE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DQUOTE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DQUOTEcode_DQUOTE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 34},
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
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 41},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
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
  [162] = {.lex_state = 34},
  [163] = {.lex_state = 34},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 34},
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
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 41},
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
  [208] = {.lex_state = 41},
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
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 34},
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
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 41},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 41},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 41},
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
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 34},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_source] = STATE(202),
    [sym_json_object_fallback] = STATE(315),
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
    STATE(41), 9,
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
    STATE(178), 9,
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
    STATE(77), 8,
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
    STATE(184), 8,
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
    STATE(62), 7,
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
    STATE(145), 7,
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
    STATE(43), 1,
      sym_json_value_fallback,
    STATE(70), 3,
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
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(54), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [310] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(69), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_string,
    STATE(52), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [338] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(51), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [366] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_json_value_fallback,
    STATE(70), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [390] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_json_value_fallback,
    STATE(70), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [414] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(69), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(126), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [439] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTEtype_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEcode_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTErest_DASHof_DASHheader_DQUOTE,
    STATE(308), 1,
      sym_string,
    STATE(115), 4,
      sym_type,
      sym_code,
      sym_rest_of_header,
      sym_json_pair_fallback,
  [464] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(308), 1,
      sym_string,
    STATE(59), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [488] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(87), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_string,
    STATE(60), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [512] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(87), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(308), 1,
      sym_string,
    STATE(138), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [533] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(66), 1,
      sym_json_pair_fallback,
    STATE(305), 1,
      sym_ietf_mud,
    STATE(308), 1,
      sym_string,
  [555] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(66), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [574] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [590] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [606] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_range_or_operator,
    STATE(129), 2,
      sym_port_range,
      sym_port_operator,
  [617] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [624] = 1,
    ACTIONS(105), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [631] = 3,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(109), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [642] = 3,
    STATE(33), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(301), 1,
      sym_string_quoted_content,
    ACTIONS(112), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [653] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym_actions,
    STATE(218), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [664] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(116), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [675] = 2,
    STATE(294), 1,
      sym_action,
    ACTIONS(122), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [684] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [691] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [698] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(130), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [709] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_json_pair_fallback,
    STATE(308), 1,
      sym_string,
  [722] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_range_or_operator,
    STATE(129), 2,
      sym_port_range,
      sym_port_operator,
  [733] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_ietf_mud_repeat1,
  [743] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_ipv4_matches_repeat1,
  [753] = 3,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_string,
    STATE(118), 1,
      sym_binary,
  [763] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_tcp_matches_repeat1,
  [773] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_tcp_matches_repeat1,
  [783] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_ietf_mud_repeat1,
  [793] = 1,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [799] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_json_array_fallback_repeat1,
  [809] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_ipv4_matches_repeat1,
  [819] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_ipv4_matches_repeat1,
  [829] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_port_operator_repeat1,
  [839] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_eth_matches_repeat1,
  [849] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_mud_matches_augment_repeat1,
  [859] = 2,
    STATE(183), 1,
      sym_bool,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
  [867] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_icmp_matches_repeat1,
  [877] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_icmp_matches_repeat1,
  [887] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_tcp_matches_repeat1,
  [897] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_eth_matches_repeat1,
  [907] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_tcp_matches_repeat1,
  [917] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_eth_matches_repeat1,
  [927] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_mud_matches_augment_repeat1,
  [937] = 1,
    ACTIONS(201), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [943] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_json_array_fallback_repeat1,
  [953] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_ipv4_matches_repeat1,
  [963] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_ipv4_matches_repeat1,
  [973] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_eth_matches_repeat1,
  [983] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_mud_matches_augment_repeat1,
  [993] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_icmp_matches_repeat1,
  [1003] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_matches_object_repeat1,
  [1013] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_port_range_repeat1,
  [1023] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_eth_matches_repeat1,
  [1033] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_port_operator_repeat1,
  [1043] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_port_range_repeat1,
  [1053] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_tcp_matches_repeat1,
  [1063] = 1,
    ACTIONS(237), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1069] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_port_operator_repeat1,
  [1079] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_matches_object_repeat1,
  [1089] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_ietf_mud_repeat1,
  [1099] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_access_list_repeat1,
  [1109] = 1,
    ACTIONS(254), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1115] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_json_array_fallback_repeat1,
  [1125] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_matches_object_repeat1,
  [1135] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_port_range_repeat1,
  [1145] = 3,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(249), 1,
      sym_matches_object,
    STATE(252), 1,
      sym_matches,
  [1155] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ace_repeat1,
  [1165] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_acl_object,
  [1175] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ace_repeat1,
  [1185] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_ace_repeat1,
  [1195] = 3,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym_ace_object,
  [1205] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_access_list_repeat1,
  [1215] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_acl_repeat1,
  [1225] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_acl_repeat1,
  [1235] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_access_list_repeat1,
  [1245] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_acl_repeat1,
  [1255] = 1,
    ACTIONS(307), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1260] = 1,
    ACTIONS(309), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [1265] = 1,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1270] = 1,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1275] = 1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1280] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_string,
  [1287] = 1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1292] = 2,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_acl_object,
  [1299] = 1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1304] = 1,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1309] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(303), 1,
      sym_string,
  [1316] = 2,
    ACTIONS(323), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1323] = 1,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1328] = 1,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1333] = 1,
    ACTIONS(329), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1338] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
  [1345] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_string,
  [1352] = 1,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1357] = 1,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1362] = 2,
    ACTIONS(339), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(287), 1,
      sym_policy_acl_name,
  [1369] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_string,
  [1376] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      sym_string,
  [1383] = 2,
    ACTIONS(341), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(270), 1,
      sym_ietf_acls,
  [1390] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1395] = 1,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1400] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1405] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(283), 1,
      sym_string,
  [1412] = 1,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1422] = 1,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1427] = 1,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1432] = 1,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1437] = 2,
    ACTIONS(339), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(276), 1,
      sym_policy_acl_name,
  [1444] = 1,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1449] = 1,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1454] = 2,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_ace,
  [1461] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1466] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1471] = 1,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1476] = 1,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1481] = 1,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1486] = 1,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1491] = 1,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1496] = 1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1501] = 1,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1506] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1511] = 1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1516] = 2,
    ACTIONS(381), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(319), 1,
      sym_acl_name_def,
  [1523] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1528] = 1,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1533] = 2,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_ace_object,
  [1540] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1545] = 1,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1550] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_string,
  [1557] = 1,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1562] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1567] = 1,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1572] = 1,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1577] = 1,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1582] = 1,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1587] = 1,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1592] = 1,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1597] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_access_list,
  [1604] = 1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1609] = 1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1614] = 2,
    ACTIONS(407), 1,
      sym_number,
    STATE(119), 1,
      sym_uint8,
  [1621] = 2,
    ACTIONS(407), 1,
      sym_number,
    STATE(120), 1,
      sym_uint8,
  [1628] = 1,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1633] = 1,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1638] = 2,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_acl,
  [1645] = 1,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1650] = 1,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1655] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_string,
  [1662] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_string,
  [1669] = 1,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1674] = 1,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1679] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym_string,
  [1686] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_string,
  [1693] = 2,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      sym_null_valued,
  [1700] = 2,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      sym_null_valued,
  [1707] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string,
  [1714] = 2,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_null_valued,
  [1721] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_string,
  [1728] = 2,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_policy,
  [1735] = 2,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_policy,
  [1742] = 1,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1747] = 1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1752] = 1,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1757] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1762] = 1,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1767] = 1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1772] = 1,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1777] = 1,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1782] = 1,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1787] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1792] = 1,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1797] = 1,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1802] = 1,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1807] = 1,
    ACTIONS(447), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1812] = 1,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1817] = 1,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1822] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1827] = 1,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1832] = 1,
    ACTIONS(457), 1,
      anon_sym_COMMA,
  [1836] = 1,
    ACTIONS(459), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [1840] = 1,
    ACTIONS(461), 1,
      anon_sym_COMMA,
  [1844] = 1,
    ACTIONS(463), 1,
      anon_sym_COLON,
  [1848] = 1,
    ACTIONS(465), 1,
      anon_sym_COLON,
  [1852] = 1,
    ACTIONS(467), 1,
      anon_sym_COLON,
  [1856] = 1,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [1860] = 1,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [1864] = 1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [1868] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [1872] = 1,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [1876] = 1,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
  [1880] = 1,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [1884] = 1,
    ACTIONS(483), 1,
      anon_sym_COLON,
  [1888] = 1,
    ACTIONS(485), 1,
      anon_sym_COLON,
  [1892] = 1,
    ACTIONS(487), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [1896] = 1,
    ACTIONS(489), 1,
      anon_sym_COLON,
  [1900] = 1,
    ACTIONS(491), 1,
      anon_sym_COMMA,
  [1904] = 1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
  [1908] = 1,
    ACTIONS(495), 1,
      anon_sym_COLON,
  [1912] = 1,
    ACTIONS(497), 1,
      anon_sym_COLON,
  [1916] = 1,
    ACTIONS(499), 1,
      anon_sym_COLON,
  [1920] = 1,
    ACTIONS(501), 1,
      anon_sym_COLON,
  [1924] = 1,
    ACTIONS(503), 1,
      anon_sym_COMMA,
  [1928] = 1,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [1932] = 1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
  [1936] = 1,
    ACTIONS(509), 1,
      anon_sym_COLON,
  [1940] = 1,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [1944] = 1,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
  [1948] = 1,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
  [1952] = 1,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
  [1956] = 1,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
  [1960] = 1,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
  [1964] = 1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
  [1968] = 1,
    ACTIONS(525), 1,
      sym_number,
  [1972] = 1,
    ACTIONS(527), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [1976] = 1,
    ACTIONS(529), 1,
      anon_sym_COLON,
  [1980] = 1,
    ACTIONS(531), 1,
      sym_number,
  [1984] = 1,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
  [1988] = 1,
    ACTIONS(535), 1,
      anon_sym_COLON,
  [1992] = 1,
    ACTIONS(537), 1,
      anon_sym_COLON,
  [1996] = 1,
    ACTIONS(539), 1,
      sym_number,
  [2000] = 1,
    ACTIONS(541), 1,
      anon_sym_COLON,
  [2004] = 1,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
  [2008] = 1,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [2012] = 1,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [2016] = 1,
    ACTIONS(549), 1,
      anon_sym_COLON,
  [2020] = 1,
    ACTIONS(551), 1,
      anon_sym_COLON,
  [2024] = 1,
    ACTIONS(553), 1,
      anon_sym_COLON,
  [2028] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [2032] = 1,
    ACTIONS(557), 1,
      anon_sym_COLON,
  [2036] = 1,
    ACTIONS(559), 1,
      anon_sym_COLON,
  [2040] = 1,
    ACTIONS(561), 1,
      anon_sym_COLON,
  [2044] = 1,
    ACTIONS(563), 1,
      anon_sym_COMMA,
  [2048] = 1,
    ACTIONS(565), 1,
      anon_sym_COLON,
  [2052] = 1,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [2056] = 1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [2060] = 1,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [2064] = 1,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [2068] = 1,
    ACTIONS(575), 1,
      anon_sym_COMMA,
  [2072] = 1,
    ACTIONS(577), 1,
      anon_sym_LBRACK,
  [2076] = 1,
    ACTIONS(579), 1,
      anon_sym_null,
  [2080] = 1,
    ACTIONS(581), 1,
      anon_sym_COLON,
  [2084] = 1,
    ACTIONS(583), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [2088] = 1,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
  [2092] = 1,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
  [2096] = 1,
    ACTIONS(589), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [2100] = 1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
  [2104] = 1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [2108] = 1,
    ACTIONS(595), 1,
      anon_sym_COMMA,
  [2112] = 1,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
  [2116] = 1,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
  [2120] = 1,
    ACTIONS(601), 1,
      anon_sym_COLON,
  [2124] = 1,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
  [2128] = 1,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [2132] = 1,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
  [2136] = 1,
    ACTIONS(609), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [2140] = 1,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
  [2144] = 1,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
  [2148] = 1,
    ACTIONS(615), 1,
      anon_sym_COLON,
  [2152] = 1,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
  [2156] = 1,
    ACTIONS(619), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [2160] = 1,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
  [2164] = 1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [2168] = 1,
    ACTIONS(625), 1,
      anon_sym_COLON,
  [2172] = 1,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
  [2176] = 1,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [2180] = 1,
    ACTIONS(631), 1,
      anon_sym_COLON,
  [2184] = 1,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
  [2188] = 1,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
  [2192] = 1,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [2196] = 1,
    ACTIONS(639), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [2200] = 1,
    ACTIONS(641), 1,
      anon_sym_COMMA,
  [2204] = 1,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [2208] = 1,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
  [2212] = 1,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
  [2216] = 1,
    ACTIONS(649), 1,
      anon_sym_COLON,
  [2220] = 1,
    ACTIONS(651), 1,
      anon_sym_COLON,
  [2224] = 1,
    ACTIONS(653), 1,
      anon_sym_COLON,
  [2228] = 1,
    ACTIONS(655), 1,
      anon_sym_COLON,
  [2232] = 1,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
  [2236] = 1,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
  [2240] = 1,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
  [2244] = 1,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [2248] = 1,
    ACTIONS(665), 1,
      sym_number,
  [2252] = 1,
    ACTIONS(667), 1,
      anon_sym_COLON,
  [2256] = 1,
    ACTIONS(669), 1,
      sym_number,
  [2260] = 1,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
  [2264] = 1,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
  [2268] = 1,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
  [2272] = 1,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [2276] = 1,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
  [2280] = 1,
    ACTIONS(681), 1,
      anon_sym_COMMA,
  [2284] = 1,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
  [2288] = 1,
    ACTIONS(685), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [2292] = 1,
    ACTIONS(687), 1,
      anon_sym_COLON,
  [2296] = 1,
    ACTIONS(689), 1,
      anon_sym_COLON,
  [2300] = 1,
    ACTIONS(691), 1,
      anon_sym_LBRACK,
  [2304] = 1,
    ACTIONS(693), 1,
      anon_sym_COLON,
  [2308] = 1,
    ACTIONS(695), 1,
      anon_sym_COLON,
  [2312] = 1,
    ACTIONS(697), 1,
      anon_sym_COLON,
  [2316] = 1,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
  [2320] = 1,
    ACTIONS(701), 1,
      ts_builtin_sym_end,
  [2324] = 1,
    ACTIONS(703), 1,
      sym_number,
  [2328] = 1,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
  [2332] = 1,
    ACTIONS(707), 1,
      sym_number,
  [2336] = 1,
    ACTIONS(709), 1,
      anon_sym_COMMA,
  [2340] = 1,
    ACTIONS(711), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 414,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 488,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 533,
  [SMALL_STATE(20)] = 555,
  [SMALL_STATE(21)] = 574,
  [SMALL_STATE(22)] = 590,
  [SMALL_STATE(23)] = 606,
  [SMALL_STATE(24)] = 617,
  [SMALL_STATE(25)] = 624,
  [SMALL_STATE(26)] = 631,
  [SMALL_STATE(27)] = 642,
  [SMALL_STATE(28)] = 653,
  [SMALL_STATE(29)] = 664,
  [SMALL_STATE(30)] = 675,
  [SMALL_STATE(31)] = 684,
  [SMALL_STATE(32)] = 691,
  [SMALL_STATE(33)] = 698,
  [SMALL_STATE(34)] = 709,
  [SMALL_STATE(35)] = 722,
  [SMALL_STATE(36)] = 733,
  [SMALL_STATE(37)] = 743,
  [SMALL_STATE(38)] = 753,
  [SMALL_STATE(39)] = 763,
  [SMALL_STATE(40)] = 773,
  [SMALL_STATE(41)] = 783,
  [SMALL_STATE(42)] = 793,
  [SMALL_STATE(43)] = 799,
  [SMALL_STATE(44)] = 809,
  [SMALL_STATE(45)] = 819,
  [SMALL_STATE(46)] = 829,
  [SMALL_STATE(47)] = 839,
  [SMALL_STATE(48)] = 849,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 867,
  [SMALL_STATE(51)] = 877,
  [SMALL_STATE(52)] = 887,
  [SMALL_STATE(53)] = 897,
  [SMALL_STATE(54)] = 907,
  [SMALL_STATE(55)] = 917,
  [SMALL_STATE(56)] = 927,
  [SMALL_STATE(57)] = 937,
  [SMALL_STATE(58)] = 943,
  [SMALL_STATE(59)] = 953,
  [SMALL_STATE(60)] = 963,
  [SMALL_STATE(61)] = 973,
  [SMALL_STATE(62)] = 983,
  [SMALL_STATE(63)] = 993,
  [SMALL_STATE(64)] = 1003,
  [SMALL_STATE(65)] = 1013,
  [SMALL_STATE(66)] = 1023,
  [SMALL_STATE(67)] = 1033,
  [SMALL_STATE(68)] = 1043,
  [SMALL_STATE(69)] = 1053,
  [SMALL_STATE(70)] = 1063,
  [SMALL_STATE(71)] = 1069,
  [SMALL_STATE(72)] = 1079,
  [SMALL_STATE(73)] = 1089,
  [SMALL_STATE(74)] = 1099,
  [SMALL_STATE(75)] = 1109,
  [SMALL_STATE(76)] = 1115,
  [SMALL_STATE(77)] = 1125,
  [SMALL_STATE(78)] = 1135,
  [SMALL_STATE(79)] = 1145,
  [SMALL_STATE(80)] = 1155,
  [SMALL_STATE(81)] = 1165,
  [SMALL_STATE(82)] = 1175,
  [SMALL_STATE(83)] = 1185,
  [SMALL_STATE(84)] = 1195,
  [SMALL_STATE(85)] = 1205,
  [SMALL_STATE(86)] = 1215,
  [SMALL_STATE(87)] = 1225,
  [SMALL_STATE(88)] = 1235,
  [SMALL_STATE(89)] = 1245,
  [SMALL_STATE(90)] = 1255,
  [SMALL_STATE(91)] = 1260,
  [SMALL_STATE(92)] = 1265,
  [SMALL_STATE(93)] = 1270,
  [SMALL_STATE(94)] = 1275,
  [SMALL_STATE(95)] = 1280,
  [SMALL_STATE(96)] = 1287,
  [SMALL_STATE(97)] = 1292,
  [SMALL_STATE(98)] = 1299,
  [SMALL_STATE(99)] = 1304,
  [SMALL_STATE(100)] = 1309,
  [SMALL_STATE(101)] = 1316,
  [SMALL_STATE(102)] = 1323,
  [SMALL_STATE(103)] = 1328,
  [SMALL_STATE(104)] = 1333,
  [SMALL_STATE(105)] = 1338,
  [SMALL_STATE(106)] = 1345,
  [SMALL_STATE(107)] = 1352,
  [SMALL_STATE(108)] = 1357,
  [SMALL_STATE(109)] = 1362,
  [SMALL_STATE(110)] = 1369,
  [SMALL_STATE(111)] = 1376,
  [SMALL_STATE(112)] = 1383,
  [SMALL_STATE(113)] = 1390,
  [SMALL_STATE(114)] = 1395,
  [SMALL_STATE(115)] = 1400,
  [SMALL_STATE(116)] = 1405,
  [SMALL_STATE(117)] = 1412,
  [SMALL_STATE(118)] = 1417,
  [SMALL_STATE(119)] = 1422,
  [SMALL_STATE(120)] = 1427,
  [SMALL_STATE(121)] = 1432,
  [SMALL_STATE(122)] = 1437,
  [SMALL_STATE(123)] = 1444,
  [SMALL_STATE(124)] = 1449,
  [SMALL_STATE(125)] = 1454,
  [SMALL_STATE(126)] = 1461,
  [SMALL_STATE(127)] = 1466,
  [SMALL_STATE(128)] = 1471,
  [SMALL_STATE(129)] = 1476,
  [SMALL_STATE(130)] = 1481,
  [SMALL_STATE(131)] = 1486,
  [SMALL_STATE(132)] = 1491,
  [SMALL_STATE(133)] = 1496,
  [SMALL_STATE(134)] = 1501,
  [SMALL_STATE(135)] = 1506,
  [SMALL_STATE(136)] = 1511,
  [SMALL_STATE(137)] = 1516,
  [SMALL_STATE(138)] = 1523,
  [SMALL_STATE(139)] = 1528,
  [SMALL_STATE(140)] = 1533,
  [SMALL_STATE(141)] = 1540,
  [SMALL_STATE(142)] = 1545,
  [SMALL_STATE(143)] = 1550,
  [SMALL_STATE(144)] = 1557,
  [SMALL_STATE(145)] = 1562,
  [SMALL_STATE(146)] = 1567,
  [SMALL_STATE(147)] = 1572,
  [SMALL_STATE(148)] = 1577,
  [SMALL_STATE(149)] = 1582,
  [SMALL_STATE(150)] = 1587,
  [SMALL_STATE(151)] = 1592,
  [SMALL_STATE(152)] = 1597,
  [SMALL_STATE(153)] = 1604,
  [SMALL_STATE(154)] = 1609,
  [SMALL_STATE(155)] = 1614,
  [SMALL_STATE(156)] = 1621,
  [SMALL_STATE(157)] = 1628,
  [SMALL_STATE(158)] = 1633,
  [SMALL_STATE(159)] = 1638,
  [SMALL_STATE(160)] = 1645,
  [SMALL_STATE(161)] = 1650,
  [SMALL_STATE(162)] = 1655,
  [SMALL_STATE(163)] = 1662,
  [SMALL_STATE(164)] = 1669,
  [SMALL_STATE(165)] = 1674,
  [SMALL_STATE(166)] = 1679,
  [SMALL_STATE(167)] = 1686,
  [SMALL_STATE(168)] = 1693,
  [SMALL_STATE(169)] = 1700,
  [SMALL_STATE(170)] = 1707,
  [SMALL_STATE(171)] = 1714,
  [SMALL_STATE(172)] = 1721,
  [SMALL_STATE(173)] = 1728,
  [SMALL_STATE(174)] = 1735,
  [SMALL_STATE(175)] = 1742,
  [SMALL_STATE(176)] = 1747,
  [SMALL_STATE(177)] = 1752,
  [SMALL_STATE(178)] = 1757,
  [SMALL_STATE(179)] = 1762,
  [SMALL_STATE(180)] = 1767,
  [SMALL_STATE(181)] = 1772,
  [SMALL_STATE(182)] = 1777,
  [SMALL_STATE(183)] = 1782,
  [SMALL_STATE(184)] = 1787,
  [SMALL_STATE(185)] = 1792,
  [SMALL_STATE(186)] = 1797,
  [SMALL_STATE(187)] = 1802,
  [SMALL_STATE(188)] = 1807,
  [SMALL_STATE(189)] = 1812,
  [SMALL_STATE(190)] = 1817,
  [SMALL_STATE(191)] = 1822,
  [SMALL_STATE(192)] = 1827,
  [SMALL_STATE(193)] = 1832,
  [SMALL_STATE(194)] = 1836,
  [SMALL_STATE(195)] = 1840,
  [SMALL_STATE(196)] = 1844,
  [SMALL_STATE(197)] = 1848,
  [SMALL_STATE(198)] = 1852,
  [SMALL_STATE(199)] = 1856,
  [SMALL_STATE(200)] = 1860,
  [SMALL_STATE(201)] = 1864,
  [SMALL_STATE(202)] = 1868,
  [SMALL_STATE(203)] = 1872,
  [SMALL_STATE(204)] = 1876,
  [SMALL_STATE(205)] = 1880,
  [SMALL_STATE(206)] = 1884,
  [SMALL_STATE(207)] = 1888,
  [SMALL_STATE(208)] = 1892,
  [SMALL_STATE(209)] = 1896,
  [SMALL_STATE(210)] = 1900,
  [SMALL_STATE(211)] = 1904,
  [SMALL_STATE(212)] = 1908,
  [SMALL_STATE(213)] = 1912,
  [SMALL_STATE(214)] = 1916,
  [SMALL_STATE(215)] = 1920,
  [SMALL_STATE(216)] = 1924,
  [SMALL_STATE(217)] = 1928,
  [SMALL_STATE(218)] = 1932,
  [SMALL_STATE(219)] = 1936,
  [SMALL_STATE(220)] = 1940,
  [SMALL_STATE(221)] = 1944,
  [SMALL_STATE(222)] = 1948,
  [SMALL_STATE(223)] = 1952,
  [SMALL_STATE(224)] = 1956,
  [SMALL_STATE(225)] = 1960,
  [SMALL_STATE(226)] = 1964,
  [SMALL_STATE(227)] = 1968,
  [SMALL_STATE(228)] = 1972,
  [SMALL_STATE(229)] = 1976,
  [SMALL_STATE(230)] = 1980,
  [SMALL_STATE(231)] = 1984,
  [SMALL_STATE(232)] = 1988,
  [SMALL_STATE(233)] = 1992,
  [SMALL_STATE(234)] = 1996,
  [SMALL_STATE(235)] = 2000,
  [SMALL_STATE(236)] = 2004,
  [SMALL_STATE(237)] = 2008,
  [SMALL_STATE(238)] = 2012,
  [SMALL_STATE(239)] = 2016,
  [SMALL_STATE(240)] = 2020,
  [SMALL_STATE(241)] = 2024,
  [SMALL_STATE(242)] = 2028,
  [SMALL_STATE(243)] = 2032,
  [SMALL_STATE(244)] = 2036,
  [SMALL_STATE(245)] = 2040,
  [SMALL_STATE(246)] = 2044,
  [SMALL_STATE(247)] = 2048,
  [SMALL_STATE(248)] = 2052,
  [SMALL_STATE(249)] = 2056,
  [SMALL_STATE(250)] = 2060,
  [SMALL_STATE(251)] = 2064,
  [SMALL_STATE(252)] = 2068,
  [SMALL_STATE(253)] = 2072,
  [SMALL_STATE(254)] = 2076,
  [SMALL_STATE(255)] = 2080,
  [SMALL_STATE(256)] = 2084,
  [SMALL_STATE(257)] = 2088,
  [SMALL_STATE(258)] = 2092,
  [SMALL_STATE(259)] = 2096,
  [SMALL_STATE(260)] = 2100,
  [SMALL_STATE(261)] = 2104,
  [SMALL_STATE(262)] = 2108,
  [SMALL_STATE(263)] = 2112,
  [SMALL_STATE(264)] = 2116,
  [SMALL_STATE(265)] = 2120,
  [SMALL_STATE(266)] = 2124,
  [SMALL_STATE(267)] = 2128,
  [SMALL_STATE(268)] = 2132,
  [SMALL_STATE(269)] = 2136,
  [SMALL_STATE(270)] = 2140,
  [SMALL_STATE(271)] = 2144,
  [SMALL_STATE(272)] = 2148,
  [SMALL_STATE(273)] = 2152,
  [SMALL_STATE(274)] = 2156,
  [SMALL_STATE(275)] = 2160,
  [SMALL_STATE(276)] = 2164,
  [SMALL_STATE(277)] = 2168,
  [SMALL_STATE(278)] = 2172,
  [SMALL_STATE(279)] = 2176,
  [SMALL_STATE(280)] = 2180,
  [SMALL_STATE(281)] = 2184,
  [SMALL_STATE(282)] = 2188,
  [SMALL_STATE(283)] = 2192,
  [SMALL_STATE(284)] = 2196,
  [SMALL_STATE(285)] = 2200,
  [SMALL_STATE(286)] = 2204,
  [SMALL_STATE(287)] = 2208,
  [SMALL_STATE(288)] = 2212,
  [SMALL_STATE(289)] = 2216,
  [SMALL_STATE(290)] = 2220,
  [SMALL_STATE(291)] = 2224,
  [SMALL_STATE(292)] = 2228,
  [SMALL_STATE(293)] = 2232,
  [SMALL_STATE(294)] = 2236,
  [SMALL_STATE(295)] = 2240,
  [SMALL_STATE(296)] = 2244,
  [SMALL_STATE(297)] = 2248,
  [SMALL_STATE(298)] = 2252,
  [SMALL_STATE(299)] = 2256,
  [SMALL_STATE(300)] = 2260,
  [SMALL_STATE(301)] = 2264,
  [SMALL_STATE(302)] = 2268,
  [SMALL_STATE(303)] = 2272,
  [SMALL_STATE(304)] = 2276,
  [SMALL_STATE(305)] = 2280,
  [SMALL_STATE(306)] = 2284,
  [SMALL_STATE(307)] = 2288,
  [SMALL_STATE(308)] = 2292,
  [SMALL_STATE(309)] = 2296,
  [SMALL_STATE(310)] = 2300,
  [SMALL_STATE(311)] = 2304,
  [SMALL_STATE(312)] = 2308,
  [SMALL_STATE(313)] = 2312,
  [SMALL_STATE(314)] = 2316,
  [SMALL_STATE(315)] = 2320,
  [SMALL_STATE(316)] = 2324,
  [SMALL_STATE(317)] = 2328,
  [SMALL_STATE(318)] = 2332,
  [SMALL_STATE(319)] = 2336,
  [SMALL_STATE(320)] = 2340,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(101),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2), SHIFT_REPEAT(15),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_icmp_matches_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(14),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(12),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(104),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(140),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(282),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(97),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_header, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint8, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 11),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 10),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 9),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 10),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 9),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_acl_name, 3, .production_id = 8),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_name_def, 3, .production_id = 8),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
