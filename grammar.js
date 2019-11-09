const PREC = {
  comment: -3,
  key: -2,
  operator: -1,
  formula: 4, assignment: 4,

  value: 6, parameter: 6,
  command: 7, constant: 7, structure: 7,
  reference: 8, function: 8,
  variable: 9,
  identifier: 10
}
module.exports = grammar({
  name: 'fourd',
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice(
      $.comment,
      $.function,
      $.command,
      $.assignment,
      $.for_each_block,
      $.while_block,
      $.repeat_block,
      $.if_block,
      $.for_block,
      $.use_block,
      $.sql_block,
      $.case_block),

    comment: $ => prec(PREC.comment,
      choice(
        token(
          seq('//', /.*/),
          seq(
            '/*',
            /[^*]*\*+([^/*][^*]*\*+)*/,
            '/'
          )
        )
      )
    ),

    if_block: $ => seq(
      $.if,
      repeat(choice($._token, $.else)),
      $.end_if),

    for_each_block: $ => seq(
        seq($.for_each, $.arguments),
        optional(seq(choice($.until, $.while), $.arguments)),
        repeat($._token),
        $.end_for_each),

    while_block: $ => seq(
        seq($.while, $.arguments),
        repeat($._token),
        $.end_while),

    repeat_block: $ => seq(
        $.repeat,
        repeat($._token),
        seq($.until, $.arguments)),

    for_block: $ => seq(
        seq($.for, $.arguments),
        repeat($._token),
        $.end_for),

    use_block: $ => seq(
      seq($.use, $.arguments),
      repeat($._token),
      $.end_use),

    sql_block: $ => seq(
      $.begin_sql,
      repeat($._token),
      $.end_sql),

    case_block: $ => seq(
      $.case_of, repeat1(seq(':', $.arguments, repeat(choice($.else, $._token)))),
      $.end_case),

    _if_e: $ => /[iI][fF]/,
    _if_f: $ => /[sS][iI]/,
    if   : $ => prec(PREC.key, seq(choice($._if_e, $._if_f), $.arguments)),

    _else_e: $ => /[eE][lL][sS][eE]/,
    _else_f: $ => /[sS][iI][nN][oO][nN]/,
    else   : $ => prec(PREC.key, choice($._else_e, $._else_f)),

    _end_if_e: $ => /[eE][nN][dD] [iI][fF]/,
    _end_if_f: $ => /[fF][iI][nN] [dD][eE] [sS][iI]/,
    end_if   : $ => prec(PREC.key, choice($._end_if_e, $._end_if_f)),

    _for_each_e: $ => /[fF][oO][rR] [eE][aA][cC][hH]/,
    _for_each_f: $ => /[pP][oO][uU][rR] [cC][hH][aA][qQ][uU][eE]/,
    for_each   : $ => prec(PREC.key, choice($._for_each_e, $._for_each_f)),

    _end_for_each_e: $ => /[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/,
    _end_for_each_f: $ => /[fF][iI][nN] [dD][eE] [cC][hH][aA][qQ][uU][eE]/,
    end_for_each   : $ => prec(PREC.key, choice($._end_for_each_e, $._end_for_each_f)),

    _while_e: $ => /[wW][hH][iI][lL][eE]/,
    _while_f: $ => /[tT][aA][nN][tT] [qQ][uU][eE]/,
    while   : $ => prec(PREC.key, choice($._while_e, $._while_f)),

    _until_e: $ => /[uU][nN][tT][iI][lL]/,
    _until_f: $ => /[jJ][uU][sS][qQ][uU][eE]/,
    until   : $ => prec(PREC.key, choice($._until_e, $._until_f)),

    _for_e: $ => /[fF][oO][rR]/,
    _for_f: $ => /[bB][oO][uU][cC][lL][eE]/,
    for   : $ => prec(PREC.key, choice($._for_e, $._for_f)),

    _end_for_e: $ => /[eE][nN][dD] [fF][oO][rR]/,
    _end_for_f: $ => /[fF][iI][nN] [dD][eE] [bB][oO][uU][cC][lL][eE]/,
    end_for  : $ => prec(PREC.key, choice($._end_for_e, $._end_for_f)),

    _use_e: $ => /[uU][sS][eE]/,
    _use_f: $ => /[uU][tT][iI][lL][iI][sS][eE][rR]/,
    use   : $ => prec(PREC.key, choice($._use_e, $._use_f)),

    _end_use_e: $ => /[eE][nN][dD] [uU][sS][eE]/,
    _end_use_f: $ => /[fF][iI][nN] [uU][tT][iI][lL][iI][sS][eE][rR]/,
    end_use   : $ => prec(PREC.key, choice($._end_use_e, $._end_use_f)),

    _repeat_e: $ => /[rR][eE][pP][eE][aA][tT]/,
    _repeat_f: $ => /[rR][eE][pP][eE][tT][eE][rR]/,
    repeat   : $ => prec(PREC.key, choice($._repeat_e, $._repeat_f)),

    _end_while_e: $ => /[eE][nN][dD] [wW][hH][iI][lL][eE]/,
    _end_while_f: $ => /[fF][iI][nN] [tT][aA][nN][tT] [qQ][uU][eE]/,
    end_while   : $ => prec(PREC.key, choice($._end_while_e, $._end_while_f)),

    _case_of_e: $ => /[cC][aA][sS][eE] [oO][fF]/,
    _case_of_f: $ => /[aA][uU] [cC][aA][sS] [oO][uU]/,
    case_of   : $ => prec(PREC.key, choice($._case_of_e, $._case_of_f)),

    _end_case_e: $ => /[eE][nN][dD] [cC][aA][sS][eE]/,
    _end_case_f: $ => /[fF][iI][nN] [dD][eE] [cC][aA][sS]/,
    end_case   : $ => prec(PREC.key, choice($._end_case_e, $._end_case_f)),

    _begin_sql_e: $ => /[bB][eE][gG][iI][nN] [sS][qQ][lL]/,
    _begin_sql_f: $ => /[dD][eE][bB][uU][tT] [sS][qQ][lL]/,
    begin_sql   : $ => prec(PREC.key, choice($._begin_sql_e, $._begin_sql_f)),

    _end_sql_e: $ => /[fF][iI][nN] [sS][qQ][lL]/,
    _end_sql_f: $ => /[eE][nN][dD] [sS][qQ][lL]/,
    end_sql   : $ => prec(PREC.key, choice($._end_sql_e, $._end_sql_f)),

    /* constants */

    _hex_literal: $ => token(seq(/[0][xX]/, /[0-9a-fA-F]+/)),
    _dec_literal: $ => /[+-]?[0-9]+/,
    _num_literal: $ => prec.right(token(seq(/[+-]?/, /[0-9]+/, '.', /[0-9]+/))),
    _exp_literal: $ => prec.right(token(seq(/[0-9]+/, '.', /[0-9]+/, /[eE]/, /[+-]?/, /[0-9]+/))),
    number : $ => prec(PREC.constant,
      choice($._dec_literal, $._hex_literal, $._exp_literal, $._num_literal)),

    time: $ => prec(PREC.constant,
      seq('?', /[0-9]{1,2}/, ':', /[0-9]{1,2}/, ':', /[0-9]{1,2}/, '?')),

    date: $ => prec(PREC.constant,
      choice(
      seq('!', /[0-9]{1,2}/, '-', /[0-9]{1,2}/, '-', /[0-9]{1,2}/, '!'),
      seq('!', /[0-9]{1,2}/, '/', /[0-9]{1,2}/, '/', /[0-9]{1,2}/, '!'),
      seq('!', /[0-9]{1,2}/, '.', /[0-9]{1,2}/, '.', /[0-9]{1,2}/, '!'))),

    string: $ => prec(PREC.constant,
      token(seq('"',
      repeat(choice('\\r', '\\n', '\\"', '\\t', '\\\\', /[^"]/)), '"'))),

    /* important to have default (0) prec. but not use 'word' */

    _name: $ => token(choice(
      /[A-Za-z_]/,
      seq(/[A-Za-z_]/, /[A-Za-z_0-9]/),
      seq(/[A-Za-z_]/, /[A-Za-z_ 0-9]+/, /[A-Za-z_0-9]/)
    )),

    _dereference: $ => seq($.variable, '->'),
    _pointer: $ => seq('->', $.variable),

    /* expose, to tokenise formula */
    operator: $ => prec(PREC.operator,
      choice(
        '*', '/', '+', '-',
        '%', '\\', '&', '|',
        '^', '^|',
        '<<', '>>',
        '<', '>', '<=', '>=', '=', '#',
        '??', '?-', '?+'
      )
    ),

    /* arguments */
    argument: $ => choice($.table, '*', '>', $.value),

    //todo: $.formula does not match $e=1


    arguments: $ => seq('(', optional(choice($.argument, seq($.argument, repeat(seq(';', $.argument))))), ')'),

    /* higher than reference, function, value, command, constant, parameter */
    formula: $ => prec(PREC.formula, prec.left(seq($.value, $.operator, $.value))),

    /* parameter is same as value */
    parameter: $ => prec(PREC.parameter, token(seq('$', /[0-9]+/))),

    /* structure */
    _storage_suffix: $ => /:[0-9]+/,
    table: $ => prec(PREC.structure,
      seq('[', $._name, optional($._storage_suffix), ']')
    ),
    field: $ => prec(PREC.structure,
      seq('[', $.table, $._name, optional($._storage_suffix))
    ),

    /* command is same as constant */
    _command_suffix: $ => /:[cC][0-9]+/,
    command: $ => prec(PREC.command, seq($._name, $._command_suffix, optional($.arguments))),

    /* constant */
    _constant_suffix: $ => /:[kK][0-9]+:[0-9]+/,
    constant: $ => prec(PREC.constant, seq($._name, $._constant_suffix)),

    /* value (respect prec of each) */
    value: $ =>
      choice(
      $.number,
      $.time,
      $.date,
      $.string,
      $.command,
      $.formula,
      $.function,
      $.reference,
      $._pointer,
      $.constant),

    /* reference is same as function */
    reference: $ => prec(PREC.reference,
      prec.left(
        choice(
        $.variable,
        $.field,
        $._dereference)
      )
    ),

    /* function */
    function: $ => prec(PREC.function, seq($._name, optional($.arguments))),

    /* variable */
    local_variable: $ => prec(PREC.variable, seq('$', $._name)),
    process_variable: $ => prec(PREC.variable, seq($._name)),
    interprocess_variable: $ => prec(PREC.variable, seq('<>', $._name)),
    _variable: $ => choice($.local_variable, $.process_variable, $.interprocess_variable),
    variable: $ => prec(PREC.variable, prec.left(choice(
      choice($._variable, $.parameter),
      seq(choice($._variable, $.parameter), '[', $.reference, ']'),
      seq(choice($._variable, $.parameter), '{', $.reference, '}'),
      seq(choice($._variable, $.parameter), '[[', $.reference, ']]', optional(seq('[[', $.reference, ']]')))))),

    assign: $ => prec(PREC.operator, ':='),

    /* assignment should need no priorty */
    assignment: $ => seq($.reference, $.assign, $.value),

  }
});
