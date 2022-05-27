const PREC = {
  comment: -4,
  key: -3,
  operator: -2,
  formula: 1, terminate: 1, assignment: 1,
  class_function: 1, method_declare: 1, ternary: 1,
  value: 2, parameter: 2,
  path: 3,
  function: 4,
  command: 5, constant: 5, class: 5, project_method:5, alias: 5,
  structure: 6,
  dereference: 9,
  variable: 10,
  identifier: 11
}
module.exports = grammar({
  name: 'fourd',
  //word: $ => $._nbname,
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice(
      $.comment,
      $.value,
      $.assignment,
      $.for_each_block,
      $.while_block,
      $.repeat_block,
      $.if_block,
      $.for_block,
      $.use_block,
      $.sql_block,
      $.var_block,
      $.case_block,
      $.function_block,
      $.class_extends,
      $.alias,
      $.declare_block,
      $.terminate_block,
      $.constructor_block

    ),

    keywords: $ => prec.left(-4, choice(
        $.return,
        $.break,
        $.continue,
        $.if, $.else, $.end_if,
        $.for_each, $.end_for_each,
        $.for, $.end_for,
        $.while, $.end_while,
        $.repeat, $.until,
        $.case_of, $.end_case,
        $.use, $.end_use,
        $.begin_sql, $.end_sql,
        $.var
    )),

    comment: $ => choice(
        prec(PREC.comment,seq('//', /.*/)),
        prec(PREC.comment,seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        ))
    ),

    for_each_block: $ => seq(
        seq($.for_each, $.arguments),
        optional(seq(choice($.until, $.while), $.argument)),
        repeat($._token),
        $.end_for_each
      ),

    while_block: $ => seq(
        seq($.while, $.argument),
        repeat($._token),
        $.end_while
      ),

    repeat_block: $ => seq(
        $.repeat,
        repeat($._token),
        seq($.until, $.argument)
      ),

    for_block: $ => seq(
        seq($.for, $.arguments),
        repeat($._token),
        $.end_for
      ),

    use_block: $ => seq(
      seq($.use, $.argument),
      repeat($._token),
      $.end_use
    ),

    sql_block: $ => seq(
      $.begin_sql,
      repeat($._token),
      $.end_sql
    ),

    case_condition: $ => seq(
        ':', $.argument
    ),

    _if: $ => prec.left(seq(
        seq($.if, $.argument)
    )),

    if_block: $ => prec.right(-1, seq(
        $._if,
        repeat(seq($._token, optional($.else))),
        $.end_if
    )),

    case_block: $ => prec.right(-1, seq(
        $.case_of,
        repeat(seq($.case_condition, repeat(seq($._token, optional($.else))))),
        $.end_case
    )),

    _if_e: $ => /(i|I)(f|F)/,
    _if_f: $ => /(s|S)(i|I)/,
    if   : $ => prec(PREC.key, choice($._if_e, $._if_f)),

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

    _var: $ => /(v|V)(a|A)(r|R)/,
    var : $ => prec(PREC.key, $._var),

    _break: $ => /(b|B)(r|R)(e|E)(a|A)(k|K)/,
    break : $ => prec(PREC.key, $._break),

    _continue: $ => /(c|C)(o|O)(n|N)(t|T)(i|I)(n|N)(u|U)(e|E)/,
    continue : $ => prec(PREC.key, $._continue),

    _return: $ => /(r|R)(e|E)(t|T)(u|U)(r|R)(n|N)/,
    return : $ => prec(PREC.key, $._return),

    _class_function: $ => /((((l|L)(o|O)(c|C)(a|A)(l|L))|((e|E)(x|X)(p|P)(o|O)(s|S)(e|E)(d|D)))\s+)?((f|F)(u|U)(n|N)(c|C)(t|T)(i|I)(o|O)(n|N))(\s+(((g|G|s|S)(e|E)(t|T))|((o|O)(r|R)(d|D)(e|E)(r|R)(b|B)(y|Y))|((q|Q)(u|U)(e|E)(r|R)(y|Y))))?(\s+[A-Za-z_][A-Za-z_0-9]+)/,
    class_extends: $ => /((c|C)(l|L)(a|A)(s|S)(s|S))(\s+(e|E)(x|X)(t|T)(e|E)(n|N)(d|D)(s|S))(\s+[A-Za-z_][A-Za-z_0-9]+)/,
    _class_constructor: $ => /((c|C)(l|L)(a|A)(s|S)(s|S))(\s+((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R)))/,

    alias: $ => /(a|A)(l|L)(i|I)(a|A)(s|S)(\s+[A-Za-z_][A-Za-z_0-9]+)(\s+[A-Za-z_][A-Za-z_0-9]+)/,

    _declare: $ => /#(d|D)(e|E)(c|C)(l|L)(a|A)(r|R)(e|E)/,
    declare : $ => prec(PREC.key, $._declare),

    /* constants */

    _hex_literal: $ => token(seq(/[0][xX]/, /[0-9a-fA-F]+/)),
    // _dec_literal: $ => /[+-]?[0-9]+/,
    _dec_literal: $ => /[0-9]+/,
    // _num_literal: $ => prec.right(token(seq(/[+-]?/, /[0-9]+/, '.', /[0-9]+/))),
    _num_literal: $ => prec.right(token(seq(/[0-9]+/, '.', /[0-9]+/))),
    _exp_literal: $ => prec.right(token(seq(/[0-9]+/, '.', /[0-9]+/, /[eE]/, /[+-]?/, /[0-9]+/))),

    number : $ => prec(PREC.constant,
      choice($._dec_literal, $._hex_literal, $._exp_literal, $._num_literal)
    ),

    time: $ => prec(PREC.constant,
      seq('?', /[0-9]{1,2}/, ':', /[0-9]{1,2}/, ':', /[0-9]{1,2}/, '?')
    ),

    date: $ => prec(PREC.constant,
      choice(
      seq('!', /[0-9]{1,2}/, '-', /[0-9]{1,2}/, '-', /[0-9]{1,2}/, '!'),
      seq('!', /[0-9]{1,2}/, '/', /[0-9]{1,2}/, '/', /[0-9]{1,2}/, '!'),
      seq('!', /[0-9]{1,2}/, '.', /[0-9]{1,2}/, '.', /[0-9]{1,2}/, '!'))
    ),

    string: $ => prec(PREC.constant,
      token(seq('"',
      repeat(choice('\\r', '\\n', '\\"', '\\t', '\\\\', /[^"]/)), '"'))
    ),

    //_nbname: $ => /[A-Za-z]+/,

    /*
     old:
     important to have default (0) prec. but not use 'word'
     elevate to 3
     */

    _name: $ => prec(3,
      token(choice(
      /[A-Za-z_]/,
      seq(/[A-Za-z_]/, /[A-Za-z_0-9]+/),
      seq(/[A-Za-z_]/, /[A-Za-z_ 0-9]+/, /[A-Za-z_]/))
    )),

    _dereference: $ => prec(PREC.dereference, seq($.variable, '->')),
    _pointer: $ => prec.right(seq('->', $.variable,
      repeat(seq(choice($.property, $.method))))
    ),

    /* expose, to tokenise formula */
    _operator: $ => prec(PREC.operator,
      prec.right(
        choice(
          '*', '/', '+', '-',
          '%', '\\', '&', '|',
          '^', '^|',
          '<<', '>>',
          '<', '>', '<=', '>=', '=', '#',
          '??', '?-', '?+',
          '+=', '-=', '/=', '*=',
          '&&', '||'
        )
      )
    ),

    /* arguments */
    argument: $ => choice($.table, '*', '>', $.value),

    arguments: $ => seq('(', optional(choice($.argument, seq($.argument, repeat(seq(';', $.argument))))), ')'),

    /* higher than reference, function, value, command, constant, parameter */
    formula: $ => prec(PREC.formula, prec.right(seq($.value, $._operator, $.value))),

    /* parameter is same as value */
    parameter: $ => prec(PREC.parameter, prec.right(seq('$', /[0-9]+/,
    prec.right(repeat(seq(choice($.property, $.method))))))),

    /* structure */
    _storage_suffix: $ => /:[0-9]+/,
    table: $ => prec(PREC.structure,
      seq('[', $._name, optional($._storage_suffix), ']')
    ),
    field: $ => prec(PREC.structure,
      prec.right(seq('[', $.table, $._name, optional($._storage_suffix),
      repeat(seq(choice($.property, $.method)))))
    ),

    /* command is same as constant */
    _command_suffix: $ => /:(c|C)[0-9]+/,
    command: $ => prec(PREC.command, prec.right(seq(
      $._name,
      $._command_suffix,
      optional($.arguments),
      prec.right(repeat(seq(choice($.property, $.method))))))
    ),

    /* constant */
    _constant_suffix: $ => /:(k|K)[0-9]+:[0-9]+/,
    constant: $ => prec(PREC.constant, prec.right(
      seq($._name, $._constant_suffix))
    ),

    /* value (respect prec of each) */
    value: $ => prec(PREC.value,
      choice(
      $.number,
      $.time,
      $.date,
      $.string,
      $.command,
      $.formula,
      $.function,
      $.variable,
      $.field,
      $._dereference,
      $._pointer,
      $.constant,
      $.ternary,
      $.parenthesized_value,
      $.project_method
    )),

    /* function */
    function: $ => prec(PREC.function, prec.right(seq(
      $.function_name,
      optional($.arguments),
      prec.right(repeat(seq(choice($.property, $.method))))))
    ),

    /* variable */
    local_variable: $ => prec(PREC.variable, seq('$', $._name)),
    process_variable: $ => prec(PREC.variable, seq($._name)),
    interprocess_variable: $ => prec(PREC.variable, seq('<>', $._name)),

    project_method: $ => prec(PREC.project_method, seq($.process_variable, $.arguments)),

    _variable: $ => choice($.local_variable, $.process_variable, $.interprocess_variable),

    variable: $ => prec(PREC.variable, prec.right(seq(choice(
      choice($._variable, $.parameter),
      seq(choice($._variable, $.parameter), '[', $.value, ']'),
      seq(choice($._variable, $.parameter), '{', $.value, '}'),
      seq(choice($._variable, $.parameter), '[[', $.value, ']]', optional(seq('[[', $.value, ']]')))
    ),
      prec.right(repeat(seq(choice($.property, $.method))))))
    ),

    /* assignment should need no priorty */
    assignment: $ => prec.right(seq($.value, ':=', $.value)),

    property: $ => prec(PREC.path, prec.right(seq(choice(seq('.', $.function_name), seq('[', $.value, ']'))))),
    method: $ => prec(PREC.path, prec.right(seq(choice(seq('.', $.function_name), seq('[', $.value, ']')), $.arguments))),

    /* class */
    _class_store_4d: $ => /[4](d|D)/,
    _class_store_ds: $ => /(d|D)(s|S)/,
    _class_store_cs: $ => /(c|C)(s|S)/,
    _class_store: $ => prec(PREC.key, choice($._class_store_4d, $._class_store_ds, $._class_store_cs)),
    _class: $ => prec(PREC.key, seq($._class_store, '.', $._name)),

    /* var */
    _var_argument: $ => choice($.local_variable, $.process_variable),
    _var_arguments: $ => prec.right(seq(choice($._var_argument, seq($._var_argument, repeat(seq(';', $._var_argument)))))),

    _basic_type_text: $ => /(t|T)(e|E)(x|X)(t|T)/,
    _basic_type_date: $ => /(d|D)(a|A)(t|T)(e|E)/,
    _basic_type_time: $ => /(t|T)(i|I)(m|M)(e|E)/,
    _basic_type_boolean: $ => /(b|B)(o|O)(o|O)(l|L)(e|E)(a|A)(n|N)/,
    _basic_type_integer: $ => /(i|I)(n|N)(t|T)(e|E)(g|G)(e|E)(r|R)/,
    _basic_type_real: $ => /(r|R)(e|E)(a|A)(l|L)/,
    _basic_type_pointer: $ => /(p|P)(o|O)(i|I)(n|N)(t|T)(e|E)(r|R)/,
    _basic_type_picture: $ => /(p|P)(i|I)(c|C)(t|T)(u|U)(r|R)(e|E)/,
    _basic_type_blob: $ => /(b|B)(l|L)(o|O)(b|B)/,
    _basic_type_collection: $ => /(c|C)(o|O)(l|L)(l|L)(e|E)(c|C)(t|T)(i|I)(o|O)(n|N)/,
    _basic_type_variant: $ => /(v|V)(a|A)(r|R)(i|I)(a|A)(n|N)(t|T)/,
    _basic_type_object: $ => /(o|O)(b|B)(j|J)(e|E)(c|C)(t|T)/,
    _basic_type: $ => choice(
      $._basic_type_text,
      $._basic_type_date,
      $._basic_type_time,
      $._basic_type_boolean,
      $._basic_type_integer,
      $._basic_type_real,
      $._basic_type_pointer,
      $._basic_type_picture,
      $._basic_type_blob,
      $._basic_type_collection,
      $._basic_type_variant,
      $._basic_type_object
    ),
    class: $ => prec.right(PREC.key, choice($._basic_type, $._class)),
    var_block: $ => prec.right(seq($.var, $._var_arguments, ':', $.class)),

    _function_argument: $ => prec(-1, seq($.local_variable, optional(repeat(seq(';', $.local_variable))), ':', $.class)),

    _function_arguments: $ => prec(-1, seq('(', optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), ')')),

    _function_result: $ => seq('->', $._function_argument),
    function_name: $ => prec(PREC.key, $._class_function),
    constructor_name: $ => prec(PREC.key, $._class_constructor),

    function_block: $ => prec(PREC.class_function, prec.right(seq(
      $.function_name,
      optional($._function_arguments),
      optional($._function_result)
    ))
    ),

    constructor_block: $ => prec(PREC.class_function, prec.right(seq(
      $.constructor_name,
      optional($._function_arguments)
    ))
    ),

    declare_block: $ => prec(PREC.method_declare, prec.right(seq(
      $.declare,
      optional($._function_arguments),
      optional($._function_result)
    ))
    ),

    terminate_block: $ => prec(PREC.terminate, prec.right(seq(
      choice($.return, $.break, $.continue),
      optional($.value)
    ))
    ),

    ternary: $ => prec(PREC.ternary, prec.right(seq(
      $.value,
      '?',
      $.value,
      ':',
      $.value
    ))
    ),

    parenthesized_value: $ => seq(
      '(',
      $.value,
      ')'
    ),

  }
});
