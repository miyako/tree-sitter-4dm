#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 22
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 4
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  aux_sym_for_each_e_token1 = 8,
  aux_sym_for_each_f_token1 = 9,
  aux_sym_end_for_each_e_token1 = 10,
  sym_end_for_each_f = 11,
  aux_sym_while_e_token1 = 12,
  sym_while_f = 13,
  sym_until_e = 14,
  sym_until_f = 15,
  sym_source = 16,
  sym__token = 17,
  sym_comment = 18,
  sym_for_each_e = 19,
  sym_for_each_f = 20,
  sym_for_each = 21,
  sym_end_for_each_e = 22,
  sym_end_for_each = 23,
  sym_while_e = 24,
  sym_while = 25,
  sym_until = 26,
  aux_sym_source_repeat1 = 27,
  anon_alias_sym_Endforeach = 28,
  anon_alias_sym_Foreach = 29,
  anon_alias_sym_Until = 30,
  anon_alias_sym_While = 31,
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
  [aux_sym_for_each_e_token1] = "for_each_e_token1",
  [aux_sym_for_each_f_token1] = "for_each_f_token1",
  [aux_sym_end_for_each_e_token1] = "end_for_each_e_token1",
  [sym_end_for_each_f] = "End for each",
  [aux_sym_while_e_token1] = "while_e_token1",
  [sym_while_f] = "While",
  [sym_until_e] = "until_e",
  [sym_until_f] = "Until",
  [sym_source] = "source",
  [sym__token] = "_token",
  [sym_comment] = "comment",
  [sym_for_each_e] = "for_each_e",
  [sym_for_each_f] = "For each",
  [sym_for_each] = "for_each",
  [sym_end_for_each_e] = "end_for_each_e",
  [sym_end_for_each] = "end_for_each",
  [sym_while_e] = "while_e",
  [sym_while] = "while",
  [sym_until] = "until",
  [aux_sym_source_repeat1] = "source_repeat1",
  [anon_alias_sym_Endforeach] = "End for each",
  [anon_alias_sym_Foreach] = "For each",
  [anon_alias_sym_Until] = "Until",
  [anon_alias_sym_While] = "While",
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
  [aux_sym_for_each_e_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_each_f_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_end_for_each_e_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_end_for_each_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_while_e_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_while_f] = {
    .visible = true,
    .named = false,
  },
  [sym_until_e] = {
    .visible = true,
    .named = true,
  },
  [sym_until_f] = {
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
  [sym_for_each_e] = {
    .visible = true,
    .named = true,
  },
  [sym_for_each_f] = {
    .visible = true,
    .named = false,
  },
  [sym_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym_end_for_each_e] = {
    .visible = true,
    .named = true,
  },
  [sym_end_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym_while_e] = {
    .visible = true,
    .named = true,
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
  [anon_alias_sym_Endforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Until] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_While] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_Until,
  },
  [2] = {
    [0] = anon_alias_sym_Foreach,
  },
  [3] = {
    [0] = anon_alias_sym_Endforeach,
  },
  [4] = {
    [0] = anon_alias_sym_While,
  },
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
      ACCEPT_TOKEN(aux_sym_for_each_e_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_for_each_f_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_end_for_each_e_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_end_for_each_f);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_while_e_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_while_f);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_until_e);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_until_f);
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
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 10},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_for_each_e_token1] = ACTIONS(1),
    [aux_sym_for_each_f_token1] = ACTIONS(1),
    [aux_sym_end_for_each_e_token1] = ACTIONS(1),
    [sym_end_for_each_f] = ACTIONS(1),
    [aux_sym_while_e_token1] = ACTIONS(1),
    [sym_while_f] = ACTIONS(1),
    [sym_until_e] = ACTIONS(1),
    [sym_until_f] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(18),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_each_e] = STATE(12),
    [sym_for_each_f] = STATE(13),
    [sym_for_each] = STATE(3),
    [sym_end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(3),
    [sym_while_e] = STATE(15),
    [sym_while] = STATE(3),
    [sym_until] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym_for_each_e_token1] = ACTIONS(9),
    [aux_sym_for_each_f_token1] = ACTIONS(11),
    [aux_sym_end_for_each_e_token1] = ACTIONS(13),
    [sym_end_for_each_f] = ACTIONS(15),
    [aux_sym_while_e_token1] = ACTIONS(17),
    [sym_while_f] = ACTIONS(19),
    [sym_until_e] = ACTIONS(21),
    [sym_until_f] = ACTIONS(23),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_e] = STATE(12),
    [sym_for_each_f] = STATE(13),
    [sym_for_each] = STATE(2),
    [sym_end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(2),
    [sym_while_e] = STATE(15),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(30),
    [aux_sym_for_each_e_token1] = ACTIONS(33),
    [aux_sym_for_each_f_token1] = ACTIONS(36),
    [aux_sym_end_for_each_e_token1] = ACTIONS(39),
    [sym_end_for_each_f] = ACTIONS(42),
    [aux_sym_while_e_token1] = ACTIONS(45),
    [sym_while_f] = ACTIONS(48),
    [sym_until_e] = ACTIONS(51),
    [sym_until_f] = ACTIONS(54),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_e] = STATE(12),
    [sym_for_each_f] = STATE(13),
    [sym_for_each] = STATE(2),
    [sym_end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(2),
    [sym_while_e] = STATE(15),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym_for_each_e_token1] = ACTIONS(9),
    [aux_sym_for_each_f_token1] = ACTIONS(11),
    [aux_sym_end_for_each_e_token1] = ACTIONS(13),
    [sym_end_for_each_f] = ACTIONS(15),
    [aux_sym_while_e_token1] = ACTIONS(17),
    [sym_while_f] = ACTIONS(19),
    [sym_until_e] = ACTIONS(21),
    [sym_until_f] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(59),
    [aux_sym_for_each_e_token1] = ACTIONS(59),
    [aux_sym_for_each_f_token1] = ACTIONS(59),
    [aux_sym_end_for_each_e_token1] = ACTIONS(59),
    [sym_end_for_each_f] = ACTIONS(59),
    [aux_sym_while_e_token1] = ACTIONS(59),
    [sym_while_f] = ACTIONS(59),
    [sym_until_e] = ACTIONS(59),
    [sym_until_f] = ACTIONS(59),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [aux_sym_for_each_e_token1] = ACTIONS(61),
    [aux_sym_for_each_f_token1] = ACTIONS(61),
    [aux_sym_end_for_each_e_token1] = ACTIONS(61),
    [sym_end_for_each_f] = ACTIONS(61),
    [aux_sym_while_e_token1] = ACTIONS(61),
    [sym_while_f] = ACTIONS(61),
    [sym_until_e] = ACTIONS(61),
    [sym_until_f] = ACTIONS(61),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(63),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [aux_sym_for_each_e_token1] = ACTIONS(63),
    [aux_sym_for_each_f_token1] = ACTIONS(63),
    [aux_sym_end_for_each_e_token1] = ACTIONS(63),
    [sym_end_for_each_f] = ACTIONS(63),
    [aux_sym_while_e_token1] = ACTIONS(63),
    [sym_while_f] = ACTIONS(63),
    [sym_until_e] = ACTIONS(63),
    [sym_until_f] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(65),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [aux_sym_for_each_e_token1] = ACTIONS(65),
    [aux_sym_for_each_f_token1] = ACTIONS(65),
    [aux_sym_end_for_each_e_token1] = ACTIONS(65),
    [sym_end_for_each_f] = ACTIONS(65),
    [aux_sym_while_e_token1] = ACTIONS(65),
    [sym_while_f] = ACTIONS(65),
    [sym_until_e] = ACTIONS(65),
    [sym_until_f] = ACTIONS(65),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(67),
    [aux_sym_for_each_e_token1] = ACTIONS(67),
    [aux_sym_for_each_f_token1] = ACTIONS(67),
    [aux_sym_end_for_each_e_token1] = ACTIONS(67),
    [sym_end_for_each_f] = ACTIONS(67),
    [aux_sym_while_e_token1] = ACTIONS(67),
    [sym_while_f] = ACTIONS(67),
    [sym_until_e] = ACTIONS(67),
    [sym_until_f] = ACTIONS(67),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_SLASH_SLASH] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [aux_sym_for_each_e_token1] = ACTIONS(69),
    [aux_sym_for_each_f_token1] = ACTIONS(69),
    [aux_sym_end_for_each_e_token1] = ACTIONS(69),
    [sym_end_for_each_f] = ACTIONS(69),
    [aux_sym_while_e_token1] = ACTIONS(69),
    [sym_while_f] = ACTIONS(69),
    [sym_until_e] = ACTIONS(69),
    [sym_until_f] = ACTIONS(69),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_SLASH_SLASH] = ACTIONS(71),
    [anon_sym_SLASH_STAR] = ACTIONS(71),
    [aux_sym_for_each_e_token1] = ACTIONS(71),
    [aux_sym_for_each_f_token1] = ACTIONS(71),
    [aux_sym_end_for_each_e_token1] = ACTIONS(71),
    [sym_end_for_each_f] = ACTIONS(71),
    [aux_sym_while_e_token1] = ACTIONS(71),
    [sym_while_f] = ACTIONS(71),
    [sym_until_e] = ACTIONS(71),
    [sym_until_f] = ACTIONS(71),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SLASH_SLASH] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(73),
    [aux_sym_for_each_e_token1] = ACTIONS(73),
    [aux_sym_for_each_f_token1] = ACTIONS(73),
    [aux_sym_end_for_each_e_token1] = ACTIONS(73),
    [sym_end_for_each_f] = ACTIONS(73),
    [aux_sym_while_e_token1] = ACTIONS(73),
    [sym_while_f] = ACTIONS(73),
    [sym_until_e] = ACTIONS(73),
    [sym_until_f] = ACTIONS(73),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_SLASH_SLASH] = ACTIONS(75),
    [anon_sym_SLASH_STAR] = ACTIONS(75),
    [aux_sym_for_each_e_token1] = ACTIONS(75),
    [aux_sym_for_each_f_token1] = ACTIONS(75),
    [aux_sym_end_for_each_e_token1] = ACTIONS(75),
    [sym_end_for_each_f] = ACTIONS(75),
    [aux_sym_while_e_token1] = ACTIONS(75),
    [sym_while_f] = ACTIONS(75),
    [sym_until_e] = ACTIONS(75),
    [sym_until_f] = ACTIONS(75),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SLASH_SLASH] = ACTIONS(77),
    [anon_sym_SLASH_STAR] = ACTIONS(77),
    [aux_sym_for_each_e_token1] = ACTIONS(77),
    [aux_sym_for_each_f_token1] = ACTIONS(77),
    [aux_sym_end_for_each_e_token1] = ACTIONS(77),
    [sym_end_for_each_f] = ACTIONS(77),
    [aux_sym_while_e_token1] = ACTIONS(77),
    [sym_while_f] = ACTIONS(77),
    [sym_until_e] = ACTIONS(77),
    [sym_until_f] = ACTIONS(77),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_SLASH_SLASH] = ACTIONS(79),
    [anon_sym_SLASH_STAR] = ACTIONS(79),
    [aux_sym_for_each_e_token1] = ACTIONS(79),
    [aux_sym_for_each_f_token1] = ACTIONS(79),
    [aux_sym_end_for_each_e_token1] = ACTIONS(79),
    [sym_end_for_each_f] = ACTIONS(79),
    [aux_sym_while_e_token1] = ACTIONS(79),
    [sym_while_f] = ACTIONS(79),
    [sym_until_e] = ACTIONS(79),
    [sym_until_f] = ACTIONS(79),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_SLASH_SLASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(81),
    [aux_sym_for_each_e_token1] = ACTIONS(81),
    [aux_sym_for_each_f_token1] = ACTIONS(81),
    [aux_sym_end_for_each_e_token1] = ACTIONS(81),
    [sym_end_for_each_f] = ACTIONS(81),
    [aux_sym_while_e_token1] = ACTIONS(81),
    [sym_while_f] = ACTIONS(81),
    [sym_until_e] = ACTIONS(81),
    [sym_until_f] = ACTIONS(81),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [aux_sym_for_each_e_token1] = ACTIONS(83),
    [aux_sym_for_each_f_token1] = ACTIONS(83),
    [aux_sym_end_for_each_e_token1] = ACTIONS(83),
    [sym_end_for_each_f] = ACTIONS(83),
    [aux_sym_while_e_token1] = ACTIONS(83),
    [sym_while_f] = ACTIONS(83),
    [sym_until_e] = ACTIONS(83),
    [sym_until_f] = ACTIONS(83),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(85),
    [aux_sym_for_each_e_token1] = ACTIONS(85),
    [aux_sym_for_each_f_token1] = ACTIONS(85),
    [aux_sym_end_for_each_e_token1] = ACTIONS(85),
    [sym_end_for_each_f] = ACTIONS(85),
    [aux_sym_while_e_token1] = ACTIONS(85),
    [sym_while_f] = ACTIONS(85),
    [sym_until_e] = ACTIONS(85),
    [sym_until_f] = ACTIONS(85),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(87),
  },
  [19] = {
    [aux_sym_comment_token1] = ACTIONS(89),
  },
  [20] = {
    [anon_sym_SLASH] = ACTIONS(91),
  },
  [21] = {
    [aux_sym_comment_token2] = ACTIONS(93),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(19),
  [7] = {.count = 1, .reusable = true}, SHIFT(21),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(4),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1, .production_id = 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_e, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_f, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each_e, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_while_e, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1, .production_id = 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1, .production_id = 3),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1, .production_id = 4),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [87] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [89] = {.count = 1, .reusable = true}, SHIFT(16),
  [91] = {.count = 1, .reusable = true}, SHIFT(17),
  [93] = {.count = 1, .reusable = true}, SHIFT(20),
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
