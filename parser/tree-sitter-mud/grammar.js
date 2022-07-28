module.exports = grammar({
  name: 'mud',

  rules: {

    source: $ => json_object(comma_separated(choice($.ietf_mud, $.ietf_acls, $.json_pair_fallback))),

    ietf_mud: $ => json_pair(field('ietf_mud_toplevel_id', $.ietf_mud_mud)
                            ,json_object(comma_separated(choice($.mud_version
                                                               ,$.mud_url
                                                               ,$.last_update
                                                               ,$.mud_signature
                                                               ,$.cache_validity
                                                               ,$.is_supported
                                                               ,$.systeminfo
                                                               ,$.mfg_name
                                                               ,$.model_name
                                                               ,$.firmware_rev
                                                               ,$.software_rev
                                                               ,$.documentation
                                                               ,$.extensions
                                                               ,$.from_device_policy
                                                               ,$.to_device_policy
                                                               ,$.json_pair_fallback)))),
    ietf_acls : $ => json_pair(field('ietf_mud_toplevel_id', $.ietf_access_control_list_acls)
                              ,$.acl),

    ietf_mud_mud: $ => '"ietf-mud:mud"',
    ietf_access_control_list_acls: $ => '"ietf-access-control-list:acls"',

    acl: $ => json_object(json_pair('"acl"', json_list($.acl_object))),
    acl_object: $ => json_object(seq($.acl_name_def,','
                                    ,json_pair('"type"', $.string),','
                                    ,json_pair('"aces"', $.ace))),
    ace: $ => json_object(json_pair('"ace"'
                         ,json_list($.ace_object))),
    ace_object: $ => json_object(seq(json_pair('"name"',    $.string) ,','
                                    ,json_pair('"matches"', $.matches),','
                                    ,json_pair('"actions"', $.actions))),
    matches: $ => $.matches_object,
    actions: $ => choice($.forwarding_action, $.json_object_fallback),

    acl_name_def:    $ => json_pair('"name"', field('name', $.string)),
    policy_acl_name: $ => json_pair('"name"', field('name', $.string)),

    matches_object: $ => json_object(comma_separated(choice($.eth_matches
                                                           ,$.ipv4_matches
                                                           ,$.ipv6_matches
                                                           ,$.tcp_matches
                                                           ,$.udp_matches
                                                           ,$.icmp_matches
                                                           ,$.mud_matches_augment
                                                           ,$.json_pair_fallback))),

    mud_matches_augment: $ => json_pair('"ietf-mud:mud"'
                                       ,json_object(comma_separated(choice($.controller
                                                                          ,$.my_controller
                                                                          ,$.manufacturer
                                                                          ,$.same_manufacturer
                                                                          ,$.local_networks
                                                                          ,$.model
                                                                          ,$.json_pair_fallback)))),

    eth_matches: $ => json_pair('"eth"', json_object(comma_separated($.json_pair_fallback))),

    ipv4_matches: $ => json_pair('"ipv4"'
                                ,json_object(comma_separated(choice($.ip_header_proto
                                                                   ,$.ietf_acldns
                                                                   ,$.json_pair_fallback)))), // TODO
    ipv6_matches: $ => json_pair('"ipv6"'
                                ,json_object(comma_separated(choice($.ip_header_proto
                                                                   ,$.ietf_acldns
                                                                   ,$.json_pair_fallback)))), // TODO

    tcp_matches: $ => json_pair('"tcp"'
                               ,json_object(comma_separated(choice($.source_port
                                                                  ,$.destination_port
                                                                  ,$.direction_initiated
                                                                  ,$.json_pair_fallback)))), // TODO
    udp_matches: $ => json_pair('"udp"'
                               ,json_object(comma_separated(choice($.source_port
                                                                  ,$.destination_port
                                                                  ,$.direction_initiated
                                                                  ,$.json_pair_fallback)))), // TODO

    icmp_matches: $ => json_pair('"icmp"'
                                ,json_object(comma_separated(choice($.type
                                                                   ,$.code
                                                                   ,$.rest_of_header
                                                                   ,$.json_pair_fallback)))),


    controller:        $ => json_pair(field('mud_matches_augment_id', $.controller_id),         field('uri',       $.string)),
    my_controller:     $ => json_pair(field('mud_matches_augment_id', $.my_controller_id),                         $.null_valued),
    manufacturer:      $ => json_pair(field('mud_matches_augment_id', $.manufacturer_id),       field('authority', $.string)),
    same_manufacturer: $ => json_pair(field('mud_matches_augment_id', $.same_manufacturer_id),                     $.null_valued),
    local_networks:    $ => json_pair(field('mud_matches_augment_id', $.local_networks_id),                        $.null_valued),
    model:             $ => json_pair(field('mud_matches_augment_id', $.model_id),              field('uri',       $.string)),

    controller_id:        $ => '"controller"',
    my_controller_id:     $ => '"my-controller"',
    manufacturer_id:      $ => '"manufacturer"',
    same_manufacturer_id: $ => '"same-manufacturer"',
    local_networks_id:    $ => '"local-networks"',
    model_id:             $ => '"model"',

    ip_header_proto: $ => json_pair('"protocol"', $.number),
    ietf_acldns: $ => json_pair(seq('"ietf-acldns:',choice('src-dnsname','dst-dnsname'),'"')
                               ,$.string),
    source_port:      $ => json_pair('"source-port"',      $.range_or_operator),
    destination_port: $ => json_pair('"destination-port"', $.range_or_operator),

    range_or_operator: $ => choice($.port_range, $.port_operator),
    port_range:    $ => json_object(comma_separated1(choice(json_pair('"lower-port"', $.number)
                                                           ,json_pair('"upper-port"', $.number)))),
    port_operator: $ => json_object(comma_separated1(choice(json_pair('"operator"', $.string)
                                                           ,json_pair('"port"',     $.number)))),

    direction_initiated: $ => json_pair('"ietf-mud:direction-initiated"'
                                       ,choice('"to-device"', '"from-device"')),

    type:           $ => json_pair('"type"',           $.uint8),
    code:           $ => json_pair('"code"',           $.uint8),
    rest_of_header: $ => json_pair('"rest-of-header"', $.binary),

    // TODO: for the purposes of type-checking in muddles these aliases should
    //       be used consistently per their use in RFC8519,RFC8520.
    uint8:  $ => $.number,
    binary: $ => $.string,

    forwarding_action: $ => json_object(json_pair('"forwarding"', $.action)),
    action: $ => choice('"accept"', '"drop"', '"reject"'),

    mud_version:          $ => json_pair(field('mud_id', $.mud_version_id)       ,field('version'   ,$.number)),
    mud_url:              $ => json_pair(field('mud_id', $.mud_url_id)           ,field('url'       ,$.string)),
    last_update:          $ => json_pair(field('mud_id', $.last_update_id)       ,field('timestamp' ,$.string)),
    cache_validity:       $ => json_pair(field('mud_id', $.cache_validity_id)    ,field('hours'     ,$.number)),
    is_supported:         $ => json_pair(field('mud_id', $.is_supported_id)      ,field('supported' ,$.bool  )),
    systeminfo:           $ => json_pair(field('mud_id', $.systeminfo_id)        ,field('info'      ,$.string)),
    from_device_policy:   $ => json_pair(field('mud_id', $.from_device_policy_id),field('policy'    ,$.policy)),
    to_device_policy:     $ => json_pair(field('mud_id', $.to_device_policy_id)  ,field('policy'    ,$.policy)),
    mud_signature:        $ => json_pair(field('mud_id', $.mud_signature_id)     ,field('uri'       ,$.string)),
    mfg_name:             $ => json_pair(field('mud_id', $.mfg_name_id)          ,field('name'      ,$.string)),
    model_name:           $ => json_pair(field('mud_id', $.model_name_id)        ,field('name'      ,$.string)),
    firmware_rev:         $ => json_pair(field('mud_id', $.firmware_rev_id)      ,field('rev'       ,$.string)),
    software_rev:         $ => json_pair(field('mud_id', $.software_rev_id)      ,field('rev'       ,$.string)),
    documentation:        $ => json_pair(field('mud_id', $.documentation_id)     ,field('uri'       ,$.string)),
    extensions:           $ => json_pair(field('mud_id', $.extensions_id)        ,field('extensions',$.string)),

    mud_version_id:        $ => '"mud-version"',
    mud_url_id:            $ => '"mud-url"',
    last_update_id:        $ => '"last-update"',
    cache_validity_id:     $ => '"cache-validity"',
    is_supported_id:       $ => '"is-supported"',
    systeminfo_id:         $ => '"systeminfo"',
    from_device_policy_id: $ => '"from-device-policy"',
    to_device_policy_id:   $ => '"to-device-policy"',
    mud_signature_id:      $ => '"mud-signature"',
    mfg_name_id:           $ => '"mfg-name"',
    model_name_id:         $ => '"model-name"',
    firmware_rev_id:       $ => '"firmware-rev"',
    software_rev_id:       $ => '"software-rev"',
    documentation_id:      $ => '"documentation"',
    extensions_id:         $ => '"extensions"',

    policy: $ => json_object(json_pair('"access-lists"', $.access_list)),
    access_list: $ => json_object(json_pair('"access-list"', json_list(json_object($.policy_acl_name)))),

    string: $ => seq('"', $.string_quoted_content, '"'),
    string_quoted_content: $ => repeat1(choice(token.immediate(/[^\\"\n]+/)
                                              ,$._escape_sequence)),
    _escape_sequence: $ => token.immediate(seq('\\'
                                          ,/(\"|\\|\/|b|f|n|r|t|u)/)),
    number: $ => /\d+/, // TODO: hexadecimal/other notations?
    bool: $ => choice('true', 'false'),

    null_valued: $ => seq('[', 'null', ']'),

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
