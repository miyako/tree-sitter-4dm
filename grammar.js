const PREC = {
  comment: -1
}
module.exports = grammar({
  name: 'fourd',
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice($.comment,
      $.while, $.until, $.for_each, $.end_for_each),
    comment: $ => prec(PREC.comment, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ))),
    _each_block_e: $ => seq($.for_each_e, '(', ')', $._each_break_e, '(', ')', $.end_for_each_e),
    _each_break_e: $ => choice($.while_e, $.until_e),
    for_each_e: $ => prec.left(/[fF][oO][rR] [eE][aA][cC][hH]/),
    for_each_f: $ => prec.left(/[pP][oO][uU][rR] [cC][hH][aA][qQ][uU][eE]/),
    for_each  : $ => alias(choice($.for_each_e, $.for_each_f), 'For each'),
    end_for_each_e: $ => prec.right(/[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/),
    end_for_each_f: $ => /[fF][iI][nN] [dD][eE] [cC][hH][aA][qQ][uU][eE]/,
    end_for_each  : $ => alias(choice($.end_for_each_e, $.end_for_each_f), 'End for each'),
    while_e: $ => prec.left(/[wW][hH][iI][lL][eE]/),
    while_f: $ => /[tT][aA][nN][tT] [qQ][uU][eE]/,
    while  : $ => alias(choice($.while_e, $.while_f), 'While'),
    until_e: $ => /[uU][nN][tT][iI][lL]/,
    until_f: $ => /[jJ][uU][sS][qQ][uU][eE]/,
    until  : $ => alias(choice($.until_e, $.until_f), 'Until'),
  }
});
