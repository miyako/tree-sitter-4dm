#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 27
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  aux_sym__for_each_e_token1 = 8,
  aux_sym__for_each_f_token1 = 9,
  aux_sym__end_for_each_e_token1 = 10,
  sym__end_for_each_f = 11,
  aux_sym__while_e_token1 = 12,
  sym__while_f = 13,
  sym__until_e = 14,
  sym__until_f = 15,
  sym__hex_literal = 16,
  sym__dec_literal = 17,
  sym__num_literal = 18,
  sym__exp_literal = 19,
  sym_source = 20,
  sym__token = 21,
  sym_comment = 22,
  sym__arguments = 23,
  sym_for_each_block = 24,
  sym__for_each_e = 25,
  sym__for_each_f = 26,
  sym_for_each = 27,
  sym__end_for_each_e = 28,
  sym_end_for_each = 29,
  sym__while_e = 30,
  sym_while = 31,
  sym_until = 32,
  sym_constant_numeric = 33,
  aux_sym_source_repeat1 = 34,
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
  [aux_sym__for_each_e_token1] = "_for_each_e_token1",
  [aux_sym__for_each_f_token1] = "_for_each_f_token1",
  [aux_sym__end_for_each_e_token1] = "_end_for_each_e_token1",
  [sym__end_for_each_f] = "End for each",
  [aux_sym__while_e_token1] = "_while_e_token1",
  [sym__while_f] = "While",
  [sym__until_e] = "Until",
  [sym__until_f] = "Until",
  [sym__hex_literal] = "Number",
  [sym__dec_literal] = "Number",
  [sym__num_literal] = "Number",
  [sym__exp_literal] = "Number",
  [sym_source] = "source",
  [sym__token] = "_token",
  [sym_comment] = "comment",
  [sym__arguments] = "_arguments",
  [sym_for_each_block] = "for_each_block",
  [sym__for_each_e] = "For each",
  [sym__for_each_f] = "For each",
  [sym_for_each] = "for_each",
  [sym__end_for_each_e] = "End for each",
  [sym_end_for_each] = "end_for_each",
  [sym__while_e] = "While",
  [sym_while] = "while",
  [sym_until] = "until",
  [sym_constant_numeric] = "constant_numeric",
  [aux_sym_source_repeat1] = "source_repeat1",
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
  [sym_constant_numeric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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
      if (lookahead == 0) ADVANCE(71);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(71);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(76);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 57:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      END_STATE();
    case 59:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 62:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(11);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(75);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__for_each_e_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__for_each_f_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__end_for_each_e_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__while_e_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__num_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__exp_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 10},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__for_each_e_token1] = ACTIONS(1),
    [aux_sym__for_each_f_token1] = ACTIONS(1),
    [aux_sym__end_for_each_e_token1] = ACTIONS(1),
    [sym__end_for_each_f] = ACTIONS(1),
    [aux_sym__while_e_token1] = ACTIONS(1),
    [sym__while_f] = ACTIONS(1),
    [sym__until_e] = ACTIONS(1),
    [sym__until_f] = ACTIONS(1),
    [sym__hex_literal] = ACTIONS(1),
    [sym__dec_literal] = ACTIONS(1),
    [sym__num_literal] = ACTIONS(1),
    [sym__exp_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(22),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_each_block] = STATE(3),
    [sym__for_each_e] = STATE(9),
    [sym__for_each_f] = STATE(9),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(3),
    [sym__while_e] = STATE(7),
    [sym_while] = STATE(3),
    [sym_until] = STATE(3),
    [sym_constant_numeric] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym__for_each_e_token1] = ACTIONS(9),
    [aux_sym__for_each_f_token1] = ACTIONS(11),
    [aux_sym__end_for_each_e_token1] = ACTIONS(13),
    [sym__end_for_each_f] = ACTIONS(15),
    [aux_sym__while_e_token1] = ACTIONS(17),
    [sym__while_f] = ACTIONS(19),
    [sym__until_e] = ACTIONS(21),
    [sym__until_f] = ACTIONS(21),
    [sym__hex_literal] = ACTIONS(23),
    [sym__dec_literal] = ACTIONS(25),
    [sym__num_literal] = ACTIONS(25),
    [sym__exp_literal] = ACTIONS(23),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym__for_each_e] = STATE(9),
    [sym__for_each_f] = STATE(9),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(2),
    [sym__while_e] = STATE(7),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [sym_constant_numeric] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(32),
    [aux_sym__for_each_e_token1] = ACTIONS(35),
    [aux_sym__for_each_f_token1] = ACTIONS(38),
    [aux_sym__end_for_each_e_token1] = ACTIONS(41),
    [sym__end_for_each_f] = ACTIONS(44),
    [aux_sym__while_e_token1] = ACTIONS(47),
    [sym__while_f] = ACTIONS(50),
    [sym__until_e] = ACTIONS(53),
    [sym__until_f] = ACTIONS(53),
    [sym__hex_literal] = ACTIONS(56),
    [sym__dec_literal] = ACTIONS(59),
    [sym__num_literal] = ACTIONS(59),
    [sym__exp_literal] = ACTIONS(56),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym__for_each_e] = STATE(9),
    [sym__for_each_f] = STATE(9),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(2),
    [sym__while_e] = STATE(7),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [sym_constant_numeric] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym__for_each_e_token1] = ACTIONS(9),
    [aux_sym__for_each_f_token1] = ACTIONS(11),
    [aux_sym__end_for_each_e_token1] = ACTIONS(13),
    [sym__end_for_each_f] = ACTIONS(15),
    [aux_sym__while_e_token1] = ACTIONS(17),
    [sym__while_f] = ACTIONS(19),
    [sym__until_e] = ACTIONS(21),
    [sym__until_f] = ACTIONS(21),
    [sym__hex_literal] = ACTIONS(23),
    [sym__dec_literal] = ACTIONS(25),
    [sym__num_literal] = ACTIONS(25),
    [sym__exp_literal] = ACTIONS(23),
  },
  [4] = {
    [sym__arguments] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [anon_sym_SLASH_STAR] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [aux_sym__for_each_e_token1] = ACTIONS(64),
    [aux_sym__for_each_f_token1] = ACTIONS(64),
    [aux_sym__end_for_each_e_token1] = ACTIONS(64),
    [sym__end_for_each_f] = ACTIONS(64),
    [aux_sym__while_e_token1] = ACTIONS(64),
    [sym__while_f] = ACTIONS(64),
    [sym__until_e] = ACTIONS(64),
    [sym__until_f] = ACTIONS(64),
    [sym__hex_literal] = ACTIONS(64),
    [sym__dec_literal] = ACTIONS(68),
    [sym__num_literal] = ACTIONS(68),
    [sym__exp_literal] = ACTIONS(64),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_SLASH_SLASH] = ACTIONS(70),
    [anon_sym_SLASH_STAR] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym__for_each_e_token1] = ACTIONS(70),
    [aux_sym__for_each_f_token1] = ACTIONS(70),
    [aux_sym__end_for_each_e_token1] = ACTIONS(70),
    [sym__end_for_each_f] = ACTIONS(70),
    [aux_sym__while_e_token1] = ACTIONS(70),
    [sym__while_f] = ACTIONS(70),
    [sym__until_e] = ACTIONS(70),
    [sym__until_f] = ACTIONS(70),
    [sym__hex_literal] = ACTIONS(70),
    [sym__dec_literal] = ACTIONS(72),
    [sym__num_literal] = ACTIONS(72),
    [sym__exp_literal] = ACTIONS(70),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_STAR] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym__for_each_e_token1] = ACTIONS(74),
    [aux_sym__for_each_f_token1] = ACTIONS(74),
    [aux_sym__end_for_each_e_token1] = ACTIONS(74),
    [sym__end_for_each_f] = ACTIONS(74),
    [aux_sym__while_e_token1] = ACTIONS(74),
    [sym__while_f] = ACTIONS(74),
    [sym__until_e] = ACTIONS(74),
    [sym__until_f] = ACTIONS(74),
    [sym__hex_literal] = ACTIONS(74),
    [sym__dec_literal] = ACTIONS(76),
    [sym__num_literal] = ACTIONS(76),
    [sym__exp_literal] = ACTIONS(74),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [aux_sym__for_each_e_token1] = ACTIONS(78),
    [aux_sym__for_each_f_token1] = ACTIONS(78),
    [aux_sym__end_for_each_e_token1] = ACTIONS(78),
    [sym__end_for_each_f] = ACTIONS(78),
    [aux_sym__while_e_token1] = ACTIONS(78),
    [sym__while_f] = ACTIONS(78),
    [sym__until_e] = ACTIONS(78),
    [sym__until_f] = ACTIONS(78),
    [sym__hex_literal] = ACTIONS(78),
    [sym__dec_literal] = ACTIONS(80),
    [sym__num_literal] = ACTIONS(80),
    [sym__exp_literal] = ACTIONS(78),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_STAR] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [aux_sym__for_each_e_token1] = ACTIONS(82),
    [aux_sym__for_each_f_token1] = ACTIONS(82),
    [aux_sym__end_for_each_e_token1] = ACTIONS(82),
    [sym__end_for_each_f] = ACTIONS(82),
    [aux_sym__while_e_token1] = ACTIONS(82),
    [sym__while_f] = ACTIONS(82),
    [sym__until_e] = ACTIONS(82),
    [sym__until_f] = ACTIONS(82),
    [sym__hex_literal] = ACTIONS(82),
    [sym__dec_literal] = ACTIONS(84),
    [sym__num_literal] = ACTIONS(84),
    [sym__exp_literal] = ACTIONS(82),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_STAR] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [aux_sym__for_each_e_token1] = ACTIONS(86),
    [aux_sym__for_each_f_token1] = ACTIONS(86),
    [aux_sym__end_for_each_e_token1] = ACTIONS(86),
    [sym__end_for_each_f] = ACTIONS(86),
    [aux_sym__while_e_token1] = ACTIONS(86),
    [sym__while_f] = ACTIONS(86),
    [sym__until_e] = ACTIONS(86),
    [sym__until_f] = ACTIONS(86),
    [sym__hex_literal] = ACTIONS(86),
    [sym__dec_literal] = ACTIONS(88),
    [sym__num_literal] = ACTIONS(88),
    [sym__exp_literal] = ACTIONS(86),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_STAR] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [aux_sym__for_each_e_token1] = ACTIONS(90),
    [aux_sym__for_each_f_token1] = ACTIONS(90),
    [aux_sym__end_for_each_e_token1] = ACTIONS(90),
    [sym__end_for_each_f] = ACTIONS(90),
    [aux_sym__while_e_token1] = ACTIONS(90),
    [sym__while_f] = ACTIONS(90),
    [sym__until_e] = ACTIONS(90),
    [sym__until_f] = ACTIONS(90),
    [sym__hex_literal] = ACTIONS(90),
    [sym__dec_literal] = ACTIONS(92),
    [sym__num_literal] = ACTIONS(92),
    [sym__exp_literal] = ACTIONS(90),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_SLASH_SLASH] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(94),
    [aux_sym__for_each_e_token1] = ACTIONS(94),
    [aux_sym__for_each_f_token1] = ACTIONS(94),
    [aux_sym__end_for_each_e_token1] = ACTIONS(94),
    [sym__end_for_each_f] = ACTIONS(94),
    [aux_sym__while_e_token1] = ACTIONS(94),
    [sym__while_f] = ACTIONS(94),
    [sym__until_e] = ACTIONS(94),
    [sym__until_f] = ACTIONS(94),
    [sym__hex_literal] = ACTIONS(94),
    [sym__dec_literal] = ACTIONS(96),
    [sym__num_literal] = ACTIONS(96),
    [sym__exp_literal] = ACTIONS(94),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_SLASH_SLASH] = ACTIONS(98),
    [anon_sym_SLASH_STAR] = ACTIONS(98),
    [aux_sym__for_each_e_token1] = ACTIONS(98),
    [aux_sym__for_each_f_token1] = ACTIONS(98),
    [aux_sym__end_for_each_e_token1] = ACTIONS(98),
    [sym__end_for_each_f] = ACTIONS(98),
    [aux_sym__while_e_token1] = ACTIONS(98),
    [sym__while_f] = ACTIONS(98),
    [sym__until_e] = ACTIONS(98),
    [sym__until_f] = ACTIONS(98),
    [sym__hex_literal] = ACTIONS(98),
    [sym__dec_literal] = ACTIONS(100),
    [sym__num_literal] = ACTIONS(100),
    [sym__exp_literal] = ACTIONS(98),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_STAR] = ACTIONS(102),
    [aux_sym__for_each_e_token1] = ACTIONS(102),
    [aux_sym__for_each_f_token1] = ACTIONS(102),
    [aux_sym__end_for_each_e_token1] = ACTIONS(102),
    [sym__end_for_each_f] = ACTIONS(102),
    [aux_sym__while_e_token1] = ACTIONS(102),
    [sym__while_f] = ACTIONS(102),
    [sym__until_e] = ACTIONS(102),
    [sym__until_f] = ACTIONS(102),
    [sym__hex_literal] = ACTIONS(102),
    [sym__dec_literal] = ACTIONS(104),
    [sym__num_literal] = ACTIONS(104),
    [sym__exp_literal] = ACTIONS(102),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_STAR] = ACTIONS(106),
    [aux_sym__for_each_e_token1] = ACTIONS(106),
    [aux_sym__for_each_f_token1] = ACTIONS(106),
    [aux_sym__end_for_each_e_token1] = ACTIONS(106),
    [sym__end_for_each_f] = ACTIONS(106),
    [aux_sym__while_e_token1] = ACTIONS(106),
    [sym__while_f] = ACTIONS(106),
    [sym__until_e] = ACTIONS(106),
    [sym__until_f] = ACTIONS(106),
    [sym__hex_literal] = ACTIONS(106),
    [sym__dec_literal] = ACTIONS(108),
    [sym__num_literal] = ACTIONS(108),
    [sym__exp_literal] = ACTIONS(106),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_SLASH_STAR] = ACTIONS(110),
    [aux_sym__for_each_e_token1] = ACTIONS(110),
    [aux_sym__for_each_f_token1] = ACTIONS(110),
    [aux_sym__end_for_each_e_token1] = ACTIONS(110),
    [sym__end_for_each_f] = ACTIONS(110),
    [aux_sym__while_e_token1] = ACTIONS(110),
    [sym__while_f] = ACTIONS(110),
    [sym__until_e] = ACTIONS(110),
    [sym__until_f] = ACTIONS(110),
    [sym__hex_literal] = ACTIONS(110),
    [sym__dec_literal] = ACTIONS(112),
    [sym__num_literal] = ACTIONS(112),
    [sym__exp_literal] = ACTIONS(110),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_STAR] = ACTIONS(114),
    [aux_sym__for_each_e_token1] = ACTIONS(114),
    [aux_sym__for_each_f_token1] = ACTIONS(114),
    [aux_sym__end_for_each_e_token1] = ACTIONS(114),
    [sym__end_for_each_f] = ACTIONS(114),
    [aux_sym__while_e_token1] = ACTIONS(114),
    [sym__while_f] = ACTIONS(114),
    [sym__until_e] = ACTIONS(114),
    [sym__until_f] = ACTIONS(114),
    [sym__hex_literal] = ACTIONS(114),
    [sym__dec_literal] = ACTIONS(116),
    [sym__num_literal] = ACTIONS(116),
    [sym__exp_literal] = ACTIONS(114),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_SLASH_STAR] = ACTIONS(118),
    [aux_sym__for_each_e_token1] = ACTIONS(118),
    [aux_sym__for_each_f_token1] = ACTIONS(118),
    [aux_sym__end_for_each_e_token1] = ACTIONS(118),
    [sym__end_for_each_f] = ACTIONS(118),
    [aux_sym__while_e_token1] = ACTIONS(118),
    [sym__while_f] = ACTIONS(118),
    [sym__until_e] = ACTIONS(118),
    [sym__until_f] = ACTIONS(118),
    [sym__hex_literal] = ACTIONS(118),
    [sym__dec_literal] = ACTIONS(120),
    [sym__num_literal] = ACTIONS(120),
    [sym__exp_literal] = ACTIONS(118),
  },
  [18] = {
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(17),
    [sym__while_e] = STATE(7),
    [sym_while] = STATE(21),
    [sym_until] = STATE(21),
    [aux_sym__end_for_each_e_token1] = ACTIONS(13),
    [sym__end_for_each_f] = ACTIONS(15),
    [aux_sym__while_e_token1] = ACTIONS(17),
    [sym__while_f] = ACTIONS(19),
    [sym__until_e] = ACTIONS(21),
    [sym__until_f] = ACTIONS(21),
  },
  [19] = {
    [aux_sym__end_for_each_e_token1] = ACTIONS(122),
    [sym__end_for_each_f] = ACTIONS(122),
    [aux_sym__while_e_token1] = ACTIONS(122),
    [sym__while_f] = ACTIONS(122),
    [sym__until_e] = ACTIONS(122),
    [sym__until_f] = ACTIONS(122),
  },
  [20] = {
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(14),
    [aux_sym__end_for_each_e_token1] = ACTIONS(13),
    [sym__end_for_each_f] = ACTIONS(15),
  },
  [21] = {
    [sym__arguments] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(66),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(124),
  },
  [23] = {
    [anon_sym_SLASH] = ACTIONS(126),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(128),
  },
  [25] = {
    [aux_sym_comment_token1] = ACTIONS(130),
  },
  [26] = {
    [aux_sym_comment_token2] = ACTIONS(132),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(25),
  [7] = {.count = 1, .reusable = true}, SHIFT(26),
  [9] = {.count = 1, .reusable = true}, SHIFT(10),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym__token, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(24),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym__token, 1),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_f, 1),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym__for_each_f, 1),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym__while_e, 1),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym__while_e, 1),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_while, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_until, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_for_each, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_e, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__for_each_e, 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_each_e, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__end_for_each_e, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_end_for_each, 1),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_constant_numeric, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_constant_numeric, 1),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 5),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 5),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 3),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 2),
  [124] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [126] = {.count = 1, .reusable = true}, SHIFT(16),
  [128] = {.count = 1, .reusable = true}, SHIFT(19),
  [130] = {.count = 1, .reusable = true}, SHIFT(15),
  [132] = {.count = 1, .reusable = true}, SHIFT(23),
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
