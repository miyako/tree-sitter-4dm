#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 80
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLON = 8,
  aux_sym__for_each_e_token1 = 9,
  aux_sym__for_each_f_token1 = 10,
  aux_sym__end_for_each_e_token1 = 11,
  sym__end_for_each_f = 12,
  aux_sym__while_e_token1 = 13,
  sym__while_f = 14,
  sym__until_e = 15,
  sym__until_f = 16,
  aux_sym__for_e_token1 = 17,
  aux_sym__for_f_token1 = 18,
  aux_sym__end_for_e_token1 = 19,
  sym__end_for_f = 20,
  aux_sym__use_e_token1 = 21,
  aux_sym__use_f_token1 = 22,
  aux_sym__end_use_e_token1 = 23,
  aux_sym__end_use_f_token1 = 24,
  sym__repeat_e = 25,
  sym__repeat_f = 26,
  aux_sym__end_while_e_token1 = 27,
  aux_sym__end_while_f_token1 = 28,
  sym__if_e = 29,
  sym__if_f = 30,
  sym__else_e = 31,
  sym__else_f = 32,
  aux_sym__end_if_e_token1 = 33,
  aux_sym__end_if_f_token1 = 34,
  sym__case_of_e = 35,
  sym__case_of_f = 36,
  sym__end_case_e = 37,
  sym__end_case_f = 38,
  sym__begin_sql_e = 39,
  sym__begin_sql_f = 40,
  sym__end_sql_e = 41,
  sym__end_sql_f = 42,
  sym__hex_literal = 43,
  sym__dec_literal = 44,
  sym__num_literal = 45,
  sym__exp_literal = 46,
  sym_source = 47,
  sym__token = 48,
  sym_comment = 49,
  sym__arguments = 50,
  sym_for_each_block = 51,
  sym_while_block = 52,
  sym_repeat_block = 53,
  sym_if_block = 54,
  sym_for_block = 55,
  sym_use_block = 56,
  sym_sql_block = 57,
  sym_case_block = 58,
  sym__for_each_e = 59,
  sym__for_each_f = 60,
  sym_for_each = 61,
  sym__end_for_each_e = 62,
  sym_end_for_each = 63,
  sym__while_e = 64,
  sym_while = 65,
  sym_until = 66,
  sym__for_e = 67,
  sym__for_f = 68,
  sym_for = 69,
  sym__end_for_e = 70,
  sym_end_for = 71,
  sym__use_e = 72,
  sym__use_f = 73,
  sym_use = 74,
  sym__end_use_e = 75,
  sym__end_use_f = 76,
  sym_end_use = 77,
  sym_repeat = 78,
  sym__end_while_e = 79,
  sym__end_while_f = 80,
  sym_end_while = 81,
  sym_if = 82,
  sym_else = 83,
  sym__end_if_e = 84,
  sym__end_if_f = 85,
  sym_end_if = 86,
  sym_case_of = 87,
  sym_end_case = 88,
  sym_begin_sql = 89,
  sym_end_sql = 90,
  sym_constant_numeric = 91,
  aux_sym_source_repeat1 = 92,
  aux_sym_case_block_repeat1 = 93,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [aux_sym__for_each_e_token1] = "_for_each_e_token1",
  [aux_sym__for_each_f_token1] = "_for_each_f_token1",
  [aux_sym__end_for_each_e_token1] = "_end_for_each_e_token1",
  [sym__end_for_each_f] = "End for each",
  [aux_sym__while_e_token1] = "_while_e_token1",
  [sym__while_f] = "While",
  [sym__until_e] = "Until",
  [sym__until_f] = "Until",
  [aux_sym__for_e_token1] = "_for_e_token1",
  [aux_sym__for_f_token1] = "_for_f_token1",
  [aux_sym__end_for_e_token1] = "_end_for_e_token1",
  [sym__end_for_f] = "End for",
  [aux_sym__use_e_token1] = "_use_e_token1",
  [aux_sym__use_f_token1] = "_use_f_token1",
  [aux_sym__end_use_e_token1] = "_end_use_e_token1",
  [aux_sym__end_use_f_token1] = "_end_use_f_token1",
  [sym__repeat_e] = "Repeat",
  [sym__repeat_f] = "Repeat",
  [aux_sym__end_while_e_token1] = "_end_while_e_token1",
  [aux_sym__end_while_f_token1] = "_end_while_f_token1",
  [sym__if_e] = "If",
  [sym__if_f] = "If",
  [sym__else_e] = "Else",
  [sym__else_f] = "Else",
  [aux_sym__end_if_e_token1] = "_end_if_e_token1",
  [aux_sym__end_if_f_token1] = "_end_if_f_token1",
  [sym__case_of_e] = "Case of",
  [sym__case_of_f] = "Case of",
  [sym__end_case_e] = "End case",
  [sym__end_case_f] = "End case",
  [sym__begin_sql_e] = "Begin SQL",
  [sym__begin_sql_f] = "Begin SQL",
  [sym__end_sql_e] = "End SQL",
  [sym__end_sql_f] = "End SQL",
  [sym__hex_literal] = "Number",
  [sym__dec_literal] = "Number",
  [sym__num_literal] = "Number",
  [sym__exp_literal] = "Number",
  [sym_source] = "source",
  [sym__token] = "_token",
  [sym_comment] = "comment",
  [sym__arguments] = "_arguments",
  [sym_for_each_block] = "for_each_block",
  [sym_while_block] = "while_block",
  [sym_repeat_block] = "repeat_block",
  [sym_if_block] = "if_block",
  [sym_for_block] = "for_block",
  [sym_use_block] = "use_block",
  [sym_sql_block] = "sql_block",
  [sym_case_block] = "case_block",
  [sym__for_each_e] = "For each",
  [sym__for_each_f] = "For each",
  [sym_for_each] = "for_each",
  [sym__end_for_each_e] = "End for each",
  [sym_end_for_each] = "end_for_each",
  [sym__while_e] = "While",
  [sym_while] = "while",
  [sym_until] = "until",
  [sym__for_e] = "For",
  [sym__for_f] = "For",
  [sym_for] = "for",
  [sym__end_for_e] = "End for",
  [sym_end_for] = "end_for",
  [sym__use_e] = "Use",
  [sym__use_f] = "Use",
  [sym_use] = "use",
  [sym__end_use_e] = "End use",
  [sym__end_use_f] = "End use",
  [sym_end_use] = "end_use",
  [sym_repeat] = "repeat",
  [sym__end_while_e] = "End while",
  [sym__end_while_f] = "End while",
  [sym_end_while] = "end_while",
  [sym_if] = "if",
  [sym_else] = "else",
  [sym__end_if_e] = "End if",
  [sym__end_if_f] = "End if",
  [sym_end_if] = "end_if",
  [sym_case_of] = "case_of",
  [sym_end_case] = "end_case",
  [sym_begin_sql] = "begin_sql",
  [sym_end_sql] = "end_sql",
  [sym_constant_numeric] = "constant_numeric",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_case_block_repeat1] = "case_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__for_each_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__for_each_f_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_for_each_e_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__end_for_each_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__while_e_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__while_f] = {
    .visible = true,
    .named = false,
  },
  [sym__until_e] = {
    .visible = true,
    .named = false,
  },
  [sym__until_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__for_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__for_f_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_for_e_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__end_for_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__use_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__use_f_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_use_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_use_f_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__repeat_e] = {
    .visible = true,
    .named = false,
  },
  [sym__repeat_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__end_while_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_while_f_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__if_e] = {
    .visible = true,
    .named = false,
  },
  [sym__if_f] = {
    .visible = true,
    .named = false,
  },
  [sym__else_e] = {
    .visible = true,
    .named = false,
  },
  [sym__else_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__end_if_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_if_f_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__case_of_e] = {
    .visible = true,
    .named = false,
  },
  [sym__case_of_f] = {
    .visible = true,
    .named = false,
  },
  [sym__end_case_e] = {
    .visible = true,
    .named = false,
  },
  [sym__end_case_f] = {
    .visible = true,
    .named = false,
  },
  [sym__begin_sql_e] = {
    .visible = true,
    .named = false,
  },
  [sym__begin_sql_f] = {
    .visible = true,
    .named = false,
  },
  [sym__end_sql_e] = {
    .visible = true,
    .named = false,
  },
  [sym__end_sql_f] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_literal] = {
    .visible = true,
    .named = false,
  },
  [sym__dec_literal] = {
    .visible = true,
    .named = false,
  },
  [sym__num_literal] = {
    .visible = true,
    .named = false,
  },
  [sym__exp_literal] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_for_each_block] = {
    .visible = true,
    .named = true,
  },
  [sym_while_block] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_for_block] = {
    .visible = true,
    .named = true,
  },
  [sym_use_block] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_block] = {
    .visible = true,
    .named = true,
  },
  [sym_case_block] = {
    .visible = true,
    .named = true,
  },
  [sym__for_each_e] = {
    .visible = true,
    .named = false,
  },
  [sym__for_each_f] = {
    .visible = true,
    .named = false,
  },
  [sym_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym__end_for_each_e] = {
    .visible = true,
    .named = false,
  },
  [sym_end_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym__while_e] = {
    .visible = true,
    .named = false,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_until] = {
    .visible = true,
    .named = true,
  },
  [sym__for_e] = {
    .visible = true,
    .named = false,
  },
  [sym__for_f] = {
    .visible = true,
    .named = false,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym__end_for_e] = {
    .visible = true,
    .named = false,
  },
  [sym_end_for] = {
    .visible = true,
    .named = true,
  },
  [sym__use_e] = {
    .visible = true,
    .named = false,
  },
  [sym__use_f] = {
    .visible = true,
    .named = false,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__end_use_e] = {
    .visible = true,
    .named = false,
  },
  [sym__end_use_f] = {
    .visible = true,
    .named = false,
  },
  [sym_end_use] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym__end_while_e] = {
    .visible = true,
    .named = false,
  },
  [sym__end_while_f] = {
    .visible = true,
    .named = false,
  },
  [sym_end_while] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym__end_if_e] = {
    .visible = true,
    .named = false,
  },
  [sym__end_if_f] = {
    .visible = true,
    .named = false,
  },
  [sym_end_if] = {
    .visible = true,
    .named = true,
  },
  [sym_case_of] = {
    .visible = true,
    .named = true,
  },
  [sym_end_case] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_end_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_numeric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(200);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(200);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(200);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(205);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 91:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 92:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 93:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 149:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 150:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      END_STATE();
    case 151:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(119);
      END_STATE();
    case 152:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(120);
      END_STATE();
    case 154:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(121);
      END_STATE();
    case 155:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(190);
      END_STATE();
    case 157:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(191);
      END_STATE();
    case 158:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 175:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 183:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 184:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 185:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 186:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 188:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 189:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 190:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 191:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 193:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 194:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(26);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(204);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__for_each_e_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__for_each_f_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__end_for_each_e_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__while_e_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__for_e_token1);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__for_f_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__end_for_e_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__use_e_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__use_f_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__end_use_e_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__end_use_f_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__end_while_e_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__end_while_f_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__if_f);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__end_if_e_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__end_if_f_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__num_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__exp_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 202},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__for_each_e_token1] = ACTIONS(1),
    [aux_sym__for_each_f_token1] = ACTIONS(1),
    [sym__end_for_each_f] = ACTIONS(1),
    [aux_sym__while_e_token1] = ACTIONS(1),
    [sym__while_f] = ACTIONS(1),
    [sym__until_e] = ACTIONS(1),
    [sym__until_f] = ACTIONS(1),
    [aux_sym__for_e_token1] = ACTIONS(1),
    [aux_sym__for_f_token1] = ACTIONS(1),
    [aux_sym__end_for_e_token1] = ACTIONS(1),
    [sym__end_for_f] = ACTIONS(1),
    [aux_sym__use_e_token1] = ACTIONS(1),
    [aux_sym__use_f_token1] = ACTIONS(1),
    [aux_sym__end_use_e_token1] = ACTIONS(1),
    [aux_sym__end_use_f_token1] = ACTIONS(1),
    [sym__repeat_e] = ACTIONS(1),
    [sym__repeat_f] = ACTIONS(1),
    [aux_sym__end_while_e_token1] = ACTIONS(1),
    [aux_sym__end_while_f_token1] = ACTIONS(1),
    [sym__if_e] = ACTIONS(1),
    [sym__if_f] = ACTIONS(1),
    [sym__else_e] = ACTIONS(1),
    [sym__else_f] = ACTIONS(1),
    [aux_sym__end_if_e_token1] = ACTIONS(1),
    [aux_sym__end_if_f_token1] = ACTIONS(1),
    [sym__case_of_e] = ACTIONS(1),
    [sym__case_of_f] = ACTIONS(1),
    [sym__end_case_e] = ACTIONS(1),
    [sym__end_case_f] = ACTIONS(1),
    [sym__begin_sql_e] = ACTIONS(1),
    [sym__begin_sql_f] = ACTIONS(1),
    [sym__end_sql_e] = ACTIONS(1),
    [sym__end_sql_f] = ACTIONS(1),
    [sym__hex_literal] = ACTIONS(1),
    [sym__dec_literal] = ACTIONS(1),
    [sym__num_literal] = ACTIONS(1),
    [sym__exp_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(61),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_each_block] = STATE(3),
    [sym_while_block] = STATE(3),
    [sym_repeat_block] = STATE(3),
    [sym_if_block] = STATE(3),
    [sym_for_block] = STATE(3),
    [sym_use_block] = STATE(3),
    [sym_sql_block] = STATE(3),
    [sym_case_block] = STATE(3),
    [sym__for_each_e] = STATE(74),
    [sym__for_each_f] = STATE(74),
    [sym_for_each] = STATE(56),
    [sym__while_e] = STATE(70),
    [sym_while] = STATE(55),
    [sym__for_e] = STATE(78),
    [sym__for_f] = STATE(78),
    [sym_for] = STATE(53),
    [sym__use_e] = STATE(73),
    [sym__use_f] = STATE(73),
    [sym_use] = STATE(51),
    [sym_repeat] = STATE(45),
    [sym_if] = STATE(58),
    [sym_case_of] = STATE(48),
    [sym_begin_sql] = STATE(47),
    [sym_constant_numeric] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym__for_each_e_token1] = ACTIONS(9),
    [aux_sym__for_each_f_token1] = ACTIONS(11),
    [aux_sym__while_e_token1] = ACTIONS(13),
    [sym__while_f] = ACTIONS(15),
    [aux_sym__for_e_token1] = ACTIONS(17),
    [aux_sym__for_f_token1] = ACTIONS(19),
    [aux_sym__use_e_token1] = ACTIONS(21),
    [aux_sym__use_f_token1] = ACTIONS(23),
    [sym__repeat_e] = ACTIONS(25),
    [sym__repeat_f] = ACTIONS(25),
    [sym__if_e] = ACTIONS(27),
    [sym__if_f] = ACTIONS(27),
    [sym__case_of_e] = ACTIONS(29),
    [sym__case_of_f] = ACTIONS(29),
    [sym__begin_sql_e] = ACTIONS(31),
    [sym__begin_sql_f] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(33),
    [sym__dec_literal] = ACTIONS(35),
    [sym__num_literal] = ACTIONS(35),
    [sym__exp_literal] = ACTIONS(33),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym_while_block] = STATE(2),
    [sym_repeat_block] = STATE(2),
    [sym_if_block] = STATE(2),
    [sym_for_block] = STATE(2),
    [sym_use_block] = STATE(2),
    [sym_sql_block] = STATE(2),
    [sym_case_block] = STATE(2),
    [sym__for_each_e] = STATE(74),
    [sym__for_each_f] = STATE(74),
    [sym_for_each] = STATE(56),
    [sym__while_e] = STATE(70),
    [sym_while] = STATE(55),
    [sym__for_e] = STATE(78),
    [sym__for_f] = STATE(78),
    [sym_for] = STATE(53),
    [sym__use_e] = STATE(73),
    [sym__use_f] = STATE(73),
    [sym_use] = STATE(51),
    [sym_repeat] = STATE(45),
    [sym_if] = STATE(58),
    [sym_case_of] = STATE(48),
    [sym_begin_sql] = STATE(47),
    [sym_constant_numeric] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(42),
    [aux_sym__for_each_e_token1] = ACTIONS(45),
    [aux_sym__for_each_f_token1] = ACTIONS(48),
    [aux_sym__while_e_token1] = ACTIONS(51),
    [sym__while_f] = ACTIONS(54),
    [aux_sym__for_e_token1] = ACTIONS(57),
    [aux_sym__for_f_token1] = ACTIONS(60),
    [aux_sym__use_e_token1] = ACTIONS(63),
    [aux_sym__use_f_token1] = ACTIONS(66),
    [sym__repeat_e] = ACTIONS(69),
    [sym__repeat_f] = ACTIONS(69),
    [sym__if_e] = ACTIONS(72),
    [sym__if_f] = ACTIONS(72),
    [sym__case_of_e] = ACTIONS(75),
    [sym__case_of_f] = ACTIONS(75),
    [sym__begin_sql_e] = ACTIONS(78),
    [sym__begin_sql_f] = ACTIONS(78),
    [sym__hex_literal] = ACTIONS(81),
    [sym__dec_literal] = ACTIONS(84),
    [sym__num_literal] = ACTIONS(84),
    [sym__exp_literal] = ACTIONS(81),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym_while_block] = STATE(2),
    [sym_repeat_block] = STATE(2),
    [sym_if_block] = STATE(2),
    [sym_for_block] = STATE(2),
    [sym_use_block] = STATE(2),
    [sym_sql_block] = STATE(2),
    [sym_case_block] = STATE(2),
    [sym__for_each_e] = STATE(74),
    [sym__for_each_f] = STATE(74),
    [sym_for_each] = STATE(56),
    [sym__while_e] = STATE(70),
    [sym_while] = STATE(55),
    [sym__for_e] = STATE(78),
    [sym__for_f] = STATE(78),
    [sym_for] = STATE(53),
    [sym__use_e] = STATE(73),
    [sym__use_f] = STATE(73),
    [sym_use] = STATE(51),
    [sym_repeat] = STATE(45),
    [sym_if] = STATE(58),
    [sym_case_of] = STATE(48),
    [sym_begin_sql] = STATE(47),
    [sym_constant_numeric] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym__for_each_e_token1] = ACTIONS(9),
    [aux_sym__for_each_f_token1] = ACTIONS(11),
    [aux_sym__while_e_token1] = ACTIONS(13),
    [sym__while_f] = ACTIONS(15),
    [aux_sym__for_e_token1] = ACTIONS(17),
    [aux_sym__for_f_token1] = ACTIONS(19),
    [aux_sym__use_e_token1] = ACTIONS(21),
    [aux_sym__use_f_token1] = ACTIONS(23),
    [sym__repeat_e] = ACTIONS(25),
    [sym__repeat_f] = ACTIONS(25),
    [sym__if_e] = ACTIONS(27),
    [sym__if_f] = ACTIONS(27),
    [sym__case_of_e] = ACTIONS(29),
    [sym__case_of_f] = ACTIONS(29),
    [sym__begin_sql_e] = ACTIONS(31),
    [sym__begin_sql_f] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(33),
    [sym__dec_literal] = ACTIONS(35),
    [sym__num_literal] = ACTIONS(35),
    [sym__exp_literal] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [aux_sym__for_each_e_token1] = ACTIONS(89),
    [aux_sym__for_each_f_token1] = ACTIONS(89),
    [aux_sym__end_for_each_e_token1] = ACTIONS(89),
    [sym__end_for_each_f] = ACTIONS(89),
    [aux_sym__while_e_token1] = ACTIONS(89),
    [sym__while_f] = ACTIONS(89),
    [sym__until_e] = ACTIONS(89),
    [sym__until_f] = ACTIONS(89),
    [aux_sym__for_e_token1] = ACTIONS(91),
    [aux_sym__for_f_token1] = ACTIONS(89),
    [aux_sym__use_e_token1] = ACTIONS(89),
    [aux_sym__use_f_token1] = ACTIONS(89),
    [aux_sym__end_use_e_token1] = ACTIONS(89),
    [aux_sym__end_use_f_token1] = ACTIONS(89),
    [sym__repeat_e] = ACTIONS(89),
    [sym__repeat_f] = ACTIONS(89),
    [aux_sym__end_while_e_token1] = ACTIONS(89),
    [aux_sym__end_while_f_token1] = ACTIONS(89),
    [sym__if_e] = ACTIONS(89),
    [sym__if_f] = ACTIONS(91),
    [sym__else_e] = ACTIONS(89),
    [sym__else_f] = ACTIONS(89),
    [aux_sym__end_if_e_token1] = ACTIONS(89),
    [aux_sym__end_if_f_token1] = ACTIONS(89),
    [sym__case_of_e] = ACTIONS(89),
    [sym__case_of_f] = ACTIONS(89),
    [sym__end_case_e] = ACTIONS(89),
    [sym__end_case_f] = ACTIONS(89),
    [sym__begin_sql_e] = ACTIONS(89),
    [sym__begin_sql_f] = ACTIONS(89),
    [sym__hex_literal] = ACTIONS(89),
    [sym__dec_literal] = ACTIONS(91),
    [sym__num_literal] = ACTIONS(91),
    [sym__exp_literal] = ACTIONS(89),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_SLASH_SLASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [aux_sym__for_each_e_token1] = ACTIONS(93),
    [aux_sym__for_each_f_token1] = ACTIONS(93),
    [aux_sym__while_e_token1] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [aux_sym__for_e_token1] = ACTIONS(95),
    [aux_sym__for_f_token1] = ACTIONS(93),
    [aux_sym__use_e_token1] = ACTIONS(93),
    [aux_sym__use_f_token1] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(93),
    [sym__repeat_f] = ACTIONS(93),
    [sym__if_e] = ACTIONS(93),
    [sym__if_f] = ACTIONS(93),
    [sym__case_of_e] = ACTIONS(93),
    [sym__case_of_f] = ACTIONS(93),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
    [sym__hex_literal] = ACTIONS(93),
    [sym__dec_literal] = ACTIONS(95),
    [sym__num_literal] = ACTIONS(95),
    [sym__exp_literal] = ACTIONS(93),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_SLASH_SLASH] = ACTIONS(97),
    [anon_sym_SLASH_STAR] = ACTIONS(97),
    [aux_sym__for_each_e_token1] = ACTIONS(97),
    [aux_sym__for_each_f_token1] = ACTIONS(97),
    [aux_sym__while_e_token1] = ACTIONS(97),
    [sym__while_f] = ACTIONS(97),
    [aux_sym__for_e_token1] = ACTIONS(99),
    [aux_sym__for_f_token1] = ACTIONS(97),
    [aux_sym__use_e_token1] = ACTIONS(97),
    [aux_sym__use_f_token1] = ACTIONS(97),
    [sym__repeat_e] = ACTIONS(97),
    [sym__repeat_f] = ACTIONS(97),
    [sym__if_e] = ACTIONS(97),
    [sym__if_f] = ACTIONS(97),
    [sym__case_of_e] = ACTIONS(97),
    [sym__case_of_f] = ACTIONS(97),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
    [sym__hex_literal] = ACTIONS(97),
    [sym__dec_literal] = ACTIONS(99),
    [sym__num_literal] = ACTIONS(99),
    [sym__exp_literal] = ACTIONS(97),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_SLASH_SLASH] = ACTIONS(101),
    [anon_sym_SLASH_STAR] = ACTIONS(101),
    [aux_sym__for_each_e_token1] = ACTIONS(101),
    [aux_sym__for_each_f_token1] = ACTIONS(101),
    [aux_sym__while_e_token1] = ACTIONS(101),
    [sym__while_f] = ACTIONS(101),
    [aux_sym__for_e_token1] = ACTIONS(103),
    [aux_sym__for_f_token1] = ACTIONS(101),
    [aux_sym__use_e_token1] = ACTIONS(101),
    [aux_sym__use_f_token1] = ACTIONS(101),
    [sym__repeat_e] = ACTIONS(101),
    [sym__repeat_f] = ACTIONS(101),
    [sym__if_e] = ACTIONS(101),
    [sym__if_f] = ACTIONS(101),
    [sym__case_of_e] = ACTIONS(101),
    [sym__case_of_f] = ACTIONS(101),
    [sym__begin_sql_e] = ACTIONS(101),
    [sym__begin_sql_f] = ACTIONS(101),
    [sym__hex_literal] = ACTIONS(101),
    [sym__dec_literal] = ACTIONS(103),
    [sym__num_literal] = ACTIONS(103),
    [sym__exp_literal] = ACTIONS(101),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [anon_sym_SLASH_STAR] = ACTIONS(105),
    [aux_sym__for_each_e_token1] = ACTIONS(105),
    [aux_sym__for_each_f_token1] = ACTIONS(105),
    [aux_sym__while_e_token1] = ACTIONS(105),
    [sym__while_f] = ACTIONS(105),
    [aux_sym__for_e_token1] = ACTIONS(107),
    [aux_sym__for_f_token1] = ACTIONS(105),
    [aux_sym__use_e_token1] = ACTIONS(105),
    [aux_sym__use_f_token1] = ACTIONS(105),
    [sym__repeat_e] = ACTIONS(105),
    [sym__repeat_f] = ACTIONS(105),
    [sym__if_e] = ACTIONS(105),
    [sym__if_f] = ACTIONS(105),
    [sym__case_of_e] = ACTIONS(105),
    [sym__case_of_f] = ACTIONS(105),
    [sym__begin_sql_e] = ACTIONS(105),
    [sym__begin_sql_f] = ACTIONS(105),
    [sym__hex_literal] = ACTIONS(105),
    [sym__dec_literal] = ACTIONS(107),
    [sym__num_literal] = ACTIONS(107),
    [sym__exp_literal] = ACTIONS(105),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_SLASH_SLASH] = ACTIONS(109),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [aux_sym__for_each_e_token1] = ACTIONS(109),
    [aux_sym__for_each_f_token1] = ACTIONS(109),
    [aux_sym__while_e_token1] = ACTIONS(109),
    [sym__while_f] = ACTIONS(109),
    [aux_sym__for_e_token1] = ACTIONS(111),
    [aux_sym__for_f_token1] = ACTIONS(109),
    [aux_sym__use_e_token1] = ACTIONS(109),
    [aux_sym__use_f_token1] = ACTIONS(109),
    [sym__repeat_e] = ACTIONS(109),
    [sym__repeat_f] = ACTIONS(109),
    [sym__if_e] = ACTIONS(109),
    [sym__if_f] = ACTIONS(109),
    [sym__case_of_e] = ACTIONS(109),
    [sym__case_of_f] = ACTIONS(109),
    [sym__begin_sql_e] = ACTIONS(109),
    [sym__begin_sql_f] = ACTIONS(109),
    [sym__hex_literal] = ACTIONS(109),
    [sym__dec_literal] = ACTIONS(111),
    [sym__num_literal] = ACTIONS(111),
    [sym__exp_literal] = ACTIONS(109),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_SLASH_SLASH] = ACTIONS(113),
    [anon_sym_SLASH_STAR] = ACTIONS(113),
    [aux_sym__for_each_e_token1] = ACTIONS(113),
    [aux_sym__for_each_f_token1] = ACTIONS(113),
    [aux_sym__while_e_token1] = ACTIONS(113),
    [sym__while_f] = ACTIONS(113),
    [aux_sym__for_e_token1] = ACTIONS(115),
    [aux_sym__for_f_token1] = ACTIONS(113),
    [aux_sym__use_e_token1] = ACTIONS(113),
    [aux_sym__use_f_token1] = ACTIONS(113),
    [sym__repeat_e] = ACTIONS(113),
    [sym__repeat_f] = ACTIONS(113),
    [sym__if_e] = ACTIONS(113),
    [sym__if_f] = ACTIONS(113),
    [sym__case_of_e] = ACTIONS(113),
    [sym__case_of_f] = ACTIONS(113),
    [sym__begin_sql_e] = ACTIONS(113),
    [sym__begin_sql_f] = ACTIONS(113),
    [sym__hex_literal] = ACTIONS(113),
    [sym__dec_literal] = ACTIONS(115),
    [sym__num_literal] = ACTIONS(115),
    [sym__exp_literal] = ACTIONS(113),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_SLASH_STAR] = ACTIONS(117),
    [aux_sym__for_each_e_token1] = ACTIONS(117),
    [aux_sym__for_each_f_token1] = ACTIONS(117),
    [aux_sym__while_e_token1] = ACTIONS(117),
    [sym__while_f] = ACTIONS(117),
    [aux_sym__for_e_token1] = ACTIONS(119),
    [aux_sym__for_f_token1] = ACTIONS(117),
    [aux_sym__use_e_token1] = ACTIONS(117),
    [aux_sym__use_f_token1] = ACTIONS(117),
    [sym__repeat_e] = ACTIONS(117),
    [sym__repeat_f] = ACTIONS(117),
    [sym__if_e] = ACTIONS(117),
    [sym__if_f] = ACTIONS(117),
    [sym__case_of_e] = ACTIONS(117),
    [sym__case_of_f] = ACTIONS(117),
    [sym__begin_sql_e] = ACTIONS(117),
    [sym__begin_sql_f] = ACTIONS(117),
    [sym__hex_literal] = ACTIONS(117),
    [sym__dec_literal] = ACTIONS(119),
    [sym__num_literal] = ACTIONS(119),
    [sym__exp_literal] = ACTIONS(117),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(121),
    [anon_sym_SLASH_STAR] = ACTIONS(121),
    [aux_sym__for_each_e_token1] = ACTIONS(121),
    [aux_sym__for_each_f_token1] = ACTIONS(121),
    [aux_sym__while_e_token1] = ACTIONS(121),
    [sym__while_f] = ACTIONS(121),
    [aux_sym__for_e_token1] = ACTIONS(123),
    [aux_sym__for_f_token1] = ACTIONS(121),
    [aux_sym__use_e_token1] = ACTIONS(121),
    [aux_sym__use_f_token1] = ACTIONS(121),
    [sym__repeat_e] = ACTIONS(121),
    [sym__repeat_f] = ACTIONS(121),
    [sym__if_e] = ACTIONS(121),
    [sym__if_f] = ACTIONS(121),
    [sym__case_of_e] = ACTIONS(121),
    [sym__case_of_f] = ACTIONS(121),
    [sym__begin_sql_e] = ACTIONS(121),
    [sym__begin_sql_f] = ACTIONS(121),
    [sym__hex_literal] = ACTIONS(121),
    [sym__dec_literal] = ACTIONS(123),
    [sym__num_literal] = ACTIONS(123),
    [sym__exp_literal] = ACTIONS(121),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_SLASH_SLASH] = ACTIONS(125),
    [anon_sym_SLASH_STAR] = ACTIONS(125),
    [aux_sym__for_each_e_token1] = ACTIONS(125),
    [aux_sym__for_each_f_token1] = ACTIONS(125),
    [aux_sym__while_e_token1] = ACTIONS(125),
    [sym__while_f] = ACTIONS(125),
    [aux_sym__for_e_token1] = ACTIONS(127),
    [aux_sym__for_f_token1] = ACTIONS(125),
    [aux_sym__use_e_token1] = ACTIONS(125),
    [aux_sym__use_f_token1] = ACTIONS(125),
    [sym__repeat_e] = ACTIONS(125),
    [sym__repeat_f] = ACTIONS(125),
    [sym__if_e] = ACTIONS(125),
    [sym__if_f] = ACTIONS(125),
    [sym__case_of_e] = ACTIONS(125),
    [sym__case_of_f] = ACTIONS(125),
    [sym__begin_sql_e] = ACTIONS(125),
    [sym__begin_sql_f] = ACTIONS(125),
    [sym__hex_literal] = ACTIONS(125),
    [sym__dec_literal] = ACTIONS(127),
    [sym__num_literal] = ACTIONS(127),
    [sym__exp_literal] = ACTIONS(125),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(129),
    [anon_sym_SLASH_STAR] = ACTIONS(129),
    [aux_sym__for_each_e_token1] = ACTIONS(129),
    [aux_sym__for_each_f_token1] = ACTIONS(129),
    [aux_sym__while_e_token1] = ACTIONS(129),
    [sym__while_f] = ACTIONS(129),
    [aux_sym__for_e_token1] = ACTIONS(131),
    [aux_sym__for_f_token1] = ACTIONS(129),
    [aux_sym__use_e_token1] = ACTIONS(129),
    [aux_sym__use_f_token1] = ACTIONS(129),
    [sym__repeat_e] = ACTIONS(129),
    [sym__repeat_f] = ACTIONS(129),
    [sym__if_e] = ACTIONS(129),
    [sym__if_f] = ACTIONS(129),
    [sym__case_of_e] = ACTIONS(129),
    [sym__case_of_f] = ACTIONS(129),
    [sym__begin_sql_e] = ACTIONS(129),
    [sym__begin_sql_f] = ACTIONS(129),
    [sym__hex_literal] = ACTIONS(129),
    [sym__dec_literal] = ACTIONS(131),
    [sym__num_literal] = ACTIONS(131),
    [sym__exp_literal] = ACTIONS(129),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(133),
    [anon_sym_SLASH_STAR] = ACTIONS(133),
    [aux_sym__for_each_e_token1] = ACTIONS(133),
    [aux_sym__for_each_f_token1] = ACTIONS(133),
    [aux_sym__while_e_token1] = ACTIONS(133),
    [sym__while_f] = ACTIONS(133),
    [aux_sym__for_e_token1] = ACTIONS(135),
    [aux_sym__for_f_token1] = ACTIONS(133),
    [aux_sym__use_e_token1] = ACTIONS(133),
    [aux_sym__use_f_token1] = ACTIONS(133),
    [sym__repeat_e] = ACTIONS(133),
    [sym__repeat_f] = ACTIONS(133),
    [sym__if_e] = ACTIONS(133),
    [sym__if_f] = ACTIONS(133),
    [sym__case_of_e] = ACTIONS(133),
    [sym__case_of_f] = ACTIONS(133),
    [sym__begin_sql_e] = ACTIONS(133),
    [sym__begin_sql_f] = ACTIONS(133),
    [sym__hex_literal] = ACTIONS(133),
    [sym__dec_literal] = ACTIONS(135),
    [sym__num_literal] = ACTIONS(135),
    [sym__exp_literal] = ACTIONS(133),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(137),
    [anon_sym_SLASH_STAR] = ACTIONS(137),
    [aux_sym__for_each_e_token1] = ACTIONS(137),
    [aux_sym__for_each_f_token1] = ACTIONS(137),
    [aux_sym__while_e_token1] = ACTIONS(137),
    [sym__while_f] = ACTIONS(137),
    [aux_sym__for_e_token1] = ACTIONS(139),
    [aux_sym__for_f_token1] = ACTIONS(137),
    [aux_sym__use_e_token1] = ACTIONS(137),
    [aux_sym__use_f_token1] = ACTIONS(137),
    [sym__repeat_e] = ACTIONS(137),
    [sym__repeat_f] = ACTIONS(137),
    [sym__if_e] = ACTIONS(137),
    [sym__if_f] = ACTIONS(137),
    [sym__case_of_e] = ACTIONS(137),
    [sym__case_of_f] = ACTIONS(137),
    [sym__begin_sql_e] = ACTIONS(137),
    [sym__begin_sql_f] = ACTIONS(137),
    [sym__hex_literal] = ACTIONS(137),
    [sym__dec_literal] = ACTIONS(139),
    [sym__num_literal] = ACTIONS(139),
    [sym__exp_literal] = ACTIONS(137),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(141),
    [aux_sym__for_each_e_token1] = ACTIONS(141),
    [aux_sym__for_each_f_token1] = ACTIONS(141),
    [aux_sym__while_e_token1] = ACTIONS(141),
    [sym__while_f] = ACTIONS(141),
    [aux_sym__for_e_token1] = ACTIONS(143),
    [aux_sym__for_f_token1] = ACTIONS(141),
    [aux_sym__use_e_token1] = ACTIONS(141),
    [aux_sym__use_f_token1] = ACTIONS(141),
    [sym__repeat_e] = ACTIONS(141),
    [sym__repeat_f] = ACTIONS(141),
    [sym__if_e] = ACTIONS(141),
    [sym__if_f] = ACTIONS(141),
    [sym__case_of_e] = ACTIONS(141),
    [sym__case_of_f] = ACTIONS(141),
    [sym__begin_sql_e] = ACTIONS(141),
    [sym__begin_sql_f] = ACTIONS(141),
    [sym__hex_literal] = ACTIONS(141),
    [sym__dec_literal] = ACTIONS(143),
    [sym__num_literal] = ACTIONS(143),
    [sym__exp_literal] = ACTIONS(141),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_SLASH_SLASH] = ACTIONS(145),
    [anon_sym_SLASH_STAR] = ACTIONS(145),
    [aux_sym__for_each_e_token1] = ACTIONS(145),
    [aux_sym__for_each_f_token1] = ACTIONS(145),
    [aux_sym__while_e_token1] = ACTIONS(145),
    [sym__while_f] = ACTIONS(145),
    [aux_sym__for_e_token1] = ACTIONS(147),
    [aux_sym__for_f_token1] = ACTIONS(145),
    [aux_sym__use_e_token1] = ACTIONS(145),
    [aux_sym__use_f_token1] = ACTIONS(145),
    [sym__repeat_e] = ACTIONS(145),
    [sym__repeat_f] = ACTIONS(145),
    [sym__if_e] = ACTIONS(145),
    [sym__if_f] = ACTIONS(145),
    [sym__case_of_e] = ACTIONS(145),
    [sym__case_of_f] = ACTIONS(145),
    [sym__begin_sql_e] = ACTIONS(145),
    [sym__begin_sql_f] = ACTIONS(145),
    [sym__hex_literal] = ACTIONS(145),
    [sym__dec_literal] = ACTIONS(147),
    [sym__num_literal] = ACTIONS(147),
    [sym__exp_literal] = ACTIONS(145),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_SLASH_STAR] = ACTIONS(149),
    [aux_sym__for_each_e_token1] = ACTIONS(149),
    [aux_sym__for_each_f_token1] = ACTIONS(149),
    [aux_sym__while_e_token1] = ACTIONS(149),
    [sym__while_f] = ACTIONS(149),
    [aux_sym__for_e_token1] = ACTIONS(151),
    [aux_sym__for_f_token1] = ACTIONS(149),
    [aux_sym__use_e_token1] = ACTIONS(149),
    [aux_sym__use_f_token1] = ACTIONS(149),
    [sym__repeat_e] = ACTIONS(149),
    [sym__repeat_f] = ACTIONS(149),
    [sym__if_e] = ACTIONS(149),
    [sym__if_f] = ACTIONS(149),
    [sym__case_of_e] = ACTIONS(149),
    [sym__case_of_f] = ACTIONS(149),
    [sym__begin_sql_e] = ACTIONS(149),
    [sym__begin_sql_f] = ACTIONS(149),
    [sym__hex_literal] = ACTIONS(149),
    [sym__dec_literal] = ACTIONS(151),
    [sym__num_literal] = ACTIONS(151),
    [sym__exp_literal] = ACTIONS(149),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(153),
    [aux_sym__for_each_e_token1] = ACTIONS(153),
    [aux_sym__for_each_f_token1] = ACTIONS(153),
    [aux_sym__while_e_token1] = ACTIONS(153),
    [sym__while_f] = ACTIONS(153),
    [aux_sym__for_e_token1] = ACTIONS(155),
    [aux_sym__for_f_token1] = ACTIONS(153),
    [aux_sym__use_e_token1] = ACTIONS(153),
    [aux_sym__use_f_token1] = ACTIONS(153),
    [sym__repeat_e] = ACTIONS(153),
    [sym__repeat_f] = ACTIONS(153),
    [sym__if_e] = ACTIONS(153),
    [sym__if_f] = ACTIONS(153),
    [sym__case_of_e] = ACTIONS(153),
    [sym__case_of_f] = ACTIONS(153),
    [sym__begin_sql_e] = ACTIONS(153),
    [sym__begin_sql_f] = ACTIONS(153),
    [sym__hex_literal] = ACTIONS(153),
    [sym__dec_literal] = ACTIONS(155),
    [sym__num_literal] = ACTIONS(155),
    [sym__exp_literal] = ACTIONS(153),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_SLASH_STAR] = ACTIONS(157),
    [aux_sym__for_each_e_token1] = ACTIONS(157),
    [aux_sym__for_each_f_token1] = ACTIONS(157),
    [aux_sym__while_e_token1] = ACTIONS(157),
    [sym__while_f] = ACTIONS(157),
    [aux_sym__for_e_token1] = ACTIONS(159),
    [aux_sym__for_f_token1] = ACTIONS(157),
    [aux_sym__use_e_token1] = ACTIONS(157),
    [aux_sym__use_f_token1] = ACTIONS(157),
    [sym__repeat_e] = ACTIONS(157),
    [sym__repeat_f] = ACTIONS(157),
    [sym__if_e] = ACTIONS(157),
    [sym__if_f] = ACTIONS(157),
    [sym__case_of_e] = ACTIONS(157),
    [sym__case_of_f] = ACTIONS(157),
    [sym__begin_sql_e] = ACTIONS(157),
    [sym__begin_sql_f] = ACTIONS(157),
    [sym__hex_literal] = ACTIONS(157),
    [sym__dec_literal] = ACTIONS(159),
    [sym__num_literal] = ACTIONS(159),
    [sym__exp_literal] = ACTIONS(157),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(161),
    [anon_sym_SLASH_STAR] = ACTIONS(161),
    [aux_sym__for_each_e_token1] = ACTIONS(161),
    [aux_sym__for_each_f_token1] = ACTIONS(161),
    [aux_sym__while_e_token1] = ACTIONS(161),
    [sym__while_f] = ACTIONS(161),
    [aux_sym__for_e_token1] = ACTIONS(163),
    [aux_sym__for_f_token1] = ACTIONS(161),
    [aux_sym__use_e_token1] = ACTIONS(161),
    [aux_sym__use_f_token1] = ACTIONS(161),
    [sym__repeat_e] = ACTIONS(161),
    [sym__repeat_f] = ACTIONS(161),
    [sym__if_e] = ACTIONS(161),
    [sym__if_f] = ACTIONS(161),
    [sym__case_of_e] = ACTIONS(161),
    [sym__case_of_f] = ACTIONS(161),
    [sym__begin_sql_e] = ACTIONS(161),
    [sym__begin_sql_f] = ACTIONS(161),
    [sym__hex_literal] = ACTIONS(161),
    [sym__dec_literal] = ACTIONS(163),
    [sym__num_literal] = ACTIONS(163),
    [sym__exp_literal] = ACTIONS(161),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_SLASH_SLASH] = ACTIONS(165),
    [anon_sym_SLASH_STAR] = ACTIONS(165),
    [aux_sym__for_each_e_token1] = ACTIONS(165),
    [aux_sym__for_each_f_token1] = ACTIONS(165),
    [aux_sym__while_e_token1] = ACTIONS(165),
    [sym__while_f] = ACTIONS(165),
    [aux_sym__for_e_token1] = ACTIONS(167),
    [aux_sym__for_f_token1] = ACTIONS(165),
    [aux_sym__use_e_token1] = ACTIONS(165),
    [aux_sym__use_f_token1] = ACTIONS(165),
    [sym__repeat_e] = ACTIONS(165),
    [sym__repeat_f] = ACTIONS(165),
    [sym__if_e] = ACTIONS(165),
    [sym__if_f] = ACTIONS(165),
    [sym__case_of_e] = ACTIONS(165),
    [sym__case_of_f] = ACTIONS(165),
    [sym__begin_sql_e] = ACTIONS(165),
    [sym__begin_sql_f] = ACTIONS(165),
    [sym__hex_literal] = ACTIONS(165),
    [sym__dec_literal] = ACTIONS(167),
    [sym__num_literal] = ACTIONS(167),
    [sym__exp_literal] = ACTIONS(165),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_SLASH_SLASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(169),
    [aux_sym__for_each_e_token1] = ACTIONS(169),
    [aux_sym__for_each_f_token1] = ACTIONS(169),
    [aux_sym__while_e_token1] = ACTIONS(169),
    [sym__while_f] = ACTIONS(169),
    [aux_sym__for_e_token1] = ACTIONS(171),
    [aux_sym__for_f_token1] = ACTIONS(169),
    [aux_sym__use_e_token1] = ACTIONS(169),
    [aux_sym__use_f_token1] = ACTIONS(169),
    [sym__repeat_e] = ACTIONS(169),
    [sym__repeat_f] = ACTIONS(169),
    [sym__if_e] = ACTIONS(169),
    [sym__if_f] = ACTIONS(169),
    [sym__case_of_e] = ACTIONS(169),
    [sym__case_of_f] = ACTIONS(169),
    [sym__begin_sql_e] = ACTIONS(169),
    [sym__begin_sql_f] = ACTIONS(169),
    [sym__hex_literal] = ACTIONS(169),
    [sym__dec_literal] = ACTIONS(171),
    [sym__num_literal] = ACTIONS(171),
    [sym__exp_literal] = ACTIONS(169),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_SLASH_SLASH] = ACTIONS(173),
    [anon_sym_SLASH_STAR] = ACTIONS(173),
    [aux_sym__for_each_e_token1] = ACTIONS(173),
    [aux_sym__for_each_f_token1] = ACTIONS(173),
    [aux_sym__while_e_token1] = ACTIONS(173),
    [sym__while_f] = ACTIONS(173),
    [aux_sym__for_e_token1] = ACTIONS(175),
    [aux_sym__for_f_token1] = ACTIONS(173),
    [aux_sym__use_e_token1] = ACTIONS(173),
    [aux_sym__use_f_token1] = ACTIONS(173),
    [sym__repeat_e] = ACTIONS(173),
    [sym__repeat_f] = ACTIONS(173),
    [sym__if_e] = ACTIONS(173),
    [sym__if_f] = ACTIONS(173),
    [sym__case_of_e] = ACTIONS(173),
    [sym__case_of_f] = ACTIONS(173),
    [sym__begin_sql_e] = ACTIONS(173),
    [sym__begin_sql_f] = ACTIONS(173),
    [sym__hex_literal] = ACTIONS(173),
    [sym__dec_literal] = ACTIONS(175),
    [sym__num_literal] = ACTIONS(175),
    [sym__exp_literal] = ACTIONS(173),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(177),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [aux_sym__for_each_e_token1] = ACTIONS(177),
    [aux_sym__for_each_f_token1] = ACTIONS(177),
    [aux_sym__while_e_token1] = ACTIONS(177),
    [sym__while_f] = ACTIONS(177),
    [aux_sym__for_e_token1] = ACTIONS(179),
    [aux_sym__for_f_token1] = ACTIONS(177),
    [aux_sym__use_e_token1] = ACTIONS(177),
    [aux_sym__use_f_token1] = ACTIONS(177),
    [sym__repeat_e] = ACTIONS(177),
    [sym__repeat_f] = ACTIONS(177),
    [sym__if_e] = ACTIONS(177),
    [sym__if_f] = ACTIONS(177),
    [sym__case_of_e] = ACTIONS(177),
    [sym__case_of_f] = ACTIONS(177),
    [sym__begin_sql_e] = ACTIONS(177),
    [sym__begin_sql_f] = ACTIONS(177),
    [sym__hex_literal] = ACTIONS(177),
    [sym__dec_literal] = ACTIONS(179),
    [sym__num_literal] = ACTIONS(179),
    [sym__exp_literal] = ACTIONS(177),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(181),
    [anon_sym_SLASH_STAR] = ACTIONS(181),
    [aux_sym__for_each_e_token1] = ACTIONS(181),
    [aux_sym__for_each_f_token1] = ACTIONS(181),
    [aux_sym__while_e_token1] = ACTIONS(181),
    [sym__while_f] = ACTIONS(181),
    [aux_sym__for_e_token1] = ACTIONS(183),
    [aux_sym__for_f_token1] = ACTIONS(181),
    [aux_sym__use_e_token1] = ACTIONS(181),
    [aux_sym__use_f_token1] = ACTIONS(181),
    [sym__repeat_e] = ACTIONS(181),
    [sym__repeat_f] = ACTIONS(181),
    [sym__if_e] = ACTIONS(181),
    [sym__if_f] = ACTIONS(181),
    [sym__case_of_e] = ACTIONS(181),
    [sym__case_of_f] = ACTIONS(181),
    [sym__begin_sql_e] = ACTIONS(181),
    [sym__begin_sql_f] = ACTIONS(181),
    [sym__hex_literal] = ACTIONS(181),
    [sym__dec_literal] = ACTIONS(183),
    [sym__num_literal] = ACTIONS(183),
    [sym__exp_literal] = ACTIONS(181),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_SLASH_SLASH] = ACTIONS(185),
    [anon_sym_SLASH_STAR] = ACTIONS(185),
    [aux_sym__for_each_e_token1] = ACTIONS(185),
    [aux_sym__for_each_f_token1] = ACTIONS(185),
    [aux_sym__while_e_token1] = ACTIONS(185),
    [sym__while_f] = ACTIONS(185),
    [aux_sym__for_e_token1] = ACTIONS(187),
    [aux_sym__for_f_token1] = ACTIONS(185),
    [aux_sym__use_e_token1] = ACTIONS(185),
    [aux_sym__use_f_token1] = ACTIONS(185),
    [sym__repeat_e] = ACTIONS(185),
    [sym__repeat_f] = ACTIONS(185),
    [sym__if_e] = ACTIONS(185),
    [sym__if_f] = ACTIONS(185),
    [sym__case_of_e] = ACTIONS(185),
    [sym__case_of_f] = ACTIONS(185),
    [sym__begin_sql_e] = ACTIONS(185),
    [sym__begin_sql_f] = ACTIONS(185),
    [sym__hex_literal] = ACTIONS(185),
    [sym__dec_literal] = ACTIONS(187),
    [sym__num_literal] = ACTIONS(187),
    [sym__exp_literal] = ACTIONS(185),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(189),
    [anon_sym_SLASH_STAR] = ACTIONS(189),
    [aux_sym__for_each_e_token1] = ACTIONS(189),
    [aux_sym__for_each_f_token1] = ACTIONS(189),
    [aux_sym__while_e_token1] = ACTIONS(189),
    [sym__while_f] = ACTIONS(189),
    [aux_sym__for_e_token1] = ACTIONS(191),
    [aux_sym__for_f_token1] = ACTIONS(189),
    [aux_sym__use_e_token1] = ACTIONS(189),
    [aux_sym__use_f_token1] = ACTIONS(189),
    [sym__repeat_e] = ACTIONS(189),
    [sym__repeat_f] = ACTIONS(189),
    [sym__if_e] = ACTIONS(189),
    [sym__if_f] = ACTIONS(189),
    [sym__case_of_e] = ACTIONS(189),
    [sym__case_of_f] = ACTIONS(189),
    [sym__begin_sql_e] = ACTIONS(189),
    [sym__begin_sql_f] = ACTIONS(189),
    [sym__hex_literal] = ACTIONS(189),
    [sym__dec_literal] = ACTIONS(191),
    [sym__num_literal] = ACTIONS(191),
    [sym__exp_literal] = ACTIONS(189),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_SLASH_SLASH] = ACTIONS(193),
    [anon_sym_SLASH_STAR] = ACTIONS(193),
    [aux_sym__for_each_e_token1] = ACTIONS(193),
    [aux_sym__for_each_f_token1] = ACTIONS(193),
    [aux_sym__while_e_token1] = ACTIONS(193),
    [sym__while_f] = ACTIONS(193),
    [aux_sym__for_e_token1] = ACTIONS(195),
    [aux_sym__for_f_token1] = ACTIONS(193),
    [aux_sym__use_e_token1] = ACTIONS(193),
    [aux_sym__use_f_token1] = ACTIONS(193),
    [sym__repeat_e] = ACTIONS(193),
    [sym__repeat_f] = ACTIONS(193),
    [sym__if_e] = ACTIONS(193),
    [sym__if_f] = ACTIONS(193),
    [sym__case_of_e] = ACTIONS(193),
    [sym__case_of_f] = ACTIONS(193),
    [sym__begin_sql_e] = ACTIONS(193),
    [sym__begin_sql_f] = ACTIONS(193),
    [sym__hex_literal] = ACTIONS(193),
    [sym__dec_literal] = ACTIONS(195),
    [sym__num_literal] = ACTIONS(195),
    [sym__exp_literal] = ACTIONS(193),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_SLASH_SLASH] = ACTIONS(197),
    [anon_sym_SLASH_STAR] = ACTIONS(197),
    [aux_sym__for_each_e_token1] = ACTIONS(197),
    [aux_sym__for_each_f_token1] = ACTIONS(197),
    [aux_sym__while_e_token1] = ACTIONS(197),
    [sym__while_f] = ACTIONS(197),
    [aux_sym__for_e_token1] = ACTIONS(199),
    [aux_sym__for_f_token1] = ACTIONS(197),
    [aux_sym__use_e_token1] = ACTIONS(197),
    [aux_sym__use_f_token1] = ACTIONS(197),
    [sym__repeat_e] = ACTIONS(197),
    [sym__repeat_f] = ACTIONS(197),
    [sym__if_e] = ACTIONS(197),
    [sym__if_f] = ACTIONS(197),
    [sym__case_of_e] = ACTIONS(197),
    [sym__case_of_f] = ACTIONS(197),
    [sym__begin_sql_e] = ACTIONS(197),
    [sym__begin_sql_f] = ACTIONS(197),
    [sym__hex_literal] = ACTIONS(197),
    [sym__dec_literal] = ACTIONS(199),
    [sym__num_literal] = ACTIONS(199),
    [sym__exp_literal] = ACTIONS(197),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_SLASH_SLASH] = ACTIONS(201),
    [anon_sym_SLASH_STAR] = ACTIONS(201),
    [aux_sym__for_each_e_token1] = ACTIONS(201),
    [aux_sym__for_each_f_token1] = ACTIONS(201),
    [aux_sym__while_e_token1] = ACTIONS(201),
    [sym__while_f] = ACTIONS(201),
    [aux_sym__for_e_token1] = ACTIONS(203),
    [aux_sym__for_f_token1] = ACTIONS(201),
    [aux_sym__use_e_token1] = ACTIONS(201),
    [aux_sym__use_f_token1] = ACTIONS(201),
    [sym__repeat_e] = ACTIONS(201),
    [sym__repeat_f] = ACTIONS(201),
    [sym__if_e] = ACTIONS(201),
    [sym__if_f] = ACTIONS(201),
    [sym__case_of_e] = ACTIONS(201),
    [sym__case_of_f] = ACTIONS(201),
    [sym__begin_sql_e] = ACTIONS(201),
    [sym__begin_sql_f] = ACTIONS(201),
    [sym__hex_literal] = ACTIONS(201),
    [sym__dec_literal] = ACTIONS(203),
    [sym__num_literal] = ACTIONS(203),
    [sym__exp_literal] = ACTIONS(201),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_SLASH_SLASH] = ACTIONS(205),
    [anon_sym_SLASH_STAR] = ACTIONS(205),
    [aux_sym__for_each_e_token1] = ACTIONS(205),
    [aux_sym__for_each_f_token1] = ACTIONS(205),
    [aux_sym__while_e_token1] = ACTIONS(205),
    [sym__while_f] = ACTIONS(205),
    [aux_sym__for_e_token1] = ACTIONS(207),
    [aux_sym__for_f_token1] = ACTIONS(205),
    [aux_sym__use_e_token1] = ACTIONS(205),
    [aux_sym__use_f_token1] = ACTIONS(205),
    [sym__repeat_e] = ACTIONS(205),
    [sym__repeat_f] = ACTIONS(205),
    [sym__if_e] = ACTIONS(205),
    [sym__if_f] = ACTIONS(205),
    [sym__case_of_e] = ACTIONS(205),
    [sym__case_of_f] = ACTIONS(205),
    [sym__begin_sql_e] = ACTIONS(205),
    [sym__begin_sql_f] = ACTIONS(205),
    [sym__hex_literal] = ACTIONS(205),
    [sym__dec_literal] = ACTIONS(207),
    [sym__num_literal] = ACTIONS(207),
    [sym__exp_literal] = ACTIONS(205),
  },
  [34] = {
    [sym__end_for_each_e] = STATE(25),
    [sym_end_for_each] = STATE(24),
    [sym__while_e] = STATE(70),
    [sym_while] = STATE(50),
    [sym_until] = STATE(50),
    [aux_sym__end_for_each_e_token1] = ACTIONS(209),
    [sym__end_for_each_f] = ACTIONS(211),
    [aux_sym__while_e_token1] = ACTIONS(13),
    [sym__while_f] = ACTIONS(15),
    [sym__until_e] = ACTIONS(213),
    [sym__until_f] = ACTIONS(213),
  },
  [35] = {
    [sym_else] = STATE(46),
    [sym_end_case] = STATE(20),
    [aux_sym_case_block_repeat1] = STATE(37),
    [anon_sym_COLON] = ACTIONS(215),
    [sym__else_e] = ACTIONS(217),
    [sym__else_f] = ACTIONS(217),
    [sym__end_case_e] = ACTIONS(219),
    [sym__end_case_f] = ACTIONS(219),
  },
  [36] = {
    [sym_else] = STATE(40),
    [sym__end_if_e] = STATE(9),
    [sym__end_if_f] = STATE(9),
    [sym_end_if] = STATE(8),
    [sym__else_e] = ACTIONS(217),
    [sym__else_f] = ACTIONS(217),
    [aux_sym__end_if_e_token1] = ACTIONS(221),
    [aux_sym__end_if_f_token1] = ACTIONS(223),
  },
  [37] = {
    [aux_sym_case_block_repeat1] = STATE(37),
    [anon_sym_COLON] = ACTIONS(225),
    [sym__else_e] = ACTIONS(228),
    [sym__else_f] = ACTIONS(228),
    [sym__end_case_e] = ACTIONS(228),
    [sym__end_case_f] = ACTIONS(228),
  },
  [38] = {
    [anon_sym_COLON] = ACTIONS(228),
    [sym__else_e] = ACTIONS(228),
    [sym__else_f] = ACTIONS(228),
    [sym__end_case_e] = ACTIONS(228),
    [sym__end_case_f] = ACTIONS(228),
  },
  [39] = {
    [sym__end_while_e] = STATE(21),
    [sym__end_while_f] = STATE(21),
    [sym_end_while] = STATE(6),
    [aux_sym__end_while_e_token1] = ACTIONS(230),
    [aux_sym__end_while_f_token1] = ACTIONS(232),
  },
  [40] = {
    [sym__end_if_e] = STATE(9),
    [sym__end_if_f] = STATE(9),
    [sym_end_if] = STATE(29),
    [aux_sym__end_if_e_token1] = ACTIONS(221),
    [aux_sym__end_if_f_token1] = ACTIONS(223),
  },
  [41] = {
    [sym__end_use_e] = STATE(14),
    [sym__end_use_f] = STATE(14),
    [sym_end_use] = STATE(13),
    [aux_sym__end_use_e_token1] = ACTIONS(234),
    [aux_sym__end_use_f_token1] = ACTIONS(236),
  },
  [42] = {
    [sym__end_for_each_e] = STATE(25),
    [sym_end_for_each] = STATE(27),
    [aux_sym__end_for_each_e_token1] = ACTIONS(209),
    [sym__end_for_each_f] = ACTIONS(211),
  },
  [43] = {
    [sym__end_for_e] = STATE(18),
    [sym_end_for] = STATE(17),
    [aux_sym__end_for_e_token1] = ACTIONS(238),
    [sym__end_for_f] = ACTIONS(240),
  },
  [44] = {
    [aux_sym__end_if_e_token1] = ACTIONS(242),
    [aux_sym__end_if_f_token1] = ACTIONS(242),
    [sym__end_case_e] = ACTIONS(242),
    [sym__end_case_f] = ACTIONS(242),
  },
  [45] = {
    [sym_until] = STATE(54),
    [sym__until_e] = ACTIONS(213),
    [sym__until_f] = ACTIONS(213),
  },
  [46] = {
    [sym_end_case] = STATE(31),
    [sym__end_case_e] = ACTIONS(219),
    [sym__end_case_f] = ACTIONS(219),
  },
  [47] = {
    [sym_end_sql] = STATE(32),
    [sym__end_sql_e] = ACTIONS(244),
    [sym__end_sql_f] = ACTIONS(244),
  },
  [48] = {
    [aux_sym_case_block_repeat1] = STATE(35),
    [anon_sym_COLON] = ACTIONS(215),
  },
  [49] = {
    [sym__until_e] = ACTIONS(246),
    [sym__until_f] = ACTIONS(246),
  },
  [50] = {
    [sym__arguments] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [51] = {
    [sym__arguments] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [52] = {
    [aux_sym__end_for_e_token1] = ACTIONS(89),
    [sym__end_for_f] = ACTIONS(89),
  },
  [53] = {
    [sym__arguments] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(250),
  },
  [54] = {
    [sym__arguments] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [55] = {
    [sym__arguments] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [56] = {
    [sym__arguments] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [57] = {
    [sym__arguments] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [58] = {
    [sym__arguments] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(248),
  },
  [59] = {
    [sym__end_sql_e] = ACTIONS(252),
    [sym__end_sql_f] = ACTIONS(252),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(254),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(256),
  },
  [62] = {
    [anon_sym_COLON] = ACTIONS(258),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(260),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(262),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(264),
  },
  [66] = {
    [anon_sym_SLASH] = ACTIONS(266),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(268),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(270),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(272),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(274),
  },
  [71] = {
    [aux_sym_comment_token1] = ACTIONS(276),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(278),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(280),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(282),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(284),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(286),
  },
  [77] = {
    [aux_sym_comment_token2] = ACTIONS(288),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(290),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(292),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(71),
  [7] = {.count = 1, .reusable = true}, SHIFT(77),
  [9] = {.count = 1, .reusable = true}, SHIFT(76),
  [11] = {.count = 1, .reusable = true}, SHIFT(75),
  [13] = {.count = 1, .reusable = true}, SHIFT(72),
  [15] = {.count = 1, .reusable = true}, SHIFT(70),
  [17] = {.count = 1, .reusable = false}, SHIFT(68),
  [19] = {.count = 1, .reusable = true}, SHIFT(67),
  [21] = {.count = 1, .reusable = true}, SHIFT(65),
  [23] = {.count = 1, .reusable = true}, SHIFT(64),
  [25] = {.count = 1, .reusable = true}, SHIFT(49),
  [27] = {.count = 1, .reusable = true}, SHIFT(63),
  [29] = {.count = 1, .reusable = true}, SHIFT(62),
  [31] = {.count = 1, .reusable = true}, SHIFT(59),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = false}, SHIFT(5),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(71),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(77),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(76),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(75),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(72),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(70),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(67),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(64),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(49),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(63),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(59),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__arguments, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_constant_numeric, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_constant_numeric, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_while_block, 3),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_while_block, 3),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_end_case, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 3),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_if_block, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_end_if, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__end_if_f, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__end_if_f, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__end_if_e, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__end_if_e, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_block, 3),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_block, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_use_block, 3),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_use_block, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_end_use, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_end_use, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__end_use_f, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__end_use_f, 1),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__end_use_e, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__end_use_e, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_for_block, 3),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_for_block, 3),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_end_for, 1),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_end_for, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_e, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__end_for_e, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_case_block, 3),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_case_block, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 1),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_end_while, 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__end_while_f, 1),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym__end_while_f, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__end_while_e, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym__end_while_e, 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 3),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 3),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_end_for_each, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_each_e, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym__end_for_each_e, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 5),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 5),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 4),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_if_block, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_case_block, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_case_block, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_sql_block, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_sql_block, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_end_sql, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_end_sql, 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(26),
  [211] = {.count = 1, .reusable = true}, SHIFT(25),
  [213] = {.count = 1, .reusable = true}, SHIFT(60),
  [215] = {.count = 1, .reusable = true}, SHIFT(57),
  [217] = {.count = 1, .reusable = true}, SHIFT(44),
  [219] = {.count = 1, .reusable = true}, SHIFT(7),
  [221] = {.count = 1, .reusable = true}, SHIFT(11),
  [223] = {.count = 1, .reusable = true}, SHIFT(10),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_block_repeat1, 2), SHIFT_REPEAT(57),
  [228] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_block_repeat1, 2),
  [230] = {.count = 1, .reusable = true}, SHIFT(23),
  [232] = {.count = 1, .reusable = true}, SHIFT(22),
  [234] = {.count = 1, .reusable = true}, SHIFT(16),
  [236] = {.count = 1, .reusable = true}, SHIFT(15),
  [238] = {.count = 1, .reusable = true}, SHIFT(19),
  [240] = {.count = 1, .reusable = true}, SHIFT(18),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_else, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(33),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 1),
  [248] = {.count = 1, .reusable = true}, SHIFT(69),
  [250] = {.count = 1, .reusable = true}, SHIFT(79),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_begin_sql, 1),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [256] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_case_of, 1),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_if, 1),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__use_f, 1),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__use_e, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(28),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__for_f, 1),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym__for_e, 1),
  [272] = {.count = 1, .reusable = true}, SHIFT(4),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [276] = {.count = 1, .reusable = true}, SHIFT(30),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__while_e, 1),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_use, 1),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_f, 1),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_e, 1),
  [288] = {.count = 1, .reusable = true}, SHIFT(66),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_for, 1),
  [292] = {.count = 1, .reusable = true}, SHIFT(52),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fourd(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
