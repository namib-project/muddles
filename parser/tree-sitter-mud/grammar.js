module.exports = grammar({
  name: 'mud',

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
                              ,$.acl),
    acl: $ => json_object(json_pair('"acl"', json_list($.acl_object))),
    acl_object: $ => json_object(seq(json_pair('"name"', $.string),','
                                    ,json_pair('"type"', $.string),','
                                    ,json_pair('"aces"', $.ace))),
    ace: $ => json_object(json_pair('"ace"'
                         ,json_list($.ace_object))),
    ace_object: $ => json_object(seq(json_pair('"name"',    $.string) ,','
                                    ,json_pair('"matches"', $.matches),','
                                    ,json_pair('"actions"', $.actions))),
    matches: $ => $.matches_object, // TODO
    actions: $ => choice($.forwarding_action, $.json_object_fallback),

    matches_object: $ => json_object(comma_separated(choice($.ipv4_matches
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

    icmp_matches: $ => json_pair('"icmp"', json_object(comma_separated($.json_pair_fallback))), // TODO


    controller:        $ => json_pair('"controller"',         field('uri',       $.string)),
    my_controller:     $ => json_pair('"my-controller"',                         $.null_valued),
    manufacturer:      $ => json_pair('"manufacturer"',       field('authority', $.string)),
    same_manufacturer: $ => json_pair('"same-manufacturer"',                     $.null_valued),
    local_networks:    $ => json_pair('"local-networks"',                        $.null_valued),
    model:             $ => json_pair('"model"',              field('uri',       $.string)),

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


    forwarding_action: $ => json_object(json_pair('"forwarding"', $.action)),
    action: $ => choice('"accept"', '"drop"', '"reject"'),

    mud_version:          $ => json_pair('"mud-version"'       ,field('version'  ,$.number)),
    mud_url:              $ => json_pair('"mud-url"'           ,field('url'      ,$.string)),
    last_update:          $ => json_pair('"last-update"'       ,field('timestamp',$.string)),
    cache_validity:       $ => json_pair('"cache-validity"'    ,field('hours'    ,$.number)),
    is_supported:         $ => json_pair('"is-supported"'      ,field('supported',$.bool  )),
    systeminfo:           $ => json_pair('"systeminfo"'        ,field('info'     ,$.string)),
    from_device_policy:   $ => json_pair('"from-device-policy"',field('policy'   ,$.policy)),
    to_device_policy:     $ => json_pair('"to-device-policy"'  ,field('policy'   ,$.policy)),

    policy: $ => json_object(json_pair('"access-lists"', $.access_list)),
    access_list: $ => json_object(json_pair('"access-list"', json_list(json_object(json_pair('"name"', $.string))))),

    string: $ => seq('"', $.string_quoted_content, '"'),
    string_quoted_content: $ => repeat1(choice(token.immediate(/[^\\"\n]+/)
                                              ,$._escape_sequence)),
    _escape_sequence: $ => token.immediate(seq('\\'
                                          ,/(\"|\\|\/|b|f|n|r|t|u)/)),
    number: $ => /\d+/,
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
