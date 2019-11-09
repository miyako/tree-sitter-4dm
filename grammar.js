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

    _if_e: $ => /i|If|F/,
    _if_f: $ => /s|Si|I/,
    if   : $ => prec(PREC.key, seq(choice($._if_e, $._if_f), $.arguments)),

    _else_e: $ => /e|El|Ls|Se|E/,
    _else_f: $ => /s|Si|In|No|On|N/,
    else   : $ => prec(PREC.key, choice($._else_e, $._else_f)),

    _end_if_e: $ => /e|En|Nd|D i|If|F/,
    _end_if_f: $ => /f|Fi|In|N d|De|E s|Si|I/,
    end_if   : $ => prec(PREC.key, choice($._end_if_e, $._end_if_f)),

    _for_each_e: $ => /f|Fo|Or|R e|Ea|Ac|Ch|H/,
    _for_each_f: $ => /p|Po|Ou|Ur|R c|Ch|Ha|Aq|Qu|Ue|E/,
    for_each   : $ => prec(PREC.key, choice($._for_each_e, $._for_each_f)),

    _end_for_each_e: $ => /e|En|Nd|D f|Fo|Or|R e|Ea|Ac|Ch|H/,
    _end_for_each_f: $ => /f|Fi|In|N d|De|E c|Ch|Ha|Aq|Qu|Ue|E/,
    end_for_each   : $ => prec(PREC.key, choice($._end_for_each_e, $._end_for_each_f)),

    _while_e: $ => /w|Wh|Hi|Il|Le|E/,
    _while_f: $ => /t|Ta|An|Nt|T q|Qu|Ue|E/,
    while   : $ => prec(PREC.key, choice($._while_e, $._while_f)),

    _until_e: $ => /u|Un|Nt|Ti|Il|L/,
    _until_f: $ => /j|Ju|Us|Sq|Qu|Ue|E/,
    until   : $ => prec(PREC.key, choice($._until_e, $._until_f)),

    _for_e: $ => /f|Fo|Or|R/,
    _for_f: $ => /b|Bo|Ou|Uc|Cl|Le|E/,
    for   : $ => prec(PREC.key, choice($._for_e, $._for_f)),

    _end_for_e: $ => /e|En|Nd|D f|Fo|Or|R/,
    _end_for_f: $ => /f|Fi|In|N d|De|E b|Bo|Ou|Uc|Cl|Le|E/,
    end_for  : $ => prec(PREC.key, choice($._end_for_e, $._end_for_f)),

    _use_e: $ => /u|Us|Se|E/,
    _use_f: $ => /u|Ut|Ti|Il|Li|Is|Se|Er|R/,
    use   : $ => prec(PREC.key, choice($._use_e, $._use_f)),

    _end_use_e: $ => /e|En|Nd|D u|Us|Se|E/,
    _end_use_f: $ => /f|Fi|In|N u|Ut|Ti|Il|Li|Is|Se|Er|R/,
    end_use   : $ => prec(PREC.key, choice($._end_use_e, $._end_use_f)),

    _repeat_e: $ => /r|Re|Ep|Pe|Ea|At|T/,
    _repeat_f: $ => /r|Re|Ep|Pe|Et|Te|Er|R/,
    repeat   : $ => prec(PREC.key, choice($._repeat_e, $._repeat_f)),

    _end_while_e: $ => /e|En|Nd|D w|Wh|Hi|Il|Le|E/,
    _end_while_f: $ => /f|Fi|In|N t|Ta|An|Nt|T q|Qu|Ue|E/,
    end_while   : $ => prec(PREC.key, choice($._end_while_e, $._end_while_f)),

    _case_of_e: $ => /c|Ca|As|Se|E o|Of|F/,
    _case_of_f: $ => /a|Au|U c|Ca|As|S o|Ou|U/,
    case_of   : $ => prec(PREC.key, choice($._case_of_e, $._case_of_f)),

    _end_case_e: $ => /e|En|Nd|D c|Ca|As|Se|E/,
    _end_case_f: $ => /f|Fi|In|N d|De|E c|Ca|As|S/,
    end_case   : $ => prec(PREC.key, choice($._end_case_e, $._end_case_f)),

    _begin_sql_e: $ => /b|Be|Eg|Gi|In|N s|Sq|Ql|L/,
    _begin_sql_f: $ => /d|De|Eb|Bu|Ut|T s|Sq|Ql|L/,
    begin_sql   : $ => prec(PREC.key, choice($._begin_sql_e, $._begin_sql_f)),

    _end_sql_e: $ => /f|Fi|In|N s|Sq|Ql|L/,
    _end_sql_f: $ => /e|En|Nd|D s|Sq|Ql|L/,
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

    /*
    TODO:
    wrapping (anti-slash)
    folding of case_of
    colon node in case_of
    sql if_block
    injection
    nested function css
    */

  }
});
