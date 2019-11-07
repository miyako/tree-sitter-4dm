module.exports = grammar({
  name: 'fourd',
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice($.while_e, $.until_e, $.for_each_e, $.end_for_each_e),
    _each_block_e: $ => seq($.for_each_e, '(', ')', $._each_break_e, '(', ')', $.end_for_each_e),
    _each_break_e: $ => choice($.while_e, $.until_e),
    for_each_e: $ => alias(prec.left(/[fF][oO][rR] [eE][aA][cC][hH]/), 'For each'),
    end_for_each_e: $ => alias(prec.right(/[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/), 'End for each'),
    while_e: $ => alias(prec.left(/[wW][hH][iI][lL][eE]/), 'While'),
    until_e: $ => alias(/[uU][nN][tT][iI][lL]/, 'Until')
  }
});
