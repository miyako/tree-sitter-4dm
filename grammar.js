const PREC = {
  comment: -1,
  suffix: 7,
  value: 8,
  parameter: 9,
  variable: 9,
  identifier: 10,
  constant: 11
}
module.exports = grammar({
  name: 'fourd',
  // word: $ => $.identifier,
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice(
      $.comment,
      // $.while, $.until, $.for_each, $.end_for_each,
      // $.table, $.field, $.parameter, $.variable,
      $.statement,
      $.assignment,
      // $.expression,
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
        seq('//', /.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        ))
    ),

    for_each_block: $ => seq(
        seq($.for_each, $._arguments),
        optional(seq(choice($.until, $.while), $._arguments)),
        $.end_for_each),

    while_block: $ => seq(
        $.while, $._arguments,
        $.end_while),

    repeat_block: $ => seq(
        $.repeat,
        $.until, $._arguments),

    if_block: $ => seq(
      $.if, $._arguments,
      optional($.else),
      $.end_if),

    for_block: $ => seq(
        $.for, $._arguments,
        $.end_for),

    use_block: $ => seq(
      $.use, $._arguments,
      $.end_use),

    sql_block: $ => seq(
      $.begin_sql,
      $.end_sql),

    case_block: $ => seq(
      $.case_of, repeat1(seq(':', $._arguments)),
      optional($.else),
      $.end_case),

    _for_each_e: $ => prec.left(/[fF][oO][rR] [eE][aA][cC][hH]/),
    _for_each_f: $ => prec.left(/[pP][oO][uU][rR] [cC][hH][aA][qQ][uU][eE]/),
    for_each   : $ => alias(choice($._for_each_e, $._for_each_f), 'For each'),

    _end_for_each_e: $ => prec.right(/[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/),
    _end_for_each_f: $ => /[fF][iI][nN] [dD][eE] [cC][hH][aA][qQ][uU][eE]/,
    end_for_each   : $ => alias(choice($._end_for_each_e, $._end_for_each_f), 'End for each'),

    _while_e: $ => prec.left(/[wW][hH][iI][lL][eE]/),
    _while_f: $ => /[tT][aA][nN][tT] [qQ][uU][eE]/,
    while   : $ => alias(choice($._while_e, $._while_f), 'While'),

    _until_e: $ => /[uU][nN][tT][iI][lL]/,
    _until_f: $ => /[jJ][uU][sS][qQ][uU][eE]/,
    until   : $ => alias(choice($._until_e, $._until_f), 'Until'),

    _for_e: $ => prec.left(/[fF][oO][rR]/),
    _for_f: $ => prec.right(/[bB][oO][uU][cC][lL][eE]/),
    for   : $ => alias(choice($._for_e, $._for_f), 'For'),

    _end_for_e: $ => prec.left(/[eE][nN][dD] [fF][oO][rR]/),
    _end_for_f: $ => /[fF][iI][nN] [dD][eE] [bB][oO][uU][cC][lL][eE]/,
    end_for  : $ => alias(choice($._end_for_e, $._end_for_f), 'End for'),

    _use_e: $ => prec.left(/[uU][sS][eE]/),
    _use_f: $ => prec.left(/[uU][tT][iI][lL][iI][sS][eE][rR]/),
    use   : $ => alias(choice($._use_e, $._use_f), 'Use'),

    _end_use_e: $ => prec.right(/[eE][nN][dD] [uU][sS][eE]/),
    _end_use_f: $ => prec.right(/[fF][iI][nN] [uU][tT][iI][lL][iI][sS][eE][rR]/),
    end_use   : $ => alias(choice($._end_use_e, $._end_use_f), 'End use'),

    _repeat_e: $ => /[rR][eE][pP][eE][aA][tT]/,
    _repeat_f: $ => /[rR][eE][pP][eE][tT][eE][rR]/,
    repeat   : $ => alias(choice($._repeat_e, $._repeat_f), 'Repeat'),

    _end_while_e: $ => prec.right(/[eE][nN][dD] [wW][hH][iI][lL][eE]/),
    _end_while_f: $ => prec.right(/[fF][iI][nN] [tT][aA][nN][tT] [qQ][uU][eE]/),
    end_while   : $ => alias(choice($._end_while_e, $._end_while_f), 'End while'),

    _if_e: $ => /[iI][fF]/,
    _if_f: $ => /[sS][iI]/,
    if   : $ => alias(choice($._if_e, $._if_f), 'If'),

    _else_e: $ => /[eE][lL][sS][eE]/,
    _else_f: $ => /[sS][iI][nN][oO][nN]/,
    else   : $ => alias(choice($._else_e, $._else_f), 'Else'),

    _end_if_e: $ => prec.right(/[eE][nN][dD] [iI][fF]/),
    _end_if_f: $ => prec.right(/[fF][iI][nN] [dD][eE] [sS][iI]/),
    end_if   : $ => alias(choice($._end_if_e, $._end_if_f), 'End if'),

    _case_of_e: $ => /[cC][aA][sS][eE] [oO][fF]/,
    _case_of_f: $ => /[aA][uU] [cC][aA][sS] [oO][uU]/,
    case_of   : $ => alias(choice($._case_of_e, $._case_of_f), 'Case of'),

    _end_case_e: $ => /[eE][nN][dD] [cC][aA][sS][eE]/,
    _end_case_f: $ => /[fF][iI][nN] [dD][eE] [cC][aA][sS]/,
    end_case   : $ => alias(choice($._end_case_e, $._end_case_f), 'End case'),

    _begin_sql_e: $ => /[bB][eE][gG][iI][nN] [sS][qQ][lL]/,
    _begin_sql_f: $ => /[dD][eE][bB][uU][tT] [sS][qQ][lL]/,
    begin_sql   : $ => alias(choice($._begin_sql_e, $._begin_sql_f), 'Begin SQL'),

    _end_sql_e: $ => /[fF][iI][nN] [sS][qQ][lL]/,
    _end_sql_f: $ => /[eE][nN][dD] [sS][qQ][lL]/,
    end_sql   : $ => alias(choice($._end_sql_e, $._end_sql_f), 'End SQL'),

    /* constants */

    _hex_literal: $ => token(seq(/[0][xX]/, /[0-9a-fA-F]+/)),
    _dec_literal: $ => /[+-]?[0-9]+/,
    _num_literal: $ => prec.right(token(seq(/[+-]?/, /[0-9]+/, '.', /[0-9]+/))),
    _exp_literal: $ => prec.right(token(seq(/[0-9]+/, '.', /[0-9]+/, /[eE]/, /[+-]?/, /[0-9]+/))),
    _number : $ => prec(PREC.constant,
      alias(choice($._dec_literal, $._hex_literal, $._exp_literal, $._num_literal), 'Number')),

    _time: $ => prec(PREC.constant,
      alias(seq('?', /[0-9]{1,2}/, ':', /[0-9]{1,2}/, ':', /[0-9]{1,2}/, '?'), 'Time')),

    _date: $ => prec(PREC.constant,
      alias(choice(
      seq('!', /[0-9]{1,2}/, '-', /[0-9]{1,2}/, '-', /[0-9]{1,2}/, '!'),
      seq('!', /[0-9]{1,2}/, '/', /[0-9]{1,2}/, '/', /[0-9]{1,2}/, '!'),
      seq('!', /[0-9]{1,2}/, '.', /[0-9]{1,2}/, '.', /[0-9]{1,2}/, '!')), 'Date')),

    _string: $ => prec(PREC.constant,
      alias(token(seq('"',
      repeat(choice('\\r', '\\n', '\\"', '\\t', '\\\\', /[^"]/)), '"')), 'String')),

    _name: $ => token(choice(
      /[A-Za-z_]/,
      seq(/[A-Za-z_]/, /[A-Za-z_0-9]/),
      seq(/[A-Za-z_]/, /[A-Za-z_ 0-9]+/, /[A-Za-z_0-9]/)
    )),

    /* structure */
    _storage_suffix: $ => prec(PREC.suffix, /:[0-9]+/),
    _table: $ => alias(prec.left(seq('[', $._name, optional($._storage_suffix), ']')), 'Table'),
    _field: $ => alias(prec.right(seq('[', $._table, $._name, optional($._storage_suffix))), 'Field'),

    /* variable */
    _local_variable: $ => prec(PREC.variable, seq('<>', $._name)),
    _interprocess_variable: $ => prec(PREC.variable, seq('$', $._name)),

    parameter: $ => prec(PREC.variable, alias(token(seq('$', /[0-9]+/)), 'Parameter')),

    /* default token: process variable, method, command, function */
    _variable: $ => alias(prec(PREC.identifier, choice(
      $.parameter,
      $._local_variable,
      $._interprocess_variable,
      seq($._name, '[', $._reference, ']'),
      seq($._name, '{', $._reference, '}'),
      seq($._name, '[[', $._reference, ']]', optional(seq('[[', $._reference, ']]'))),
      )), 'Variable'),

    _dereference: $ => seq($._variable, '->'),
    _pointer: $ => seq('->', $._variable),
    _reference: $ =>
      alias(choice(
      $._variable,
      $._field,
      $._dereference), 'Reference'),

    /* _value > _notation */
    _value: $ => prec(PREC.value,
      alias(choice(
      $._number,
      $._time,
      $._date,
      $._string,
      $._formula,
      $._reference,
      $._pointer,
      $.statement), 'Value')),

    _operator: $ => choice(
      '*', '/', '+', '-',
      '%', '\\', '&', '|',
      '^', '^|',
      '<<', '>>',
      '<', '>', '<=', '>=', '=', '#',
      '??', '?-', '?+'
    ),
    _formula: $ => seq($._reference, $._operator, $._value),
    _argument: $ => choice($._table, '*', '>', $._value),

    _arguments: $ => seq('(', optional(choice($._value, seq($._value, repeat(seq(';', $._value))))), ')'),
    statement: $ => choice($._function, $._notation),
    _function: $ => seq($._name, optional($._arguments)),
    assignment: $ => seq($._reference, ':=', $._value),

    /* _notation > _reference */
    _notation: $ => prec.right(
      seq(
      $._reference,
      repeat(
        choice(seq('.', $._name), seq('[', $._reference ,']'))),
        optional($._arguments)))

  }
});
