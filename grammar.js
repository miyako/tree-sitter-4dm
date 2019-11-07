module.exports = grammar({
  name: 'fourd',
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice($.while_e, $.until_e),
    _each_block_e: $ => seq($._for_each_e, '(', ')', $._each_break_e, '(', ')', $._end_for_each_e),
    _each_break_e: $ => choice($.while_e, $.until_e),
    _for_each_e: $ => prec.left(/[fF][oO][rR] [eE][aA][cC][hH]/),
    _end_for_each_e: $ => prec.right(/[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/),
    while_e: $ => alias(/[wW][hH][iI][lL][eE]/, 'While'),
    until_e: $ => alias(/[uU][nN][tT][iI][lL]/, 'Until')
  }
});
