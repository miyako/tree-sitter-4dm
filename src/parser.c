#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 26
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  sym_source = 16,
  sym__token = 17,
  sym_comment = 18,
  sym__arguments = 19,
  sym_for_each_block = 20,
  sym__for_each_e = 21,
  sym__for_each_f = 22,
  sym_for_each = 23,
  sym__end_for_each_e = 24,
  sym_end_for_each = 25,
  sym__while_e = 26,
  sym_while = 27,
  sym_until = 28,
  aux_sym_source_repeat1 = 29,
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
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(60);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
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
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(11);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__for_each_e_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__for_each_f_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__end_for_each_e_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__while_e_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__until_f);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 10},
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
  },
  [1] = {
    [sym_source] = STATE(21),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_each_block] = STATE(3),
    [sym__for_each_e] = STATE(5),
    [sym__for_each_f] = STATE(5),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(3),
    [sym__while_e] = STATE(9),
    [sym_while] = STATE(3),
    [sym_until] = STATE(3),
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
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym__for_each_e] = STATE(5),
    [sym__for_each_f] = STATE(5),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(2),
    [sym__while_e] = STATE(9),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_STAR] = ACTIONS(28),
    [aux_sym__for_each_e_token1] = ACTIONS(31),
    [aux_sym__for_each_f_token1] = ACTIONS(34),
    [aux_sym__end_for_each_e_token1] = ACTIONS(37),
    [sym__end_for_each_f] = ACTIONS(40),
    [aux_sym__while_e_token1] = ACTIONS(43),
    [sym__while_f] = ACTIONS(46),
    [sym__until_e] = ACTIONS(49),
    [sym__until_f] = ACTIONS(49),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym__for_each_e] = STATE(5),
    [sym__for_each_f] = STATE(5),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(2),
    [sym__while_e] = STATE(9),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(52),
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
  },
  [4] = {
    [sym__arguments] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_SLASH_SLASH] = ACTIONS(54),
    [anon_sym_SLASH_STAR] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(56),
    [aux_sym__for_each_e_token1] = ACTIONS(54),
    [aux_sym__for_each_f_token1] = ACTIONS(54),
    [aux_sym__end_for_each_e_token1] = ACTIONS(54),
    [sym__end_for_each_f] = ACTIONS(54),
    [aux_sym__while_e_token1] = ACTIONS(54),
    [sym__while_f] = ACTIONS(54),
    [sym__until_e] = ACTIONS(54),
    [sym__until_f] = ACTIONS(54),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_SLASH_SLASH] = ACTIONS(58),
    [anon_sym_SLASH_STAR] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [aux_sym__for_each_e_token1] = ACTIONS(58),
    [aux_sym__for_each_f_token1] = ACTIONS(58),
    [aux_sym__end_for_each_e_token1] = ACTIONS(58),
    [sym__end_for_each_f] = ACTIONS(58),
    [aux_sym__while_e_token1] = ACTIONS(58),
    [sym__while_f] = ACTIONS(58),
    [sym__until_e] = ACTIONS(58),
    [sym__until_f] = ACTIONS(58),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_SLASH_SLASH] = ACTIONS(60),
    [anon_sym_SLASH_STAR] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym__for_each_e_token1] = ACTIONS(60),
    [aux_sym__for_each_f_token1] = ACTIONS(60),
    [aux_sym__end_for_each_e_token1] = ACTIONS(60),
    [sym__end_for_each_f] = ACTIONS(60),
    [aux_sym__while_e_token1] = ACTIONS(60),
    [sym__while_f] = ACTIONS(60),
    [sym__until_e] = ACTIONS(60),
    [sym__until_f] = ACTIONS(60),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_SLASH_SLASH] = ACTIONS(62),
    [anon_sym_SLASH_STAR] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [aux_sym__for_each_e_token1] = ACTIONS(62),
    [aux_sym__for_each_f_token1] = ACTIONS(62),
    [aux_sym__end_for_each_e_token1] = ACTIONS(62),
    [sym__end_for_each_f] = ACTIONS(62),
    [aux_sym__while_e_token1] = ACTIONS(62),
    [sym__while_f] = ACTIONS(62),
    [sym__until_e] = ACTIONS(62),
    [sym__until_f] = ACTIONS(62),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [anon_sym_SLASH_STAR] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(64),
    [aux_sym__for_each_e_token1] = ACTIONS(64),
    [aux_sym__for_each_f_token1] = ACTIONS(64),
    [aux_sym__end_for_each_e_token1] = ACTIONS(64),
    [sym__end_for_each_f] = ACTIONS(64),
    [aux_sym__while_e_token1] = ACTIONS(64),
    [sym__while_f] = ACTIONS(64),
    [sym__until_e] = ACTIONS(64),
    [sym__until_f] = ACTIONS(64),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_SLASH_SLASH] = ACTIONS(66),
    [anon_sym_SLASH_STAR] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [aux_sym__for_each_e_token1] = ACTIONS(66),
    [aux_sym__for_each_f_token1] = ACTIONS(66),
    [aux_sym__end_for_each_e_token1] = ACTIONS(66),
    [sym__end_for_each_f] = ACTIONS(66),
    [aux_sym__while_e_token1] = ACTIONS(66),
    [sym__while_f] = ACTIONS(66),
    [sym__until_e] = ACTIONS(66),
    [sym__until_f] = ACTIONS(66),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_SLASH_STAR] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym__for_each_e_token1] = ACTIONS(68),
    [aux_sym__for_each_f_token1] = ACTIONS(68),
    [aux_sym__end_for_each_e_token1] = ACTIONS(68),
    [sym__end_for_each_f] = ACTIONS(68),
    [aux_sym__while_e_token1] = ACTIONS(68),
    [sym__while_f] = ACTIONS(68),
    [sym__until_e] = ACTIONS(68),
    [sym__until_f] = ACTIONS(68),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_SLASH_SLASH] = ACTIONS(70),
    [anon_sym_SLASH_STAR] = ACTIONS(70),
    [aux_sym__for_each_e_token1] = ACTIONS(70),
    [aux_sym__for_each_f_token1] = ACTIONS(70),
    [aux_sym__end_for_each_e_token1] = ACTIONS(70),
    [sym__end_for_each_f] = ACTIONS(70),
    [aux_sym__while_e_token1] = ACTIONS(70),
    [sym__while_f] = ACTIONS(70),
    [sym__until_e] = ACTIONS(70),
    [sym__until_f] = ACTIONS(70),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [anon_sym_SLASH_STAR] = ACTIONS(72),
    [aux_sym__for_each_e_token1] = ACTIONS(72),
    [aux_sym__for_each_f_token1] = ACTIONS(72),
    [aux_sym__end_for_each_e_token1] = ACTIONS(72),
    [sym__end_for_each_f] = ACTIONS(72),
    [aux_sym__while_e_token1] = ACTIONS(72),
    [sym__while_f] = ACTIONS(72),
    [sym__until_e] = ACTIONS(72),
    [sym__until_f] = ACTIONS(72),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_STAR] = ACTIONS(74),
    [aux_sym__for_each_e_token1] = ACTIONS(74),
    [aux_sym__for_each_f_token1] = ACTIONS(74),
    [aux_sym__end_for_each_e_token1] = ACTIONS(74),
    [sym__end_for_each_f] = ACTIONS(74),
    [aux_sym__while_e_token1] = ACTIONS(74),
    [sym__while_f] = ACTIONS(74),
    [sym__until_e] = ACTIONS(74),
    [sym__until_f] = ACTIONS(74),
  },
  [14] = {
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(16),
    [sym__while_e] = STATE(9),
    [sym_while] = STATE(20),
    [sym_until] = STATE(20),
    [aux_sym__end_for_each_e_token1] = ACTIONS(13),
    [sym__end_for_each_f] = ACTIONS(15),
    [aux_sym__while_e_token1] = ACTIONS(17),
    [sym__while_f] = ACTIONS(19),
    [sym__until_e] = ACTIONS(21),
    [sym__until_f] = ACTIONS(21),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_SLASH_STAR] = ACTIONS(76),
    [aux_sym__for_each_e_token1] = ACTIONS(76),
    [aux_sym__for_each_f_token1] = ACTIONS(76),
    [aux_sym__end_for_each_e_token1] = ACTIONS(76),
    [sym__end_for_each_f] = ACTIONS(76),
    [aux_sym__while_e_token1] = ACTIONS(76),
    [sym__while_f] = ACTIONS(76),
    [sym__until_e] = ACTIONS(76),
    [sym__until_f] = ACTIONS(76),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(78),
    [aux_sym__for_each_e_token1] = ACTIONS(78),
    [aux_sym__for_each_f_token1] = ACTIONS(78),
    [aux_sym__end_for_each_e_token1] = ACTIONS(78),
    [sym__end_for_each_f] = ACTIONS(78),
    [aux_sym__while_e_token1] = ACTIONS(78),
    [sym__while_f] = ACTIONS(78),
    [sym__until_e] = ACTIONS(78),
    [sym__until_f] = ACTIONS(78),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_SLASH_STAR] = ACTIONS(80),
    [aux_sym__for_each_e_token1] = ACTIONS(80),
    [aux_sym__for_each_f_token1] = ACTIONS(80),
    [aux_sym__end_for_each_e_token1] = ACTIONS(80),
    [sym__end_for_each_f] = ACTIONS(80),
    [aux_sym__while_e_token1] = ACTIONS(80),
    [sym__while_f] = ACTIONS(80),
    [sym__until_e] = ACTIONS(80),
    [sym__until_f] = ACTIONS(80),
  },
  [18] = {
    [aux_sym__end_for_each_e_token1] = ACTIONS(82),
    [sym__end_for_each_f] = ACTIONS(82),
    [aux_sym__while_e_token1] = ACTIONS(82),
    [sym__while_f] = ACTIONS(82),
    [sym__until_e] = ACTIONS(82),
    [sym__until_f] = ACTIONS(82),
  },
  [19] = {
    [sym__end_for_each_e] = STATE(12),
    [sym_end_for_each] = STATE(17),
    [aux_sym__end_for_each_e_token1] = ACTIONS(13),
    [sym__end_for_each_f] = ACTIONS(15),
  },
  [20] = {
    [sym__arguments] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(56),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(84),
  },
  [22] = {
    [aux_sym_comment_token1] = ACTIONS(86),
  },
  [23] = {
    [anon_sym_SLASH] = ACTIONS(88),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(90),
  },
  [25] = {
    [aux_sym_comment_token2] = ACTIONS(92),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(22),
  [7] = {.count = 1, .reusable = true}, SHIFT(25),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__token, 1),
  [56] = {.count = 1, .reusable = true}, SHIFT(24),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_e, 1),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_f, 1),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym__while_e, 1),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_each_e, 1),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 3),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 5),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 2),
  [84] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [86] = {.count = 1, .reusable = true}, SHIFT(13),
  [88] = {.count = 1, .reusable = true}, SHIFT(15),
  [90] = {.count = 1, .reusable = true}, SHIFT(18),
  [92] = {.count = 1, .reusable = true}, SHIFT(23),
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
