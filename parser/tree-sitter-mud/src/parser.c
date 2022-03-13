#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE = 4,
  anon_sym_COLON = 5,
  anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE = 6,
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 7,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 8,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 9,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 10,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 11,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 12,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 13,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 14,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 15,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_DQUOTEname_DQUOTE = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_quoted_content_token1 = 21,
  sym__escape_sequence = 22,
  sym_number = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  anon_sym_null = 26,
  sym_source = 27,
  sym_ietf_mud = 28,
  sym_ietf_acls = 29,
  sym_mud_version = 30,
  sym_mud_url = 31,
  sym_last_update = 32,
  sym_cache_validity = 33,
  sym_is_supported = 34,
  sym_systeminfo = 35,
  sym_from_device_policy = 36,
  sym_to_device_policy = 37,
  sym_policy = 38,
  sym_access_list = 39,
  sym_name = 40,
  sym_string = 41,
  sym_string_quoted_content = 42,
  sym_bool = 43,
  sym_json_value_fallback = 44,
  sym_json_object_fallback = 45,
  sym_json_array_fallback = 46,
  sym_json_pair_fallback = 47,
  aux_sym_ietf_mud_repeat1 = 48,
  aux_sym_access_list_repeat1 = 49,
  aux_sym_string_quoted_content_repeat1 = 50,
  aux_sym_json_object_fallback_repeat1 = 51,
  aux_sym_json_array_fallback_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE] = "\"ietf-mud:mud\"",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE] = "\"ietf-access-control-list:access-lists\"",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTEname_DQUOTE] = "\"name\"",
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
  [sym_name] = "name",
  [sym_string] = "string",
  [sym_string_quoted_content] = "string_quoted_content",
  [sym_bool] = "bool",
  [sym_json_value_fallback] = "json_value_fallback",
  [sym_json_object_fallback] = "json_object_fallback",
  [sym_json_array_fallback] = "json_array_fallback",
  [sym_json_pair_fallback] = "json_pair_fallback",
  [aux_sym_ietf_mud_repeat1] = "ietf_mud_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTEname_DQUOTE] = anon_sym_DQUOTEname_DQUOTE,
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
  [sym_name] = sym_name,
  [sym_string] = sym_string,
  [sym_string_quoted_content] = sym_string_quoted_content,
  [sym_bool] = sym_bool,
  [sym_json_value_fallback] = sym_json_value_fallback,
  [sym_json_object_fallback] = sym_json_object_fallback,
  [sym_json_array_fallback] = sym_json_array_fallback,
  [sym_json_pair_fallback] = sym_json_pair_fallback,
  [aux_sym_ietf_mud_repeat1] = aux_sym_ietf_mud_repeat1,
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
  [sym_name] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(182);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(184);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(183);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(187);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(192);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(188);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(177);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(179);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 165:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 166:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 171:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 10},
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 12},
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
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTEmud_DASHversion_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmud_DASHurl_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTElast_DASHupdate_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEcache_DASHvalidity_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEis_DASHsupported_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEsysteminfo_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(97),
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
    STATE(65), 1,
      sym_string,
    STATE(22), 9,
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
    STATE(65), 1,
      sym_string,
    STATE(56), 9,
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
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_json_value_fallback,
    STATE(25), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(35), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [120] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_json_value_fallback,
    STATE(25), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(35), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [144] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_json_value_fallback,
    STATE(25), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(35), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [168] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_json_pair_fallback,
    STATE(65), 1,
      sym_string,
  [184] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(41), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [195] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_json_pair_fallback,
    STATE(65), 1,
      sym_string,
  [208] = 1,
    ACTIONS(43), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [215] = 3,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(47), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [226] = 3,
    STATE(8), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(78), 1,
      sym_string_quoted_content,
    ACTIONS(50), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [237] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_json_pair_fallback,
    STATE(65), 1,
      sym_string,
  [250] = 1,
    ACTIONS(52), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [256] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_json_array_fallback_repeat1,
  [266] = 1,
    ACTIONS(58), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [272] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_json_object_fallback_repeat1,
  [282] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_json_array_fallback_repeat1,
  [292] = 1,
    ACTIONS(66), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [298] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_access_list_repeat1,
  [308] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_json_object_fallback_repeat1,
  [318] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_ietf_mud_repeat1,
  [328] = 1,
    ACTIONS(79), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [334] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_ietf_mud_repeat1,
  [344] = 1,
    ACTIONS(86), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [350] = 1,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [356] = 3,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_json_object_fallback_repeat1,
  [366] = 1,
    ACTIONS(95), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [372] = 2,
    STATE(45), 1,
      sym_bool,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
  [380] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_json_array_fallback_repeat1,
  [390] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_name,
  [400] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_access_list_repeat1,
  [410] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_ietf_mud_repeat1,
  [420] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_access_list_repeat1,
  [430] = 1,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [435] = 2,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_policy,
  [442] = 2,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_policy,
  [449] = 1,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [454] = 1,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [459] = 1,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [464] = 1,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [469] = 1,
    ACTIONS(124), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [474] = 1,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [479] = 1,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [484] = 1,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [489] = 1,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [494] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
  [501] = 1,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [506] = 1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [511] = 2,
    ACTIONS(138), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(87), 1,
      sym_ietf_mud,
  [518] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_string,
  [525] = 2,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_name,
  [532] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_string,
  [539] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_string,
  [546] = 1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [551] = 1,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [556] = 1,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [561] = 2,
    ACTIONS(144), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(77), 1,
      sym_ietf_acls,
  [568] = 1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [573] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_access_list,
  [580] = 1,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [584] = 1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
  [588] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [592] = 1,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
  [596] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON,
  [600] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [604] = 1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
  [608] = 1,
    ACTIONS(162), 1,
      anon_sym_COLON,
  [612] = 1,
    ACTIONS(164), 1,
      anon_sym_COLON,
  [616] = 1,
    ACTIONS(166), 1,
      anon_sym_COLON,
  [620] = 1,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [624] = 1,
    ACTIONS(170), 1,
      anon_sym_COLON,
  [628] = 1,
    ACTIONS(172), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [632] = 1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
  [636] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [640] = 1,
    ACTIONS(178), 1,
      anon_sym_COMMA,
  [644] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [648] = 1,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
  [652] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [656] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [660] = 1,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [664] = 1,
    ACTIONS(190), 1,
      sym_number,
  [668] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
  [672] = 1,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
  [676] = 1,
    ACTIONS(196), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [680] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [684] = 1,
    ACTIONS(200), 1,
      anon_sym_COMMA,
  [688] = 1,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [692] = 1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
  [696] = 1,
    ACTIONS(206), 1,
      anon_sym_COMMA,
  [700] = 1,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
  [704] = 1,
    ACTIONS(210), 1,
      anon_sym_COLON,
  [708] = 1,
    ACTIONS(212), 1,
      sym_number,
  [712] = 1,
    ACTIONS(214), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [716] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [720] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
  [724] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [728] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [732] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [736] = 1,
    ACTIONS(226), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 272,
  [SMALL_STATE(18)] = 282,
  [SMALL_STATE(19)] = 292,
  [SMALL_STATE(20)] = 298,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 350,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 366,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 380,
  [SMALL_STATE(31)] = 390,
  [SMALL_STATE(32)] = 400,
  [SMALL_STATE(33)] = 410,
  [SMALL_STATE(34)] = 420,
  [SMALL_STATE(35)] = 430,
  [SMALL_STATE(36)] = 435,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 449,
  [SMALL_STATE(39)] = 454,
  [SMALL_STATE(40)] = 459,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 469,
  [SMALL_STATE(43)] = 474,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 484,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 494,
  [SMALL_STATE(48)] = 501,
  [SMALL_STATE(49)] = 506,
  [SMALL_STATE(50)] = 511,
  [SMALL_STATE(51)] = 518,
  [SMALL_STATE(52)] = 525,
  [SMALL_STATE(53)] = 532,
  [SMALL_STATE(54)] = 539,
  [SMALL_STATE(55)] = 546,
  [SMALL_STATE(56)] = 551,
  [SMALL_STATE(57)] = 556,
  [SMALL_STATE(58)] = 561,
  [SMALL_STATE(59)] = 568,
  [SMALL_STATE(60)] = 573,
  [SMALL_STATE(61)] = 580,
  [SMALL_STATE(62)] = 584,
  [SMALL_STATE(63)] = 588,
  [SMALL_STATE(64)] = 592,
  [SMALL_STATE(65)] = 596,
  [SMALL_STATE(66)] = 600,
  [SMALL_STATE(67)] = 604,
  [SMALL_STATE(68)] = 608,
  [SMALL_STATE(69)] = 612,
  [SMALL_STATE(70)] = 616,
  [SMALL_STATE(71)] = 620,
  [SMALL_STATE(72)] = 624,
  [SMALL_STATE(73)] = 628,
  [SMALL_STATE(74)] = 632,
  [SMALL_STATE(75)] = 636,
  [SMALL_STATE(76)] = 640,
  [SMALL_STATE(77)] = 644,
  [SMALL_STATE(78)] = 648,
  [SMALL_STATE(79)] = 652,
  [SMALL_STATE(80)] = 656,
  [SMALL_STATE(81)] = 660,
  [SMALL_STATE(82)] = 664,
  [SMALL_STATE(83)] = 668,
  [SMALL_STATE(84)] = 672,
  [SMALL_STATE(85)] = 676,
  [SMALL_STATE(86)] = 680,
  [SMALL_STATE(87)] = 684,
  [SMALL_STATE(88)] = 688,
  [SMALL_STATE(89)] = 692,
  [SMALL_STATE(90)] = 696,
  [SMALL_STATE(91)] = 700,
  [SMALL_STATE(92)] = 704,
  [SMALL_STATE(93)] = 708,
  [SMALL_STATE(94)] = 712,
  [SMALL_STATE(95)] = 716,
  [SMALL_STATE(96)] = 720,
  [SMALL_STATE(97)] = 724,
  [SMALL_STATE(98)] = 728,
  [SMALL_STATE(99)] = 732,
  [SMALL_STATE(100)] = 736,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(52),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_fallback_repeat1, 2), SHIFT_REPEAT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_fallback_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 7),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 8),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
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
