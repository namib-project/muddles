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
#define STATE_COUNT 277
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_DQUOTEname_DQUOTE = 10,
  anon_sym_DQUOTEtype_DQUOTE = 11,
  anon_sym_DQUOTEaces_DQUOTE = 12,
  anon_sym_DQUOTEace_DQUOTE = 13,
  anon_sym_DQUOTEmatches_DQUOTE = 14,
  anon_sym_DQUOTEactions_DQUOTE = 15,
  anon_sym_DQUOTEipv4_DQUOTE = 16,
  anon_sym_DQUOTEipv6_DQUOTE = 17,
  anon_sym_DQUOTEtcp_DQUOTE = 18,
  anon_sym_DQUOTEudp_DQUOTE = 19,
  anon_sym_DQUOTEicmp_DQUOTE = 20,
  anon_sym_DQUOTEprotocol_DQUOTE = 21,
  anon_sym_DQUOTEietf_DASHacldns_COLON = 22,
  anon_sym_src_DASHdnsname = 23,
  anon_sym_dst_DASHdnsname = 24,
  anon_sym_DQUOTE = 25,
  anon_sym_DQUOTEsource_DASHport_DQUOTE = 26,
  anon_sym_DQUOTEdestination_DASHport_DQUOTE = 27,
  anon_sym_DQUOTElower_DASHport_DQUOTE = 28,
  anon_sym_DQUOTEupper_DASHport_DQUOTE = 29,
  anon_sym_DQUOTEoperator_DQUOTE = 30,
  anon_sym_DQUOTEport_DQUOTE = 31,
  anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE = 32,
  anon_sym_DQUOTEto_DASHdevice_DQUOTE = 33,
  anon_sym_DQUOTEfrom_DASHdevice_DQUOTE = 34,
  anon_sym_DQUOTEforwarding_DQUOTE = 35,
  anon_sym_DQUOTEaccept_DQUOTE = 36,
  anon_sym_DQUOTEdrop_DQUOTE = 37,
  anon_sym_DQUOTEreject_DQUOTE = 38,
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 39,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 40,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 41,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 42,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 43,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 44,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 45,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 46,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 47,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 48,
  aux_sym_string_quoted_content_token1 = 49,
  sym__escape_sequence = 50,
  sym_number = 51,
  anon_sym_true = 52,
  anon_sym_false = 53,
  anon_sym_null = 54,
  sym_source = 55,
  sym_ietf_mud = 56,
  sym_ietf_acls = 57,
  sym_acl = 58,
  sym_acl_object = 59,
  sym_ace = 60,
  sym_ace_object = 61,
  sym_matches = 62,
  sym_actions = 63,
  sym_matches_object = 64,
  sym_mud_matches_augment = 65,
  sym_ipv4_matches = 66,
  sym_ipv6_matches = 67,
  sym_tcp_matches = 68,
  sym_udp_matches = 69,
  sym_icmp_matches = 70,
  sym_ip_header_proto = 71,
  sym_ietf_acldns = 72,
  sym_source_port = 73,
  sym_destination_port = 74,
  sym_range_or_operator = 75,
  sym_port_range = 76,
  sym_port_operator = 77,
  sym_direction_initiated = 78,
  sym_forwarding_action = 79,
  sym_action = 80,
  sym_mud_version = 81,
  sym_mud_url = 82,
  sym_last_update = 83,
  sym_cache_validity = 84,
  sym_is_supported = 85,
  sym_systeminfo = 86,
  sym_from_device_policy = 87,
  sym_to_device_policy = 88,
  sym_policy = 89,
  sym_access_list = 90,
  sym_string = 91,
  sym_string_quoted_content = 92,
  sym_bool = 93,
  sym_json_value_fallback = 94,
  sym_json_object_fallback = 95,
  sym_json_array_fallback = 96,
  sym_json_pair_fallback = 97,
  aux_sym_ietf_mud_repeat1 = 98,
  aux_sym_acl_repeat1 = 99,
  aux_sym_ace_repeat1 = 100,
  aux_sym_matches_object_repeat1 = 101,
  aux_sym_mud_matches_augment_repeat1 = 102,
  aux_sym_eth_matches_repeat1 = 103,
  aux_sym_ipv4_matches_repeat1 = 104,
  aux_sym_tcp_matches_repeat1 = 105,
  aux_sym_port_range_repeat1 = 106,
  aux_sym_port_operator_repeat1 = 107,
  aux_sym_access_list_repeat1 = 108,
  aux_sym_string_quoted_content_repeat1 = 109,
  aux_sym_json_array_fallback_repeat1 = 110,
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
  [anon_sym_DQUOTEname_DQUOTE] = "\"name\"",
  [anon_sym_DQUOTEtype_DQUOTE] = "\"type\"",
  [anon_sym_DQUOTEaces_DQUOTE] = "\"aces\"",
  [anon_sym_DQUOTEace_DQUOTE] = "\"ace\"",
  [anon_sym_DQUOTEmatches_DQUOTE] = "\"matches\"",
  [anon_sym_DQUOTEactions_DQUOTE] = "\"actions\"",
  [anon_sym_DQUOTEipv4_DQUOTE] = "\"ipv4\"",
  [anon_sym_DQUOTEipv6_DQUOTE] = "\"ipv6\"",
  [anon_sym_DQUOTEtcp_DQUOTE] = "\"tcp\"",
  [anon_sym_DQUOTEudp_DQUOTE] = "\"udp\"",
  [anon_sym_DQUOTEicmp_DQUOTE] = "\"icmp\"",
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
  [sym_matches_object] = "matches_object",
  [sym_mud_matches_augment] = "mud_matches_augment",
  [sym_ipv4_matches] = "ipv4_matches",
  [sym_ipv6_matches] = "ipv6_matches",
  [sym_tcp_matches] = "tcp_matches",
  [sym_udp_matches] = "udp_matches",
  [sym_icmp_matches] = "icmp_matches",
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
  [anon_sym_DQUOTEname_DQUOTE] = anon_sym_DQUOTEname_DQUOTE,
  [anon_sym_DQUOTEtype_DQUOTE] = anon_sym_DQUOTEtype_DQUOTE,
  [anon_sym_DQUOTEaces_DQUOTE] = anon_sym_DQUOTEaces_DQUOTE,
  [anon_sym_DQUOTEace_DQUOTE] = anon_sym_DQUOTEace_DQUOTE,
  [anon_sym_DQUOTEmatches_DQUOTE] = anon_sym_DQUOTEmatches_DQUOTE,
  [anon_sym_DQUOTEactions_DQUOTE] = anon_sym_DQUOTEactions_DQUOTE,
  [anon_sym_DQUOTEipv4_DQUOTE] = anon_sym_DQUOTEipv4_DQUOTE,
  [anon_sym_DQUOTEipv6_DQUOTE] = anon_sym_DQUOTEipv6_DQUOTE,
  [anon_sym_DQUOTEtcp_DQUOTE] = anon_sym_DQUOTEtcp_DQUOTE,
  [anon_sym_DQUOTEudp_DQUOTE] = anon_sym_DQUOTEudp_DQUOTE,
  [anon_sym_DQUOTEicmp_DQUOTE] = anon_sym_DQUOTEicmp_DQUOTE,
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
  [sym_matches_object] = sym_matches_object,
  [sym_mud_matches_augment] = sym_mud_matches_augment,
  [sym_ipv4_matches] = sym_ipv4_matches,
  [sym_ipv6_matches] = sym_ipv6_matches,
  [sym_tcp_matches] = sym_tcp_matches,
  [sym_udp_matches] = sym_udp_matches,
  [sym_icmp_matches] = sym_icmp_matches,
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
  [anon_sym_DQUOTEname_DQUOTE] = {
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
  [anon_sym_DQUOTEmatches_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEactions_DQUOTE] = {
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
  [sym_matches_object] = {
    .visible = true,
    .named = true,
  },
  [sym_mud_matches_augment] = {
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
  field_hours = 1,
  field_info = 2,
  field_policy = 3,
  field_supported = 4,
  field_timestamp = 5,
  field_url = 6,
  field_version = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_hours] = "hours",
  [field_info] = "info",
  [field_policy] = "policy",
  [field_supported] = "supported",
  [field_timestamp] = "timestamp",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(394);
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '[') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(392);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(412);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(413);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(414);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(410);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(411);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(440);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(415);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(435);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(444);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(441);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(439);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(426);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(398);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(443);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(442);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(427);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(446);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(445);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(432);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(424);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '[') ADVANCE(402);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(425);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(401);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(406);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(437);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(404);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(431);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(405);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(436);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(438);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(409);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(408);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(430);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(433);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(428);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(429);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(434);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(447);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(400);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(282);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(285);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == '4') ADVANCE(5);
      if (lookahead == '6') ADVANCE(6);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(416);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(228);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 180:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 184:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 209:
      if (lookahead == 'j') ADVANCE(156);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(286);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 289:
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 290:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 291:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 369:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 370:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 371:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 372:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 373:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 374:
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 379:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 380:
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 381:
      if (lookahead == 'v') ADVANCE(205);
      END_STATE();
    case 382:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 383:
      if (lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 384:
      if (lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 385:
      if (lookahead == 'v') ADVANCE(208);
      END_STATE();
    case 386:
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 387:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 388:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 389:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 390:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 391:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 392:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(451);
      END_STATE();
    case 393:
      if (eof) ADVANCE(394);
      if (lookahead == '"') ADVANCE(420);
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '[') ADVANCE(402);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv4_DQUOTE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv6_DQUOTE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DQUOTEtcp_DQUOTE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DQUOTEudp_DQUOTE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DQUOTEicmp_DQUOTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DQUOTEprotocol_DQUOTE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHacldns_COLON);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_src_DASHdnsname);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_dst_DASHdnsname);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(252);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DQUOTEsource_DASHport_DQUOTE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DQUOTEdestination_DASHport_DQUOTE);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DQUOTElower_DASHport_DQUOTE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DQUOTEupper_DASHport_DQUOTE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DQUOTEoperator_DQUOTE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DQUOTEport_DQUOTE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DQUOTE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DQUOTE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
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
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
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
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 28},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 0},
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
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 28},
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
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 28},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 28},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 28},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 28},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 28},
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
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 28},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 28},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 28},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 23},
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
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
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
    [anon_sym_DQUOTEipv4_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEipv6_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEtcp_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEudp_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEicmp_DQUOTE] = ACTIONS(1),
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
    [sym_source] = STATE(196),
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
    STATE(257), 1,
      sym_string,
    STATE(33), 9,
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
    STATE(257), 1,
      sym_string,
    STATE(111), 9,
      sym_mud_version,
      sym_mud_url,
      sym_last_update,
      sym_cache_validity,
      sym_is_supported,
      sym_systeminfo,
      sym_from_device_policy,
      sym_to_device_policy,
      sym_json_pair_fallback,
  [93] = 11,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTEipv4_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTEipv6_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTEtcp_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTEudp_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTEicmp_DQUOTE,
    STATE(257), 1,
      sym_string,
    STATE(36), 7,
      sym_mud_matches_augment,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [133] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTEipv4_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTEipv6_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTEtcp_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTEudp_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTEicmp_DQUOTE,
    STATE(257), 1,
      sym_string,
    STATE(160), 7,
      sym_mud_matches_augment,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [170] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_json_value_fallback,
    STATE(58), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(49), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [197] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(257), 1,
      sym_string,
    STATE(50), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [225] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(53), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      sym_string,
    STATE(49), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [253] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_json_value_fallback,
    STATE(58), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(49), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [277] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_json_value_fallback,
    STATE(58), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(49), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [301] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(53), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(257), 1,
      sym_string,
    STATE(118), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [326] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(257), 1,
      sym_string,
    STATE(47), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [350] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      sym_string,
    STATE(43), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [374] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(257), 1,
      sym_string,
    STATE(88), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [395] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(66), 1,
      sym_json_pair_fallback,
    STATE(257), 1,
      sym_string,
  [414] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_json_pair_fallback,
    STATE(257), 1,
      sym_string,
  [430] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_json_pair_fallback,
    STATE(257), 1,
      sym_string,
  [446] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_json_pair_fallback,
    STATE(257), 1,
      sym_string,
  [462] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_range_or_operator,
    STATE(101), 2,
      sym_port_range,
      sym_port_operator,
  [473] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_range_or_operator,
    STATE(101), 2,
      sym_port_range,
      sym_port_operator,
  [484] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_json_pair_fallback,
    STATE(257), 1,
      sym_string,
  [497] = 1,
    ACTIONS(79), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [504] = 3,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(83), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [515] = 3,
    STATE(26), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(252), 1,
      sym_string_quoted_content,
    ACTIONS(86), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [526] = 3,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_actions,
    STATE(203), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [537] = 3,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(92), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [548] = 2,
    STATE(251), 1,
      sym_action,
    ACTIONS(94), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [557] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_json_pair_fallback,
    STATE(257), 1,
      sym_string,
  [570] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(96), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [581] = 1,
    ACTIONS(102), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [587] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_ipv4_matches_repeat1,
  [597] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_port_operator_repeat1,
  [607] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_ietf_mud_repeat1,
  [617] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_matches_object_repeat1,
  [627] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_port_range_repeat1,
  [637] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_matches_object_repeat1,
  [647] = 3,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_matches,
    STATE(174), 1,
      sym_matches_object,
  [657] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_port_operator_repeat1,
  [667] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_ace_repeat1,
  [677] = 2,
    STATE(121), 1,
      sym_bool,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_false,
  [685] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_mud_matches_augment_repeat1,
  [695] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_ace_repeat1,
  [705] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_ipv4_matches_repeat1,
  [715] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_ace_repeat1,
  [725] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_ietf_mud_repeat1,
  [735] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tcp_matches_repeat1,
  [745] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_ipv4_matches_repeat1,
  [755] = 3,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym_ace_object,
  [765] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_tcp_matches_repeat1,
  [775] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_tcp_matches_repeat1,
  [785] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_eth_matches_repeat1,
  [795] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_access_list_repeat1,
  [805] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_port_range_repeat1,
  [815] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_mud_matches_augment_repeat1,
  [825] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_access_list_repeat1,
  [835] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_ipv4_matches_repeat1,
  [845] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_access_list_repeat1,
  [855] = 1,
    ACTIONS(198), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [861] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_ipv4_matches_repeat1,
  [871] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_port_operator_repeat1,
  [881] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tcp_matches_repeat1,
  [891] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_ietf_mud_repeat1,
  [901] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_tcp_matches_repeat1,
  [911] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_acl_repeat1,
  [921] = 1,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [927] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_eth_matches_repeat1,
  [937] = 1,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [943] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_json_array_fallback_repeat1,
  [953] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [963] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_port_range_repeat1,
  [973] = 1,
    ACTIONS(232), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [979] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [989] = 1,
    ACTIONS(236), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [995] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_json_array_fallback_repeat1,
  [1005] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_acl_object,
  [1015] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_mud_matches_augment_repeat1,
  [1025] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_acl_repeat1,
  [1035] = 1,
    ACTIONS(253), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1041] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [1051] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_acl_repeat1,
  [1061] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_matches_object_repeat1,
  [1071] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_json_array_fallback_repeat1,
  [1081] = 1,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1086] = 2,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_ace,
  [1093] = 1,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1098] = 1,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1103] = 1,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1108] = 1,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1113] = 1,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1118] = 1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1123] = 2,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_acl_object,
  [1130] = 1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1135] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1140] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym_string,
  [1147] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_string,
  [1154] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1159] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym_access_list,
  [1166] = 1,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1171] = 2,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
  [1178] = 1,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1183] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1188] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1193] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1198] = 1,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1203] = 2,
    ACTIONS(302), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(275), 1,
      sym_ietf_mud,
  [1210] = 1,
    ACTIONS(304), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1215] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1220] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym_string,
  [1227] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym_string,
  [1234] = 1,
    ACTIONS(308), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1239] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1244] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1249] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1254] = 1,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1259] = 1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1264] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1269] = 1,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1274] = 1,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1279] = 1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1284] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1289] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1294] = 1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1299] = 2,
    ACTIONS(330), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(332), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1306] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1311] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1316] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1321] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_string,
  [1328] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1333] = 1,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1338] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1343] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1348] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1353] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1358] = 1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1363] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1368] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1373] = 1,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1378] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1383] = 2,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_ace_object,
  [1390] = 1,
    ACTIONS(362), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [1395] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_policy,
  [1402] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string,
  [1409] = 1,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1414] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1419] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_policy,
  [1426] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_string,
  [1433] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1438] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1443] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [1450] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1455] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
  [1462] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_string,
  [1469] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1474] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1479] = 2,
    ACTIONS(378), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(270), 1,
      sym_ietf_acls,
  [1486] = 2,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym_acl,
  [1493] = 2,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string,
  [1500] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1505] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1510] = 1,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1515] = 1,
    ACTIONS(386), 1,
      anon_sym_COLON,
  [1519] = 1,
    ACTIONS(388), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [1523] = 1,
    ACTIONS(390), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [1527] = 1,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [1531] = 1,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [1535] = 1,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
  [1539] = 1,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [1543] = 1,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [1547] = 1,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
  [1551] = 1,
    ACTIONS(404), 1,
      anon_sym_COLON,
  [1555] = 1,
    ACTIONS(406), 1,
      anon_sym_COMMA,
  [1559] = 1,
    ACTIONS(408), 1,
      anon_sym_COMMA,
  [1563] = 1,
    ACTIONS(410), 1,
      anon_sym_COLON,
  [1567] = 1,
    ACTIONS(412), 1,
      anon_sym_COMMA,
  [1571] = 1,
    ACTIONS(414), 1,
      anon_sym_COMMA,
  [1575] = 1,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [1579] = 1,
    ACTIONS(418), 1,
      anon_sym_COLON,
  [1583] = 1,
    ACTIONS(420), 1,
      anon_sym_COLON,
  [1587] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [1591] = 1,
    ACTIONS(424), 1,
      anon_sym_COLON,
  [1595] = 1,
    ACTIONS(426), 1,
      anon_sym_COMMA,
  [1599] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [1603] = 1,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
  [1607] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
  [1611] = 1,
    ACTIONS(434), 1,
      anon_sym_COMMA,
  [1615] = 1,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
  [1619] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [1623] = 1,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
  [1627] = 1,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
  [1631] = 1,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
  [1635] = 1,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [1639] = 1,
    ACTIONS(448), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1643] = 1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [1647] = 1,
    ACTIONS(452), 1,
      anon_sym_COLON,
  [1651] = 1,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [1655] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [1659] = 1,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
  [1663] = 1,
    ACTIONS(460), 1,
      anon_sym_COLON,
  [1667] = 1,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
  [1671] = 1,
    ACTIONS(464), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [1675] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [1679] = 1,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
  [1683] = 1,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
  [1687] = 1,
    ACTIONS(472), 1,
      anon_sym_COLON,
  [1691] = 1,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [1695] = 1,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
  [1699] = 1,
    ACTIONS(478), 1,
      sym_number,
  [1703] = 1,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
  [1707] = 1,
    ACTIONS(482), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1711] = 1,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [1715] = 1,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
  [1719] = 1,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
  [1723] = 1,
    ACTIONS(490), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [1727] = 1,
    ACTIONS(492), 1,
      anon_sym_COMMA,
  [1731] = 1,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
  [1735] = 1,
    ACTIONS(496), 1,
      anon_sym_COLON,
  [1739] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [1743] = 1,
    ACTIONS(500), 1,
      anon_sym_COLON,
  [1747] = 1,
    ACTIONS(502), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [1751] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [1755] = 1,
    ACTIONS(506), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1759] = 1,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [1763] = 1,
    ACTIONS(510), 1,
      anon_sym_COMMA,
  [1767] = 1,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [1771] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
  [1775] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [1779] = 1,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
  [1783] = 1,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [1787] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [1791] = 1,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [1795] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [1799] = 1,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [1803] = 1,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [1807] = 1,
    ACTIONS(532), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1811] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [1815] = 1,
    ACTIONS(536), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [1819] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
  [1823] = 1,
    ACTIONS(540), 1,
      anon_sym_COLON,
  [1827] = 1,
    ACTIONS(542), 1,
      anon_sym_COLON,
  [1831] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [1835] = 1,
    ACTIONS(546), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [1839] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [1843] = 1,
    ACTIONS(550), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [1847] = 1,
    ACTIONS(552), 1,
      anon_sym_COMMA,
  [1851] = 1,
    ACTIONS(554), 1,
      sym_number,
  [1855] = 1,
    ACTIONS(556), 1,
      sym_number,
  [1859] = 1,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [1863] = 1,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [1867] = 1,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [1871] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [1875] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [1879] = 1,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
  [1883] = 1,
    ACTIONS(570), 1,
      sym_number,
  [1887] = 1,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
  [1891] = 1,
    ACTIONS(574), 1,
      sym_number,
  [1895] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [1899] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [1903] = 1,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [1907] = 1,
    ACTIONS(582), 1,
      anon_sym_COLON,
  [1911] = 1,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [1915] = 1,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [1919] = 1,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [1923] = 1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [1927] = 1,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [1931] = 1,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [1935] = 1,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [1939] = 1,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [1943] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [1947] = 1,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [1951] = 1,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [1955] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [1959] = 1,
    ACTIONS(608), 1,
      sym_number,
  [1963] = 1,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
  [1967] = 1,
    ACTIONS(612), 1,
      sym_number,
  [1971] = 1,
    ACTIONS(614), 1,
      anon_sym_COMMA,
  [1975] = 1,
    ACTIONS(616), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 326,
  [SMALL_STATE(13)] = 350,
  [SMALL_STATE(14)] = 374,
  [SMALL_STATE(15)] = 395,
  [SMALL_STATE(16)] = 414,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 462,
  [SMALL_STATE(20)] = 473,
  [SMALL_STATE(21)] = 484,
  [SMALL_STATE(22)] = 497,
  [SMALL_STATE(23)] = 504,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 548,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 587,
  [SMALL_STATE(32)] = 597,
  [SMALL_STATE(33)] = 607,
  [SMALL_STATE(34)] = 617,
  [SMALL_STATE(35)] = 627,
  [SMALL_STATE(36)] = 637,
  [SMALL_STATE(37)] = 647,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 667,
  [SMALL_STATE(40)] = 677,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 695,
  [SMALL_STATE(43)] = 705,
  [SMALL_STATE(44)] = 715,
  [SMALL_STATE(45)] = 725,
  [SMALL_STATE(46)] = 735,
  [SMALL_STATE(47)] = 745,
  [SMALL_STATE(48)] = 755,
  [SMALL_STATE(49)] = 765,
  [SMALL_STATE(50)] = 775,
  [SMALL_STATE(51)] = 785,
  [SMALL_STATE(52)] = 795,
  [SMALL_STATE(53)] = 805,
  [SMALL_STATE(54)] = 815,
  [SMALL_STATE(55)] = 825,
  [SMALL_STATE(56)] = 835,
  [SMALL_STATE(57)] = 845,
  [SMALL_STATE(58)] = 855,
  [SMALL_STATE(59)] = 861,
  [SMALL_STATE(60)] = 871,
  [SMALL_STATE(61)] = 881,
  [SMALL_STATE(62)] = 891,
  [SMALL_STATE(63)] = 901,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 921,
  [SMALL_STATE(66)] = 927,
  [SMALL_STATE(67)] = 937,
  [SMALL_STATE(68)] = 943,
  [SMALL_STATE(69)] = 953,
  [SMALL_STATE(70)] = 963,
  [SMALL_STATE(71)] = 973,
  [SMALL_STATE(72)] = 979,
  [SMALL_STATE(73)] = 989,
  [SMALL_STATE(74)] = 995,
  [SMALL_STATE(75)] = 1005,
  [SMALL_STATE(76)] = 1015,
  [SMALL_STATE(77)] = 1025,
  [SMALL_STATE(78)] = 1035,
  [SMALL_STATE(79)] = 1041,
  [SMALL_STATE(80)] = 1051,
  [SMALL_STATE(81)] = 1061,
  [SMALL_STATE(82)] = 1071,
  [SMALL_STATE(83)] = 1081,
  [SMALL_STATE(84)] = 1086,
  [SMALL_STATE(85)] = 1093,
  [SMALL_STATE(86)] = 1098,
  [SMALL_STATE(87)] = 1103,
  [SMALL_STATE(88)] = 1108,
  [SMALL_STATE(89)] = 1113,
  [SMALL_STATE(90)] = 1118,
  [SMALL_STATE(91)] = 1123,
  [SMALL_STATE(92)] = 1130,
  [SMALL_STATE(93)] = 1135,
  [SMALL_STATE(94)] = 1140,
  [SMALL_STATE(95)] = 1147,
  [SMALL_STATE(96)] = 1154,
  [SMALL_STATE(97)] = 1159,
  [SMALL_STATE(98)] = 1166,
  [SMALL_STATE(99)] = 1171,
  [SMALL_STATE(100)] = 1178,
  [SMALL_STATE(101)] = 1183,
  [SMALL_STATE(102)] = 1188,
  [SMALL_STATE(103)] = 1193,
  [SMALL_STATE(104)] = 1198,
  [SMALL_STATE(105)] = 1203,
  [SMALL_STATE(106)] = 1210,
  [SMALL_STATE(107)] = 1215,
  [SMALL_STATE(108)] = 1220,
  [SMALL_STATE(109)] = 1227,
  [SMALL_STATE(110)] = 1234,
  [SMALL_STATE(111)] = 1239,
  [SMALL_STATE(112)] = 1244,
  [SMALL_STATE(113)] = 1249,
  [SMALL_STATE(114)] = 1254,
  [SMALL_STATE(115)] = 1259,
  [SMALL_STATE(116)] = 1264,
  [SMALL_STATE(117)] = 1269,
  [SMALL_STATE(118)] = 1274,
  [SMALL_STATE(119)] = 1279,
  [SMALL_STATE(120)] = 1284,
  [SMALL_STATE(121)] = 1289,
  [SMALL_STATE(122)] = 1294,
  [SMALL_STATE(123)] = 1299,
  [SMALL_STATE(124)] = 1306,
  [SMALL_STATE(125)] = 1311,
  [SMALL_STATE(126)] = 1316,
  [SMALL_STATE(127)] = 1321,
  [SMALL_STATE(128)] = 1328,
  [SMALL_STATE(129)] = 1333,
  [SMALL_STATE(130)] = 1338,
  [SMALL_STATE(131)] = 1343,
  [SMALL_STATE(132)] = 1348,
  [SMALL_STATE(133)] = 1353,
  [SMALL_STATE(134)] = 1358,
  [SMALL_STATE(135)] = 1363,
  [SMALL_STATE(136)] = 1368,
  [SMALL_STATE(137)] = 1373,
  [SMALL_STATE(138)] = 1378,
  [SMALL_STATE(139)] = 1383,
  [SMALL_STATE(140)] = 1390,
  [SMALL_STATE(141)] = 1395,
  [SMALL_STATE(142)] = 1402,
  [SMALL_STATE(143)] = 1409,
  [SMALL_STATE(144)] = 1414,
  [SMALL_STATE(145)] = 1419,
  [SMALL_STATE(146)] = 1426,
  [SMALL_STATE(147)] = 1433,
  [SMALL_STATE(148)] = 1438,
  [SMALL_STATE(149)] = 1443,
  [SMALL_STATE(150)] = 1450,
  [SMALL_STATE(151)] = 1455,
  [SMALL_STATE(152)] = 1462,
  [SMALL_STATE(153)] = 1469,
  [SMALL_STATE(154)] = 1474,
  [SMALL_STATE(155)] = 1479,
  [SMALL_STATE(156)] = 1486,
  [SMALL_STATE(157)] = 1493,
  [SMALL_STATE(158)] = 1500,
  [SMALL_STATE(159)] = 1505,
  [SMALL_STATE(160)] = 1510,
  [SMALL_STATE(161)] = 1515,
  [SMALL_STATE(162)] = 1519,
  [SMALL_STATE(163)] = 1523,
  [SMALL_STATE(164)] = 1527,
  [SMALL_STATE(165)] = 1531,
  [SMALL_STATE(166)] = 1535,
  [SMALL_STATE(167)] = 1539,
  [SMALL_STATE(168)] = 1543,
  [SMALL_STATE(169)] = 1547,
  [SMALL_STATE(170)] = 1551,
  [SMALL_STATE(171)] = 1555,
  [SMALL_STATE(172)] = 1559,
  [SMALL_STATE(173)] = 1563,
  [SMALL_STATE(174)] = 1567,
  [SMALL_STATE(175)] = 1571,
  [SMALL_STATE(176)] = 1575,
  [SMALL_STATE(177)] = 1579,
  [SMALL_STATE(178)] = 1583,
  [SMALL_STATE(179)] = 1587,
  [SMALL_STATE(180)] = 1591,
  [SMALL_STATE(181)] = 1595,
  [SMALL_STATE(182)] = 1599,
  [SMALL_STATE(183)] = 1603,
  [SMALL_STATE(184)] = 1607,
  [SMALL_STATE(185)] = 1611,
  [SMALL_STATE(186)] = 1615,
  [SMALL_STATE(187)] = 1619,
  [SMALL_STATE(188)] = 1623,
  [SMALL_STATE(189)] = 1627,
  [SMALL_STATE(190)] = 1631,
  [SMALL_STATE(191)] = 1635,
  [SMALL_STATE(192)] = 1639,
  [SMALL_STATE(193)] = 1643,
  [SMALL_STATE(194)] = 1647,
  [SMALL_STATE(195)] = 1651,
  [SMALL_STATE(196)] = 1655,
  [SMALL_STATE(197)] = 1659,
  [SMALL_STATE(198)] = 1663,
  [SMALL_STATE(199)] = 1667,
  [SMALL_STATE(200)] = 1671,
  [SMALL_STATE(201)] = 1675,
  [SMALL_STATE(202)] = 1679,
  [SMALL_STATE(203)] = 1683,
  [SMALL_STATE(204)] = 1687,
  [SMALL_STATE(205)] = 1691,
  [SMALL_STATE(206)] = 1695,
  [SMALL_STATE(207)] = 1699,
  [SMALL_STATE(208)] = 1703,
  [SMALL_STATE(209)] = 1707,
  [SMALL_STATE(210)] = 1711,
  [SMALL_STATE(211)] = 1715,
  [SMALL_STATE(212)] = 1719,
  [SMALL_STATE(213)] = 1723,
  [SMALL_STATE(214)] = 1727,
  [SMALL_STATE(215)] = 1731,
  [SMALL_STATE(216)] = 1735,
  [SMALL_STATE(217)] = 1739,
  [SMALL_STATE(218)] = 1743,
  [SMALL_STATE(219)] = 1747,
  [SMALL_STATE(220)] = 1751,
  [SMALL_STATE(221)] = 1755,
  [SMALL_STATE(222)] = 1759,
  [SMALL_STATE(223)] = 1763,
  [SMALL_STATE(224)] = 1767,
  [SMALL_STATE(225)] = 1771,
  [SMALL_STATE(226)] = 1775,
  [SMALL_STATE(227)] = 1779,
  [SMALL_STATE(228)] = 1783,
  [SMALL_STATE(229)] = 1787,
  [SMALL_STATE(230)] = 1791,
  [SMALL_STATE(231)] = 1795,
  [SMALL_STATE(232)] = 1799,
  [SMALL_STATE(233)] = 1803,
  [SMALL_STATE(234)] = 1807,
  [SMALL_STATE(235)] = 1811,
  [SMALL_STATE(236)] = 1815,
  [SMALL_STATE(237)] = 1819,
  [SMALL_STATE(238)] = 1823,
  [SMALL_STATE(239)] = 1827,
  [SMALL_STATE(240)] = 1831,
  [SMALL_STATE(241)] = 1835,
  [SMALL_STATE(242)] = 1839,
  [SMALL_STATE(243)] = 1843,
  [SMALL_STATE(244)] = 1847,
  [SMALL_STATE(245)] = 1851,
  [SMALL_STATE(246)] = 1855,
  [SMALL_STATE(247)] = 1859,
  [SMALL_STATE(248)] = 1863,
  [SMALL_STATE(249)] = 1867,
  [SMALL_STATE(250)] = 1871,
  [SMALL_STATE(251)] = 1875,
  [SMALL_STATE(252)] = 1879,
  [SMALL_STATE(253)] = 1883,
  [SMALL_STATE(254)] = 1887,
  [SMALL_STATE(255)] = 1891,
  [SMALL_STATE(256)] = 1895,
  [SMALL_STATE(257)] = 1899,
  [SMALL_STATE(258)] = 1903,
  [SMALL_STATE(259)] = 1907,
  [SMALL_STATE(260)] = 1911,
  [SMALL_STATE(261)] = 1915,
  [SMALL_STATE(262)] = 1919,
  [SMALL_STATE(263)] = 1923,
  [SMALL_STATE(264)] = 1927,
  [SMALL_STATE(265)] = 1931,
  [SMALL_STATE(266)] = 1935,
  [SMALL_STATE(267)] = 1939,
  [SMALL_STATE(268)] = 1943,
  [SMALL_STATE(269)] = 1947,
  [SMALL_STATE(270)] = 1951,
  [SMALL_STATE(271)] = 1955,
  [SMALL_STATE(272)] = 1959,
  [SMALL_STATE(273)] = 1963,
  [SMALL_STATE(274)] = 1967,
  [SMALL_STATE(275)] = 1971,
  [SMALL_STATE(276)] = 1975,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(123),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(110),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(139),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(212),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(91),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(21),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(28),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 13),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 12),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 11),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_MUD(void) {
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
