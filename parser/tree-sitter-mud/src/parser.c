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
#define STATE_COUNT 307
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_DQUOTEforwarding_DQUOTE = 42,
  anon_sym_DQUOTEaccept_DQUOTE = 43,
  anon_sym_DQUOTEdrop_DQUOTE = 44,
  anon_sym_DQUOTEreject_DQUOTE = 45,
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 46,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 47,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 48,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 49,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 50,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 51,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 52,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 53,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 54,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 55,
  aux_sym_string_quoted_content_token1 = 56,
  sym__escape_sequence = 57,
  sym_number = 58,
  anon_sym_true = 59,
  anon_sym_false = 60,
  anon_sym_null = 61,
  sym_source = 62,
  sym_ietf_mud = 63,
  sym_ietf_acls = 64,
  sym_acl = 65,
  sym_acl_object = 66,
  sym_ace = 67,
  sym_ace_object = 68,
  sym_matches = 69,
  sym_actions = 70,
  sym_acl_name_def = 71,
  sym_policy_acl_name = 72,
  sym_matches_object = 73,
  sym_mud_matches_augment = 74,
  sym_eth_matches = 75,
  sym_ipv4_matches = 76,
  sym_ipv6_matches = 77,
  sym_tcp_matches = 78,
  sym_udp_matches = 79,
  sym_icmp_matches = 80,
  sym_controller = 81,
  sym_my_controller = 82,
  sym_manufacturer = 83,
  sym_same_manufacturer = 84,
  sym_local_networks = 85,
  sym_model = 86,
  sym_ip_header_proto = 87,
  sym_ietf_acldns = 88,
  sym_source_port = 89,
  sym_destination_port = 90,
  sym_range_or_operator = 91,
  sym_port_range = 92,
  sym_port_operator = 93,
  sym_direction_initiated = 94,
  sym_forwarding_action = 95,
  sym_action = 96,
  sym_mud_version = 97,
  sym_mud_url = 98,
  sym_last_update = 99,
  sym_cache_validity = 100,
  sym_is_supported = 101,
  sym_systeminfo = 102,
  sym_from_device_policy = 103,
  sym_to_device_policy = 104,
  sym_policy = 105,
  sym_access_list = 106,
  sym_string = 107,
  sym_string_quoted_content = 108,
  sym_bool = 109,
  sym_null_valued = 110,
  sym_json_value_fallback = 111,
  sym_json_object_fallback = 112,
  sym_json_array_fallback = 113,
  sym_json_pair_fallback = 114,
  aux_sym_ietf_mud_repeat1 = 115,
  aux_sym_acl_repeat1 = 116,
  aux_sym_ace_repeat1 = 117,
  aux_sym_matches_object_repeat1 = 118,
  aux_sym_mud_matches_augment_repeat1 = 119,
  aux_sym_eth_matches_repeat1 = 120,
  aux_sym_ipv4_matches_repeat1 = 121,
  aux_sym_tcp_matches_repeat1 = 122,
  aux_sym_port_range_repeat1 = 123,
  aux_sym_port_operator_repeat1 = 124,
  aux_sym_access_list_repeat1 = 125,
  aux_sym_string_quoted_content_repeat1 = 126,
  aux_sym_json_array_fallback_repeat1 = 127,
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
      if (eof) ADVANCE(472);
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == '\\') ADVANCE(470);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead != 0) ADVANCE(537);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(488);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(491);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(492);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(493);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(489);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(490);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(499);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(527);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(500);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(494);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(522);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(531);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(528);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(526);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(513);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(476);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(530);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(496);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(495);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(529);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(498);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(514);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(533);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(497);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(532);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(519);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(512);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(484);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(479);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(483);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(524);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(485);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(518);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(482);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(523);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(525);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(487);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(486);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(517);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(520);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(515);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(516);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(535);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(521);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(534);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(478);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(288);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(447);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(256);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(339);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(231);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(264);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(277);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(144);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 86:
      if (lookahead == '4') ADVANCE(6);
      if (lookahead == '6') ADVANCE(7);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(156);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(501);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(270);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'f') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'p') ADVANCE(457);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(313);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 247:
      if (lookahead == 'j') ADVANCE(197);
      END_STATE();
    case 248:
      if (lookahead == 'k') ADVANCE(396);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 268:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 269:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 270:
      if (lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 271:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 272:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 273:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 275:
      if (lookahead == 'm') ADVANCE(451);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(336);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 333:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 334:
      if (lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 335:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 336:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 337:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 338:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 339:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 340:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 341:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 342:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 343:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 457:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 458:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 459:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 460:
      if (lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 461:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 462:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 463:
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 464:
      if (lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 465:
      if (lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 466:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 467:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 469:
      if (lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 470:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(538);
      END_STATE();
    case 471:
      if (eof) ADVANCE(472);
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DQUOTEeth_DQUOTE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv4_DQUOTE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv6_DQUOTE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DQUOTEtcp_DQUOTE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DQUOTEudp_DQUOTE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DQUOTEicmp_DQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DQUOTEcontroller_DQUOTE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_DQUOTEmy_DASHcontroller_DQUOTE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DQUOTEmanufacturer_DQUOTE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DQUOTElocal_DASHnetworks_DQUOTE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DQUOTEmodel_DQUOTE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DQUOTEprotocol_DQUOTE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHacldns_COLON);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_src_DASHdnsname);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_dst_DASHdnsname);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(446);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DQUOTEsource_DASHport_DQUOTE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DQUOTEdestination_DASHport_DQUOTE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DQUOTElower_DASHport_DQUOTE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_DQUOTEupper_DASHport_DQUOTE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DQUOTEoperator_DQUOTE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DQUOTEport_DQUOTE);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DQUOTE);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DQUOTE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(537);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 37},
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
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 31},
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
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 37},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 31},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 37},
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
  [187] = {.lex_state = 37},
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
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 37},
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
  [222] = {.lex_state = 31},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 37},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 31},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 37},
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
  [251] = {.lex_state = 37},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 37},
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
  [281] = {.lex_state = 37},
  [282] = {.lex_state = 0},
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
  [300] = {.lex_state = 37},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
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
    [sym_source] = STATE(221),
    [sym_json_object_fallback] = STATE(273),
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
    STATE(237), 1,
      sym_string,
    STATE(42), 9,
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
    STATE(237), 1,
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
    STATE(237), 1,
      sym_string,
    STATE(74), 8,
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
    STATE(237), 1,
      sym_string,
    STATE(177), 8,
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
    STATE(237), 1,
      sym_string,
    STATE(66), 7,
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
    STATE(237), 1,
      sym_string,
    STATE(131), 7,
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
    STATE(69), 3,
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
    STATE(237), 1,
      sym_string,
    STATE(62), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [310] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_json_value_fallback,
    STATE(69), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [334] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_json_value_fallback,
    STATE(69), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(65), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [358] = 8,
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
    STATE(237), 1,
      sym_string,
    STATE(61), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [386] = 7,
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
    STATE(237), 1,
      sym_string,
    STATE(113), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [411] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(237), 1,
      sym_string,
    STATE(64), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [435] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_string,
    STATE(63), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [459] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(237), 1,
      sym_string,
    STATE(124), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [480] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(52), 1,
      sym_json_pair_fallback,
    STATE(235), 1,
      sym_ietf_mud,
    STATE(237), 1,
      sym_string,
  [502] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(52), 1,
      sym_json_pair_fallback,
    STATE(237), 1,
      sym_string,
  [521] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_json_pair_fallback,
    STATE(237), 1,
      sym_string,
  [537] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_json_pair_fallback,
    STATE(237), 1,
      sym_string,
  [553] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_json_pair_fallback,
    STATE(237), 1,
      sym_string,
  [569] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_range_or_operator,
    STATE(118), 2,
      sym_port_range,
      sym_port_operator,
  [580] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(99), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [591] = 1,
    ACTIONS(102), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [598] = 2,
    STATE(280), 1,
      sym_action,
    ACTIONS(104), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [607] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [614] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_json_pair_fallback,
    STATE(237), 1,
      sym_string,
  [627] = 3,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_actions,
    STATE(215), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [638] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [645] = 3,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(114), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [656] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_range_or_operator,
    STATE(118), 2,
      sym_port_range,
      sym_port_operator,
  [667] = 3,
    STATE(30), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(222), 1,
      sym_string_quoted_content,
    ACTIONS(116), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [678] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [685] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(120), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [696] = 3,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym_matches_object,
    STATE(219), 1,
      sym_matches,
  [706] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_access_list_repeat1,
  [716] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_port_operator_repeat1,
  [726] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_port_range_repeat1,
  [736] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_port_operator_repeat1,
  [746] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_port_range_repeat1,
  [756] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_port_operator_repeat1,
  [766] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_ietf_mud_repeat1,
  [776] = 1,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [782] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_json_array_fallback_repeat1,
  [792] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_port_range_repeat1,
  [802] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tcp_matches_repeat1,
  [812] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_ipv4_matches_repeat1,
  [822] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_mud_matches_augment_repeat1,
  [832] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_eth_matches_repeat1,
  [842] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tcp_matches_repeat1,
  [852] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tcp_matches_repeat1,
  [862] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_eth_matches_repeat1,
  [872] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_ipv4_matches_repeat1,
  [882] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_ipv4_matches_repeat1,
  [892] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_eth_matches_repeat1,
  [902] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_ietf_mud_repeat1,
  [912] = 1,
    ACTIONS(201), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [918] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_json_array_fallback_repeat1,
  [928] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_mud_matches_augment_repeat1,
  [938] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_eth_matches_repeat1,
  [948] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_tcp_matches_repeat1,
  [958] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_tcp_matches_repeat1,
  [968] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_ipv4_matches_repeat1,
  [978] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ipv4_matches_repeat1,
  [988] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_eth_matches_repeat1,
  [998] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1008] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_eth_matches_repeat1,
  [1018] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_matches_object_repeat1,
  [1028] = 1,
    ACTIONS(230), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1034] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_eth_matches_repeat1,
  [1044] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_matches_object_repeat1,
  [1054] = 2,
    STATE(172), 1,
      sym_bool,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
  [1062] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_ietf_mud_repeat1,
  [1072] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_matches_object_repeat1,
  [1082] = 1,
    ACTIONS(250), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1088] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_json_array_fallback_repeat1,
  [1098] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_ace_object,
  [1108] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_access_list_repeat1,
  [1118] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_acl_repeat1,
  [1128] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_ace_repeat1,
  [1138] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_acl_object,
  [1148] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_access_list_repeat1,
  [1158] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_acl_repeat1,
  [1168] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_ace_repeat1,
  [1178] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ace_repeat1,
  [1188] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_acl_repeat1,
  [1198] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1203] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1208] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1213] = 1,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1218] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_string,
  [1225] = 2,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_access_list,
  [1232] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1237] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1242] = 2,
    ACTIONS(308), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(289), 1,
      sym_acl_name_def,
  [1249] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1254] = 2,
    ACTIONS(312), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1261] = 1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1266] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1271] = 1,
    ACTIONS(320), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1276] = 2,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_acl,
  [1283] = 2,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_acl_object,
  [1290] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_string,
  [1297] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1302] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      sym_string,
  [1309] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1314] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1319] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
  [1326] = 1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1331] = 2,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
  [1338] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1343] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1348] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1353] = 2,
    ACTIONS(338), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(265), 1,
      sym_policy_acl_name,
  [1360] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1365] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_string,
  [1372] = 1,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1377] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1382] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1387] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1392] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_string,
  [1399] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_string,
  [1406] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1411] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1416] = 1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1421] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1426] = 2,
    ACTIONS(338), 1,
      anon_sym_DQUOTEname_DQUOTE,
    STATE(253), 1,
      sym_policy_acl_name,
  [1433] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      sym_string,
  [1440] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1445] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_ace,
  [1452] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1457] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1467] = 1,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1472] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1477] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1482] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1487] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1492] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1497] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1502] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1507] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1512] = 2,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_ace_object,
  [1519] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_string,
  [1526] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      sym_string,
  [1533] = 1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1538] = 1,
    ACTIONS(380), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1543] = 2,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_policy,
  [1550] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1555] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1560] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1565] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1570] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_string,
  [1577] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym_null_valued,
  [1584] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_null_valued,
  [1591] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      sym_string,
  [1598] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym_null_valued,
  [1605] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_string,
  [1612] = 2,
    ACTIONS(394), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(245), 1,
      sym_ietf_acls,
  [1619] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1624] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1629] = 1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1634] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1639] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1644] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1649] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1654] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1659] = 1,
    ACTIONS(412), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [1664] = 1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1669] = 1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1674] = 2,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_policy,
  [1681] = 1,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1686] = 1,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1691] = 1,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1696] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1701] = 1,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1706] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1711] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1716] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1721] = 1,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1726] = 1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1731] = 1,
    ACTIONS(432), 1,
      anon_sym_COLON,
  [1735] = 1,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
  [1739] = 1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
  [1743] = 1,
    ACTIONS(438), 1,
      anon_sym_COMMA,
  [1747] = 1,
    ACTIONS(440), 1,
      anon_sym_COLON,
  [1751] = 1,
    ACTIONS(442), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [1755] = 1,
    ACTIONS(444), 1,
      anon_sym_COLON,
  [1759] = 1,
    ACTIONS(446), 1,
      anon_sym_COLON,
  [1763] = 1,
    ACTIONS(448), 1,
      anon_sym_COLON,
  [1767] = 1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [1771] = 1,
    ACTIONS(452), 1,
      anon_sym_COLON,
  [1775] = 1,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [1779] = 1,
    ACTIONS(456), 1,
      anon_sym_COLON,
  [1783] = 1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
  [1787] = 1,
    ACTIONS(460), 1,
      anon_sym_COLON,
  [1791] = 1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [1795] = 1,
    ACTIONS(464), 1,
      anon_sym_COMMA,
  [1799] = 1,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [1803] = 1,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
  [1807] = 1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [1811] = 1,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [1815] = 1,
    ACTIONS(474), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [1819] = 1,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [1823] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [1827] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [1831] = 1,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [1835] = 1,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [1839] = 1,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
  [1843] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON,
  [1847] = 1,
    ACTIONS(490), 1,
      anon_sym_COLON,
  [1851] = 1,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [1855] = 1,
    ACTIONS(494), 1,
      anon_sym_COLON,
  [1859] = 1,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
  [1863] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [1867] = 1,
    ACTIONS(500), 1,
      anon_sym_COLON,
  [1871] = 1,
    ACTIONS(502), 1,
      anon_sym_COMMA,
  [1875] = 1,
    ACTIONS(504), 1,
      anon_sym_COMMA,
  [1879] = 1,
    ACTIONS(506), 1,
      anon_sym_COMMA,
  [1883] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [1887] = 1,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
  [1891] = 1,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
  [1895] = 1,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [1899] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [1903] = 1,
    ACTIONS(518), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [1907] = 1,
    ACTIONS(520), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [1911] = 1,
    ACTIONS(522), 1,
      sym_number,
  [1915] = 1,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
  [1919] = 1,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
  [1923] = 1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [1927] = 1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [1931] = 1,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [1935] = 1,
    ACTIONS(534), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1939] = 1,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
  [1943] = 1,
    ACTIONS(538), 1,
      anon_sym_COMMA,
  [1947] = 1,
    ACTIONS(540), 1,
      anon_sym_COLON,
  [1951] = 1,
    ACTIONS(542), 1,
      anon_sym_COLON,
  [1955] = 1,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [1959] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
  [1963] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [1967] = 1,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [1971] = 1,
    ACTIONS(552), 1,
      anon_sym_COLON,
  [1975] = 1,
    ACTIONS(554), 1,
      sym_number,
  [1979] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [1983] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [1987] = 1,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [1991] = 1,
    ACTIONS(562), 1,
      anon_sym_null,
  [1995] = 1,
    ACTIONS(564), 1,
      anon_sym_LBRACK,
  [1999] = 1,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [2003] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
  [2007] = 1,
    ACTIONS(570), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [2011] = 1,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [2015] = 1,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
  [2019] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [2023] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [2027] = 1,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [2031] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [2035] = 1,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [2039] = 1,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
  [2043] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [2047] = 1,
    ACTIONS(590), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [2051] = 1,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [2055] = 1,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [2059] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
  [2063] = 1,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
  [2067] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [2071] = 1,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
  [2075] = 1,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [2079] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [2083] = 1,
    ACTIONS(608), 1,
      sym_number,
  [2087] = 1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
  [2091] = 1,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
  [2095] = 1,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
  [2099] = 1,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
  [2103] = 1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [2107] = 1,
    ACTIONS(620), 1,
      anon_sym_COLON,
  [2111] = 1,
    ACTIONS(622), 1,
      anon_sym_COLON,
  [2115] = 1,
    ACTIONS(624), 1,
      anon_sym_COLON,
  [2119] = 1,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
  [2123] = 1,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
  [2127] = 1,
    ACTIONS(630), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [2131] = 1,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
  [2135] = 1,
    ACTIONS(634), 1,
      sym_number,
  [2139] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [2143] = 1,
    ACTIONS(638), 1,
      sym_number,
  [2147] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [2151] = 1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
  [2155] = 1,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
  [2159] = 1,
    ACTIONS(646), 1,
      anon_sym_COMMA,
  [2163] = 1,
    ACTIONS(648), 1,
      anon_sym_COLON,
  [2167] = 1,
    ACTIONS(650), 1,
      anon_sym_COLON,
  [2171] = 1,
    ACTIONS(652), 1,
      anon_sym_COLON,
  [2175] = 1,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
  [2179] = 1,
    ACTIONS(656), 1,
      anon_sym_COLON,
  [2183] = 1,
    ACTIONS(658), 1,
      anon_sym_COLON,
  [2187] = 1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [2191] = 1,
    ACTIONS(662), 1,
      anon_sym_COLON,
  [2195] = 1,
    ACTIONS(664), 1,
      anon_sym_COLON,
  [2199] = 1,
    ACTIONS(666), 1,
      anon_sym_COLON,
  [2203] = 1,
    ACTIONS(668), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [2207] = 1,
    ACTIONS(670), 1,
      anon_sym_COLON,
  [2211] = 1,
    ACTIONS(672), 1,
      sym_number,
  [2215] = 1,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
  [2219] = 1,
    ACTIONS(676), 1,
      sym_number,
  [2223] = 1,
    ACTIONS(678), 1,
      anon_sym_COLON,
  [2227] = 1,
    ACTIONS(680), 1,
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
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 358,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 411,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 459,
  [SMALL_STATE(17)] = 480,
  [SMALL_STATE(18)] = 502,
  [SMALL_STATE(19)] = 521,
  [SMALL_STATE(20)] = 537,
  [SMALL_STATE(21)] = 553,
  [SMALL_STATE(22)] = 569,
  [SMALL_STATE(23)] = 580,
  [SMALL_STATE(24)] = 591,
  [SMALL_STATE(25)] = 598,
  [SMALL_STATE(26)] = 607,
  [SMALL_STATE(27)] = 614,
  [SMALL_STATE(28)] = 627,
  [SMALL_STATE(29)] = 638,
  [SMALL_STATE(30)] = 645,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 678,
  [SMALL_STATE(34)] = 685,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 706,
  [SMALL_STATE(37)] = 716,
  [SMALL_STATE(38)] = 726,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 746,
  [SMALL_STATE(41)] = 756,
  [SMALL_STATE(42)] = 766,
  [SMALL_STATE(43)] = 776,
  [SMALL_STATE(44)] = 782,
  [SMALL_STATE(45)] = 792,
  [SMALL_STATE(46)] = 802,
  [SMALL_STATE(47)] = 812,
  [SMALL_STATE(48)] = 822,
  [SMALL_STATE(49)] = 832,
  [SMALL_STATE(50)] = 842,
  [SMALL_STATE(51)] = 852,
  [SMALL_STATE(52)] = 862,
  [SMALL_STATE(53)] = 872,
  [SMALL_STATE(54)] = 882,
  [SMALL_STATE(55)] = 892,
  [SMALL_STATE(56)] = 902,
  [SMALL_STATE(57)] = 912,
  [SMALL_STATE(58)] = 918,
  [SMALL_STATE(59)] = 928,
  [SMALL_STATE(60)] = 938,
  [SMALL_STATE(61)] = 948,
  [SMALL_STATE(62)] = 958,
  [SMALL_STATE(63)] = 968,
  [SMALL_STATE(64)] = 978,
  [SMALL_STATE(65)] = 988,
  [SMALL_STATE(66)] = 998,
  [SMALL_STATE(67)] = 1008,
  [SMALL_STATE(68)] = 1018,
  [SMALL_STATE(69)] = 1028,
  [SMALL_STATE(70)] = 1034,
  [SMALL_STATE(71)] = 1044,
  [SMALL_STATE(72)] = 1054,
  [SMALL_STATE(73)] = 1062,
  [SMALL_STATE(74)] = 1072,
  [SMALL_STATE(75)] = 1082,
  [SMALL_STATE(76)] = 1088,
  [SMALL_STATE(77)] = 1098,
  [SMALL_STATE(78)] = 1108,
  [SMALL_STATE(79)] = 1118,
  [SMALL_STATE(80)] = 1128,
  [SMALL_STATE(81)] = 1138,
  [SMALL_STATE(82)] = 1148,
  [SMALL_STATE(83)] = 1158,
  [SMALL_STATE(84)] = 1168,
  [SMALL_STATE(85)] = 1178,
  [SMALL_STATE(86)] = 1188,
  [SMALL_STATE(87)] = 1198,
  [SMALL_STATE(88)] = 1203,
  [SMALL_STATE(89)] = 1208,
  [SMALL_STATE(90)] = 1213,
  [SMALL_STATE(91)] = 1218,
  [SMALL_STATE(92)] = 1225,
  [SMALL_STATE(93)] = 1232,
  [SMALL_STATE(94)] = 1237,
  [SMALL_STATE(95)] = 1242,
  [SMALL_STATE(96)] = 1249,
  [SMALL_STATE(97)] = 1254,
  [SMALL_STATE(98)] = 1261,
  [SMALL_STATE(99)] = 1266,
  [SMALL_STATE(100)] = 1271,
  [SMALL_STATE(101)] = 1276,
  [SMALL_STATE(102)] = 1283,
  [SMALL_STATE(103)] = 1290,
  [SMALL_STATE(104)] = 1297,
  [SMALL_STATE(105)] = 1302,
  [SMALL_STATE(106)] = 1309,
  [SMALL_STATE(107)] = 1314,
  [SMALL_STATE(108)] = 1319,
  [SMALL_STATE(109)] = 1326,
  [SMALL_STATE(110)] = 1331,
  [SMALL_STATE(111)] = 1338,
  [SMALL_STATE(112)] = 1343,
  [SMALL_STATE(113)] = 1348,
  [SMALL_STATE(114)] = 1353,
  [SMALL_STATE(115)] = 1360,
  [SMALL_STATE(116)] = 1365,
  [SMALL_STATE(117)] = 1372,
  [SMALL_STATE(118)] = 1377,
  [SMALL_STATE(119)] = 1382,
  [SMALL_STATE(120)] = 1387,
  [SMALL_STATE(121)] = 1392,
  [SMALL_STATE(122)] = 1399,
  [SMALL_STATE(123)] = 1406,
  [SMALL_STATE(124)] = 1411,
  [SMALL_STATE(125)] = 1416,
  [SMALL_STATE(126)] = 1421,
  [SMALL_STATE(127)] = 1426,
  [SMALL_STATE(128)] = 1433,
  [SMALL_STATE(129)] = 1440,
  [SMALL_STATE(130)] = 1445,
  [SMALL_STATE(131)] = 1452,
  [SMALL_STATE(132)] = 1457,
  [SMALL_STATE(133)] = 1462,
  [SMALL_STATE(134)] = 1467,
  [SMALL_STATE(135)] = 1472,
  [SMALL_STATE(136)] = 1477,
  [SMALL_STATE(137)] = 1482,
  [SMALL_STATE(138)] = 1487,
  [SMALL_STATE(139)] = 1492,
  [SMALL_STATE(140)] = 1497,
  [SMALL_STATE(141)] = 1502,
  [SMALL_STATE(142)] = 1507,
  [SMALL_STATE(143)] = 1512,
  [SMALL_STATE(144)] = 1519,
  [SMALL_STATE(145)] = 1526,
  [SMALL_STATE(146)] = 1533,
  [SMALL_STATE(147)] = 1538,
  [SMALL_STATE(148)] = 1543,
  [SMALL_STATE(149)] = 1550,
  [SMALL_STATE(150)] = 1555,
  [SMALL_STATE(151)] = 1560,
  [SMALL_STATE(152)] = 1565,
  [SMALL_STATE(153)] = 1570,
  [SMALL_STATE(154)] = 1577,
  [SMALL_STATE(155)] = 1584,
  [SMALL_STATE(156)] = 1591,
  [SMALL_STATE(157)] = 1598,
  [SMALL_STATE(158)] = 1605,
  [SMALL_STATE(159)] = 1612,
  [SMALL_STATE(160)] = 1619,
  [SMALL_STATE(161)] = 1624,
  [SMALL_STATE(162)] = 1629,
  [SMALL_STATE(163)] = 1634,
  [SMALL_STATE(164)] = 1639,
  [SMALL_STATE(165)] = 1644,
  [SMALL_STATE(166)] = 1649,
  [SMALL_STATE(167)] = 1654,
  [SMALL_STATE(168)] = 1659,
  [SMALL_STATE(169)] = 1664,
  [SMALL_STATE(170)] = 1669,
  [SMALL_STATE(171)] = 1674,
  [SMALL_STATE(172)] = 1681,
  [SMALL_STATE(173)] = 1686,
  [SMALL_STATE(174)] = 1691,
  [SMALL_STATE(175)] = 1696,
  [SMALL_STATE(176)] = 1701,
  [SMALL_STATE(177)] = 1706,
  [SMALL_STATE(178)] = 1711,
  [SMALL_STATE(179)] = 1716,
  [SMALL_STATE(180)] = 1721,
  [SMALL_STATE(181)] = 1726,
  [SMALL_STATE(182)] = 1731,
  [SMALL_STATE(183)] = 1735,
  [SMALL_STATE(184)] = 1739,
  [SMALL_STATE(185)] = 1743,
  [SMALL_STATE(186)] = 1747,
  [SMALL_STATE(187)] = 1751,
  [SMALL_STATE(188)] = 1755,
  [SMALL_STATE(189)] = 1759,
  [SMALL_STATE(190)] = 1763,
  [SMALL_STATE(191)] = 1767,
  [SMALL_STATE(192)] = 1771,
  [SMALL_STATE(193)] = 1775,
  [SMALL_STATE(194)] = 1779,
  [SMALL_STATE(195)] = 1783,
  [SMALL_STATE(196)] = 1787,
  [SMALL_STATE(197)] = 1791,
  [SMALL_STATE(198)] = 1795,
  [SMALL_STATE(199)] = 1799,
  [SMALL_STATE(200)] = 1803,
  [SMALL_STATE(201)] = 1807,
  [SMALL_STATE(202)] = 1811,
  [SMALL_STATE(203)] = 1815,
  [SMALL_STATE(204)] = 1819,
  [SMALL_STATE(205)] = 1823,
  [SMALL_STATE(206)] = 1827,
  [SMALL_STATE(207)] = 1831,
  [SMALL_STATE(208)] = 1835,
  [SMALL_STATE(209)] = 1839,
  [SMALL_STATE(210)] = 1843,
  [SMALL_STATE(211)] = 1847,
  [SMALL_STATE(212)] = 1851,
  [SMALL_STATE(213)] = 1855,
  [SMALL_STATE(214)] = 1859,
  [SMALL_STATE(215)] = 1863,
  [SMALL_STATE(216)] = 1867,
  [SMALL_STATE(217)] = 1871,
  [SMALL_STATE(218)] = 1875,
  [SMALL_STATE(219)] = 1879,
  [SMALL_STATE(220)] = 1883,
  [SMALL_STATE(221)] = 1887,
  [SMALL_STATE(222)] = 1891,
  [SMALL_STATE(223)] = 1895,
  [SMALL_STATE(224)] = 1899,
  [SMALL_STATE(225)] = 1903,
  [SMALL_STATE(226)] = 1907,
  [SMALL_STATE(227)] = 1911,
  [SMALL_STATE(228)] = 1915,
  [SMALL_STATE(229)] = 1919,
  [SMALL_STATE(230)] = 1923,
  [SMALL_STATE(231)] = 1927,
  [SMALL_STATE(232)] = 1931,
  [SMALL_STATE(233)] = 1935,
  [SMALL_STATE(234)] = 1939,
  [SMALL_STATE(235)] = 1943,
  [SMALL_STATE(236)] = 1947,
  [SMALL_STATE(237)] = 1951,
  [SMALL_STATE(238)] = 1955,
  [SMALL_STATE(239)] = 1959,
  [SMALL_STATE(240)] = 1963,
  [SMALL_STATE(241)] = 1967,
  [SMALL_STATE(242)] = 1971,
  [SMALL_STATE(243)] = 1975,
  [SMALL_STATE(244)] = 1979,
  [SMALL_STATE(245)] = 1983,
  [SMALL_STATE(246)] = 1987,
  [SMALL_STATE(247)] = 1991,
  [SMALL_STATE(248)] = 1995,
  [SMALL_STATE(249)] = 1999,
  [SMALL_STATE(250)] = 2003,
  [SMALL_STATE(251)] = 2007,
  [SMALL_STATE(252)] = 2011,
  [SMALL_STATE(253)] = 2015,
  [SMALL_STATE(254)] = 2019,
  [SMALL_STATE(255)] = 2023,
  [SMALL_STATE(256)] = 2027,
  [SMALL_STATE(257)] = 2031,
  [SMALL_STATE(258)] = 2035,
  [SMALL_STATE(259)] = 2039,
  [SMALL_STATE(260)] = 2043,
  [SMALL_STATE(261)] = 2047,
  [SMALL_STATE(262)] = 2051,
  [SMALL_STATE(263)] = 2055,
  [SMALL_STATE(264)] = 2059,
  [SMALL_STATE(265)] = 2063,
  [SMALL_STATE(266)] = 2067,
  [SMALL_STATE(267)] = 2071,
  [SMALL_STATE(268)] = 2075,
  [SMALL_STATE(269)] = 2079,
  [SMALL_STATE(270)] = 2083,
  [SMALL_STATE(271)] = 2087,
  [SMALL_STATE(272)] = 2091,
  [SMALL_STATE(273)] = 2095,
  [SMALL_STATE(274)] = 2099,
  [SMALL_STATE(275)] = 2103,
  [SMALL_STATE(276)] = 2107,
  [SMALL_STATE(277)] = 2111,
  [SMALL_STATE(278)] = 2115,
  [SMALL_STATE(279)] = 2119,
  [SMALL_STATE(280)] = 2123,
  [SMALL_STATE(281)] = 2127,
  [SMALL_STATE(282)] = 2131,
  [SMALL_STATE(283)] = 2135,
  [SMALL_STATE(284)] = 2139,
  [SMALL_STATE(285)] = 2143,
  [SMALL_STATE(286)] = 2147,
  [SMALL_STATE(287)] = 2151,
  [SMALL_STATE(288)] = 2155,
  [SMALL_STATE(289)] = 2159,
  [SMALL_STATE(290)] = 2163,
  [SMALL_STATE(291)] = 2167,
  [SMALL_STATE(292)] = 2171,
  [SMALL_STATE(293)] = 2175,
  [SMALL_STATE(294)] = 2179,
  [SMALL_STATE(295)] = 2183,
  [SMALL_STATE(296)] = 2187,
  [SMALL_STATE(297)] = 2191,
  [SMALL_STATE(298)] = 2195,
  [SMALL_STATE(299)] = 2199,
  [SMALL_STATE(300)] = 2203,
  [SMALL_STATE(301)] = 2207,
  [SMALL_STATE(302)] = 2211,
  [SMALL_STATE(303)] = 2215,
  [SMALL_STATE(304)] = 2219,
  [SMALL_STATE(305)] = 2223,
  [SMALL_STATE(306)] = 2227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(97),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(100),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(16),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(10),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(259),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(102),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(143),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 9),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 11),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 9),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eth_matches, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [510] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 10),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 9),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_acl_name, 3, .production_id = 8),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_name_def, 3, .production_id = 8),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
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
