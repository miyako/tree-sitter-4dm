const PREC = {
  comment: -1
}
module.exports = grammar({
  name: 'fourd',
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice($.comment,
      $.while, $.until, $.for_each, $.end_for_each, $.for_each_block),
    comment: $ => prec(PREC.comment, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ))),
    _arguments: $ => seq('(', ')'),
    for_each_block: $ => seq(
      $.for_each, $._arguments,
      optional(seq(choice($.until, $.while), $._arguments)),
      $.end_for_each),
    _for_each_e: $ => prec.left(/[fF][oO][rR] [eE][aA][cC][hH]/),
    _for_each_f: $ => prec.left(/[pP][oO][uU][rR] [cC][hH][aA][qQ][uU][eE]/),
    for_each  : $ => alias(choice($._for_each_e, $._for_each_f), 'For each'),
    _end_for_each_e: $ => prec.right(/[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/),
    _end_for_each_f: $ => /[fF][iI][nN] [dD][eE] [cC][hH][aA][qQ][uU][eE]/,
    end_for_each  : $ => alias(choice($._end_for_each_e, $._end_for_each_f), 'End for each'),
    _while_e: $ => prec.left(/[wW][hH][iI][lL][eE]/),
    _while_f: $ => /[tT][aA][nN][tT] [qQ][uU][eE]/,
    while  : $ => alias(choice($._while_e, $._while_f), 'While'),
    _until_e: $ => /[uU][nN][tT][iI][lL]/,
    _until_f: $ => /[jJ][uU][sS][qQ][uU][eE]/,
    until  : $ => alias(choice($._until_e, $._until_f), 'Until'),
  }
});
