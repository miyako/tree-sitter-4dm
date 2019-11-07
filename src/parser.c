#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 32
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  aux_sym__dec_literal_token1 = 17,
  aux_sym__dec_literal_token2 = 18,
  sym__num_literal = 19,
  sym__exp_literal = 20,
  sym_source = 21,
  sym__token = 22,
  sym_comment = 23,
  sym__arguments = 24,
  sym_for_each_block = 25,
  sym__for_each_e = 26,
  sym__for_each_f = 27,
  sym_for_each = 28,
  sym__end_for_each_e = 29,
  sym_end_for_each = 30,
  sym__while_e = 31,
  sym_while = 32,
  sym_until = 33,
  sym__dec_literal = 34,
  sym_number = 35,
  aux_sym_source_repeat1 = 36,
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
  [sym__hex_literal] = "_hex_literal",
  [aux_sym__dec_literal_token1] = "_dec_literal_token1",
  [aux_sym__dec_literal_token2] = "_dec_literal_token2",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
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
  [sym__dec_literal] = "_dec_literal",
  [sym_number] = "number",
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
    .visible = false,
    .named = true,
  },
  [aux_sym__dec_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dec_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__num_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__exp_literal] = {
    .visible = false,
    .named = true,
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
  [sym__dec_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
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
      if (lookahead == 0) ADVANCE(73);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != 'E' &&
          lookahead != 'X' &&
          lookahead != 'e' &&
          lookahead != 'x') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 34:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
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
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 58:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(5);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
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
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != 'E' &&
          lookahead != 'X' &&
          lookahead != 'e' &&
          lookahead != 'x') ADVANCE(93);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__for_each_e_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__for_each_f_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__end_for_each_e_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__while_e_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 0) ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__dec_literal_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__dec_literal_token2);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != 'E' &&
          lookahead != 'X' &&
          lookahead != 'e' &&
          lookahead != 'x') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__dec_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != 'E' &&
          lookahead != 'X' &&
          lookahead != 'e' &&
          lookahead != 'x') ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__num_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__exp_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 91},
  [4] = {.lex_state = 91},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 91},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [aux_sym__dec_literal_token2] = ACTIONS(1),
    [sym__num_literal] = ACTIONS(1),
    [sym__exp_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(28),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_each_block] = STATE(3),
    [sym__for_each_e] = STATE(7),
    [sym__for_each_f] = STATE(7),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(3),
    [sym__while_e] = STATE(13),
    [sym_while] = STATE(3),
    [sym_until] = STATE(3),
    [sym__dec_literal] = STATE(10),
    [sym_number] = STATE(3),
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
    [aux_sym__dec_literal_token1] = ACTIONS(25),
    [sym__num_literal] = ACTIONS(23),
    [sym__exp_literal] = ACTIONS(23),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym__for_each_e] = STATE(7),
    [sym__for_each_f] = STATE(7),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(2),
    [sym__while_e] = STATE(13),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [sym__dec_literal] = STATE(10),
    [sym_number] = STATE(2),
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
    [aux_sym__dec_literal_token1] = ACTIONS(59),
    [sym__num_literal] = ACTIONS(56),
    [sym__exp_literal] = ACTIONS(56),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_each_block] = STATE(2),
    [sym__for_each_e] = STATE(7),
    [sym__for_each_f] = STATE(7),
    [sym_for_each] = STATE(4),
    [sym__end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(2),
    [sym__while_e] = STATE(13),
    [sym_while] = STATE(2),
    [sym_until] = STATE(2),
    [sym__dec_literal] = STATE(10),
    [sym_number] = STATE(2),
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
    [aux_sym__dec_literal_token1] = ACTIONS(25),
    [sym__num_literal] = ACTIONS(23),
    [sym__exp_literal] = ACTIONS(23),
  },
  [4] = {
    [sym__arguments] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(66),
    [anon_sym_SLASH_STAR] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym__for_each_e_token1] = ACTIONS(66),
    [aux_sym__for_each_f_token1] = ACTIONS(66),
    [aux_sym__end_for_each_e_token1] = ACTIONS(66),
    [sym__end_for_each_f] = ACTIONS(66),
    [aux_sym__while_e_token1] = ACTIONS(66),
    [sym__while_f] = ACTIONS(66),
    [sym__until_e] = ACTIONS(66),
    [sym__until_f] = ACTIONS(66),
    [sym__hex_literal] = ACTIONS(66),
    [aux_sym__dec_literal_token1] = ACTIONS(66),
    [sym__num_literal] = ACTIONS(66),
    [sym__exp_literal] = ACTIONS(66),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [anon_sym_SLASH_STAR] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym__for_each_e_token1] = ACTIONS(72),
    [aux_sym__for_each_f_token1] = ACTIONS(72),
    [aux_sym__end_for_each_e_token1] = ACTIONS(72),
    [sym__end_for_each_f] = ACTIONS(72),
    [aux_sym__while_e_token1] = ACTIONS(72),
    [sym__while_f] = ACTIONS(72),
    [sym__until_e] = ACTIONS(72),
    [sym__until_f] = ACTIONS(72),
    [sym__hex_literal] = ACTIONS(72),
    [aux_sym__dec_literal_token1] = ACTIONS(72),
    [sym__num_literal] = ACTIONS(72),
    [sym__exp_literal] = ACTIONS(72),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_SLASH_STAR] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(76),
    [aux_sym__for_each_e_token1] = ACTIONS(76),
    [aux_sym__for_each_f_token1] = ACTIONS(76),
    [aux_sym__end_for_each_e_token1] = ACTIONS(76),
    [sym__end_for_each_f] = ACTIONS(76),
    [aux_sym__while_e_token1] = ACTIONS(76),
    [sym__while_f] = ACTIONS(76),
    [sym__until_e] = ACTIONS(76),
    [sym__until_f] = ACTIONS(76),
    [sym__hex_literal] = ACTIONS(76),
    [aux_sym__dec_literal_token1] = ACTIONS(76),
    [sym__num_literal] = ACTIONS(76),
    [sym__exp_literal] = ACTIONS(76),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_SLASH_STAR] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [aux_sym__for_each_e_token1] = ACTIONS(80),
    [aux_sym__for_each_f_token1] = ACTIONS(80),
    [aux_sym__end_for_each_e_token1] = ACTIONS(80),
    [sym__end_for_each_f] = ACTIONS(80),
    [aux_sym__while_e_token1] = ACTIONS(80),
    [sym__while_f] = ACTIONS(80),
    [sym__until_e] = ACTIONS(80),
    [sym__until_f] = ACTIONS(80),
    [sym__hex_literal] = ACTIONS(80),
    [aux_sym__dec_literal_token1] = ACTIONS(80),
    [sym__num_literal] = ACTIONS(80),
    [sym__exp_literal] = ACTIONS(80),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_STAR] = ACTIONS(84),
    [aux_sym__for_each_e_token1] = ACTIONS(84),
    [aux_sym__for_each_f_token1] = ACTIONS(84),
    [aux_sym__end_for_each_e_token1] = ACTIONS(84),
    [sym__end_for_each_f] = ACTIONS(84),
    [aux_sym__while_e_token1] = ACTIONS(84),
    [sym__while_f] = ACTIONS(84),
    [sym__until_e] = ACTIONS(84),
    [sym__until_f] = ACTIONS(84),
    [sym__hex_literal] = ACTIONS(84),
    [aux_sym__dec_literal_token1] = ACTIONS(84),
    [sym__num_literal] = ACTIONS(84),
    [sym__exp_literal] = ACTIONS(84),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_SLASH_STAR] = ACTIONS(88),
    [aux_sym__for_each_e_token1] = ACTIONS(88),
    [aux_sym__for_each_f_token1] = ACTIONS(88),
    [aux_sym__end_for_each_e_token1] = ACTIONS(88),
    [sym__end_for_each_f] = ACTIONS(88),
    [aux_sym__while_e_token1] = ACTIONS(88),
    [sym__while_f] = ACTIONS(88),
    [sym__until_e] = ACTIONS(88),
    [sym__until_f] = ACTIONS(88),
    [sym__hex_literal] = ACTIONS(88),
    [aux_sym__dec_literal_token1] = ACTIONS(88),
    [sym__num_literal] = ACTIONS(88),
    [sym__exp_literal] = ACTIONS(88),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [anon_sym_SLASH_STAR] = ACTIONS(92),
    [aux_sym__for_each_e_token1] = ACTIONS(92),
    [aux_sym__for_each_f_token1] = ACTIONS(92),
    [aux_sym__end_for_each_e_token1] = ACTIONS(92),
    [sym__end_for_each_f] = ACTIONS(92),
    [aux_sym__while_e_token1] = ACTIONS(92),
    [sym__while_f] = ACTIONS(92),
    [sym__until_e] = ACTIONS(92),
    [sym__until_f] = ACTIONS(92),
    [sym__hex_literal] = ACTIONS(92),
    [aux_sym__dec_literal_token1] = ACTIONS(92),
    [sym__num_literal] = ACTIONS(92),
    [sym__exp_literal] = ACTIONS(92),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_SLASH_STAR] = ACTIONS(96),
    [aux_sym__for_each_e_token1] = ACTIONS(96),
    [aux_sym__for_each_f_token1] = ACTIONS(96),
    [aux_sym__end_for_each_e_token1] = ACTIONS(96),
    [sym__end_for_each_f] = ACTIONS(96),
    [aux_sym__while_e_token1] = ACTIONS(96),
    [sym__while_f] = ACTIONS(96),
    [sym__until_e] = ACTIONS(96),
    [sym__until_f] = ACTIONS(96),
    [sym__hex_literal] = ACTIONS(96),
    [aux_sym__dec_literal_token1] = ACTIONS(96),
    [sym__num_literal] = ACTIONS(96),
    [sym__exp_literal] = ACTIONS(96),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_SLASH_SLASH] = ACTIONS(100),
    [anon_sym_SLASH_STAR] = ACTIONS(100),
    [aux_sym__for_each_e_token1] = ACTIONS(100),
    [aux_sym__for_each_f_token1] = ACTIONS(100),
    [aux_sym__end_for_each_e_token1] = ACTIONS(100),
    [sym__end_for_each_f] = ACTIONS(100),
    [aux_sym__while_e_token1] = ACTIONS(100),
    [sym__while_f] = ACTIONS(100),
    [sym__until_e] = ACTIONS(100),
    [sym__until_f] = ACTIONS(100),
    [sym__hex_literal] = ACTIONS(100),
    [aux_sym__dec_literal_token1] = ACTIONS(100),
    [sym__num_literal] = ACTIONS(100),
    [sym__exp_literal] = ACTIONS(100),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(104),
    [anon_sym_SLASH_STAR] = ACTIONS(104),
    [aux_sym__for_each_e_token1] = ACTIONS(104),
    [aux_sym__for_each_f_token1] = ACTIONS(104),
    [aux_sym__end_for_each_e_token1] = ACTIONS(104),
    [sym__end_for_each_f] = ACTIONS(104),
    [aux_sym__while_e_token1] = ACTIONS(104),
    [sym__while_f] = ACTIONS(104),
    [sym__until_e] = ACTIONS(104),
    [sym__until_f] = ACTIONS(104),
    [sym__hex_literal] = ACTIONS(104),
    [aux_sym__dec_literal_token1] = ACTIONS(104),
    [sym__num_literal] = ACTIONS(104),
    [sym__exp_literal] = ACTIONS(104),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(108),
    [anon_sym_SLASH_STAR] = ACTIONS(108),
    [aux_sym__for_each_e_token1] = ACTIONS(108),
    [aux_sym__for_each_f_token1] = ACTIONS(108),
    [aux_sym__end_for_each_e_token1] = ACTIONS(108),
    [sym__end_for_each_f] = ACTIONS(108),
    [aux_sym__while_e_token1] = ACTIONS(108),
    [sym__while_f] = ACTIONS(108),
    [sym__until_e] = ACTIONS(108),
    [sym__until_f] = ACTIONS(108),
    [sym__hex_literal] = ACTIONS(108),
    [aux_sym__dec_literal_token1] = ACTIONS(108),
    [sym__num_literal] = ACTIONS(108),
    [sym__exp_literal] = ACTIONS(108),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SLASH_SLASH] = ACTIONS(112),
    [anon_sym_SLASH_STAR] = ACTIONS(112),
    [aux_sym__for_each_e_token1] = ACTIONS(112),
    [aux_sym__for_each_f_token1] = ACTIONS(112),
    [aux_sym__end_for_each_e_token1] = ACTIONS(112),
    [sym__end_for_each_f] = ACTIONS(112),
    [aux_sym__while_e_token1] = ACTIONS(112),
    [sym__while_f] = ACTIONS(112),
    [sym__until_e] = ACTIONS(112),
    [sym__until_f] = ACTIONS(112),
    [sym__hex_literal] = ACTIONS(112),
    [aux_sym__dec_literal_token1] = ACTIONS(112),
    [sym__num_literal] = ACTIONS(112),
    [sym__exp_literal] = ACTIONS(112),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(116),
    [anon_sym_SLASH_STAR] = ACTIONS(116),
    [aux_sym__for_each_e_token1] = ACTIONS(116),
    [aux_sym__for_each_f_token1] = ACTIONS(116),
    [aux_sym__end_for_each_e_token1] = ACTIONS(116),
    [sym__end_for_each_f] = ACTIONS(116),
    [aux_sym__while_e_token1] = ACTIONS(116),
    [sym__while_f] = ACTIONS(116),
    [sym__until_e] = ACTIONS(116),
    [sym__until_f] = ACTIONS(116),
    [sym__hex_literal] = ACTIONS(116),
    [aux_sym__dec_literal_token1] = ACTIONS(116),
    [sym__num_literal] = ACTIONS(116),
    [sym__exp_literal] = ACTIONS(116),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_STAR] = ACTIONS(120),
    [aux_sym__for_each_e_token1] = ACTIONS(120),
    [aux_sym__for_each_f_token1] = ACTIONS(120),
    [aux_sym__end_for_each_e_token1] = ACTIONS(120),
    [sym__end_for_each_f] = ACTIONS(120),
    [aux_sym__while_e_token1] = ACTIONS(120),
    [sym__while_f] = ACTIONS(120),
    [sym__until_e] = ACTIONS(120),
    [sym__until_f] = ACTIONS(120),
    [sym__hex_literal] = ACTIONS(120),
    [aux_sym__dec_literal_token1] = ACTIONS(120),
    [sym__num_literal] = ACTIONS(120),
    [sym__exp_literal] = ACTIONS(120),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [aux_sym__for_each_e_token1] = ACTIONS(124),
    [aux_sym__for_each_f_token1] = ACTIONS(124),
    [aux_sym__end_for_each_e_token1] = ACTIONS(124),
    [sym__end_for_each_f] = ACTIONS(124),
    [aux_sym__while_e_token1] = ACTIONS(124),
    [sym__while_f] = ACTIONS(124),
    [sym__until_e] = ACTIONS(124),
    [sym__until_f] = ACTIONS(124),
    [sym__hex_literal] = ACTIONS(124),
    [aux_sym__dec_literal_token1] = ACTIONS(124),
    [sym__num_literal] = ACTIONS(124),
    [sym__exp_literal] = ACTIONS(124),
  },
  [19] = {
    [sym__end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(12),
    [sym__while_e] = STATE(30),
    [sym_while] = STATE(22),
    [sym_until] = STATE(22),
    [aux_sym__end_for_each_e_token1] = ACTIONS(126),
    [sym__end_for_each_f] = ACTIONS(128),
    [aux_sym__while_e_token1] = ACTIONS(130),
    [sym__while_f] = ACTIONS(132),
    [sym__until_e] = ACTIONS(134),
    [sym__until_f] = ACTIONS(134),
  },
  [20] = {
    [aux_sym__end_for_each_e_token1] = ACTIONS(136),
    [sym__end_for_each_f] = ACTIONS(136),
    [aux_sym__while_e_token1] = ACTIONS(136),
    [sym__while_f] = ACTIONS(136),
    [sym__until_e] = ACTIONS(136),
    [sym__until_f] = ACTIONS(136),
  },
  [21] = {
    [sym__end_for_each_e] = STATE(14),
    [sym_end_for_each] = STATE(11),
    [aux_sym__end_for_each_e_token1] = ACTIONS(126),
    [sym__end_for_each_f] = ACTIONS(128),
  },
  [22] = {
    [sym__arguments] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(138),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(140),
  },
  [24] = {
    [aux_sym_comment_token2] = ACTIONS(142),
  },
  [25] = {
    [aux_sym__dec_literal_token2] = ACTIONS(144),
  },
  [26] = {
    [anon_sym_SLASH] = ACTIONS(146),
  },
  [27] = {
    [aux_sym_comment_token1] = ACTIONS(148),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(150),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(82),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(102),
  },
  [31] = {
    [anon_sym_LPAREN] = ACTIONS(86),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(27),
  [7] = {.count = 1, .reusable = false}, SHIFT(24),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(15),
  [15] = {.count = 1, .reusable = false}, SHIFT(14),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = false}, SHIFT(13),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(25),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [29] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym__token, 1),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym__token, 1),
  [68] = {.count = 1, .reusable = false}, SHIFT(23),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_e, 1),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym__for_each_e, 1),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_f, 1),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym__for_each_f, 1),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_for_each, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__while_e, 1),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__while_e, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_until, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 5),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 5),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 3),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_while, 1),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_end_for_each, 1),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_each_e, 1),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__end_for_each_e, 1),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__dec_literal, 2),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__dec_literal, 2),
  [126] = {.count = 1, .reusable = true}, SHIFT(15),
  [128] = {.count = 1, .reusable = true}, SHIFT(14),
  [130] = {.count = 1, .reusable = true}, SHIFT(29),
  [132] = {.count = 1, .reusable = true}, SHIFT(30),
  [134] = {.count = 1, .reusable = true}, SHIFT(31),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(23),
  [140] = {.count = 1, .reusable = true}, SHIFT(20),
  [142] = {.count = 1, .reusable = true}, SHIFT(26),
  [144] = {.count = 1, .reusable = true}, SHIFT(18),
  [146] = {.count = 1, .reusable = true}, SHIFT(17),
  [148] = {.count = 1, .reusable = true}, SHIFT(16),
  [150] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
