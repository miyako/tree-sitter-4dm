#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 9
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  aux_sym_for_each_e_token1 = 3,
  aux_sym_end_for_each_e_token1 = 4,
  aux_sym_while_e_token1 = 5,
  aux_sym_until_e_token1 = 6,
  sym_source = 7,
  sym__token = 8,
  sym_for_each_e = 9,
  sym_end_for_each_e = 10,
  sym_while_e = 11,
  sym_until_e = 12,
  aux_sym_source_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_for_each_e_token1] = "For each",
  [aux_sym_end_for_each_e_token1] = "End for each",
  [aux_sym_while_e_token1] = "While",
  [aux_sym_until_e_token1] = "Until",
  [sym_source] = "source",
  [sym__token] = "_token",
  [sym_for_each_e] = "for_each_e",
  [sym_end_for_each_e] = "end_for_each_e",
  [sym_while_e] = "while_e",
  [sym_until_e] = "until_e",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
    .visible = true,
    .named = false,
  },
  [aux_sym_end_for_each_e_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_while_e_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_until_e_token1] = {
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
  [sym_for_each_e] = {
    .visible = true,
    .named = true,
  },
  [sym_end_for_each_e] = {
    .visible = true,
    .named = true,
  },
  [sym_while_e] = {
    .visible = true,
    .named = true,
  },
  [sym_until_e] = {
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
      if (lookahead == 0) ADVANCE(27);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(22);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_for_each_e_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_end_for_each_e_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_while_e_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_until_e_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_for_each_e_token1] = ACTIONS(1),
    [aux_sym_end_for_each_e_token1] = ACTIONS(1),
    [aux_sym_while_e_token1] = ACTIONS(1),
    [aux_sym_until_e_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(8),
    [sym__token] = STATE(2),
    [sym_for_each_e] = STATE(2),
    [sym_end_for_each_e] = STATE(2),
    [sym_while_e] = STATE(2),
    [sym_until_e] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_for_each_e_token1] = ACTIONS(5),
    [aux_sym_end_for_each_e_token1] = ACTIONS(7),
    [aux_sym_while_e_token1] = ACTIONS(9),
    [aux_sym_until_e_token1] = ACTIONS(11),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_for_each_e] = STATE(3),
    [sym_end_for_each_e] = STATE(3),
    [sym_while_e] = STATE(3),
    [sym_until_e] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_for_each_e_token1] = ACTIONS(5),
    [aux_sym_end_for_each_e_token1] = ACTIONS(7),
    [aux_sym_while_e_token1] = ACTIONS(9),
    [aux_sym_until_e_token1] = ACTIONS(11),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_for_each_e] = STATE(3),
    [sym_end_for_each_e] = STATE(3),
    [sym_while_e] = STATE(3),
    [sym_until_e] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_for_each_e_token1] = ACTIONS(17),
    [aux_sym_end_for_each_e_token1] = ACTIONS(20),
    [aux_sym_while_e_token1] = ACTIONS(23),
    [aux_sym_until_e_token1] = ACTIONS(26),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_for_each_e_token1] = ACTIONS(29),
    [aux_sym_end_for_each_e_token1] = ACTIONS(29),
    [aux_sym_while_e_token1] = ACTIONS(29),
    [aux_sym_until_e_token1] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_for_each_e_token1] = ACTIONS(31),
    [aux_sym_end_for_each_e_token1] = ACTIONS(31),
    [aux_sym_while_e_token1] = ACTIONS(31),
    [aux_sym_until_e_token1] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_for_each_e_token1] = ACTIONS(33),
    [aux_sym_end_for_each_e_token1] = ACTIONS(33),
    [aux_sym_while_e_token1] = ACTIONS(33),
    [aux_sym_until_e_token1] = ACTIONS(33),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_for_each_e_token1] = ACTIONS(35),
    [aux_sym_end_for_each_e_token1] = ACTIONS(35),
    [aux_sym_while_e_token1] = ACTIONS(35),
    [aux_sym_until_e_token1] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_e, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each_e, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_while_e, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_until_e, 1),
  [37] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
