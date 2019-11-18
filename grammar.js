const PREC = {
  comment: -4,
  key: -3,
  operator: -2,

  formula: 1, assignment: 1,
  value: 2, parameter: 2,


  command: 5, constant: 5, structure: 5,
  function: 6,

  path: 8,
  reference: 9,
  variable: 10,
  identifier: 11
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

    comment: $ => choice(
        prec(PREC.comment,seq('//', /.*/)),
        prec(PREC.comment,seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        ))
    ),

    if_block: $ => seq(
      $.if,
      repeat($._token),
      choice($.else_if_block, $.end_if)),

    else_if_block: $ => seq(
      $.else,
      repeat($._token),
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

/*
case_block: $ => seq(
  $.case_of,
  repeat1($.case),
  choice($.else_case_block, $.end_case)),

case: $ => seq(':', $.arguments, repeat($._token)),
*/
    case_block: $ => prec.right(seq(
      $.case_of,
      repeat1($.case))),

    case: $ => seq(':', $.arguments, repeat($._token), choice($.case, $.else_case_block, $.end_case)),

    else_case_block: $ => seq(
      $.else,
      repeat($._token),
      $.end_case),

    _if_e: $ => /(i|I)(f|F)/,
    _if_f: $ => /(s|S)(i|I)/,
    if   : $ => prec(PREC.key, seq(choice($._if_e, $._if_f), $.arguments)),

    _else_e: $ => /(e|E)(l|L)(s|S)(e|E)/,
    _else_f: $ => /(s|S)(i|I)(n|N)(o|O)(n|N)/,
    else   : $ => prec(PREC.key, choice($._else_e, $._else_f)),

    _end_if_e: $ => /(e|E)(n|N)(d|D) (i|I)(f|F)/,
    _end_if_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (s|S)(i|I)/,
    end_if   : $ => prec(PREC.key, choice($._end_if_e, $._end_if_f)),

    _for_each_e: $ => /(f|F)(o|O)(r|R) (e|E)(a|A)(c|C)(h|H)/,
    _for_each_f: $ => /(p|P)(o|O)(u|U)(r|R) (c|C)(h|H)(a|A)(q|Q)(u|U)(e|E)/,
    for_each   : $ => prec(PREC.key, choice($._for_each_e, $._for_each_f)),

    _end_for_each_e: $ => /(e|E)(n|N)(d|D) (f|F)(o|O)(r|R) (e|E)(a|A)(c|C)(h|H)/,
    _end_for_each_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (c|C)(h|H)(a|A)(q|Q)(u|U)(e|E)/,
    end_for_each   : $ => prec(PREC.key, choice($._end_for_each_e, $._end_for_each_f)),

    _while_e: $ => /(w|W)(h|H)(i|I)(l|L)(e|E)/,
    _while_f: $ => /(t|T)(a|A)(n|N)(t|T) (q|Q)(u|U)(e|E)/,
    while   : $ => prec(PREC.key, choice($._while_e, $._while_f)),

    _until_e: $ => /(u|U)(n|N)(t|T)(i|I)(l|L)/,
    _until_f: $ => /(j|J)(u|U)(s|S)(q|Q)(u|U)(e|E)/,
    until   : $ => prec(PREC.key, choice($._until_e, $._until_f)),

    _for_e: $ => /(f|F)(o|O)(r|R)/,
    _for_f: $ => /(b|B)(o|O)(u|U)(c|C)(l|L)(e|E)/,
    for   : $ => prec(PREC.key, choice($._for_e, $._for_f)),

    _end_for_e: $ => /(e|E)(n|N)(d|D) (f|F)(o|O)(r|R)/,
    _end_for_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (b|B)(o|O)(u|U)(c|C)(l|L)(e|E)/,
    end_for  : $ => prec(PREC.key, choice($._end_for_e, $._end_for_f)),

    _use_e: $ => /(u|U)(s|S)(e|E)/,
    _use_f: $ => /(u|U)(t|T)(i|I)(l|L)(i|I)(s|S)(e|E)(r|R)/,
    use   : $ => prec(PREC.key, choice($._use_e, $._use_f)),

    _end_use_e: $ => /(e|E)(n|N)(d|D) (u|U)(s|S)(e|E)/,
    _end_use_f: $ => /(f|F)(i|I)(n|N) (u|U)(t|T)(i|I)(l|L)(i|I)(s|S)(e|E)(r|R)/,
    end_use   : $ => prec(PREC.key, choice($._end_use_e, $._end_use_f)),

    _repeat_e: $ => /(r|R)(e|E)(p|P)(e|E)(a|A)(t|T)/,
    _repeat_f: $ => /(r|R)(e|E)(p|P)(e|E)(t|T)(e|E)(r|R)/,
    repeat   : $ => prec(PREC.key, choice($._repeat_e, $._repeat_f)),

    _end_while_e: $ => /(e|E)(n|N)(d|D) (w|W)(h|H)(i|I)(l|L)(e|E)/,
    _end_while_f: $ => /(f|F)(i|I)(n|N) (t|T)(a|A)(n|N)(t|T) (q|Q)(u|U)(e|E)/,
    end_while   : $ => prec(PREC.key, choice($._end_while_e, $._end_while_f)),

    _case_of_e: $ => /(c|C)(a|A)(s|S)(e|E) (o|O)(f|F)/,
    _case_of_f: $ => /(a|A)(u|U) (c|C)(a|A)(s|S) (o|O)(u|U)/,
    case_of   : $ => prec(PREC.key, choice($._case_of_e, $._case_of_f)),

    _end_case_e: $ => /(e|E)(n|N)(d|D) (c|C)(a|A)(s|S)(e|E)/,
    _end_case_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (c|C)(a|A)(s|S)/,
    end_case   : $ => prec(PREC.key, choice($._end_case_e, $._end_case_f)),

    _begin_sql_e: $ => /(b|B)(e|E)(g|G)(i|I)(n|N) (s|S)(q|Q)(l|L)/,
    _begin_sql_f: $ => /(d|D)(e|E)(b|B)(u|U)(t|T) (s|S)(q|Q)(l|L)/,
    begin_sql   : $ => prec(PREC.key, choice($._begin_sql_e, $._begin_sql_f)),

    _end_sql_e: $ => /(e|E)(n|N)(d|D) (s|S)(q|Q)(l|L)/,
    _end_sql_f: $ => /(f|F)(i|I)(n|N) (s|S)(q|Q)(l|L)/,
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
    _pointer: $ => prec.right(seq('->', $.variable, repeat($.path))),

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

    arguments: $ => seq('(', optional(choice($.argument, seq($.argument, repeat(seq(';', $.argument))))), ')'),

    /* higher than reference, function, value, command, constant, parameter */
    formula: $ => prec(PREC.formula, prec.left(seq($.value, $.operator, $.value))),

    /* parameter is same as value */
    parameter: $ => prec(PREC.parameter, prec.right(seq('$', /[0-9]+/, repeat($.path)))),

    /* structure */
    _storage_suffix: $ => /:[0-9]+/,
    table: $ => prec(PREC.structure,
      seq('[', $._name, optional($._storage_suffix), ']')
    ),
    field: $ => prec(PREC.structure,
      prec.right(seq('[', $.table, $._name, optional($._storage_suffix), repeat($.path)))
    ),

    /* command is same as constant */
    _command_suffix: $ => /:(c|C)[0-9]+/,
    command: $ => prec(PREC.command, prec.right(seq($._name, $._command_suffix, optional($.arguments)))),

    /* constant */
    _constant_suffix: $ => /:(k|K)[0-9]+:[0-9]+/,
    constant: $ => prec(PREC.constant, prec.right(seq($._name, $._constant_suffix))),

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
        choice(
        $.variable,
        $.field,
        $._dereference)
      ),

    /* function */
    function: $ => prec(PREC.function, prec.right(seq($._name, optional($.arguments)))),

    notation: /*test*/ $ => seq(choice($.command, $.function), repeat($.path)),

    /* variable */
    local_variable: $ => prec(PREC.variable, seq('$', $._name)),
    /*process_variable: $ => prec(PREC.variable, seq($._name)),*/
    interprocess_variable: $ => prec(PREC.variable, seq('<>', $._name)),
    _variable: $ => choice($.local_variable, /*$.process_variable,*/ $.interprocess_variable),

    variable: $ => prec(PREC.variable, prec.left(seq(choice(
      choice($._variable, $.parameter),
      seq(choice($._variable, $.parameter), '[', $.value, ']'),
      seq(choice($._variable, $.parameter), '{', $.value, '}'),
      seq(choice($._variable, $.parameter), '[[', $.value, ']]', optional(seq('[[', $.value, ']]')))), repeat($.path)))
      ),

    assign: $ => prec(PREC.operator, ':='),

    /* assignment should need no priorty */
    assignment: $ => seq($.reference, $.assign, $.value),

    path: $ => prec(PREC.path, seq(choice(seq('.', $._name), seq('[', $.value, ']')), optional($.arguments))),

    /*
    TODO:
    else block folding
    wrapping (anti-slash)
    sql block
    injection
    */

  }
});
