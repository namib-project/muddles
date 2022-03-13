#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 16,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 17,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 18,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 19,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 20,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 21,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 22,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 23,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 24,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_quoted_content_token1 = 27,
  sym__escape_sequence = 28,
  sym_number = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  anon_sym_null = 32,
  sym_source = 33,
  sym_ietf_mud = 34,
  sym_ietf_acls = 35,
  sym_acl = 36,
  sym_acl_object = 37,
  sym_ace = 38,
  sym_ace_object = 39,
  sym_matches = 40,
  sym_actions = 41,
  sym_mud_version = 42,
  sym_mud_url = 43,
  sym_last_update = 44,
  sym_cache_validity = 45,
  sym_is_supported = 46,
  sym_systeminfo = 47,
  sym_from_device_policy = 48,
  sym_to_device_policy = 49,
  sym_policy = 50,
  sym_access_list = 51,
  sym_string = 52,
  sym_string_quoted_content = 53,
  sym_bool = 54,
  sym_json_value_fallback = 55,
  sym_json_object_fallback = 56,
  sym_json_array_fallback = 57,
  sym_json_pair_fallback = 58,
  aux_sym_ietf_mud_repeat1 = 59,
  aux_sym_acl_repeat1 = 60,
  aux_sym_ace_repeat1 = 61,
  aux_sym_access_list_repeat1 = 62,
  aux_sym_string_quoted_content_repeat1 = 63,
  aux_sym_json_object_fallback_repeat1 = 64,
  aux_sym_json_array_fallback_repeat1 = 65,
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
  [anon_sym_DQUOTE] = "\"",
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
  [aux_sym_access_list_repeat1] = "access_list_repeat1",
  [aux_sym_string_quoted_content_repeat1] = "string_quoted_content_repeat1",
  [aux_sym_json_object_fallback_repeat1] = "json_object_fallback_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
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
  [aux_sym_access_list_repeat1] = aux_sym_access_list_repeat1,
  [aux_sym_string_quoted_content_repeat1] = aux_sym_string_quoted_content_repeat1,
  [aux_sym_json_object_fallback_repeat1] = aux_sym_json_object_fallback_repeat1,
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
  [anon_sym_DQUOTE] = {
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
  [aux_sym_access_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_quoted_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_object_fallback_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(203);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(213);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(217);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(214);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(216);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(219);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(218);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(208);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(206);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(207);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(211);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(210);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(220);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(200);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(202);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 187:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 188:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 192:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 194:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 195:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
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
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 15},
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
  [130] = {.lex_state = 15},
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
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTEacl_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTEmud_DASHversion_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmud_DASHurl_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTElast_DASHupdate_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEcache_DASHvalidity_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEis_DASHsupported_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEsysteminfo_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      anon_sym_DQUOTEmud_DASHversion_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTEmud_DASHurl_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTElast_DASHupdate_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTEcache_DASHvalidity_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTEis_DASHsupported_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTEsysteminfo_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    STATE(114), 1,
      sym_string,
    STATE(27), 9,
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
      anon_sym_DQUOTEmud_DASHversion_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTEmud_DASHurl_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTElast_DASHupdate_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTEcache_DASHvalidity_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTEis_DASHsupported_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTEsysteminfo_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    STATE(114), 1,
      sym_string,
    STATE(57), 9,
      sym_mud_version,
      sym_mud_url,
      sym_last_update,
      sym_cache_validity,
      sym_is_supported,
      sym_systeminfo,
      sym_from_device_policy,
      sym_to_device_policy,
      sym_json_pair_fallback,
  [93] = 7,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTEacl_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(92), 2,
      sym_acl,
      sym_json_value_fallback,
    STATE(42), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(33), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [121] = 7,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_json_value_fallback,
    STATE(42), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(33), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [148] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_json_value_fallback,
    STATE(42), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(33), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [172] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_json_value_fallback,
    STATE(42), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(33), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [196] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_json_pair_fallback,
    STATE(114), 1,
      sym_string,
  [212] = 3,
    STATE(13), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(104), 1,
      sym_string_quoted_content,
    ACTIONS(41), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [223] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_json_pair_fallback,
    STATE(114), 1,
      sym_string,
  [236] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(45), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [247] = 1,
    ACTIONS(48), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [254] = 3,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(52), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [265] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_access_list_repeat1,
  [275] = 3,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_ace_repeat1,
  [285] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_acl_repeat1,
  [295] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_ace_repeat1,
  [305] = 1,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [311] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_ace_repeat1,
  [321] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_json_object_fallback_repeat1,
  [331] = 3,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_ace_object,
  [341] = 1,
    ACTIONS(84), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [347] = 3,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_json_array_fallback_repeat1,
  [357] = 3,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_access_list_repeat1,
  [367] = 1,
    ACTIONS(95), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [373] = 3,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_actions,
    STATE(154), 1,
      sym_json_object_fallback,
  [383] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_ietf_mud_repeat1,
  [393] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_access_list_repeat1,
  [403] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_acl_object,
  [413] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_json_object_fallback_repeat1,
  [423] = 1,
    ACTIONS(111), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [429] = 3,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_matches,
    STATE(149), 1,
      sym_json_object_fallback,
  [439] = 2,
    STATE(49), 1,
      sym_bool,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
  [447] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_json_array_fallback_repeat1,
  [457] = 3,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_json_array_fallback_repeat1,
  [467] = 1,
    ACTIONS(122), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [473] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_json_object_fallback_repeat1,
  [483] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_acl_repeat1,
  [493] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_ietf_mud_repeat1,
  [503] = 1,
    ACTIONS(133), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [509] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_ietf_mud_repeat1,
  [519] = 1,
    ACTIONS(140), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [525] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_acl_repeat1,
  [535] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_string,
  [542] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [547] = 1,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [552] = 1,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [557] = 1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [562] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [567] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [572] = 1,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [577] = 1,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [582] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [587] = 2,
    ACTIONS(160), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(139), 1,
      sym_ietf_acls,
  [594] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_string,
  [601] = 1,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [606] = 1,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [611] = 1,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [616] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_string,
  [623] = 2,
    ACTIONS(166), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(152), 1,
      sym_ietf_mud,
  [630] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [635] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_acl_object,
  [642] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
  [649] = 2,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_policy,
  [656] = 2,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_policy,
  [663] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [670] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_string,
  [677] = 1,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [682] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
  [689] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_string,
  [696] = 1,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [701] = 2,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_ace,
  [708] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_access_list,
  [715] = 1,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [720] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [725] = 2,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_string,
  [732] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [737] = 1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [742] = 2,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_ace_object,
  [749] = 1,
    ACTIONS(186), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [753] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [757] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [761] = 1,
    ACTIONS(192), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [765] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
  [769] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [773] = 1,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [777] = 1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [781] = 1,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
  [785] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [789] = 1,
    ACTIONS(206), 1,
      anon_sym_COMMA,
  [793] = 1,
    ACTIONS(208), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [797] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [801] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [805] = 1,
    ACTIONS(214), 1,
      anon_sym_COLON,
  [809] = 1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
  [813] = 1,
    ACTIONS(218), 1,
      anon_sym_COMMA,
  [817] = 1,
    ACTIONS(220), 1,
      anon_sym_COMMA,
  [821] = 1,
    ACTIONS(222), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [825] = 1,
    ACTIONS(224), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [829] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
  [833] = 1,
    ACTIONS(228), 1,
      anon_sym_COLON,
  [837] = 1,
    ACTIONS(230), 1,
      anon_sym_COLON,
  [841] = 1,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
  [845] = 1,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
  [849] = 1,
    ACTIONS(236), 1,
      sym_number,
  [853] = 1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [857] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
  [861] = 1,
    ACTIONS(242), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [865] = 1,
    ACTIONS(244), 1,
      sym_number,
  [869] = 1,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [873] = 1,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
  [877] = 1,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
  [881] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [885] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [889] = 1,
    ACTIONS(256), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [893] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
  [897] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
  [901] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [905] = 1,
    ACTIONS(264), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [909] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [913] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [917] = 1,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
  [921] = 1,
    ACTIONS(272), 1,
      anon_sym_COLON,
  [925] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [929] = 1,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [933] = 1,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
  [937] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [941] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [945] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [949] = 1,
    ACTIONS(286), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [953] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
  [957] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [961] = 1,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [965] = 1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
  [969] = 1,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [973] = 1,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
  [977] = 1,
    ACTIONS(300), 1,
      anon_sym_COLON,
  [981] = 1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
  [985] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [989] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [993] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [997] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [1001] = 1,
    ACTIONS(312), 1,
      anon_sym_COMMA,
  [1005] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [1009] = 1,
    ACTIONS(316), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [1013] = 1,
    ACTIONS(318), 1,
      anon_sym_COLON,
  [1017] = 1,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [1021] = 1,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1025] = 1,
    ACTIONS(324), 1,
      anon_sym_COMMA,
  [1029] = 1,
    ACTIONS(326), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [1033] = 1,
    ACTIONS(328), 1,
      anon_sym_COLON,
  [1037] = 1,
    ACTIONS(330), 1,
      anon_sym_COMMA,
  [1041] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1045] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [1049] = 1,
    ACTIONS(336), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 236,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 285,
  [SMALL_STATE(17)] = 295,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 347,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 393,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 439,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 457,
  [SMALL_STATE(36)] = 467,
  [SMALL_STATE(37)] = 473,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 493,
  [SMALL_STATE(40)] = 503,
  [SMALL_STATE(41)] = 509,
  [SMALL_STATE(42)] = 519,
  [SMALL_STATE(43)] = 525,
  [SMALL_STATE(44)] = 535,
  [SMALL_STATE(45)] = 542,
  [SMALL_STATE(46)] = 547,
  [SMALL_STATE(47)] = 552,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 562,
  [SMALL_STATE(50)] = 567,
  [SMALL_STATE(51)] = 572,
  [SMALL_STATE(52)] = 577,
  [SMALL_STATE(53)] = 582,
  [SMALL_STATE(54)] = 587,
  [SMALL_STATE(55)] = 594,
  [SMALL_STATE(56)] = 601,
  [SMALL_STATE(57)] = 606,
  [SMALL_STATE(58)] = 611,
  [SMALL_STATE(59)] = 616,
  [SMALL_STATE(60)] = 623,
  [SMALL_STATE(61)] = 630,
  [SMALL_STATE(62)] = 635,
  [SMALL_STATE(63)] = 642,
  [SMALL_STATE(64)] = 649,
  [SMALL_STATE(65)] = 656,
  [SMALL_STATE(66)] = 663,
  [SMALL_STATE(67)] = 670,
  [SMALL_STATE(68)] = 677,
  [SMALL_STATE(69)] = 682,
  [SMALL_STATE(70)] = 689,
  [SMALL_STATE(71)] = 696,
  [SMALL_STATE(72)] = 701,
  [SMALL_STATE(73)] = 708,
  [SMALL_STATE(74)] = 715,
  [SMALL_STATE(75)] = 720,
  [SMALL_STATE(76)] = 725,
  [SMALL_STATE(77)] = 732,
  [SMALL_STATE(78)] = 737,
  [SMALL_STATE(79)] = 742,
  [SMALL_STATE(80)] = 749,
  [SMALL_STATE(81)] = 753,
  [SMALL_STATE(82)] = 757,
  [SMALL_STATE(83)] = 761,
  [SMALL_STATE(84)] = 765,
  [SMALL_STATE(85)] = 769,
  [SMALL_STATE(86)] = 773,
  [SMALL_STATE(87)] = 777,
  [SMALL_STATE(88)] = 781,
  [SMALL_STATE(89)] = 785,
  [SMALL_STATE(90)] = 789,
  [SMALL_STATE(91)] = 793,
  [SMALL_STATE(92)] = 797,
  [SMALL_STATE(93)] = 801,
  [SMALL_STATE(94)] = 805,
  [SMALL_STATE(95)] = 809,
  [SMALL_STATE(96)] = 813,
  [SMALL_STATE(97)] = 817,
  [SMALL_STATE(98)] = 821,
  [SMALL_STATE(99)] = 825,
  [SMALL_STATE(100)] = 829,
  [SMALL_STATE(101)] = 833,
  [SMALL_STATE(102)] = 837,
  [SMALL_STATE(103)] = 841,
  [SMALL_STATE(104)] = 845,
  [SMALL_STATE(105)] = 849,
  [SMALL_STATE(106)] = 853,
  [SMALL_STATE(107)] = 857,
  [SMALL_STATE(108)] = 861,
  [SMALL_STATE(109)] = 865,
  [SMALL_STATE(110)] = 869,
  [SMALL_STATE(111)] = 873,
  [SMALL_STATE(112)] = 877,
  [SMALL_STATE(113)] = 881,
  [SMALL_STATE(114)] = 885,
  [SMALL_STATE(115)] = 889,
  [SMALL_STATE(116)] = 893,
  [SMALL_STATE(117)] = 897,
  [SMALL_STATE(118)] = 901,
  [SMALL_STATE(119)] = 905,
  [SMALL_STATE(120)] = 909,
  [SMALL_STATE(121)] = 913,
  [SMALL_STATE(122)] = 917,
  [SMALL_STATE(123)] = 921,
  [SMALL_STATE(124)] = 925,
  [SMALL_STATE(125)] = 929,
  [SMALL_STATE(126)] = 933,
  [SMALL_STATE(127)] = 937,
  [SMALL_STATE(128)] = 941,
  [SMALL_STATE(129)] = 945,
  [SMALL_STATE(130)] = 949,
  [SMALL_STATE(131)] = 953,
  [SMALL_STATE(132)] = 957,
  [SMALL_STATE(133)] = 961,
  [SMALL_STATE(134)] = 965,
  [SMALL_STATE(135)] = 969,
  [SMALL_STATE(136)] = 973,
  [SMALL_STATE(137)] = 977,
  [SMALL_STATE(138)] = 981,
  [SMALL_STATE(139)] = 985,
  [SMALL_STATE(140)] = 989,
  [SMALL_STATE(141)] = 993,
  [SMALL_STATE(142)] = 997,
  [SMALL_STATE(143)] = 1001,
  [SMALL_STATE(144)] = 1005,
  [SMALL_STATE(145)] = 1009,
  [SMALL_STATE(146)] = 1013,
  [SMALL_STATE(147)] = 1017,
  [SMALL_STATE(148)] = 1021,
  [SMALL_STATE(149)] = 1025,
  [SMALL_STATE(150)] = 1029,
  [SMALL_STATE(151)] = 1033,
  [SMALL_STATE(152)] = 1037,
  [SMALL_STATE(153)] = 1041,
  [SMALL_STATE(154)] = 1045,
  [SMALL_STATE(155)] = 1049,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(79),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_fallback_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_fallback_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(111),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(62),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 13),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 12),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
