#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_DQUOTEforwarding_DQUOTE = 16,
  anon_sym_DQUOTEaccept_DQUOTE = 17,
  anon_sym_DQUOTEdrop_DQUOTE = 18,
  anon_sym_DQUOTEreject_DQUOTE = 19,
  anon_sym_DQUOTEmud_DASHversion_DQUOTE = 20,
  anon_sym_DQUOTEmud_DASHurl_DQUOTE = 21,
  anon_sym_DQUOTElast_DASHupdate_DQUOTE = 22,
  anon_sym_DQUOTEcache_DASHvalidity_DQUOTE = 23,
  anon_sym_DQUOTEis_DASHsupported_DQUOTE = 24,
  anon_sym_DQUOTEsysteminfo_DQUOTE = 25,
  anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE = 26,
  anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE = 27,
  anon_sym_DQUOTEaccess_DASHlists_DQUOTE = 28,
  anon_sym_DQUOTEaccess_DASHlist_DQUOTE = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_quoted_content_token1 = 31,
  sym__escape_sequence = 32,
  sym_number = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_null = 36,
  sym_source = 37,
  sym_ietf_mud = 38,
  sym_ietf_acls = 39,
  sym_acl = 40,
  sym_acl_object = 41,
  sym_ace = 42,
  sym_ace_object = 43,
  sym_matches = 44,
  sym_actions = 45,
  sym_forwarding_action = 46,
  sym_action = 47,
  sym_mud_version = 48,
  sym_mud_url = 49,
  sym_last_update = 50,
  sym_cache_validity = 51,
  sym_is_supported = 52,
  sym_systeminfo = 53,
  sym_from_device_policy = 54,
  sym_to_device_policy = 55,
  sym_policy = 56,
  sym_access_list = 57,
  sym_string = 58,
  sym_string_quoted_content = 59,
  sym_bool = 60,
  sym_json_value_fallback = 61,
  sym_json_object_fallback = 62,
  sym_json_array_fallback = 63,
  sym_json_pair_fallback = 64,
  aux_sym_ietf_mud_repeat1 = 65,
  aux_sym_acl_repeat1 = 66,
  aux_sym_ace_repeat1 = 67,
  aux_sym_access_list_repeat1 = 68,
  aux_sym_string_quoted_content_repeat1 = 69,
  aux_sym_json_object_fallback_repeat1 = 70,
  aux_sym_json_array_fallback_repeat1 = 71,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(238);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(233);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(242);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(239);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(241);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(240);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(244);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(243);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(224);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(229);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(235);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(227);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(228);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(234);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(236);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(232);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(231);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(245);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(221);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(223);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(3);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'j') ADVANCE(88);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 206:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 207:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 208:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 209:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 210:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 211:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 212:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 215:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 216:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTEacl_DQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTEtype_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTEaces_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTEace_DQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DQUOTEmatches_DQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DQUOTEactions_DQUOTE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DQUOTEforwarding_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccept_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DQUOTEdrop_DQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DQUOTEreject_DQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHversion_DQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DQUOTEmud_DASHurl_DQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DQUOTElast_DASHupdate_DQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTEcache_DASHvalidity_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DQUOTEis_DASHsupported_DQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DQUOTEsysteminfo_DQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DQUOTEfrom_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DQUOTEto_DASHdevice_DASHpolicy_DQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlists_DQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DQUOTEaccess_DASHlist_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_string_quoted_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 11},
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
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 14},
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
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 14},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTEforwarding_DQUOTE] = ACTIONS(1),
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
    [sym_source] = STATE(162),
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
    STATE(161), 1,
      sym_string,
    STATE(16), 9,
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
    STATE(161), 1,
      sym_string,
    STATE(72), 9,
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
    STATE(22), 1,
      sym_json_value_fallback,
    STATE(30), 3,
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
    STATE(71), 1,
      sym_json_value_fallback,
    STATE(30), 3,
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
    STATE(81), 1,
      sym_json_value_fallback,
    STATE(30), 3,
      sym_string,
      sym_json_object_fallback,
      sym_json_array_fallback,
    ACTIONS(35), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [168] = 6,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_DQUOTEforwarding_DQUOTE,
    STATE(43), 1,
      sym_json_pair_fallback,
    STATE(161), 1,
      sym_string,
  [187] = 5,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_json_pair_fallback,
    STATE(161), 1,
      sym_string,
  [203] = 3,
    STATE(12), 1,
      aux_sym_string_quoted_content_repeat1,
    STATE(139), 1,
      sym_string_quoted_content,
    ACTIONS(41), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [214] = 2,
    STATE(164), 1,
      sym_action,
    ACTIONS(43), 3,
      anon_sym_DQUOTEaccept_DQUOTE,
      anon_sym_DQUOTEdrop_DQUOTE,
      anon_sym_DQUOTEreject_DQUOTE,
  [223] = 3,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_actions,
    STATE(159), 2,
      sym_forwarding_action,
      sym_json_object_fallback,
  [234] = 3,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(49), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [245] = 3,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_quoted_content_repeat1,
    ACTIONS(53), 2,
      aux_sym_string_quoted_content_token1,
      sym__escape_sequence,
  [256] = 1,
    ACTIONS(56), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [263] = 4,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_json_pair_fallback,
    STATE(161), 1,
      sym_string,
  [276] = 3,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_ietf_mud_repeat1,
  [286] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_access_list_repeat1,
  [296] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_acl_repeat1,
  [306] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_json_array_fallback_repeat1,
  [316] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_json_object_fallback_repeat1,
  [326] = 1,
    ACTIONS(81), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [332] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_json_array_fallback_repeat1,
  [342] = 1,
    ACTIONS(87), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [348] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_json_object_fallback_repeat1,
  [358] = 3,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_matches,
    STATE(153), 1,
      sym_json_object_fallback,
  [368] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_acl_repeat1,
  [378] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_access_list_repeat1,
  [388] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_access_list_repeat1,
  [398] = 2,
    STATE(66), 1,
      sym_bool,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
  [406] = 1,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [412] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_acl_repeat1,
  [422] = 1,
    ACTIONS(110), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [428] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_json_array_fallback_repeat1,
  [438] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_ace_object,
  [448] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_ace_repeat1,
  [458] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_ace_repeat1,
  [468] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_ietf_mud_repeat1,
  [478] = 3,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_ietf_mud_repeat1,
  [488] = 3,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_acl_object,
  [498] = 1,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [504] = 1,
    ACTIONS(137), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [510] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_ace_repeat1,
  [520] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_json_object_fallback_repeat1,
  [530] = 1,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [536] = 1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [541] = 2,
    ACTIONS(150), 1,
      anon_sym_DQUOTEietf_DASHmud_COLONmud_DQUOTE,
    STATE(156), 1,
      sym_ietf_mud,
  [548] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [553] = 2,
    ACTIONS(154), 1,
      anon_sym_DQUOTEietf_DASHaccess_DASHcontrol_DASHlist_COLONaccess_DASHlists_DQUOTE,
    STATE(136), 1,
      sym_ietf_acls,
  [560] = 2,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_acl,
  [567] = 1,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [572] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_string,
  [579] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_string,
  [586] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_string,
  [593] = 2,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_ace_object,
  [600] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_string,
  [607] = 2,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_policy,
  [614] = 2,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_policy,
  [621] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [626] = 1,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [631] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [638] = 2,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_ace,
  [645] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [650] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [655] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [660] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [665] = 1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [670] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [675] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
  [682] = 1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [687] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [692] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [697] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [702] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_string,
  [709] = 1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [714] = 2,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
  [721] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_acl_object,
  [728] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_access_list,
  [735] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [742] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [747] = 1,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [752] = 1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [757] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
  [761] = 1,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [765] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [769] = 1,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
  [773] = 1,
    ACTIONS(200), 1,
      anon_sym_DQUOTEaccess_DASHlist_DQUOTE,
  [777] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
  [781] = 1,
    ACTIONS(204), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [785] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [789] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [793] = 1,
    ACTIONS(210), 1,
      anon_sym_COLON,
  [797] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
  [801] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
  [805] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [809] = 1,
    ACTIONS(218), 1,
      anon_sym_COLON,
  [813] = 1,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
  [817] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [821] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [825] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [829] = 1,
    ACTIONS(228), 1,
      anon_sym_COMMA,
  [833] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [837] = 1,
    ACTIONS(232), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [841] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
  [845] = 1,
    ACTIONS(236), 1,
      anon_sym_DQUOTEtype_DQUOTE,
  [849] = 1,
    ACTIONS(238), 1,
      anon_sym_COLON,
  [853] = 1,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [857] = 1,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [861] = 1,
    ACTIONS(244), 1,
      anon_sym_COLON,
  [865] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [869] = 1,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
  [873] = 1,
    ACTIONS(250), 1,
      anon_sym_COMMA,
  [877] = 1,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [881] = 1,
    ACTIONS(254), 1,
      anon_sym_DQUOTEaces_DQUOTE,
  [885] = 1,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
  [889] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
  [893] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [897] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [901] = 1,
    ACTIONS(264), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [905] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [909] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
  [913] = 1,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [917] = 1,
    ACTIONS(272), 1,
      anon_sym_DQUOTEaccess_DASHlists_DQUOTE,
  [921] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [925] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [929] = 1,
    ACTIONS(278), 1,
      anon_sym_DQUOTEace_DQUOTE,
  [933] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [937] = 1,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
  [941] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [945] = 1,
    ACTIONS(286), 1,
      anon_sym_DQUOTEacl_DQUOTE,
  [949] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
  [953] = 1,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
  [957] = 1,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [961] = 1,
    ACTIONS(294), 1,
      anon_sym_COMMA,
  [965] = 1,
    ACTIONS(296), 1,
      anon_sym_DQUOTEname_DQUOTE,
  [969] = 1,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
  [973] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [977] = 1,
    ACTIONS(302), 1,
      anon_sym_COLON,
  [981] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [985] = 1,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
  [989] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [993] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [997] = 1,
    ACTIONS(312), 1,
      sym_number,
  [1001] = 1,
    ACTIONS(314), 1,
      sym_number,
  [1005] = 1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
  [1009] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [1013] = 1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [1017] = 1,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1021] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [1025] = 1,
    ACTIONS(326), 1,
      anon_sym_DQUOTEmatches_DQUOTE,
  [1029] = 1,
    ACTIONS(328), 1,
      anon_sym_COLON,
  [1033] = 1,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
  [1037] = 1,
    ACTIONS(332), 1,
      anon_sym_COMMA,
  [1041] = 1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
  [1045] = 1,
    ACTIONS(336), 1,
      anon_sym_DQUOTEactions_DQUOTE,
  [1049] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1053] = 1,
    ACTIONS(340), 1,
      anon_sym_COMMA,
  [1057] = 1,
    ACTIONS(342), 1,
      anon_sym_COLON,
  [1061] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
  [1065] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [1069] = 1,
    ACTIONS(348), 1,
      anon_sym_COLON,
  [1073] = 1,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1077] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1081] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [1085] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1089] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 223,
  [SMALL_STATE(12)] = 234,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 332,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 348,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 368,
  [SMALL_STATE(27)] = 378,
  [SMALL_STATE(28)] = 388,
  [SMALL_STATE(29)] = 398,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 448,
  [SMALL_STATE(36)] = 458,
  [SMALL_STATE(37)] = 468,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 488,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 504,
  [SMALL_STATE(42)] = 510,
  [SMALL_STATE(43)] = 520,
  [SMALL_STATE(44)] = 530,
  [SMALL_STATE(45)] = 536,
  [SMALL_STATE(46)] = 541,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 553,
  [SMALL_STATE(49)] = 560,
  [SMALL_STATE(50)] = 567,
  [SMALL_STATE(51)] = 572,
  [SMALL_STATE(52)] = 579,
  [SMALL_STATE(53)] = 586,
  [SMALL_STATE(54)] = 593,
  [SMALL_STATE(55)] = 600,
  [SMALL_STATE(56)] = 607,
  [SMALL_STATE(57)] = 614,
  [SMALL_STATE(58)] = 621,
  [SMALL_STATE(59)] = 626,
  [SMALL_STATE(60)] = 631,
  [SMALL_STATE(61)] = 638,
  [SMALL_STATE(62)] = 645,
  [SMALL_STATE(63)] = 650,
  [SMALL_STATE(64)] = 655,
  [SMALL_STATE(65)] = 660,
  [SMALL_STATE(66)] = 665,
  [SMALL_STATE(67)] = 670,
  [SMALL_STATE(68)] = 675,
  [SMALL_STATE(69)] = 682,
  [SMALL_STATE(70)] = 687,
  [SMALL_STATE(71)] = 692,
  [SMALL_STATE(72)] = 697,
  [SMALL_STATE(73)] = 702,
  [SMALL_STATE(74)] = 709,
  [SMALL_STATE(75)] = 714,
  [SMALL_STATE(76)] = 721,
  [SMALL_STATE(77)] = 728,
  [SMALL_STATE(78)] = 735,
  [SMALL_STATE(79)] = 742,
  [SMALL_STATE(80)] = 747,
  [SMALL_STATE(81)] = 752,
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
  [SMALL_STATE(156)] = 1053,
  [SMALL_STATE(157)] = 1057,
  [SMALL_STATE(158)] = 1061,
  [SMALL_STATE(159)] = 1065,
  [SMALL_STATE(160)] = 1069,
  [SMALL_STATE(161)] = 1073,
  [SMALL_STATE(162)] = 1077,
  [SMALL_STATE(163)] = 1081,
  [SMALL_STATE(164)] = 1085,
  [SMALL_STATE(165)] = 1089,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_quoted_content, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_quoted_content_repeat1, 2), SHIFT_REPEAT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2), SHIFT_REPEAT(114),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_fallback_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_fallback_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_fallback_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2), SHIFT_REPEAT(76),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_acl_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value_fallback, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2), SHIFT_REPEAT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ietf_mud_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object_fallback, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2), SHIFT_REPEAT(54),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ace_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array_fallback, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_url, 3, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace_object, 13),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_list_repeat1, 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_object, 13),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mud_version, 3, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_update, 3, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_validity, 3, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_supported, 3, .production_id = 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_systeminfo, 3, .production_id = 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_device_policy, 3, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_device_policy, 3, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair_fallback, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 8),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 11),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 12),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_acls, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ietf_mud, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ace, 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forwarding_action, 5),
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
