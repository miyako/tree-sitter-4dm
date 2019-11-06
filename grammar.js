module.exports = grammar({
  name: 'fourd',
  rules: {
    source: $ => repeat($._token),
    _token: $ => choice($.each_block_e),
    each_block_e: $ => seq($._for_each_e, '(', ')', $._each_break_e, '(', ')', $._end_for_each_e),
    _each_break_e: $ => choice($._while_e, $._until_e),
    _for_each_e: $ => prec.left(/[fF][oO][rR] [eE][aA][cC][hH]/),
    _end_for_each_e: $ => prec.right(/[eE][nN][dD] [fF][oO][rR] [eE][aA][cC][hH]/),
    _while_e: $ => /[wW][hH][iI][lL][eE]/,
    _until_e: $ => /[uU][nN][tT][iI][lL]/
  }
});
