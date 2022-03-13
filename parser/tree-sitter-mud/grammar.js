module.exports = grammar({
  name: 'MUD',

  rules: {

    source: $ => json_object(seq($.ietf_mud,',',$.ietf_acls)),

    ietf_mud: $ => json_pair('"ietf-mud:mud"'
                            ,json_object(comma_separated(choice($.mud_version
                                                               ,$.mud_url
                                                               ,$.last_update
                                                               ,$.cache_validity
                                                               ,$.is_supported
                                                               ,$.systeminfo
                                                               ,$.from_device_policy
                                                               ,$.to_device_policy
                                                               ,$.json_pair_fallback)))),

    ietf_acls : $ => json_pair('"ietf-access-control-list:access-lists"'
                              ,json_object($.json_pair_fallback)),

    mud_version:          $ => json_pair('"mud-version"'       ,field('version'  ,$.number)),
    mud_url:              $ => json_pair('"mud-url"'           ,field('url'      ,$.string)),
    last_update:          $ => json_pair('"last-update"'       ,field('timestamp',$.string)),
    cache_validity:       $ => json_pair('"cache-validity"'    ,field('hours'    ,$.number)),
    is_supported:         $ => json_pair('"is-supported"'      ,field('supported',$.bool  )),
    systeminfo:           $ => json_pair('"systeminfo"'        ,field('info'     ,$.string)),
    from_device_policy:   $ => json_pair('"from-device-policy"',field('policy'   ,$.policy)),
    to_device_policy:     $ => json_pair('"to-device-policy"'  ,field('policy'   ,$.policy)),

    policy: $ => json_object(json_pair('"access-lists"', $.access_list)),
    access_list: $ => json_object(json_pair('"access-list"', json_list($.name))),
    name: $ => json_object(json_pair('"name"', $.string)),

    string: $ => seq('"', $.string_quoted_content, '"'),
    string_quoted_content: $ => repeat1(choice(token.immediate(/[^\\"\n]+/)
                                              ,$._escape_sequence)),
    _escape_sequence: $ => token.immediate(seq('\\'
                                          ,/(\"|\\|\/|b|f|n|r|t|u)/)),
    number: $ => /\d+/,
    bool: $ => choice('true', 'false'),

    json_value_fallback: $ => choice($.json_object_fallback
                                    ,$.json_array_fallback
                                    ,$.number
                                    ,$.string
                                    ,'true'
                                    ,'false'
                                    ,'null'),
    json_object_fallback: $ => seq('{', comma_separated($.json_pair_fallback),  '}'),
    json_array_fallback:  $ => seq('[', comma_separated($.json_value_fallback), ']'),
    json_pair_fallback: $ => seq(choice($.string, $.number)
                                ,':'
                                ,$.json_value_fallback),
  }
});

function json_pair(k, v) {
  return seq(k, ':', v)
}

function json_object(o) {
  return seq('{', o, '}')
}

function json_list(e) {
  return seq('[', optional(comma_separated(e)), ']')
}

function comma_separated1(e) {
  return seq(e, repeat(seq(',', e)))
}

function comma_separated(e) {
  return optional(comma_separated1(e))
}
