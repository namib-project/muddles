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
#define STATE_COUNT 298
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_DQUOTEcontroller_DQUOTE = 21,
  anon_sym_DQUOTEmy_DASHcontroller_DQUOTE = 22,
  anon_sym_DQUOTEmanufacturer_DQUOTE = 23,
  anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE = 24,
  anon_sym_DQUOTElocal_DASHnetworks_DQUOTE = 25,
  anon_sym_DQUOTEmodel_DQUOTE = 26,
  anon_sym_DQUOTEprotocol_DQUOTE = 27,
  anon_sym_DQUOTEietf_DASHacldns_COLON = 28,
  anon_sym_src_DASHdnsname = 29,
  anon_sym_dst_DASHdnsname = 30,
  anon_sym_DQUOTE = 31,
  anon_sym_DQUOTEsource_DASHport_DQUOTE = 32,
  anon_sym_DQUOTEdestination_DASHport_DQUOTE = 33,
  anon_sym_DQUOTElower_DASHport_DQUOTE = 34,
  anon_sym_DQUOTEupper_DASHport_DQUOTE = 35,
  anon_sym_DQUOTEoperator_DQUOTE = 36,
  anon_sym_DQUOTEport_DQUOTE = 37,
  anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE = 38,
  anon_sym_DQUOTEto_DASHdevice_DQUOTE = 39,
  anon_sym_DQUOTEfrom_DASHdevice_DQUOTE = 40,
  anon_sym_DQUOTEforwarding_DQUOTE = 41,
  anon_sym_DQUOTEaccept_DQUOTE = 42,
  anon_sym_DQUOTEdrop_DQUOTE = 43,
  anon_sym_DQUOTEreject_DQUOTE = 44,
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 45,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 46,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 47,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 48,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 49,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 50,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 51,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 52,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 53,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 54,
  aux_sym_string_quoted_content_token1 = 55,
  sym__escape_sequence = 56,
  sym_number = 57,
  anon_sym_true = 58,
  anon_sym_false = 59,
  anon_sym_null = 60,
  sym_source = 61,
  sym_ietf_mud = 62,
  sym_ietf_acls = 63,
  sym_acl = 64,
  sym_acl_object = 65,
  sym_ace = 66,
  sym_ace_object = 67,
  sym_matches = 68,
  sym_actions = 69,
  sym_matches_object = 70,
  sym_mud_matches_augment = 71,
  sym_ipv4_matches = 72,
  sym_ipv6_matches = 73,
  sym_tcp_matches = 74,
  sym_udp_matches = 75,
  sym_icmp_matches = 76,
  sym_controller = 77,
  sym_my_controller = 78,
  sym_manufacturer = 79,
  sym_same_manufacturer = 80,
  sym_local_networks = 81,
  sym_model = 82,
  sym_ip_header_proto = 83,
  sym_ietf_acldns = 84,
  sym_source_port = 85,
  sym_destination_port = 86,
  sym_range_or_operator = 87,
  sym_port_range = 88,
  sym_port_operator = 89,
  sym_direction_initiated = 90,
  sym_forwarding_action = 91,
  sym_action = 92,
  sym_mud_version = 93,
  sym_mud_url = 94,
  sym_last_update = 95,
  sym_cache_validity = 96,
  sym_is_supported = 97,
  sym_systeminfo = 98,
  sym_from_device_policy = 99,
  sym_to_device_policy = 100,
  sym_policy = 101,
  sym_access_list = 102,
  sym_string = 103,
  sym_string_quoted_content = 104,
  sym_bool = 105,
  sym_null_valued = 106,
  sym_json_value_fallback = 107,
  sym_json_object_fallback = 108,
  sym_json_array_fallback = 109,
  sym_json_pair_fallback = 110,
  aux_sym_ietf_mud_repeat1 = 111,
  aux_sym_acl_repeat1 = 112,
  aux_sym_ace_repeat1 = 113,
  aux_sym_matches_object_repeat1 = 114,
  aux_sym_mud_matches_augment_repeat1 = 115,
  aux_sym_eth_matches_repeat1 = 116,
  aux_sym_ipv4_matches_repeat1 = 117,
  aux_sym_tcp_matches_repeat1 = 118,
  aux_sym_port_range_repeat1 = 119,
  aux_sym_port_operator_repeat1 = 120,
  aux_sym_access_list_repeat1 = 121,
  aux_sym_string_quoted_content_repeat1 = 122,
  aux_sym_json_array_fallback_repeat1 = 123,
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
  [sym_matches_object] = "matches_object",
  [sym_mud_matches_augment] = "mud_matches_augment",
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
  [sym_matches_object] = sym_matches_object,
  [sym_mud_matches_augment] = sym_mud_matches_augment,
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
  field_policy = 4,
  field_supported = 5,
  field_timestamp = 6,
  field_uri = 7,
  field_url = 8,
  field_version = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_authority] = "authority",
  [field_hours] = "hours",
  [field_info] = "info",
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
    {field_uri, 2},
  [8] =
    {field_authority, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(467);
      if (lookahead == '"') ADVANCE(499);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(465);
      if (lookahead == ']') ADVANCE(476);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(529);
      if (lookahead != 0) ADVANCE(530);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(485);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(486);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(487);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(483);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(484);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(493);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(520);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(494);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(488);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(515);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(524);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(521);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(519);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(506);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(471);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(523);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(490);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(489);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(522);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(492);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(507);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(526);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(491);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(525);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(512);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(500);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == ']') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(503);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(474);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(479);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(517);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(477);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(511);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(478);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(516);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(518);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(482);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(481);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(510);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(513);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(508);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(509);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(528);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(514);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(527);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(473);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(444);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(454);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(335);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(263);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == '4') ADVANCE(5);
      if (lookahead == '6') ADVANCE(6);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(154);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(495);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(266);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(309);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 243:
      if (lookahead == 'j') ADVANCE(188);
      END_STATE();
    case 244:
      if (lookahead == 'k') ADVANCE(392);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 266:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 267:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 268:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 269:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 270:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 271:
      if (lookahead == 'm') ADVANCE(446);
      END_STATE();
    case 272:
      if (lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 273:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 275:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 329:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 331:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 333:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 334:
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 335:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 336:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 337:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 338:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 339:
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 340:
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 341:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 342:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 343:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 440:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 452:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 453:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 454:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 455:
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 456:
      if (lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 457:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 458:
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 459:
      if (lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 460:
      if (lookahead == 'w') ADVANCE(310);
      END_STATE();
    case 461:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 462:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 463:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 464:
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 465:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 466:
      if (eof) ADVANCE(467);
      if (lookahead == '"') ADVANCE(499);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == ']') ADVANCE(476);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv4_DQUOTE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DQUOTEipv6_DQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DQUOTEtcp_DQUOTE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DQUOTEudp_DQUOTE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DQUOTEicmp_DQUOTE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DQUOTEcontroller_DQUOTE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DQUOTEmy_DASHcontroller_DQUOTE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DQUOTEmanufacturer_DQUOTE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DQUOTElocal_DASHnetworks_DQUOTE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DQUOTEmodel_DQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DQUOTEprotocol_DQUOTE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHacldns_COLON);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_src_DASHdnsname);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_dst_DASHdnsname);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTEsource_DASHport_DQUOTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTEdestination_DASHport_DQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DQUOTElower_DASHport_DQUOTE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DQUOTEupper_DASHport_DQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTEoperator_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DQUOTEport_DQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DQUOTE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DQUOTE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 0},
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
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 30},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 30},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 30},
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
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 30},
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
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 35},
  [197] = {.lex_state = 35},
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
  [220] = {.lex_state = 30},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 35},
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
  [233] = {.lex_state = 35},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 35},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 35},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 35},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 35},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 35},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 35},
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
  [284] = {.lex_state = 35},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 30},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 35},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
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
    [sym_source] = STATE(264),
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
    STATE(192), 1,
      sym_string,
    STATE(47), 9,
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
    STATE(192), 1,
      sym_string,
    STATE(136), 9,
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
    STATE(192), 1,
      sym_string,
    STATE(46), 7,
      sym_mud_matches_augment,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [133] = 11,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTEcontroller_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTEmanufacturer_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTEmodel_DQUOTE,
    STATE(192), 1,
      sym_string,
    STATE(55), 7,
      sym_controller,
      sym_my_controller,
      sym_manufacturer,
      sym_same_manufacturer,
      sym_local_networks,
      sym_model,
      sym_json_pair_fallback,
  [173] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTEcontroller_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTEmy_DASHcontroller_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTEmanufacturer_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTEsame_DASHmanufacturer_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTElocal_DASHnetworks_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTEmodel_DQUOTE,
    STATE(192), 1,
      sym_string,
    STATE(125), 7,
      sym_controller,
      sym_my_controller,
      sym_manufacturer,
      sym_same_manufacturer,
      sym_local_networks,
      sym_model,
      sym_json_pair_fallback,
  [210] = 10,
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
    STATE(192), 1,
      sym_string,
    STATE(84), 7,
      sym_mud_matches_augment,
      sym_ipv4_matches,
      sym_ipv6_matches,
      sym_tcp_matches,
      sym_udp_matches,
      sym_icmp_matches,
      sym_json_pair_fallback,
  [247] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_json_value_fallback,
    STATE(57), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(63), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [274] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(192), 1,
      sym_string,
    STATE(52), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [302] = 6,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_json_value_fallback,
    STATE(57), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(63), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [326] = 6,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      sym_json_value_fallback,
    STATE(57), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(63), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [350] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_string,
    STATE(51), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [378] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_DQUOTEsource_DASHport_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTEdestination_DASHport_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONdirection_DASHinitiated_DQUOTE,
    STATE(192), 1,
      sym_string,
    STATE(111), 4,
      sym_source_port,
      sym_destination_port,
      sym_direction_initiated,
      sym_json_pair_fallback,
  [403] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(192), 1,
      sym_string,
    STATE(53), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [427] = 7,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_string,
    STATE(54), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [451] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTEprotocol_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_DQUOTEietf_DASHacldns_COLON,
    STATE(192), 1,
      sym_string,
    STATE(121), 3,
      sym_ip_header_proto,
      sym_ietf_acldns,
      sym_json_pair_fallback,
  [472] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(65), 1,
      sym_json_pair_fallback,
    STATE(192), 1,
      sym_string,
  [491] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_json_pair_fallback,
    STATE(192), 1,
      sym_string,
  [507] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_json_pair_fallback,
    STATE(192), 1,
      sym_string,
  [523] = 3,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_actions,
    STATE(209), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [534] = 3,
    ACTIONS(93), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTEport_DQUOTE,
    ACTIONS(91), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [545] = 3,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_range_or_operator,
    STATE(114), 2,
      sym_port_range,
      sym_port_operator,
  [556] = 3,
    STATE(27), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(288), 1,
      sym_string_quoted_content,
    ACTIONS(99), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [567] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_json_pair_fallback,
    STATE(192), 1,
      sym_string,
  [580] = 1,
    ACTIONS(101), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [587] = 3,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(105), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [598] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(110), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [609] = 2,
    STATE(271), 1,
      sym_action,
    ACTIONS(112), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [618] = 3,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_range_or_operator,
    STATE(114), 2,
      sym_port_range,
      sym_port_operator,
  [629] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_ipv4_matches_repeat1,
  [639] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_ace_repeat1,
  [649] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_port_operator_repeat1,
  [659] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_port_range_repeat1,
  [669] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_port_operator_repeat1,
  [679] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_port_range_repeat1,
  [689] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_port_operator_repeat1,
  [699] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_port_range_repeat1,
  [709] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_tcp_matches_repeat1,
  [719] = 2,
    STATE(161), 1,
      sym_bool,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
  [727] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_ipv4_matches_repeat1,
  [737] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_mud_matches_augment_repeat1,
  [747] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [757] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_tcp_matches_repeat1,
  [767] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_ietf_mud_repeat1,
  [777] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_tcp_matches_repeat1,
  [787] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_matches_object_repeat1,
  [797] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_ietf_mud_repeat1,
  [807] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_ipv4_matches_repeat1,
  [817] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_mud_matches_augment_repeat1,
  [827] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_eth_matches_repeat1,
  [837] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_tcp_matches_repeat1,
  [847] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_tcp_matches_repeat1,
  [857] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_ipv4_matches_repeat1,
  [867] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_ipv4_matches_repeat1,
  [877] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_mud_matches_augment_repeat1,
  [887] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_matches_object_repeat1,
  [897] = 1,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [903] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_matches_object_repeat1,
  [913] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_access_list_repeat1,
  [923] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_acl_repeat1,
  [933] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_ietf_mud_repeat1,
  [943] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_ace_repeat1,
  [953] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_access_list_repeat1,
  [963] = 1,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [969] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_eth_matches_repeat1,
  [979] = 1,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [985] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_json_array_fallback_repeat1,
  [995] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_acl_repeat1,
  [1005] = 3,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym_matches_object,
    STATE(217), 1,
      sym_matches,
  [1015] = 1,
    ACTIONS(248), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1021] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [1031] = 1,
    ACTIONS(252), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1037] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_json_array_fallback_repeat1,
  [1047] = 3,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_acl_object,
  [1057] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_access_list_repeat1,
  [1067] = 3,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_ace_object,
  [1077] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_acl_repeat1,
  [1087] = 1,
    ACTIONS(268), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1093] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_eth_matches_repeat1,
  [1103] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_ace_repeat1,
  [1113] = 1,
    ACTIONS(277), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1119] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_json_array_fallback_repeat1,
  [1129] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1134] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1139] = 1,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1144] = 1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1149] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
  [1156] = 1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1161] = 2,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_access_list,
  [1168] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1173] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1178] = 1,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1183] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1188] = 2,
    ACTIONS(298), 1,
      anon_sym_DQUOTEoperator_DQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTEport_DQUOTE,
  [1195] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_string,
  [1202] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1207] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1212] = 1,
    ACTIONS(306), 2,
      anon_sym_DQUOTElower_DASHport_DQUOTE,
      anon_sym_DQUOTEupper_DASHport_DQUOTE,
  [1217] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_string,
  [1224] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_string,
  [1231] = 1,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1236] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1241] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      sym_string,
  [1248] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1253] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_string,
  [1260] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1265] = 2,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
  [1272] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1277] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_string,
  [1284] = 1,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1289] = 1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1294] = 1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1299] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1304] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1309] = 1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1314] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_string,
  [1321] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(253), 1,
      sym_string,
  [1328] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1333] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_policy,
  [1340] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1345] = 1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1350] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1355] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_policy,
  [1362] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1367] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1372] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1377] = 2,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_ace,
  [1384] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1389] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1394] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1399] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1404] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      sym_string,
  [1411] = 1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1416] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1421] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1426] = 1,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1431] = 1,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1436] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1441] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1446] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1451] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1456] = 2,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_ace_object,
  [1463] = 1,
    ACTIONS(368), 2,
      anon_sym_DQUOTEto_DASHdevice_DQUOTE,
      anon_sym_DQUOTEfrom_DASHdevice_DQUOTE,
  [1468] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_string,
  [1475] = 1,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1480] = 2,
    ACTIONS(370), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(221), 1,
      sym_ietf_acls,
  [1487] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1492] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1497] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1502] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1507] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1512] = 2,
    ACTIONS(382), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(229), 1,
      sym_ietf_mud,
  [1519] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_string,
  [1526] = 2,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym_null_valued,
  [1533] = 2,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      sym_null_valued,
  [1540] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [1547] = 2,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_null_valued,
  [1554] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
  [1561] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1566] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1571] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1576] = 1,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1581] = 1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1586] = 2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_acl_object,
  [1593] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1598] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1603] = 1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1608] = 1,
    ACTIONS(402), 2,
      anon_sym_src_DASHdnsname,
      anon_sym_dst_DASHdnsname,
  [1613] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1618] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1623] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1628] = 2,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_acl,
  [1635] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1640] = 1,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
  [1644] = 1,
    ACTIONS(416), 1,
      anon_sym_COMMA,
  [1648] = 1,
    ACTIONS(418), 1,
      anon_sym_COLON,
  [1652] = 1,
    ACTIONS(420), 1,
      anon_sym_COLON,
  [1656] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [1660] = 1,
    ACTIONS(424), 1,
      anon_sym_COLON,
  [1664] = 1,
    ACTIONS(426), 1,
      anon_sym_COLON,
  [1668] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [1672] = 1,
    ACTIONS(430), 1,
      anon_sym_COLON,
  [1676] = 1,
    ACTIONS(432), 1,
      anon_sym_COMMA,
  [1680] = 1,
    ACTIONS(434), 1,
      anon_sym_COLON,
  [1684] = 1,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [1688] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [1692] = 1,
    ACTIONS(440), 1,
      anon_sym_COLON,
  [1696] = 1,
    ACTIONS(442), 1,
      anon_sym_COLON,
  [1700] = 1,
    ACTIONS(444), 1,
      anon_sym_COLON,
  [1704] = 1,
    ACTIONS(446), 1,
      anon_sym_COLON,
  [1708] = 1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
  [1712] = 1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [1716] = 1,
    ACTIONS(452), 1,
      anon_sym_COLON,
  [1720] = 1,
    ACTIONS(454), 1,
      anon_sym_LBRACE,
  [1724] = 1,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
  [1728] = 1,
    ACTIONS(458), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [1732] = 1,
    ACTIONS(460), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [1736] = 1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [1740] = 1,
    ACTIONS(464), 1,
      anon_sym_COLON,
  [1744] = 1,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [1748] = 1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [1752] = 1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [1756] = 1,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [1760] = 1,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [1764] = 1,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [1768] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [1772] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [1776] = 1,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
  [1780] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [1784] = 1,
    ACTIONS(486), 1,
      anon_sym_COLON,
  [1788] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON,
  [1792] = 1,
    ACTIONS(490), 1,
      anon_sym_COLON,
  [1796] = 1,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [1800] = 1,
    ACTIONS(494), 1,
      anon_sym_COMMA,
  [1804] = 1,
    ACTIONS(496), 1,
      anon_sym_COMMA,
  [1808] = 1,
    ACTIONS(498), 1,
      anon_sym_COMMA,
  [1812] = 1,
    ACTIONS(500), 1,
      anon_sym_COMMA,
  [1816] = 1,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [1820] = 1,
    ACTIONS(504), 1,
      sym_number,
  [1824] = 1,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
  [1828] = 1,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [1832] = 1,
    ACTIONS(510), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [1836] = 1,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [1840] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
  [1844] = 1,
    ACTIONS(516), 1,
      anon_sym_COMMA,
  [1848] = 1,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [1852] = 1,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
  [1856] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [1860] = 1,
    ACTIONS(524), 1,
      anon_sym_COMMA,
  [1864] = 1,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
  [1868] = 1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [1872] = 1,
    ACTIONS(530), 1,
      anon_sym_COLON,
  [1876] = 1,
    ACTIONS(532), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [1880] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [1884] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [1888] = 1,
    ACTIONS(538), 1,
      anon_sym_COLON,
  [1892] = 1,
    ACTIONS(540), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1896] = 1,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
  [1900] = 1,
    ACTIONS(544), 1,
      anon_sym_null,
  [1904] = 1,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [1908] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [1912] = 1,
    ACTIONS(550), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [1916] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
  [1920] = 1,
    ACTIONS(554), 1,
      anon_sym_COLON,
  [1924] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [1928] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [1932] = 1,
    ACTIONS(560), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1936] = 1,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [1940] = 1,
    ACTIONS(564), 1,
      anon_sym_COLON,
  [1944] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [1948] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [1952] = 1,
    ACTIONS(570), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [1956] = 1,
    ACTIONS(572), 1,
      anon_sym_COMMA,
  [1960] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [1964] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [1968] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [1972] = 1,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [1976] = 1,
    ACTIONS(582), 1,
      anon_sym_COLON,
  [1980] = 1,
    ACTIONS(584), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [1984] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [1988] = 1,
    ACTIONS(588), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [1992] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [1996] = 1,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [2000] = 1,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
  [2004] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
  [2008] = 1,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
  [2012] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [2016] = 1,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [2020] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [2024] = 1,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
  [2028] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
  [2032] = 1,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
  [2036] = 1,
    ACTIONS(612), 1,
      anon_sym_LBRACK,
  [2040] = 1,
    ACTIONS(614), 1,
      sym_number,
  [2044] = 1,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
  [2048] = 1,
    ACTIONS(618), 1,
      sym_number,
  [2052] = 1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
  [2056] = 1,
    ACTIONS(622), 1,
      sym_number,
  [2060] = 1,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
  [2064] = 1,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
  [2068] = 1,
    ACTIONS(628), 1,
      anon_sym_COLON,
  [2072] = 1,
    ACTIONS(630), 1,
      anon_sym_COLON,
  [2076] = 1,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [2080] = 1,
    ACTIONS(634), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [2084] = 1,
    ACTIONS(636), 1,
      sym_number,
  [2088] = 1,
    ACTIONS(638), 1,
      anon_sym_COLON,
  [2092] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [2096] = 1,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
  [2100] = 1,
    ACTIONS(644), 1,
      anon_sym_COLON,
  [2104] = 1,
    ACTIONS(646), 1,
      anon_sym_COLON,
  [2108] = 1,
    ACTIONS(648), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [2112] = 1,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
  [2116] = 1,
    ACTIONS(652), 1,
      sym_number,
  [2120] = 1,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
  [2124] = 1,
    ACTIONS(656), 1,
      sym_number,
  [2128] = 1,
    ACTIONS(658), 1,
      anon_sym_COLON,
  [2132] = 1,
    ACTIONS(660), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 274,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 350,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 403,
  [SMALL_STATE(15)] = 427,
  [SMALL_STATE(16)] = 451,
  [SMALL_STATE(17)] = 472,
  [SMALL_STATE(18)] = 491,
  [SMALL_STATE(19)] = 507,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 534,
  [SMALL_STATE(22)] = 545,
  [SMALL_STATE(23)] = 556,
  [SMALL_STATE(24)] = 567,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 598,
  [SMALL_STATE(28)] = 609,
  [SMALL_STATE(29)] = 618,
  [SMALL_STATE(30)] = 629,
  [SMALL_STATE(31)] = 639,
  [SMALL_STATE(32)] = 649,
  [SMALL_STATE(33)] = 659,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 679,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 699,
  [SMALL_STATE(38)] = 709,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 737,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 757,
  [SMALL_STATE(44)] = 767,
  [SMALL_STATE(45)] = 777,
  [SMALL_STATE(46)] = 787,
  [SMALL_STATE(47)] = 797,
  [SMALL_STATE(48)] = 807,
  [SMALL_STATE(49)] = 817,
  [SMALL_STATE(50)] = 827,
  [SMALL_STATE(51)] = 837,
  [SMALL_STATE(52)] = 847,
  [SMALL_STATE(53)] = 857,
  [SMALL_STATE(54)] = 867,
  [SMALL_STATE(55)] = 877,
  [SMALL_STATE(56)] = 887,
  [SMALL_STATE(57)] = 897,
  [SMALL_STATE(58)] = 903,
  [SMALL_STATE(59)] = 913,
  [SMALL_STATE(60)] = 923,
  [SMALL_STATE(61)] = 933,
  [SMALL_STATE(62)] = 943,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 963,
  [SMALL_STATE(65)] = 969,
  [SMALL_STATE(66)] = 979,
  [SMALL_STATE(67)] = 985,
  [SMALL_STATE(68)] = 995,
  [SMALL_STATE(69)] = 1005,
  [SMALL_STATE(70)] = 1015,
  [SMALL_STATE(71)] = 1021,
  [SMALL_STATE(72)] = 1031,
  [SMALL_STATE(73)] = 1037,
  [SMALL_STATE(74)] = 1047,
  [SMALL_STATE(75)] = 1057,
  [SMALL_STATE(76)] = 1067,
  [SMALL_STATE(77)] = 1077,
  [SMALL_STATE(78)] = 1087,
  [SMALL_STATE(79)] = 1093,
  [SMALL_STATE(80)] = 1103,
  [SMALL_STATE(81)] = 1113,
  [SMALL_STATE(82)] = 1119,
  [SMALL_STATE(83)] = 1129,
  [SMALL_STATE(84)] = 1134,
  [SMALL_STATE(85)] = 1139,
  [SMALL_STATE(86)] = 1144,
  [SMALL_STATE(87)] = 1149,
  [SMALL_STATE(88)] = 1156,
  [SMALL_STATE(89)] = 1161,
  [SMALL_STATE(90)] = 1168,
  [SMALL_STATE(91)] = 1173,
  [SMALL_STATE(92)] = 1178,
  [SMALL_STATE(93)] = 1183,
  [SMALL_STATE(94)] = 1188,
  [SMALL_STATE(95)] = 1195,
  [SMALL_STATE(96)] = 1202,
  [SMALL_STATE(97)] = 1207,
  [SMALL_STATE(98)] = 1212,
  [SMALL_STATE(99)] = 1217,
  [SMALL_STATE(100)] = 1224,
  [SMALL_STATE(101)] = 1231,
  [SMALL_STATE(102)] = 1236,
  [SMALL_STATE(103)] = 1241,
  [SMALL_STATE(104)] = 1248,
  [SMALL_STATE(105)] = 1253,
  [SMALL_STATE(106)] = 1260,
  [SMALL_STATE(107)] = 1265,
  [SMALL_STATE(108)] = 1272,
  [SMALL_STATE(109)] = 1277,
  [SMALL_STATE(110)] = 1284,
  [SMALL_STATE(111)] = 1289,
  [SMALL_STATE(112)] = 1294,
  [SMALL_STATE(113)] = 1299,
  [SMALL_STATE(114)] = 1304,
  [SMALL_STATE(115)] = 1309,
  [SMALL_STATE(116)] = 1314,
  [SMALL_STATE(117)] = 1321,
  [SMALL_STATE(118)] = 1328,
  [SMALL_STATE(119)] = 1333,
  [SMALL_STATE(120)] = 1340,
  [SMALL_STATE(121)] = 1345,
  [SMALL_STATE(122)] = 1350,
  [SMALL_STATE(123)] = 1355,
  [SMALL_STATE(124)] = 1362,
  [SMALL_STATE(125)] = 1367,
  [SMALL_STATE(126)] = 1372,
  [SMALL_STATE(127)] = 1377,
  [SMALL_STATE(128)] = 1384,
  [SMALL_STATE(129)] = 1389,
  [SMALL_STATE(130)] = 1394,
  [SMALL_STATE(131)] = 1399,
  [SMALL_STATE(132)] = 1404,
  [SMALL_STATE(133)] = 1411,
  [SMALL_STATE(134)] = 1416,
  [SMALL_STATE(135)] = 1421,
  [SMALL_STATE(136)] = 1426,
  [SMALL_STATE(137)] = 1431,
  [SMALL_STATE(138)] = 1436,
  [SMALL_STATE(139)] = 1441,
  [SMALL_STATE(140)] = 1446,
  [SMALL_STATE(141)] = 1451,
  [SMALL_STATE(142)] = 1456,
  [SMALL_STATE(143)] = 1463,
  [SMALL_STATE(144)] = 1468,
  [SMALL_STATE(145)] = 1475,
  [SMALL_STATE(146)] = 1480,
  [SMALL_STATE(147)] = 1487,
  [SMALL_STATE(148)] = 1492,
  [SMALL_STATE(149)] = 1497,
  [SMALL_STATE(150)] = 1502,
  [SMALL_STATE(151)] = 1507,
  [SMALL_STATE(152)] = 1512,
  [SMALL_STATE(153)] = 1519,
  [SMALL_STATE(154)] = 1526,
  [SMALL_STATE(155)] = 1533,
  [SMALL_STATE(156)] = 1540,
  [SMALL_STATE(157)] = 1547,
  [SMALL_STATE(158)] = 1554,
  [SMALL_STATE(159)] = 1561,
  [SMALL_STATE(160)] = 1566,
  [SMALL_STATE(161)] = 1571,
  [SMALL_STATE(162)] = 1576,
  [SMALL_STATE(163)] = 1581,
  [SMALL_STATE(164)] = 1586,
  [SMALL_STATE(165)] = 1593,
  [SMALL_STATE(166)] = 1598,
  [SMALL_STATE(167)] = 1603,
  [SMALL_STATE(168)] = 1608,
  [SMALL_STATE(169)] = 1613,
  [SMALL_STATE(170)] = 1618,
  [SMALL_STATE(171)] = 1623,
  [SMALL_STATE(172)] = 1628,
  [SMALL_STATE(173)] = 1635,
  [SMALL_STATE(174)] = 1640,
  [SMALL_STATE(175)] = 1644,
  [SMALL_STATE(176)] = 1648,
  [SMALL_STATE(177)] = 1652,
  [SMALL_STATE(178)] = 1656,
  [SMALL_STATE(179)] = 1660,
  [SMALL_STATE(180)] = 1664,
  [SMALL_STATE(181)] = 1668,
  [SMALL_STATE(182)] = 1672,
  [SMALL_STATE(183)] = 1676,
  [SMALL_STATE(184)] = 1680,
  [SMALL_STATE(185)] = 1684,
  [SMALL_STATE(186)] = 1688,
  [SMALL_STATE(187)] = 1692,
  [SMALL_STATE(188)] = 1696,
  [SMALL_STATE(189)] = 1700,
  [SMALL_STATE(190)] = 1704,
  [SMALL_STATE(191)] = 1708,
  [SMALL_STATE(192)] = 1712,
  [SMALL_STATE(193)] = 1716,
  [SMALL_STATE(194)] = 1720,
  [SMALL_STATE(195)] = 1724,
  [SMALL_STATE(196)] = 1728,
  [SMALL_STATE(197)] = 1732,
  [SMALL_STATE(198)] = 1736,
  [SMALL_STATE(199)] = 1740,
  [SMALL_STATE(200)] = 1744,
  [SMALL_STATE(201)] = 1748,
  [SMALL_STATE(202)] = 1752,
  [SMALL_STATE(203)] = 1756,
  [SMALL_STATE(204)] = 1760,
  [SMALL_STATE(205)] = 1764,
  [SMALL_STATE(206)] = 1768,
  [SMALL_STATE(207)] = 1772,
  [SMALL_STATE(208)] = 1776,
  [SMALL_STATE(209)] = 1780,
  [SMALL_STATE(210)] = 1784,
  [SMALL_STATE(211)] = 1788,
  [SMALL_STATE(212)] = 1792,
  [SMALL_STATE(213)] = 1796,
  [SMALL_STATE(214)] = 1800,
  [SMALL_STATE(215)] = 1804,
  [SMALL_STATE(216)] = 1808,
  [SMALL_STATE(217)] = 1812,
  [SMALL_STATE(218)] = 1816,
  [SMALL_STATE(219)] = 1820,
  [SMALL_STATE(220)] = 1824,
  [SMALL_STATE(221)] = 1828,
  [SMALL_STATE(222)] = 1832,
  [SMALL_STATE(223)] = 1836,
  [SMALL_STATE(224)] = 1840,
  [SMALL_STATE(225)] = 1844,
  [SMALL_STATE(226)] = 1848,
  [SMALL_STATE(227)] = 1852,
  [SMALL_STATE(228)] = 1856,
  [SMALL_STATE(229)] = 1860,
  [SMALL_STATE(230)] = 1864,
  [SMALL_STATE(231)] = 1868,
  [SMALL_STATE(232)] = 1872,
  [SMALL_STATE(233)] = 1876,
  [SMALL_STATE(234)] = 1880,
  [SMALL_STATE(235)] = 1884,
  [SMALL_STATE(236)] = 1888,
  [SMALL_STATE(237)] = 1892,
  [SMALL_STATE(238)] = 1896,
  [SMALL_STATE(239)] = 1900,
  [SMALL_STATE(240)] = 1904,
  [SMALL_STATE(241)] = 1908,
  [SMALL_STATE(242)] = 1912,
  [SMALL_STATE(243)] = 1916,
  [SMALL_STATE(244)] = 1920,
  [SMALL_STATE(245)] = 1924,
  [SMALL_STATE(246)] = 1928,
  [SMALL_STATE(247)] = 1932,
  [SMALL_STATE(248)] = 1936,
  [SMALL_STATE(249)] = 1940,
  [SMALL_STATE(250)] = 1944,
  [SMALL_STATE(251)] = 1948,
  [SMALL_STATE(252)] = 1952,
  [SMALL_STATE(253)] = 1956,
  [SMALL_STATE(254)] = 1960,
  [SMALL_STATE(255)] = 1964,
  [SMALL_STATE(256)] = 1968,
  [SMALL_STATE(257)] = 1972,
  [SMALL_STATE(258)] = 1976,
  [SMALL_STATE(259)] = 1980,
  [SMALL_STATE(260)] = 1984,
  [SMALL_STATE(261)] = 1988,
  [SMALL_STATE(262)] = 1992,
  [SMALL_STATE(263)] = 1996,
  [SMALL_STATE(264)] = 2000,
  [SMALL_STATE(265)] = 2004,
  [SMALL_STATE(266)] = 2008,
  [SMALL_STATE(267)] = 2012,
  [SMALL_STATE(268)] = 2016,
  [SMALL_STATE(269)] = 2020,
  [SMALL_STATE(270)] = 2024,
  [SMALL_STATE(271)] = 2028,
  [SMALL_STATE(272)] = 2032,
  [SMALL_STATE(273)] = 2036,
  [SMALL_STATE(274)] = 2040,
  [SMALL_STATE(275)] = 2044,
  [SMALL_STATE(276)] = 2048,
  [SMALL_STATE(277)] = 2052,
  [SMALL_STATE(278)] = 2056,
  [SMALL_STATE(279)] = 2060,
  [SMALL_STATE(280)] = 2064,
  [SMALL_STATE(281)] = 2068,
  [SMALL_STATE(282)] = 2072,
  [SMALL_STATE(283)] = 2076,
  [SMALL_STATE(284)] = 2080,
  [SMALL_STATE(285)] = 2084,
  [SMALL_STATE(286)] = 2088,
  [SMALL_STATE(287)] = 2092,
  [SMALL_STATE(288)] = 2096,
  [SMALL_STATE(289)] = 2100,
  [SMALL_STATE(290)] = 2104,
  [SMALL_STATE(291)] = 2108,
  [SMALL_STATE(292)] = 2112,
  [SMALL_STATE(293)] = 2116,
  [SMALL_STATE(294)] = 2120,
  [SMALL_STATE(295)] = 2124,
  [SMALL_STATE(296)] = 2128,
  [SMALL_STATE(297)] = 2132,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(26),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(142),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2), SHIFT_REPEAT(94),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2), SHIFT_REPEAT(98),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2), SHIFT_REPEAT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tcp_matches_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2), SHIFT_REPEAT(16),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv4_matches_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2), SHIFT_REPEAT(6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mud_matches_augment_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2), SHIFT_REPEAT(7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_object_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(251),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(164),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2), SHIFT_REPEAT(24),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eth_matches_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(10),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_operator_repeat1, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_range_repeat1, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_operator, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acldns, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_valued, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_initiated, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_port, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_or_operator, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_port, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_header_proto, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_networks, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_same_manufacturer, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manufacturer, 3, .production_id = 9),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_my_controller, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller, 3, .production_id = 8),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 13),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_matches, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udp_matches, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6_matches, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_matches, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4_matches, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_matches_augment, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches_object, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 12),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 11),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [594] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
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
