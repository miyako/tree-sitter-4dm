#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 102
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  aux_sym_array_type_token1 = 1,
  aux_sym_array_type_token2 = 2,
  aux_sym_array_type_token3 = 3,
  aux_sym_array_type_token4 = 4,
  aux_sym_array_type_token5 = 5,
  aux_sym_array_type_token6 = 6,
  aux_sym_array_type_token7 = 7,
  aux_sym_array_type_token8 = 8,
  aux_sym_array_type_token9 = 9,
  aux_sym_array_type_token10 = 10,
  aux_sym_array_type_token11 = 11,
  aux_sym_array_type_token12 = 12,
  aux_sym_array_type_token13 = 13,
  aux_sym_array_type_token14 = 14,
  aux_sym_array_type_token15 = 15,
  aux_sym_array_type_token16 = 16,
  aux_sym_array_type_token17 = 17,
  aux_sym_array_type_token18 = 18,
  aux_sym_array_type_token19 = 19,
  aux_sym_array_type_token20 = 20,
  aux_sym_array_type_token21 = 21,
  aux_sym_array_type_token22 = 22,
  aux_sym_array_type_token23 = 23,
  aux_sym_array_type_token24 = 24,
  aux_sym_c_type_token1 = 25,
  aux_sym_c_type_token2 = 26,
  aux_sym_c_type_token3 = 27,
  aux_sym_c_type_token4 = 28,
  aux_sym_c_type_token5 = 29,
  aux_sym_c_type_token6 = 30,
  aux_sym_c_type_token7 = 31,
  aux_sym_c_type_token8 = 32,
  aux_sym_c_type_token9 = 33,
  aux_sym_c_type_token10 = 34,
  aux_sym_c_type_token11 = 35,
  aux_sym_c_type_token12 = 36,
  aux_sym_c_type_token13 = 37,
  aux_sym_c_type_token14 = 38,
  aux_sym_c_type_token15 = 39,
  aux_sym_c_type_token16 = 40,
  aux_sym_c_type_token17 = 41,
  aux_sym_c_type_token18 = 42,
  aux_sym_c_type_token19 = 43,
  aux_sym_c_type_token20 = 44,
  aux_sym_c_type_token21 = 45,
  aux_sym_c_type_token22 = 46,
  aux_sym_c_type_token23 = 47,
  aux_sym_c_type_token24 = 48,
  aux_sym_c_type_token25 = 49,
  aux_sym_c_type_token26 = 50,
  anon_sym_LPAREN = 51,
  anon_sym_RPAREN = 52,
  sym_argument_separator = 53,
  aux_sym_identifier_token1 = 54,
  aux_sym_identifier_token2 = 55,
  anon_sym_LT_GT = 56,
  anon_sym_DOLLAR = 57,
  aux_sym_parameter_token1 = 58,
  aux_sym_command_suffix_token1 = 59,
  aux_sym_storage_suffix_token1 = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  anon_sym_SLASH_SLASH = 63,
  aux_sym_comment_token1 = 64,
  anon_sym_SLASH_STAR = 65,
  aux_sym_comment_token2 = 66,
  anon_sym_SLASH = 67,
  anon_sym_DASH = 68,
  aux_sym_for_block_token1 = 69,
  aux_sym_for_block_token2 = 70,
  aux_sym_for_block_token3 = 71,
  aux_sym_for_block_token4 = 72,
  sym_source_code = 73,
  sym__token = 74,
  sym_array_declaration = 75,
  sym_c_declaration = 76,
  sym_array_type = 77,
  sym_c_type = 78,
  sym_array_declaration_arguments = 79,
  sym_c_declaration_arguments = 80,
  sym_declaration_argument_list = 81,
  sym_declaration_argument = 82,
  sym_identifier = 83,
  sym_interprocess_variable = 84,
  sym_local_variable = 85,
  sym_parameter = 86,
  sym_command_suffix = 87,
  sym_storage_suffix = 88,
  sym_integer_constant = 89,
  sym_table = 90,
  sym_field = 91,
  sym_comment = 92,
  sym_for_block_arguments = 93,
  sym_for_block = 94,
  aux_sym_source_code_repeat1 = 95,
  aux_sym_declaration_argument_list_repeat1 = 96,
  aux_sym_identifier_repeat1 = 97,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_array_type_token1] = "array_type_token1",
  [aux_sym_array_type_token2] = "array_type_token2",
  [aux_sym_array_type_token3] = "array_type_token3",
  [aux_sym_array_type_token4] = "array_type_token4",
  [aux_sym_array_type_token5] = "array_type_token5",
  [aux_sym_array_type_token6] = "array_type_token6",
  [aux_sym_array_type_token7] = "array_type_token7",
  [aux_sym_array_type_token8] = "array_type_token8",
  [aux_sym_array_type_token9] = "array_type_token9",
  [aux_sym_array_type_token10] = "array_type_token10",
  [aux_sym_array_type_token11] = "array_type_token11",
  [aux_sym_array_type_token12] = "array_type_token12",
  [aux_sym_array_type_token13] = "array_type_token13",
  [aux_sym_array_type_token14] = "array_type_token14",
  [aux_sym_array_type_token15] = "array_type_token15",
  [aux_sym_array_type_token16] = "array_type_token16",
  [aux_sym_array_type_token17] = "array_type_token17",
  [aux_sym_array_type_token18] = "array_type_token18",
  [aux_sym_array_type_token19] = "array_type_token19",
  [aux_sym_array_type_token20] = "array_type_token20",
  [aux_sym_array_type_token21] = "array_type_token21",
  [aux_sym_array_type_token22] = "array_type_token22",
  [aux_sym_array_type_token23] = "array_type_token23",
  [aux_sym_array_type_token24] = "array_type_token24",
  [aux_sym_c_type_token1] = "c_type_token1",
  [aux_sym_c_type_token2] = "c_type_token2",
  [aux_sym_c_type_token3] = "c_type_token3",
  [aux_sym_c_type_token4] = "c_type_token4",
  [aux_sym_c_type_token5] = "c_type_token5",
  [aux_sym_c_type_token6] = "c_type_token6",
  [aux_sym_c_type_token7] = "c_type_token7",
  [aux_sym_c_type_token8] = "c_type_token8",
  [aux_sym_c_type_token9] = "c_type_token9",
  [aux_sym_c_type_token10] = "c_type_token10",
  [aux_sym_c_type_token11] = "c_type_token11",
  [aux_sym_c_type_token12] = "c_type_token12",
  [aux_sym_c_type_token13] = "c_type_token13",
  [aux_sym_c_type_token14] = "c_type_token14",
  [aux_sym_c_type_token15] = "c_type_token15",
  [aux_sym_c_type_token16] = "c_type_token16",
  [aux_sym_c_type_token17] = "c_type_token17",
  [aux_sym_c_type_token18] = "c_type_token18",
  [aux_sym_c_type_token19] = "c_type_token19",
  [aux_sym_c_type_token20] = "c_type_token20",
  [aux_sym_c_type_token21] = "c_type_token21",
  [aux_sym_c_type_token22] = "c_type_token22",
  [aux_sym_c_type_token23] = "c_type_token23",
  [aux_sym_c_type_token24] = "c_type_token24",
  [aux_sym_c_type_token25] = "c_type_token25",
  [aux_sym_c_type_token26] = "c_type_token26",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_argument_separator] = "argument_separator",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_parameter_token1] = "parameter_token1",
  [aux_sym_command_suffix_token1] = "command_suffix_token1",
  [aux_sym_storage_suffix_token1] = "storage_suffix_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [aux_sym_for_block_token1] = "for_block_token1",
  [aux_sym_for_block_token2] = "for_block_token2",
  [aux_sym_for_block_token3] = "for_block_token3",
  [aux_sym_for_block_token4] = "for_block_token4",
  [sym_source_code] = "source_code",
  [sym__token] = "_token",
  [sym_array_declaration] = "array_declaration",
  [sym_c_declaration] = "c_declaration",
  [sym_array_type] = "array_type",
  [sym_c_type] = "c_type",
  [sym_array_declaration_arguments] = "array_declaration_arguments",
  [sym_c_declaration_arguments] = "c_declaration_arguments",
  [sym_declaration_argument_list] = "declaration_argument_list",
  [sym_declaration_argument] = "declaration_argument",
  [sym_identifier] = "identifier",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym_local_variable] = "local_variable",
  [sym_parameter] = "parameter",
  [sym_command_suffix] = "command_suffix",
  [sym_storage_suffix] = "storage_suffix",
  [sym_integer_constant] = "integer_constant",
  [sym_table] = "table",
  [sym_field] = "field",
  [sym_comment] = "comment",
  [sym_for_block_arguments] = "for_block_arguments",
  [sym_for_block] = "for_block",
  [aux_sym_source_code_repeat1] = "source_code_repeat1",
  [aux_sym_declaration_argument_list_repeat1] = "declaration_argument_list_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_array_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token26] = {
    .visible = false,
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
  [sym_argument_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_suffix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_storage_suffix_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_block_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_block_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_block_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_source_code] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_c_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_c_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_c_declaration_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interprocess_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_command_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_for_block_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_for_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
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
      if (lookahead == 0) ADVANCE(279);
      if (lookahead == '$') ADVANCE(356);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(331);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == ']') ADVANCE(361);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(279);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == '_') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(279);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == ']') ADVANCE(361);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(279);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == '_') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == '_') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(349);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(345);
      if (lookahead == ')') ADVANCE(331);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == ']') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(356);
      if (lookahead == ')') ADVANCE(331);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '/') ADVANCE(362);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(360);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(355);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 51:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 53:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(286);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(297);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(209);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 118:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 119:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 144:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(101);
      END_STATE();
    case 145:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 167:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 209:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 210:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 231:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 232:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 234:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 235:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 236:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 263:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 264:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 265:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 266:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 267:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 268:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 269:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 270:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 272:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 273:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 274:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 275:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 276:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_array_type_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_array_type_token3);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_array_type_token4);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_array_type_token5);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_array_type_token6);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_array_type_token7);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_array_type_token8);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_array_type_token9);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_array_type_token10);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_array_type_token11);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_array_type_token12);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_array_type_token13);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_array_type_token14);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_array_type_token15);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_array_type_token16);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_array_type_token17);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_array_type_token18);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_array_type_token19);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_array_type_token20);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_array_type_token21);
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_array_type_token22);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_array_type_token23);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_array_type_token24);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_c_type_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_c_type_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_c_type_token3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_c_type_token4);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_c_type_token5);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_c_type_token6);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_c_type_token7);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_c_type_token8);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_c_type_token9);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_c_type_token10);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_c_type_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_c_type_token12);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_c_type_token13);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_c_type_token14);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_c_type_token15);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_c_type_token16);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_c_type_token17);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_c_type_token18);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_c_type_token19);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_c_type_token20);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_c_type_token21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_c_type_token22);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_c_type_token23);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_c_type_token24);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_c_type_token25);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_c_type_token26);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_argument_separator);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '_') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '_') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(349);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '_') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_storage_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(365);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_for_block_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_for_block_token2);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_for_block_token3);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_for_block_token4);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 363},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_array_type_token1] = ACTIONS(1),
    [aux_sym_array_type_token2] = ACTIONS(1),
    [aux_sym_array_type_token3] = ACTIONS(1),
    [aux_sym_array_type_token4] = ACTIONS(1),
    [aux_sym_array_type_token5] = ACTIONS(1),
    [aux_sym_array_type_token6] = ACTIONS(1),
    [aux_sym_array_type_token7] = ACTIONS(1),
    [aux_sym_array_type_token8] = ACTIONS(1),
    [aux_sym_array_type_token9] = ACTIONS(1),
    [aux_sym_array_type_token10] = ACTIONS(1),
    [aux_sym_array_type_token11] = ACTIONS(1),
    [aux_sym_array_type_token12] = ACTIONS(1),
    [aux_sym_array_type_token13] = ACTIONS(1),
    [aux_sym_array_type_token14] = ACTIONS(1),
    [aux_sym_array_type_token15] = ACTIONS(1),
    [aux_sym_array_type_token16] = ACTIONS(1),
    [aux_sym_array_type_token17] = ACTIONS(1),
    [aux_sym_array_type_token18] = ACTIONS(1),
    [aux_sym_array_type_token19] = ACTIONS(1),
    [aux_sym_array_type_token20] = ACTIONS(1),
    [aux_sym_array_type_token21] = ACTIONS(1),
    [aux_sym_array_type_token22] = ACTIONS(1),
    [aux_sym_array_type_token23] = ACTIONS(1),
    [aux_sym_array_type_token24] = ACTIONS(1),
    [aux_sym_c_type_token1] = ACTIONS(1),
    [aux_sym_c_type_token2] = ACTIONS(1),
    [aux_sym_c_type_token3] = ACTIONS(1),
    [aux_sym_c_type_token4] = ACTIONS(1),
    [aux_sym_c_type_token5] = ACTIONS(1),
    [aux_sym_c_type_token6] = ACTIONS(1),
    [aux_sym_c_type_token7] = ACTIONS(1),
    [aux_sym_c_type_token8] = ACTIONS(1),
    [aux_sym_c_type_token9] = ACTIONS(1),
    [aux_sym_c_type_token10] = ACTIONS(1),
    [aux_sym_c_type_token11] = ACTIONS(1),
    [aux_sym_c_type_token12] = ACTIONS(1),
    [aux_sym_c_type_token13] = ACTIONS(1),
    [aux_sym_c_type_token14] = ACTIONS(1),
    [aux_sym_c_type_token15] = ACTIONS(1),
    [aux_sym_c_type_token16] = ACTIONS(1),
    [aux_sym_c_type_token17] = ACTIONS(1),
    [aux_sym_c_type_token18] = ACTIONS(1),
    [aux_sym_c_type_token19] = ACTIONS(1),
    [aux_sym_c_type_token20] = ACTIONS(1),
    [aux_sym_c_type_token21] = ACTIONS(1),
    [aux_sym_c_type_token22] = ACTIONS(1),
    [aux_sym_c_type_token23] = ACTIONS(1),
    [aux_sym_c_type_token24] = ACTIONS(1),
    [aux_sym_c_type_token25] = ACTIONS(1),
    [aux_sym_c_type_token26] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_argument_separator] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [aux_sym_command_suffix_token1] = ACTIONS(1),
    [aux_sym_storage_suffix_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_for_block_token1] = ACTIONS(1),
    [aux_sym_for_block_token2] = ACTIONS(1),
    [aux_sym_for_block_token3] = ACTIONS(1),
    [aux_sym_for_block_token4] = ACTIONS(1),
  },
  [1] = {
    [sym_source_code] = STATE(89),
    [sym__token] = STATE(2),
    [sym_array_declaration] = STATE(2),
    [sym_c_declaration] = STATE(2),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(2),
    [sym_field] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_for_block] = STATE(2),
    [aux_sym_source_code_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [aux_sym_for_block_token1] = ACTIONS(19),
    [aux_sym_for_block_token3] = ACTIONS(21),
  },
  [2] = {
    [sym__token] = STATE(5),
    [sym_array_declaration] = STATE(5),
    [sym_c_declaration] = STATE(5),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(5),
    [sym_field] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_for_block] = STATE(5),
    [aux_sym_source_code_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [aux_sym_for_block_token1] = ACTIONS(19),
    [aux_sym_for_block_token3] = ACTIONS(21),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(3),
    [sym_field] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_block] = STATE(3),
    [aux_sym_source_code_repeat1] = STATE(3),
    [aux_sym_array_type_token1] = ACTIONS(25),
    [aux_sym_array_type_token2] = ACTIONS(25),
    [aux_sym_array_type_token3] = ACTIONS(25),
    [aux_sym_array_type_token4] = ACTIONS(25),
    [aux_sym_array_type_token5] = ACTIONS(25),
    [aux_sym_array_type_token6] = ACTIONS(25),
    [aux_sym_array_type_token7] = ACTIONS(25),
    [aux_sym_array_type_token8] = ACTIONS(25),
    [aux_sym_array_type_token9] = ACTIONS(25),
    [aux_sym_array_type_token10] = ACTIONS(25),
    [aux_sym_array_type_token11] = ACTIONS(25),
    [aux_sym_array_type_token12] = ACTIONS(25),
    [aux_sym_array_type_token13] = ACTIONS(25),
    [aux_sym_array_type_token14] = ACTIONS(25),
    [aux_sym_array_type_token15] = ACTIONS(25),
    [aux_sym_array_type_token16] = ACTIONS(25),
    [aux_sym_array_type_token17] = ACTIONS(25),
    [aux_sym_array_type_token18] = ACTIONS(25),
    [aux_sym_array_type_token19] = ACTIONS(25),
    [aux_sym_array_type_token20] = ACTIONS(25),
    [aux_sym_array_type_token21] = ACTIONS(28),
    [aux_sym_array_type_token22] = ACTIONS(25),
    [aux_sym_array_type_token23] = ACTIONS(25),
    [aux_sym_array_type_token24] = ACTIONS(25),
    [aux_sym_c_type_token1] = ACTIONS(31),
    [aux_sym_c_type_token2] = ACTIONS(31),
    [aux_sym_c_type_token3] = ACTIONS(31),
    [aux_sym_c_type_token4] = ACTIONS(31),
    [aux_sym_c_type_token5] = ACTIONS(31),
    [aux_sym_c_type_token6] = ACTIONS(31),
    [aux_sym_c_type_token7] = ACTIONS(31),
    [aux_sym_c_type_token8] = ACTIONS(31),
    [aux_sym_c_type_token9] = ACTIONS(31),
    [aux_sym_c_type_token10] = ACTIONS(31),
    [aux_sym_c_type_token11] = ACTIONS(34),
    [aux_sym_c_type_token12] = ACTIONS(31),
    [aux_sym_c_type_token13] = ACTIONS(31),
    [aux_sym_c_type_token14] = ACTIONS(31),
    [aux_sym_c_type_token15] = ACTIONS(31),
    [aux_sym_c_type_token16] = ACTIONS(31),
    [aux_sym_c_type_token17] = ACTIONS(31),
    [aux_sym_c_type_token18] = ACTIONS(31),
    [aux_sym_c_type_token19] = ACTIONS(31),
    [aux_sym_c_type_token20] = ACTIONS(31),
    [aux_sym_c_type_token21] = ACTIONS(34),
    [aux_sym_c_type_token22] = ACTIONS(31),
    [aux_sym_c_type_token23] = ACTIONS(31),
    [aux_sym_c_type_token24] = ACTIONS(31),
    [aux_sym_c_type_token25] = ACTIONS(31),
    [aux_sym_c_type_token26] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(40),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [aux_sym_for_block_token1] = ACTIONS(46),
    [aux_sym_for_block_token3] = ACTIONS(49),
    [aux_sym_for_block_token4] = ACTIONS(52),
  },
  [4] = {
    [sym__token] = STATE(4),
    [sym_array_declaration] = STATE(4),
    [sym_c_declaration] = STATE(4),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(4),
    [sym_field] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_for_block] = STATE(4),
    [aux_sym_source_code_repeat1] = STATE(4),
    [aux_sym_array_type_token1] = ACTIONS(25),
    [aux_sym_array_type_token2] = ACTIONS(25),
    [aux_sym_array_type_token3] = ACTIONS(25),
    [aux_sym_array_type_token4] = ACTIONS(25),
    [aux_sym_array_type_token5] = ACTIONS(25),
    [aux_sym_array_type_token6] = ACTIONS(25),
    [aux_sym_array_type_token7] = ACTIONS(25),
    [aux_sym_array_type_token8] = ACTIONS(25),
    [aux_sym_array_type_token9] = ACTIONS(25),
    [aux_sym_array_type_token10] = ACTIONS(25),
    [aux_sym_array_type_token11] = ACTIONS(25),
    [aux_sym_array_type_token12] = ACTIONS(25),
    [aux_sym_array_type_token13] = ACTIONS(25),
    [aux_sym_array_type_token14] = ACTIONS(25),
    [aux_sym_array_type_token15] = ACTIONS(25),
    [aux_sym_array_type_token16] = ACTIONS(25),
    [aux_sym_array_type_token17] = ACTIONS(25),
    [aux_sym_array_type_token18] = ACTIONS(25),
    [aux_sym_array_type_token19] = ACTIONS(25),
    [aux_sym_array_type_token20] = ACTIONS(25),
    [aux_sym_array_type_token21] = ACTIONS(28),
    [aux_sym_array_type_token22] = ACTIONS(25),
    [aux_sym_array_type_token23] = ACTIONS(25),
    [aux_sym_array_type_token24] = ACTIONS(25),
    [aux_sym_c_type_token1] = ACTIONS(31),
    [aux_sym_c_type_token2] = ACTIONS(31),
    [aux_sym_c_type_token3] = ACTIONS(31),
    [aux_sym_c_type_token4] = ACTIONS(31),
    [aux_sym_c_type_token5] = ACTIONS(31),
    [aux_sym_c_type_token6] = ACTIONS(31),
    [aux_sym_c_type_token7] = ACTIONS(31),
    [aux_sym_c_type_token8] = ACTIONS(31),
    [aux_sym_c_type_token9] = ACTIONS(31),
    [aux_sym_c_type_token10] = ACTIONS(31),
    [aux_sym_c_type_token11] = ACTIONS(34),
    [aux_sym_c_type_token12] = ACTIONS(31),
    [aux_sym_c_type_token13] = ACTIONS(31),
    [aux_sym_c_type_token14] = ACTIONS(31),
    [aux_sym_c_type_token15] = ACTIONS(31),
    [aux_sym_c_type_token16] = ACTIONS(31),
    [aux_sym_c_type_token17] = ACTIONS(31),
    [aux_sym_c_type_token18] = ACTIONS(31),
    [aux_sym_c_type_token19] = ACTIONS(31),
    [aux_sym_c_type_token20] = ACTIONS(31),
    [aux_sym_c_type_token21] = ACTIONS(34),
    [aux_sym_c_type_token22] = ACTIONS(31),
    [aux_sym_c_type_token23] = ACTIONS(31),
    [aux_sym_c_type_token24] = ACTIONS(31),
    [aux_sym_c_type_token25] = ACTIONS(31),
    [aux_sym_c_type_token26] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SLASH_SLASH] = ACTIONS(40),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [aux_sym_for_block_token1] = ACTIONS(46),
    [aux_sym_for_block_token2] = ACTIONS(52),
    [aux_sym_for_block_token3] = ACTIONS(49),
  },
  [5] = {
    [sym__token] = STATE(5),
    [sym_array_declaration] = STATE(5),
    [sym_c_declaration] = STATE(5),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(5),
    [sym_field] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_for_block] = STATE(5),
    [aux_sym_source_code_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_array_type_token1] = ACTIONS(25),
    [aux_sym_array_type_token2] = ACTIONS(25),
    [aux_sym_array_type_token3] = ACTIONS(25),
    [aux_sym_array_type_token4] = ACTIONS(25),
    [aux_sym_array_type_token5] = ACTIONS(25),
    [aux_sym_array_type_token6] = ACTIONS(25),
    [aux_sym_array_type_token7] = ACTIONS(25),
    [aux_sym_array_type_token8] = ACTIONS(25),
    [aux_sym_array_type_token9] = ACTIONS(25),
    [aux_sym_array_type_token10] = ACTIONS(25),
    [aux_sym_array_type_token11] = ACTIONS(25),
    [aux_sym_array_type_token12] = ACTIONS(25),
    [aux_sym_array_type_token13] = ACTIONS(25),
    [aux_sym_array_type_token14] = ACTIONS(25),
    [aux_sym_array_type_token15] = ACTIONS(25),
    [aux_sym_array_type_token16] = ACTIONS(25),
    [aux_sym_array_type_token17] = ACTIONS(25),
    [aux_sym_array_type_token18] = ACTIONS(25),
    [aux_sym_array_type_token19] = ACTIONS(25),
    [aux_sym_array_type_token20] = ACTIONS(25),
    [aux_sym_array_type_token21] = ACTIONS(28),
    [aux_sym_array_type_token22] = ACTIONS(25),
    [aux_sym_array_type_token23] = ACTIONS(25),
    [aux_sym_array_type_token24] = ACTIONS(25),
    [aux_sym_c_type_token1] = ACTIONS(31),
    [aux_sym_c_type_token2] = ACTIONS(31),
    [aux_sym_c_type_token3] = ACTIONS(31),
    [aux_sym_c_type_token4] = ACTIONS(31),
    [aux_sym_c_type_token5] = ACTIONS(31),
    [aux_sym_c_type_token6] = ACTIONS(31),
    [aux_sym_c_type_token7] = ACTIONS(31),
    [aux_sym_c_type_token8] = ACTIONS(31),
    [aux_sym_c_type_token9] = ACTIONS(31),
    [aux_sym_c_type_token10] = ACTIONS(31),
    [aux_sym_c_type_token11] = ACTIONS(34),
    [aux_sym_c_type_token12] = ACTIONS(31),
    [aux_sym_c_type_token13] = ACTIONS(31),
    [aux_sym_c_type_token14] = ACTIONS(31),
    [aux_sym_c_type_token15] = ACTIONS(31),
    [aux_sym_c_type_token16] = ACTIONS(31),
    [aux_sym_c_type_token17] = ACTIONS(31),
    [aux_sym_c_type_token18] = ACTIONS(31),
    [aux_sym_c_type_token19] = ACTIONS(31),
    [aux_sym_c_type_token20] = ACTIONS(31),
    [aux_sym_c_type_token21] = ACTIONS(34),
    [aux_sym_c_type_token22] = ACTIONS(31),
    [aux_sym_c_type_token23] = ACTIONS(31),
    [aux_sym_c_type_token24] = ACTIONS(31),
    [aux_sym_c_type_token25] = ACTIONS(31),
    [aux_sym_c_type_token26] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(40),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [aux_sym_for_block_token1] = ACTIONS(46),
    [aux_sym_for_block_token3] = ACTIONS(49),
  },
  [6] = {
    [sym__token] = STATE(7),
    [sym_array_declaration] = STATE(7),
    [sym_c_declaration] = STATE(7),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(7),
    [sym_field] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_for_block] = STATE(7),
    [aux_sym_source_code_repeat1] = STATE(7),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [aux_sym_for_block_token1] = ACTIONS(19),
    [aux_sym_for_block_token2] = ACTIONS(62),
    [aux_sym_for_block_token3] = ACTIONS(21),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym_array_declaration] = STATE(4),
    [sym_c_declaration] = STATE(4),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(4),
    [sym_field] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_for_block] = STATE(4),
    [aux_sym_source_code_repeat1] = STATE(4),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [aux_sym_for_block_token1] = ACTIONS(19),
    [aux_sym_for_block_token2] = ACTIONS(64),
    [aux_sym_for_block_token3] = ACTIONS(21),
  },
  [8] = {
    [sym__token] = STATE(9),
    [sym_array_declaration] = STATE(9),
    [sym_c_declaration] = STATE(9),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(9),
    [sym_field] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_for_block] = STATE(9),
    [aux_sym_source_code_repeat1] = STATE(9),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [aux_sym_for_block_token1] = ACTIONS(19),
    [aux_sym_for_block_token3] = ACTIONS(21),
    [aux_sym_for_block_token4] = ACTIONS(62),
  },
  [9] = {
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(57),
    [sym_c_type] = STATE(58),
    [sym_table] = STATE(3),
    [sym_field] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_for_block] = STATE(3),
    [aux_sym_source_code_repeat1] = STATE(3),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [aux_sym_for_block_token1] = ACTIONS(19),
    [aux_sym_for_block_token3] = ACTIONS(21),
    [aux_sym_for_block_token4] = ACTIONS(64),
  },
  [10] = {
    [sym_storage_suffix] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym_array_type_token1] = ACTIONS(68),
    [aux_sym_array_type_token2] = ACTIONS(68),
    [aux_sym_array_type_token3] = ACTIONS(68),
    [aux_sym_array_type_token4] = ACTIONS(68),
    [aux_sym_array_type_token5] = ACTIONS(68),
    [aux_sym_array_type_token6] = ACTIONS(68),
    [aux_sym_array_type_token7] = ACTIONS(68),
    [aux_sym_array_type_token8] = ACTIONS(68),
    [aux_sym_array_type_token9] = ACTIONS(68),
    [aux_sym_array_type_token10] = ACTIONS(68),
    [aux_sym_array_type_token11] = ACTIONS(68),
    [aux_sym_array_type_token12] = ACTIONS(68),
    [aux_sym_array_type_token13] = ACTIONS(68),
    [aux_sym_array_type_token14] = ACTIONS(68),
    [aux_sym_array_type_token15] = ACTIONS(68),
    [aux_sym_array_type_token16] = ACTIONS(68),
    [aux_sym_array_type_token17] = ACTIONS(68),
    [aux_sym_array_type_token18] = ACTIONS(68),
    [aux_sym_array_type_token19] = ACTIONS(68),
    [aux_sym_array_type_token20] = ACTIONS(68),
    [aux_sym_array_type_token21] = ACTIONS(70),
    [aux_sym_array_type_token22] = ACTIONS(68),
    [aux_sym_array_type_token23] = ACTIONS(68),
    [aux_sym_array_type_token24] = ACTIONS(68),
    [aux_sym_c_type_token1] = ACTIONS(68),
    [aux_sym_c_type_token2] = ACTIONS(68),
    [aux_sym_c_type_token3] = ACTIONS(68),
    [aux_sym_c_type_token4] = ACTIONS(68),
    [aux_sym_c_type_token5] = ACTIONS(68),
    [aux_sym_c_type_token6] = ACTIONS(68),
    [aux_sym_c_type_token7] = ACTIONS(68),
    [aux_sym_c_type_token8] = ACTIONS(68),
    [aux_sym_c_type_token9] = ACTIONS(68),
    [aux_sym_c_type_token10] = ACTIONS(68),
    [aux_sym_c_type_token11] = ACTIONS(70),
    [aux_sym_c_type_token12] = ACTIONS(68),
    [aux_sym_c_type_token13] = ACTIONS(68),
    [aux_sym_c_type_token14] = ACTIONS(68),
    [aux_sym_c_type_token15] = ACTIONS(68),
    [aux_sym_c_type_token16] = ACTIONS(68),
    [aux_sym_c_type_token17] = ACTIONS(68),
    [aux_sym_c_type_token18] = ACTIONS(68),
    [aux_sym_c_type_token19] = ACTIONS(68),
    [aux_sym_c_type_token20] = ACTIONS(68),
    [aux_sym_c_type_token21] = ACTIONS(70),
    [aux_sym_c_type_token22] = ACTIONS(68),
    [aux_sym_c_type_token23] = ACTIONS(68),
    [aux_sym_c_type_token24] = ACTIONS(68),
    [aux_sym_c_type_token25] = ACTIONS(68),
    [aux_sym_c_type_token26] = ACTIONS(68),
    [aux_sym_storage_suffix_token1] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_SLASH_STAR] = ACTIONS(68),
    [aux_sym_for_block_token1] = ACTIONS(68),
    [aux_sym_for_block_token2] = ACTIONS(68),
    [aux_sym_for_block_token3] = ACTIONS(68),
    [aux_sym_for_block_token4] = ACTIONS(68),
  },
  [11] = {
    [sym_storage_suffix] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_array_type_token1] = ACTIONS(74),
    [aux_sym_array_type_token2] = ACTIONS(74),
    [aux_sym_array_type_token3] = ACTIONS(74),
    [aux_sym_array_type_token4] = ACTIONS(74),
    [aux_sym_array_type_token5] = ACTIONS(74),
    [aux_sym_array_type_token6] = ACTIONS(74),
    [aux_sym_array_type_token7] = ACTIONS(74),
    [aux_sym_array_type_token8] = ACTIONS(74),
    [aux_sym_array_type_token9] = ACTIONS(74),
    [aux_sym_array_type_token10] = ACTIONS(74),
    [aux_sym_array_type_token11] = ACTIONS(74),
    [aux_sym_array_type_token12] = ACTIONS(74),
    [aux_sym_array_type_token13] = ACTIONS(74),
    [aux_sym_array_type_token14] = ACTIONS(74),
    [aux_sym_array_type_token15] = ACTIONS(74),
    [aux_sym_array_type_token16] = ACTIONS(74),
    [aux_sym_array_type_token17] = ACTIONS(74),
    [aux_sym_array_type_token18] = ACTIONS(74),
    [aux_sym_array_type_token19] = ACTIONS(74),
    [aux_sym_array_type_token20] = ACTIONS(74),
    [aux_sym_array_type_token21] = ACTIONS(76),
    [aux_sym_array_type_token22] = ACTIONS(74),
    [aux_sym_array_type_token23] = ACTIONS(74),
    [aux_sym_array_type_token24] = ACTIONS(74),
    [aux_sym_c_type_token1] = ACTIONS(74),
    [aux_sym_c_type_token2] = ACTIONS(74),
    [aux_sym_c_type_token3] = ACTIONS(74),
    [aux_sym_c_type_token4] = ACTIONS(74),
    [aux_sym_c_type_token5] = ACTIONS(74),
    [aux_sym_c_type_token6] = ACTIONS(74),
    [aux_sym_c_type_token7] = ACTIONS(74),
    [aux_sym_c_type_token8] = ACTIONS(74),
    [aux_sym_c_type_token9] = ACTIONS(74),
    [aux_sym_c_type_token10] = ACTIONS(74),
    [aux_sym_c_type_token11] = ACTIONS(76),
    [aux_sym_c_type_token12] = ACTIONS(74),
    [aux_sym_c_type_token13] = ACTIONS(74),
    [aux_sym_c_type_token14] = ACTIONS(74),
    [aux_sym_c_type_token15] = ACTIONS(74),
    [aux_sym_c_type_token16] = ACTIONS(74),
    [aux_sym_c_type_token17] = ACTIONS(74),
    [aux_sym_c_type_token18] = ACTIONS(74),
    [aux_sym_c_type_token19] = ACTIONS(74),
    [aux_sym_c_type_token20] = ACTIONS(74),
    [aux_sym_c_type_token21] = ACTIONS(76),
    [aux_sym_c_type_token22] = ACTIONS(74),
    [aux_sym_c_type_token23] = ACTIONS(74),
    [aux_sym_c_type_token24] = ACTIONS(74),
    [aux_sym_c_type_token25] = ACTIONS(74),
    [aux_sym_c_type_token26] = ACTIONS(74),
    [aux_sym_storage_suffix_token1] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_STAR] = ACTIONS(74),
    [aux_sym_for_block_token1] = ACTIONS(74),
    [aux_sym_for_block_token2] = ACTIONS(74),
    [aux_sym_for_block_token3] = ACTIONS(74),
    [aux_sym_for_block_token4] = ACTIONS(74),
  },
  [12] = {
    [aux_sym_identifier_repeat1] = STATE(19),
    [aux_sym_array_type_token1] = ACTIONS(78),
    [aux_sym_array_type_token2] = ACTIONS(78),
    [aux_sym_array_type_token3] = ACTIONS(78),
    [aux_sym_array_type_token4] = ACTIONS(78),
    [aux_sym_array_type_token5] = ACTIONS(78),
    [aux_sym_array_type_token6] = ACTIONS(78),
    [aux_sym_array_type_token7] = ACTIONS(78),
    [aux_sym_array_type_token8] = ACTIONS(78),
    [aux_sym_array_type_token9] = ACTIONS(78),
    [aux_sym_array_type_token10] = ACTIONS(78),
    [aux_sym_array_type_token11] = ACTIONS(78),
    [aux_sym_array_type_token12] = ACTIONS(78),
    [aux_sym_array_type_token13] = ACTIONS(78),
    [aux_sym_array_type_token14] = ACTIONS(78),
    [aux_sym_array_type_token15] = ACTIONS(78),
    [aux_sym_array_type_token16] = ACTIONS(78),
    [aux_sym_array_type_token17] = ACTIONS(78),
    [aux_sym_array_type_token18] = ACTIONS(78),
    [aux_sym_array_type_token19] = ACTIONS(78),
    [aux_sym_array_type_token20] = ACTIONS(78),
    [aux_sym_array_type_token21] = ACTIONS(78),
    [aux_sym_array_type_token22] = ACTIONS(78),
    [aux_sym_array_type_token23] = ACTIONS(78),
    [aux_sym_array_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token1] = ACTIONS(78),
    [aux_sym_c_type_token2] = ACTIONS(78),
    [aux_sym_c_type_token3] = ACTIONS(78),
    [aux_sym_c_type_token4] = ACTIONS(78),
    [aux_sym_c_type_token5] = ACTIONS(78),
    [aux_sym_c_type_token6] = ACTIONS(78),
    [aux_sym_c_type_token7] = ACTIONS(78),
    [aux_sym_c_type_token8] = ACTIONS(78),
    [aux_sym_c_type_token9] = ACTIONS(78),
    [aux_sym_c_type_token10] = ACTIONS(78),
    [aux_sym_c_type_token11] = ACTIONS(78),
    [aux_sym_c_type_token12] = ACTIONS(78),
    [aux_sym_c_type_token13] = ACTIONS(78),
    [aux_sym_c_type_token14] = ACTIONS(78),
    [aux_sym_c_type_token15] = ACTIONS(78),
    [aux_sym_c_type_token16] = ACTIONS(78),
    [aux_sym_c_type_token17] = ACTIONS(78),
    [aux_sym_c_type_token18] = ACTIONS(78),
    [aux_sym_c_type_token19] = ACTIONS(78),
    [aux_sym_c_type_token20] = ACTIONS(78),
    [aux_sym_c_type_token21] = ACTIONS(78),
    [aux_sym_c_type_token22] = ACTIONS(78),
    [aux_sym_c_type_token23] = ACTIONS(78),
    [aux_sym_c_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token25] = ACTIONS(78),
    [aux_sym_c_type_token26] = ACTIONS(78),
    [aux_sym_identifier_token2] = ACTIONS(80),
    [aux_sym_storage_suffix_token1] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(78),
    [aux_sym_for_block_token1] = ACTIONS(78),
    [aux_sym_for_block_token2] = ACTIONS(78),
    [aux_sym_for_block_token3] = ACTIONS(78),
  },
  [13] = {
    [aux_sym_identifier_repeat1] = STATE(13),
    [aux_sym_array_type_token1] = ACTIONS(82),
    [aux_sym_array_type_token2] = ACTIONS(82),
    [aux_sym_array_type_token3] = ACTIONS(82),
    [aux_sym_array_type_token4] = ACTIONS(82),
    [aux_sym_array_type_token5] = ACTIONS(82),
    [aux_sym_array_type_token6] = ACTIONS(82),
    [aux_sym_array_type_token7] = ACTIONS(82),
    [aux_sym_array_type_token8] = ACTIONS(82),
    [aux_sym_array_type_token9] = ACTIONS(82),
    [aux_sym_array_type_token10] = ACTIONS(82),
    [aux_sym_array_type_token11] = ACTIONS(82),
    [aux_sym_array_type_token12] = ACTIONS(82),
    [aux_sym_array_type_token13] = ACTIONS(82),
    [aux_sym_array_type_token14] = ACTIONS(82),
    [aux_sym_array_type_token15] = ACTIONS(82),
    [aux_sym_array_type_token16] = ACTIONS(82),
    [aux_sym_array_type_token17] = ACTIONS(82),
    [aux_sym_array_type_token18] = ACTIONS(82),
    [aux_sym_array_type_token19] = ACTIONS(82),
    [aux_sym_array_type_token20] = ACTIONS(82),
    [aux_sym_array_type_token21] = ACTIONS(82),
    [aux_sym_array_type_token22] = ACTIONS(82),
    [aux_sym_array_type_token23] = ACTIONS(82),
    [aux_sym_array_type_token24] = ACTIONS(82),
    [aux_sym_c_type_token1] = ACTIONS(82),
    [aux_sym_c_type_token2] = ACTIONS(82),
    [aux_sym_c_type_token3] = ACTIONS(82),
    [aux_sym_c_type_token4] = ACTIONS(82),
    [aux_sym_c_type_token5] = ACTIONS(82),
    [aux_sym_c_type_token6] = ACTIONS(82),
    [aux_sym_c_type_token7] = ACTIONS(82),
    [aux_sym_c_type_token8] = ACTIONS(82),
    [aux_sym_c_type_token9] = ACTIONS(82),
    [aux_sym_c_type_token10] = ACTIONS(82),
    [aux_sym_c_type_token11] = ACTIONS(82),
    [aux_sym_c_type_token12] = ACTIONS(82),
    [aux_sym_c_type_token13] = ACTIONS(82),
    [aux_sym_c_type_token14] = ACTIONS(82),
    [aux_sym_c_type_token15] = ACTIONS(82),
    [aux_sym_c_type_token16] = ACTIONS(82),
    [aux_sym_c_type_token17] = ACTIONS(82),
    [aux_sym_c_type_token18] = ACTIONS(82),
    [aux_sym_c_type_token19] = ACTIONS(82),
    [aux_sym_c_type_token20] = ACTIONS(82),
    [aux_sym_c_type_token21] = ACTIONS(82),
    [aux_sym_c_type_token22] = ACTIONS(82),
    [aux_sym_c_type_token23] = ACTIONS(82),
    [aux_sym_c_type_token24] = ACTIONS(82),
    [aux_sym_c_type_token25] = ACTIONS(82),
    [aux_sym_c_type_token26] = ACTIONS(82),
    [aux_sym_identifier_token2] = ACTIONS(84),
    [aux_sym_storage_suffix_token1] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_STAR] = ACTIONS(82),
    [aux_sym_for_block_token1] = ACTIONS(82),
    [aux_sym_for_block_token3] = ACTIONS(82),
    [aux_sym_for_block_token4] = ACTIONS(82),
  },
  [14] = {
    [aux_sym_identifier_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_array_type_token1] = ACTIONS(82),
    [aux_sym_array_type_token2] = ACTIONS(82),
    [aux_sym_array_type_token3] = ACTIONS(82),
    [aux_sym_array_type_token4] = ACTIONS(82),
    [aux_sym_array_type_token5] = ACTIONS(82),
    [aux_sym_array_type_token6] = ACTIONS(82),
    [aux_sym_array_type_token7] = ACTIONS(82),
    [aux_sym_array_type_token8] = ACTIONS(82),
    [aux_sym_array_type_token9] = ACTIONS(82),
    [aux_sym_array_type_token10] = ACTIONS(82),
    [aux_sym_array_type_token11] = ACTIONS(82),
    [aux_sym_array_type_token12] = ACTIONS(82),
    [aux_sym_array_type_token13] = ACTIONS(82),
    [aux_sym_array_type_token14] = ACTIONS(82),
    [aux_sym_array_type_token15] = ACTIONS(82),
    [aux_sym_array_type_token16] = ACTIONS(82),
    [aux_sym_array_type_token17] = ACTIONS(82),
    [aux_sym_array_type_token18] = ACTIONS(82),
    [aux_sym_array_type_token19] = ACTIONS(82),
    [aux_sym_array_type_token20] = ACTIONS(82),
    [aux_sym_array_type_token21] = ACTIONS(82),
    [aux_sym_array_type_token22] = ACTIONS(82),
    [aux_sym_array_type_token23] = ACTIONS(82),
    [aux_sym_array_type_token24] = ACTIONS(82),
    [aux_sym_c_type_token1] = ACTIONS(82),
    [aux_sym_c_type_token2] = ACTIONS(82),
    [aux_sym_c_type_token3] = ACTIONS(82),
    [aux_sym_c_type_token4] = ACTIONS(82),
    [aux_sym_c_type_token5] = ACTIONS(82),
    [aux_sym_c_type_token6] = ACTIONS(82),
    [aux_sym_c_type_token7] = ACTIONS(82),
    [aux_sym_c_type_token8] = ACTIONS(82),
    [aux_sym_c_type_token9] = ACTIONS(82),
    [aux_sym_c_type_token10] = ACTIONS(82),
    [aux_sym_c_type_token11] = ACTIONS(82),
    [aux_sym_c_type_token12] = ACTIONS(82),
    [aux_sym_c_type_token13] = ACTIONS(82),
    [aux_sym_c_type_token14] = ACTIONS(82),
    [aux_sym_c_type_token15] = ACTIONS(82),
    [aux_sym_c_type_token16] = ACTIONS(82),
    [aux_sym_c_type_token17] = ACTIONS(82),
    [aux_sym_c_type_token18] = ACTIONS(82),
    [aux_sym_c_type_token19] = ACTIONS(82),
    [aux_sym_c_type_token20] = ACTIONS(82),
    [aux_sym_c_type_token21] = ACTIONS(82),
    [aux_sym_c_type_token22] = ACTIONS(82),
    [aux_sym_c_type_token23] = ACTIONS(82),
    [aux_sym_c_type_token24] = ACTIONS(82),
    [aux_sym_c_type_token25] = ACTIONS(82),
    [aux_sym_c_type_token26] = ACTIONS(82),
    [aux_sym_identifier_token2] = ACTIONS(89),
    [aux_sym_storage_suffix_token1] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_STAR] = ACTIONS(82),
    [aux_sym_for_block_token1] = ACTIONS(82),
    [aux_sym_for_block_token3] = ACTIONS(82),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_array_type_token1] = ACTIONS(92),
    [aux_sym_array_type_token2] = ACTIONS(92),
    [aux_sym_array_type_token3] = ACTIONS(92),
    [aux_sym_array_type_token4] = ACTIONS(92),
    [aux_sym_array_type_token5] = ACTIONS(92),
    [aux_sym_array_type_token6] = ACTIONS(92),
    [aux_sym_array_type_token7] = ACTIONS(92),
    [aux_sym_array_type_token8] = ACTIONS(92),
    [aux_sym_array_type_token9] = ACTIONS(92),
    [aux_sym_array_type_token10] = ACTIONS(92),
    [aux_sym_array_type_token11] = ACTIONS(92),
    [aux_sym_array_type_token12] = ACTIONS(92),
    [aux_sym_array_type_token13] = ACTIONS(92),
    [aux_sym_array_type_token14] = ACTIONS(92),
    [aux_sym_array_type_token15] = ACTIONS(92),
    [aux_sym_array_type_token16] = ACTIONS(92),
    [aux_sym_array_type_token17] = ACTIONS(92),
    [aux_sym_array_type_token18] = ACTIONS(92),
    [aux_sym_array_type_token19] = ACTIONS(92),
    [aux_sym_array_type_token20] = ACTIONS(92),
    [aux_sym_array_type_token21] = ACTIONS(94),
    [aux_sym_array_type_token22] = ACTIONS(92),
    [aux_sym_array_type_token23] = ACTIONS(92),
    [aux_sym_array_type_token24] = ACTIONS(92),
    [aux_sym_c_type_token1] = ACTIONS(92),
    [aux_sym_c_type_token2] = ACTIONS(92),
    [aux_sym_c_type_token3] = ACTIONS(92),
    [aux_sym_c_type_token4] = ACTIONS(92),
    [aux_sym_c_type_token5] = ACTIONS(92),
    [aux_sym_c_type_token6] = ACTIONS(92),
    [aux_sym_c_type_token7] = ACTIONS(92),
    [aux_sym_c_type_token8] = ACTIONS(92),
    [aux_sym_c_type_token9] = ACTIONS(92),
    [aux_sym_c_type_token10] = ACTIONS(92),
    [aux_sym_c_type_token11] = ACTIONS(94),
    [aux_sym_c_type_token12] = ACTIONS(92),
    [aux_sym_c_type_token13] = ACTIONS(92),
    [aux_sym_c_type_token14] = ACTIONS(92),
    [aux_sym_c_type_token15] = ACTIONS(92),
    [aux_sym_c_type_token16] = ACTIONS(92),
    [aux_sym_c_type_token17] = ACTIONS(92),
    [aux_sym_c_type_token18] = ACTIONS(92),
    [aux_sym_c_type_token19] = ACTIONS(92),
    [aux_sym_c_type_token20] = ACTIONS(92),
    [aux_sym_c_type_token21] = ACTIONS(94),
    [aux_sym_c_type_token22] = ACTIONS(92),
    [aux_sym_c_type_token23] = ACTIONS(92),
    [aux_sym_c_type_token24] = ACTIONS(92),
    [aux_sym_c_type_token25] = ACTIONS(92),
    [aux_sym_c_type_token26] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [anon_sym_SLASH_STAR] = ACTIONS(92),
    [aux_sym_for_block_token1] = ACTIONS(92),
    [aux_sym_for_block_token2] = ACTIONS(92),
    [aux_sym_for_block_token3] = ACTIONS(92),
    [aux_sym_for_block_token4] = ACTIONS(92),
  },
  [16] = {
    [aux_sym_identifier_repeat1] = STATE(12),
    [aux_sym_array_type_token1] = ACTIONS(96),
    [aux_sym_array_type_token2] = ACTIONS(96),
    [aux_sym_array_type_token3] = ACTIONS(96),
    [aux_sym_array_type_token4] = ACTIONS(96),
    [aux_sym_array_type_token5] = ACTIONS(96),
    [aux_sym_array_type_token6] = ACTIONS(96),
    [aux_sym_array_type_token7] = ACTIONS(96),
    [aux_sym_array_type_token8] = ACTIONS(96),
    [aux_sym_array_type_token9] = ACTIONS(96),
    [aux_sym_array_type_token10] = ACTIONS(96),
    [aux_sym_array_type_token11] = ACTIONS(96),
    [aux_sym_array_type_token12] = ACTIONS(96),
    [aux_sym_array_type_token13] = ACTIONS(96),
    [aux_sym_array_type_token14] = ACTIONS(96),
    [aux_sym_array_type_token15] = ACTIONS(96),
    [aux_sym_array_type_token16] = ACTIONS(96),
    [aux_sym_array_type_token17] = ACTIONS(96),
    [aux_sym_array_type_token18] = ACTIONS(96),
    [aux_sym_array_type_token19] = ACTIONS(96),
    [aux_sym_array_type_token20] = ACTIONS(96),
    [aux_sym_array_type_token21] = ACTIONS(96),
    [aux_sym_array_type_token22] = ACTIONS(96),
    [aux_sym_array_type_token23] = ACTIONS(96),
    [aux_sym_array_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token1] = ACTIONS(96),
    [aux_sym_c_type_token2] = ACTIONS(96),
    [aux_sym_c_type_token3] = ACTIONS(96),
    [aux_sym_c_type_token4] = ACTIONS(96),
    [aux_sym_c_type_token5] = ACTIONS(96),
    [aux_sym_c_type_token6] = ACTIONS(96),
    [aux_sym_c_type_token7] = ACTIONS(96),
    [aux_sym_c_type_token8] = ACTIONS(96),
    [aux_sym_c_type_token9] = ACTIONS(96),
    [aux_sym_c_type_token10] = ACTIONS(96),
    [aux_sym_c_type_token11] = ACTIONS(96),
    [aux_sym_c_type_token12] = ACTIONS(96),
    [aux_sym_c_type_token13] = ACTIONS(96),
    [aux_sym_c_type_token14] = ACTIONS(96),
    [aux_sym_c_type_token15] = ACTIONS(96),
    [aux_sym_c_type_token16] = ACTIONS(96),
    [aux_sym_c_type_token17] = ACTIONS(96),
    [aux_sym_c_type_token18] = ACTIONS(96),
    [aux_sym_c_type_token19] = ACTIONS(96),
    [aux_sym_c_type_token20] = ACTIONS(96),
    [aux_sym_c_type_token21] = ACTIONS(96),
    [aux_sym_c_type_token22] = ACTIONS(96),
    [aux_sym_c_type_token23] = ACTIONS(96),
    [aux_sym_c_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token25] = ACTIONS(96),
    [aux_sym_c_type_token26] = ACTIONS(96),
    [aux_sym_identifier_token2] = ACTIONS(98),
    [aux_sym_storage_suffix_token1] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_SLASH_STAR] = ACTIONS(96),
    [aux_sym_for_block_token1] = ACTIONS(96),
    [aux_sym_for_block_token2] = ACTIONS(96),
    [aux_sym_for_block_token3] = ACTIONS(96),
  },
  [17] = {
    [aux_sym_identifier_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_array_type_token1] = ACTIONS(78),
    [aux_sym_array_type_token2] = ACTIONS(78),
    [aux_sym_array_type_token3] = ACTIONS(78),
    [aux_sym_array_type_token4] = ACTIONS(78),
    [aux_sym_array_type_token5] = ACTIONS(78),
    [aux_sym_array_type_token6] = ACTIONS(78),
    [aux_sym_array_type_token7] = ACTIONS(78),
    [aux_sym_array_type_token8] = ACTIONS(78),
    [aux_sym_array_type_token9] = ACTIONS(78),
    [aux_sym_array_type_token10] = ACTIONS(78),
    [aux_sym_array_type_token11] = ACTIONS(78),
    [aux_sym_array_type_token12] = ACTIONS(78),
    [aux_sym_array_type_token13] = ACTIONS(78),
    [aux_sym_array_type_token14] = ACTIONS(78),
    [aux_sym_array_type_token15] = ACTIONS(78),
    [aux_sym_array_type_token16] = ACTIONS(78),
    [aux_sym_array_type_token17] = ACTIONS(78),
    [aux_sym_array_type_token18] = ACTIONS(78),
    [aux_sym_array_type_token19] = ACTIONS(78),
    [aux_sym_array_type_token20] = ACTIONS(78),
    [aux_sym_array_type_token21] = ACTIONS(78),
    [aux_sym_array_type_token22] = ACTIONS(78),
    [aux_sym_array_type_token23] = ACTIONS(78),
    [aux_sym_array_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token1] = ACTIONS(78),
    [aux_sym_c_type_token2] = ACTIONS(78),
    [aux_sym_c_type_token3] = ACTIONS(78),
    [aux_sym_c_type_token4] = ACTIONS(78),
    [aux_sym_c_type_token5] = ACTIONS(78),
    [aux_sym_c_type_token6] = ACTIONS(78),
    [aux_sym_c_type_token7] = ACTIONS(78),
    [aux_sym_c_type_token8] = ACTIONS(78),
    [aux_sym_c_type_token9] = ACTIONS(78),
    [aux_sym_c_type_token10] = ACTIONS(78),
    [aux_sym_c_type_token11] = ACTIONS(78),
    [aux_sym_c_type_token12] = ACTIONS(78),
    [aux_sym_c_type_token13] = ACTIONS(78),
    [aux_sym_c_type_token14] = ACTIONS(78),
    [aux_sym_c_type_token15] = ACTIONS(78),
    [aux_sym_c_type_token16] = ACTIONS(78),
    [aux_sym_c_type_token17] = ACTIONS(78),
    [aux_sym_c_type_token18] = ACTIONS(78),
    [aux_sym_c_type_token19] = ACTIONS(78),
    [aux_sym_c_type_token20] = ACTIONS(78),
    [aux_sym_c_type_token21] = ACTIONS(78),
    [aux_sym_c_type_token22] = ACTIONS(78),
    [aux_sym_c_type_token23] = ACTIONS(78),
    [aux_sym_c_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token25] = ACTIONS(78),
    [aux_sym_c_type_token26] = ACTIONS(78),
    [aux_sym_identifier_token2] = ACTIONS(102),
    [aux_sym_storage_suffix_token1] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(78),
    [aux_sym_for_block_token1] = ACTIONS(78),
    [aux_sym_for_block_token3] = ACTIONS(78),
  },
  [18] = {
    [aux_sym_identifier_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_array_type_token1] = ACTIONS(96),
    [aux_sym_array_type_token2] = ACTIONS(96),
    [aux_sym_array_type_token3] = ACTIONS(96),
    [aux_sym_array_type_token4] = ACTIONS(96),
    [aux_sym_array_type_token5] = ACTIONS(96),
    [aux_sym_array_type_token6] = ACTIONS(96),
    [aux_sym_array_type_token7] = ACTIONS(96),
    [aux_sym_array_type_token8] = ACTIONS(96),
    [aux_sym_array_type_token9] = ACTIONS(96),
    [aux_sym_array_type_token10] = ACTIONS(96),
    [aux_sym_array_type_token11] = ACTIONS(96),
    [aux_sym_array_type_token12] = ACTIONS(96),
    [aux_sym_array_type_token13] = ACTIONS(96),
    [aux_sym_array_type_token14] = ACTIONS(96),
    [aux_sym_array_type_token15] = ACTIONS(96),
    [aux_sym_array_type_token16] = ACTIONS(96),
    [aux_sym_array_type_token17] = ACTIONS(96),
    [aux_sym_array_type_token18] = ACTIONS(96),
    [aux_sym_array_type_token19] = ACTIONS(96),
    [aux_sym_array_type_token20] = ACTIONS(96),
    [aux_sym_array_type_token21] = ACTIONS(96),
    [aux_sym_array_type_token22] = ACTIONS(96),
    [aux_sym_array_type_token23] = ACTIONS(96),
    [aux_sym_array_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token1] = ACTIONS(96),
    [aux_sym_c_type_token2] = ACTIONS(96),
    [aux_sym_c_type_token3] = ACTIONS(96),
    [aux_sym_c_type_token4] = ACTIONS(96),
    [aux_sym_c_type_token5] = ACTIONS(96),
    [aux_sym_c_type_token6] = ACTIONS(96),
    [aux_sym_c_type_token7] = ACTIONS(96),
    [aux_sym_c_type_token8] = ACTIONS(96),
    [aux_sym_c_type_token9] = ACTIONS(96),
    [aux_sym_c_type_token10] = ACTIONS(96),
    [aux_sym_c_type_token11] = ACTIONS(96),
    [aux_sym_c_type_token12] = ACTIONS(96),
    [aux_sym_c_type_token13] = ACTIONS(96),
    [aux_sym_c_type_token14] = ACTIONS(96),
    [aux_sym_c_type_token15] = ACTIONS(96),
    [aux_sym_c_type_token16] = ACTIONS(96),
    [aux_sym_c_type_token17] = ACTIONS(96),
    [aux_sym_c_type_token18] = ACTIONS(96),
    [aux_sym_c_type_token19] = ACTIONS(96),
    [aux_sym_c_type_token20] = ACTIONS(96),
    [aux_sym_c_type_token21] = ACTIONS(96),
    [aux_sym_c_type_token22] = ACTIONS(96),
    [aux_sym_c_type_token23] = ACTIONS(96),
    [aux_sym_c_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token25] = ACTIONS(96),
    [aux_sym_c_type_token26] = ACTIONS(96),
    [aux_sym_identifier_token2] = ACTIONS(106),
    [aux_sym_storage_suffix_token1] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_SLASH_STAR] = ACTIONS(96),
    [aux_sym_for_block_token1] = ACTIONS(96),
    [aux_sym_for_block_token3] = ACTIONS(96),
  },
  [19] = {
    [aux_sym_identifier_repeat1] = STATE(19),
    [aux_sym_array_type_token1] = ACTIONS(82),
    [aux_sym_array_type_token2] = ACTIONS(82),
    [aux_sym_array_type_token3] = ACTIONS(82),
    [aux_sym_array_type_token4] = ACTIONS(82),
    [aux_sym_array_type_token5] = ACTIONS(82),
    [aux_sym_array_type_token6] = ACTIONS(82),
    [aux_sym_array_type_token7] = ACTIONS(82),
    [aux_sym_array_type_token8] = ACTIONS(82),
    [aux_sym_array_type_token9] = ACTIONS(82),
    [aux_sym_array_type_token10] = ACTIONS(82),
    [aux_sym_array_type_token11] = ACTIONS(82),
    [aux_sym_array_type_token12] = ACTIONS(82),
    [aux_sym_array_type_token13] = ACTIONS(82),
    [aux_sym_array_type_token14] = ACTIONS(82),
    [aux_sym_array_type_token15] = ACTIONS(82),
    [aux_sym_array_type_token16] = ACTIONS(82),
    [aux_sym_array_type_token17] = ACTIONS(82),
    [aux_sym_array_type_token18] = ACTIONS(82),
    [aux_sym_array_type_token19] = ACTIONS(82),
    [aux_sym_array_type_token20] = ACTIONS(82),
    [aux_sym_array_type_token21] = ACTIONS(82),
    [aux_sym_array_type_token22] = ACTIONS(82),
    [aux_sym_array_type_token23] = ACTIONS(82),
    [aux_sym_array_type_token24] = ACTIONS(82),
    [aux_sym_c_type_token1] = ACTIONS(82),
    [aux_sym_c_type_token2] = ACTIONS(82),
    [aux_sym_c_type_token3] = ACTIONS(82),
    [aux_sym_c_type_token4] = ACTIONS(82),
    [aux_sym_c_type_token5] = ACTIONS(82),
    [aux_sym_c_type_token6] = ACTIONS(82),
    [aux_sym_c_type_token7] = ACTIONS(82),
    [aux_sym_c_type_token8] = ACTIONS(82),
    [aux_sym_c_type_token9] = ACTIONS(82),
    [aux_sym_c_type_token10] = ACTIONS(82),
    [aux_sym_c_type_token11] = ACTIONS(82),
    [aux_sym_c_type_token12] = ACTIONS(82),
    [aux_sym_c_type_token13] = ACTIONS(82),
    [aux_sym_c_type_token14] = ACTIONS(82),
    [aux_sym_c_type_token15] = ACTIONS(82),
    [aux_sym_c_type_token16] = ACTIONS(82),
    [aux_sym_c_type_token17] = ACTIONS(82),
    [aux_sym_c_type_token18] = ACTIONS(82),
    [aux_sym_c_type_token19] = ACTIONS(82),
    [aux_sym_c_type_token20] = ACTIONS(82),
    [aux_sym_c_type_token21] = ACTIONS(82),
    [aux_sym_c_type_token22] = ACTIONS(82),
    [aux_sym_c_type_token23] = ACTIONS(82),
    [aux_sym_c_type_token24] = ACTIONS(82),
    [aux_sym_c_type_token25] = ACTIONS(82),
    [aux_sym_c_type_token26] = ACTIONS(82),
    [aux_sym_identifier_token2] = ACTIONS(108),
    [aux_sym_storage_suffix_token1] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_STAR] = ACTIONS(82),
    [aux_sym_for_block_token1] = ACTIONS(82),
    [aux_sym_for_block_token2] = ACTIONS(82),
    [aux_sym_for_block_token3] = ACTIONS(82),
  },
  [20] = {
    [aux_sym_identifier_repeat1] = STATE(21),
    [aux_sym_array_type_token1] = ACTIONS(96),
    [aux_sym_array_type_token2] = ACTIONS(96),
    [aux_sym_array_type_token3] = ACTIONS(96),
    [aux_sym_array_type_token4] = ACTIONS(96),
    [aux_sym_array_type_token5] = ACTIONS(96),
    [aux_sym_array_type_token6] = ACTIONS(96),
    [aux_sym_array_type_token7] = ACTIONS(96),
    [aux_sym_array_type_token8] = ACTIONS(96),
    [aux_sym_array_type_token9] = ACTIONS(96),
    [aux_sym_array_type_token10] = ACTIONS(96),
    [aux_sym_array_type_token11] = ACTIONS(96),
    [aux_sym_array_type_token12] = ACTIONS(96),
    [aux_sym_array_type_token13] = ACTIONS(96),
    [aux_sym_array_type_token14] = ACTIONS(96),
    [aux_sym_array_type_token15] = ACTIONS(96),
    [aux_sym_array_type_token16] = ACTIONS(96),
    [aux_sym_array_type_token17] = ACTIONS(96),
    [aux_sym_array_type_token18] = ACTIONS(96),
    [aux_sym_array_type_token19] = ACTIONS(96),
    [aux_sym_array_type_token20] = ACTIONS(96),
    [aux_sym_array_type_token21] = ACTIONS(96),
    [aux_sym_array_type_token22] = ACTIONS(96),
    [aux_sym_array_type_token23] = ACTIONS(96),
    [aux_sym_array_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token1] = ACTIONS(96),
    [aux_sym_c_type_token2] = ACTIONS(96),
    [aux_sym_c_type_token3] = ACTIONS(96),
    [aux_sym_c_type_token4] = ACTIONS(96),
    [aux_sym_c_type_token5] = ACTIONS(96),
    [aux_sym_c_type_token6] = ACTIONS(96),
    [aux_sym_c_type_token7] = ACTIONS(96),
    [aux_sym_c_type_token8] = ACTIONS(96),
    [aux_sym_c_type_token9] = ACTIONS(96),
    [aux_sym_c_type_token10] = ACTIONS(96),
    [aux_sym_c_type_token11] = ACTIONS(96),
    [aux_sym_c_type_token12] = ACTIONS(96),
    [aux_sym_c_type_token13] = ACTIONS(96),
    [aux_sym_c_type_token14] = ACTIONS(96),
    [aux_sym_c_type_token15] = ACTIONS(96),
    [aux_sym_c_type_token16] = ACTIONS(96),
    [aux_sym_c_type_token17] = ACTIONS(96),
    [aux_sym_c_type_token18] = ACTIONS(96),
    [aux_sym_c_type_token19] = ACTIONS(96),
    [aux_sym_c_type_token20] = ACTIONS(96),
    [aux_sym_c_type_token21] = ACTIONS(96),
    [aux_sym_c_type_token22] = ACTIONS(96),
    [aux_sym_c_type_token23] = ACTIONS(96),
    [aux_sym_c_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token25] = ACTIONS(96),
    [aux_sym_c_type_token26] = ACTIONS(96),
    [aux_sym_identifier_token2] = ACTIONS(111),
    [aux_sym_storage_suffix_token1] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_SLASH_STAR] = ACTIONS(96),
    [aux_sym_for_block_token1] = ACTIONS(96),
    [aux_sym_for_block_token3] = ACTIONS(96),
    [aux_sym_for_block_token4] = ACTIONS(96),
  },
  [21] = {
    [aux_sym_identifier_repeat1] = STATE(13),
    [aux_sym_array_type_token1] = ACTIONS(78),
    [aux_sym_array_type_token2] = ACTIONS(78),
    [aux_sym_array_type_token3] = ACTIONS(78),
    [aux_sym_array_type_token4] = ACTIONS(78),
    [aux_sym_array_type_token5] = ACTIONS(78),
    [aux_sym_array_type_token6] = ACTIONS(78),
    [aux_sym_array_type_token7] = ACTIONS(78),
    [aux_sym_array_type_token8] = ACTIONS(78),
    [aux_sym_array_type_token9] = ACTIONS(78),
    [aux_sym_array_type_token10] = ACTIONS(78),
    [aux_sym_array_type_token11] = ACTIONS(78),
    [aux_sym_array_type_token12] = ACTIONS(78),
    [aux_sym_array_type_token13] = ACTIONS(78),
    [aux_sym_array_type_token14] = ACTIONS(78),
    [aux_sym_array_type_token15] = ACTIONS(78),
    [aux_sym_array_type_token16] = ACTIONS(78),
    [aux_sym_array_type_token17] = ACTIONS(78),
    [aux_sym_array_type_token18] = ACTIONS(78),
    [aux_sym_array_type_token19] = ACTIONS(78),
    [aux_sym_array_type_token20] = ACTIONS(78),
    [aux_sym_array_type_token21] = ACTIONS(78),
    [aux_sym_array_type_token22] = ACTIONS(78),
    [aux_sym_array_type_token23] = ACTIONS(78),
    [aux_sym_array_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token1] = ACTIONS(78),
    [aux_sym_c_type_token2] = ACTIONS(78),
    [aux_sym_c_type_token3] = ACTIONS(78),
    [aux_sym_c_type_token4] = ACTIONS(78),
    [aux_sym_c_type_token5] = ACTIONS(78),
    [aux_sym_c_type_token6] = ACTIONS(78),
    [aux_sym_c_type_token7] = ACTIONS(78),
    [aux_sym_c_type_token8] = ACTIONS(78),
    [aux_sym_c_type_token9] = ACTIONS(78),
    [aux_sym_c_type_token10] = ACTIONS(78),
    [aux_sym_c_type_token11] = ACTIONS(78),
    [aux_sym_c_type_token12] = ACTIONS(78),
    [aux_sym_c_type_token13] = ACTIONS(78),
    [aux_sym_c_type_token14] = ACTIONS(78),
    [aux_sym_c_type_token15] = ACTIONS(78),
    [aux_sym_c_type_token16] = ACTIONS(78),
    [aux_sym_c_type_token17] = ACTIONS(78),
    [aux_sym_c_type_token18] = ACTIONS(78),
    [aux_sym_c_type_token19] = ACTIONS(78),
    [aux_sym_c_type_token20] = ACTIONS(78),
    [aux_sym_c_type_token21] = ACTIONS(78),
    [aux_sym_c_type_token22] = ACTIONS(78),
    [aux_sym_c_type_token23] = ACTIONS(78),
    [aux_sym_c_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token25] = ACTIONS(78),
    [aux_sym_c_type_token26] = ACTIONS(78),
    [aux_sym_identifier_token2] = ACTIONS(113),
    [aux_sym_storage_suffix_token1] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(78),
    [aux_sym_for_block_token1] = ACTIONS(78),
    [aux_sym_for_block_token3] = ACTIONS(78),
    [aux_sym_for_block_token4] = ACTIONS(78),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_array_type_token1] = ACTIONS(115),
    [aux_sym_array_type_token2] = ACTIONS(115),
    [aux_sym_array_type_token3] = ACTIONS(115),
    [aux_sym_array_type_token4] = ACTIONS(115),
    [aux_sym_array_type_token5] = ACTIONS(115),
    [aux_sym_array_type_token6] = ACTIONS(115),
    [aux_sym_array_type_token7] = ACTIONS(115),
    [aux_sym_array_type_token8] = ACTIONS(115),
    [aux_sym_array_type_token9] = ACTIONS(115),
    [aux_sym_array_type_token10] = ACTIONS(115),
    [aux_sym_array_type_token11] = ACTIONS(115),
    [aux_sym_array_type_token12] = ACTIONS(115),
    [aux_sym_array_type_token13] = ACTIONS(115),
    [aux_sym_array_type_token14] = ACTIONS(115),
    [aux_sym_array_type_token15] = ACTIONS(115),
    [aux_sym_array_type_token16] = ACTIONS(115),
    [aux_sym_array_type_token17] = ACTIONS(115),
    [aux_sym_array_type_token18] = ACTIONS(115),
    [aux_sym_array_type_token19] = ACTIONS(115),
    [aux_sym_array_type_token20] = ACTIONS(115),
    [aux_sym_array_type_token21] = ACTIONS(117),
    [aux_sym_array_type_token22] = ACTIONS(115),
    [aux_sym_array_type_token23] = ACTIONS(115),
    [aux_sym_array_type_token24] = ACTIONS(115),
    [aux_sym_c_type_token1] = ACTIONS(115),
    [aux_sym_c_type_token2] = ACTIONS(115),
    [aux_sym_c_type_token3] = ACTIONS(115),
    [aux_sym_c_type_token4] = ACTIONS(115),
    [aux_sym_c_type_token5] = ACTIONS(115),
    [aux_sym_c_type_token6] = ACTIONS(115),
    [aux_sym_c_type_token7] = ACTIONS(115),
    [aux_sym_c_type_token8] = ACTIONS(115),
    [aux_sym_c_type_token9] = ACTIONS(115),
    [aux_sym_c_type_token10] = ACTIONS(115),
    [aux_sym_c_type_token11] = ACTIONS(117),
    [aux_sym_c_type_token12] = ACTIONS(115),
    [aux_sym_c_type_token13] = ACTIONS(115),
    [aux_sym_c_type_token14] = ACTIONS(115),
    [aux_sym_c_type_token15] = ACTIONS(115),
    [aux_sym_c_type_token16] = ACTIONS(115),
    [aux_sym_c_type_token17] = ACTIONS(115),
    [aux_sym_c_type_token18] = ACTIONS(115),
    [aux_sym_c_type_token19] = ACTIONS(115),
    [aux_sym_c_type_token20] = ACTIONS(115),
    [aux_sym_c_type_token21] = ACTIONS(117),
    [aux_sym_c_type_token22] = ACTIONS(115),
    [aux_sym_c_type_token23] = ACTIONS(115),
    [aux_sym_c_type_token24] = ACTIONS(115),
    [aux_sym_c_type_token25] = ACTIONS(115),
    [aux_sym_c_type_token26] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_SLASH_STAR] = ACTIONS(115),
    [aux_sym_for_block_token1] = ACTIONS(115),
    [aux_sym_for_block_token2] = ACTIONS(115),
    [aux_sym_for_block_token3] = ACTIONS(115),
    [aux_sym_for_block_token4] = ACTIONS(115),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_array_type_token1] = ACTIONS(119),
    [aux_sym_array_type_token2] = ACTIONS(119),
    [aux_sym_array_type_token3] = ACTIONS(119),
    [aux_sym_array_type_token4] = ACTIONS(119),
    [aux_sym_array_type_token5] = ACTIONS(119),
    [aux_sym_array_type_token6] = ACTIONS(119),
    [aux_sym_array_type_token7] = ACTIONS(119),
    [aux_sym_array_type_token8] = ACTIONS(119),
    [aux_sym_array_type_token9] = ACTIONS(119),
    [aux_sym_array_type_token10] = ACTIONS(119),
    [aux_sym_array_type_token11] = ACTIONS(119),
    [aux_sym_array_type_token12] = ACTIONS(119),
    [aux_sym_array_type_token13] = ACTIONS(119),
    [aux_sym_array_type_token14] = ACTIONS(119),
    [aux_sym_array_type_token15] = ACTIONS(119),
    [aux_sym_array_type_token16] = ACTIONS(119),
    [aux_sym_array_type_token17] = ACTIONS(119),
    [aux_sym_array_type_token18] = ACTIONS(119),
    [aux_sym_array_type_token19] = ACTIONS(119),
    [aux_sym_array_type_token20] = ACTIONS(119),
    [aux_sym_array_type_token21] = ACTIONS(121),
    [aux_sym_array_type_token22] = ACTIONS(119),
    [aux_sym_array_type_token23] = ACTIONS(119),
    [aux_sym_array_type_token24] = ACTIONS(119),
    [aux_sym_c_type_token1] = ACTIONS(119),
    [aux_sym_c_type_token2] = ACTIONS(119),
    [aux_sym_c_type_token3] = ACTIONS(119),
    [aux_sym_c_type_token4] = ACTIONS(119),
    [aux_sym_c_type_token5] = ACTIONS(119),
    [aux_sym_c_type_token6] = ACTIONS(119),
    [aux_sym_c_type_token7] = ACTIONS(119),
    [aux_sym_c_type_token8] = ACTIONS(119),
    [aux_sym_c_type_token9] = ACTIONS(119),
    [aux_sym_c_type_token10] = ACTIONS(119),
    [aux_sym_c_type_token11] = ACTIONS(121),
    [aux_sym_c_type_token12] = ACTIONS(119),
    [aux_sym_c_type_token13] = ACTIONS(119),
    [aux_sym_c_type_token14] = ACTIONS(119),
    [aux_sym_c_type_token15] = ACTIONS(119),
    [aux_sym_c_type_token16] = ACTIONS(119),
    [aux_sym_c_type_token17] = ACTIONS(119),
    [aux_sym_c_type_token18] = ACTIONS(119),
    [aux_sym_c_type_token19] = ACTIONS(119),
    [aux_sym_c_type_token20] = ACTIONS(119),
    [aux_sym_c_type_token21] = ACTIONS(121),
    [aux_sym_c_type_token22] = ACTIONS(119),
    [aux_sym_c_type_token23] = ACTIONS(119),
    [aux_sym_c_type_token24] = ACTIONS(119),
    [aux_sym_c_type_token25] = ACTIONS(119),
    [aux_sym_c_type_token26] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_STAR] = ACTIONS(119),
    [aux_sym_for_block_token1] = ACTIONS(119),
    [aux_sym_for_block_token2] = ACTIONS(119),
    [aux_sym_for_block_token3] = ACTIONS(119),
    [aux_sym_for_block_token4] = ACTIONS(119),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [aux_sym_array_type_token1] = ACTIONS(123),
    [aux_sym_array_type_token2] = ACTIONS(123),
    [aux_sym_array_type_token3] = ACTIONS(123),
    [aux_sym_array_type_token4] = ACTIONS(123),
    [aux_sym_array_type_token5] = ACTIONS(123),
    [aux_sym_array_type_token6] = ACTIONS(123),
    [aux_sym_array_type_token7] = ACTIONS(123),
    [aux_sym_array_type_token8] = ACTIONS(123),
    [aux_sym_array_type_token9] = ACTIONS(123),
    [aux_sym_array_type_token10] = ACTIONS(123),
    [aux_sym_array_type_token11] = ACTIONS(123),
    [aux_sym_array_type_token12] = ACTIONS(123),
    [aux_sym_array_type_token13] = ACTIONS(123),
    [aux_sym_array_type_token14] = ACTIONS(123),
    [aux_sym_array_type_token15] = ACTIONS(123),
    [aux_sym_array_type_token16] = ACTIONS(123),
    [aux_sym_array_type_token17] = ACTIONS(123),
    [aux_sym_array_type_token18] = ACTIONS(123),
    [aux_sym_array_type_token19] = ACTIONS(123),
    [aux_sym_array_type_token20] = ACTIONS(123),
    [aux_sym_array_type_token21] = ACTIONS(125),
    [aux_sym_array_type_token22] = ACTIONS(123),
    [aux_sym_array_type_token23] = ACTIONS(123),
    [aux_sym_array_type_token24] = ACTIONS(123),
    [aux_sym_c_type_token1] = ACTIONS(123),
    [aux_sym_c_type_token2] = ACTIONS(123),
    [aux_sym_c_type_token3] = ACTIONS(123),
    [aux_sym_c_type_token4] = ACTIONS(123),
    [aux_sym_c_type_token5] = ACTIONS(123),
    [aux_sym_c_type_token6] = ACTIONS(123),
    [aux_sym_c_type_token7] = ACTIONS(123),
    [aux_sym_c_type_token8] = ACTIONS(123),
    [aux_sym_c_type_token9] = ACTIONS(123),
    [aux_sym_c_type_token10] = ACTIONS(123),
    [aux_sym_c_type_token11] = ACTIONS(125),
    [aux_sym_c_type_token12] = ACTIONS(123),
    [aux_sym_c_type_token13] = ACTIONS(123),
    [aux_sym_c_type_token14] = ACTIONS(123),
    [aux_sym_c_type_token15] = ACTIONS(123),
    [aux_sym_c_type_token16] = ACTIONS(123),
    [aux_sym_c_type_token17] = ACTIONS(123),
    [aux_sym_c_type_token18] = ACTIONS(123),
    [aux_sym_c_type_token19] = ACTIONS(123),
    [aux_sym_c_type_token20] = ACTIONS(123),
    [aux_sym_c_type_token21] = ACTIONS(125),
    [aux_sym_c_type_token22] = ACTIONS(123),
    [aux_sym_c_type_token23] = ACTIONS(123),
    [aux_sym_c_type_token24] = ACTIONS(123),
    [aux_sym_c_type_token25] = ACTIONS(123),
    [aux_sym_c_type_token26] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_SLASH_SLASH] = ACTIONS(123),
    [anon_sym_SLASH_STAR] = ACTIONS(123),
    [aux_sym_for_block_token1] = ACTIONS(123),
    [aux_sym_for_block_token2] = ACTIONS(123),
    [aux_sym_for_block_token3] = ACTIONS(123),
    [aux_sym_for_block_token4] = ACTIONS(123),
  },
  [25] = {
    [sym_identifier] = STATE(11),
    [aux_sym_array_type_token1] = ACTIONS(127),
    [aux_sym_array_type_token2] = ACTIONS(127),
    [aux_sym_array_type_token3] = ACTIONS(127),
    [aux_sym_array_type_token4] = ACTIONS(127),
    [aux_sym_array_type_token5] = ACTIONS(127),
    [aux_sym_array_type_token6] = ACTIONS(127),
    [aux_sym_array_type_token7] = ACTIONS(127),
    [aux_sym_array_type_token8] = ACTIONS(127),
    [aux_sym_array_type_token9] = ACTIONS(127),
    [aux_sym_array_type_token10] = ACTIONS(127),
    [aux_sym_array_type_token11] = ACTIONS(127),
    [aux_sym_array_type_token12] = ACTIONS(127),
    [aux_sym_array_type_token13] = ACTIONS(127),
    [aux_sym_array_type_token14] = ACTIONS(127),
    [aux_sym_array_type_token15] = ACTIONS(127),
    [aux_sym_array_type_token16] = ACTIONS(127),
    [aux_sym_array_type_token17] = ACTIONS(127),
    [aux_sym_array_type_token18] = ACTIONS(127),
    [aux_sym_array_type_token19] = ACTIONS(127),
    [aux_sym_array_type_token20] = ACTIONS(127),
    [aux_sym_array_type_token21] = ACTIONS(129),
    [aux_sym_array_type_token22] = ACTIONS(127),
    [aux_sym_array_type_token23] = ACTIONS(127),
    [aux_sym_array_type_token24] = ACTIONS(127),
    [aux_sym_c_type_token1] = ACTIONS(127),
    [aux_sym_c_type_token2] = ACTIONS(127),
    [aux_sym_c_type_token3] = ACTIONS(127),
    [aux_sym_c_type_token4] = ACTIONS(127),
    [aux_sym_c_type_token5] = ACTIONS(127),
    [aux_sym_c_type_token6] = ACTIONS(127),
    [aux_sym_c_type_token7] = ACTIONS(127),
    [aux_sym_c_type_token8] = ACTIONS(127),
    [aux_sym_c_type_token9] = ACTIONS(127),
    [aux_sym_c_type_token10] = ACTIONS(127),
    [aux_sym_c_type_token11] = ACTIONS(129),
    [aux_sym_c_type_token12] = ACTIONS(127),
    [aux_sym_c_type_token13] = ACTIONS(127),
    [aux_sym_c_type_token14] = ACTIONS(127),
    [aux_sym_c_type_token15] = ACTIONS(127),
    [aux_sym_c_type_token16] = ACTIONS(127),
    [aux_sym_c_type_token17] = ACTIONS(127),
    [aux_sym_c_type_token18] = ACTIONS(127),
    [aux_sym_c_type_token19] = ACTIONS(127),
    [aux_sym_c_type_token20] = ACTIONS(127),
    [aux_sym_c_type_token21] = ACTIONS(129),
    [aux_sym_c_type_token22] = ACTIONS(127),
    [aux_sym_c_type_token23] = ACTIONS(127),
    [aux_sym_c_type_token24] = ACTIONS(127),
    [aux_sym_c_type_token25] = ACTIONS(127),
    [aux_sym_c_type_token26] = ACTIONS(127),
    [aux_sym_identifier_token1] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(127),
    [anon_sym_SLASH_STAR] = ACTIONS(127),
    [aux_sym_for_block_token1] = ACTIONS(127),
    [aux_sym_for_block_token3] = ACTIONS(127),
    [aux_sym_for_block_token4] = ACTIONS(127),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_array_type_token1] = ACTIONS(133),
    [aux_sym_array_type_token2] = ACTIONS(133),
    [aux_sym_array_type_token3] = ACTIONS(133),
    [aux_sym_array_type_token4] = ACTIONS(133),
    [aux_sym_array_type_token5] = ACTIONS(133),
    [aux_sym_array_type_token6] = ACTIONS(133),
    [aux_sym_array_type_token7] = ACTIONS(133),
    [aux_sym_array_type_token8] = ACTIONS(133),
    [aux_sym_array_type_token9] = ACTIONS(133),
    [aux_sym_array_type_token10] = ACTIONS(133),
    [aux_sym_array_type_token11] = ACTIONS(133),
    [aux_sym_array_type_token12] = ACTIONS(133),
    [aux_sym_array_type_token13] = ACTIONS(133),
    [aux_sym_array_type_token14] = ACTIONS(133),
    [aux_sym_array_type_token15] = ACTIONS(133),
    [aux_sym_array_type_token16] = ACTIONS(133),
    [aux_sym_array_type_token17] = ACTIONS(133),
    [aux_sym_array_type_token18] = ACTIONS(133),
    [aux_sym_array_type_token19] = ACTIONS(133),
    [aux_sym_array_type_token20] = ACTIONS(133),
    [aux_sym_array_type_token21] = ACTIONS(135),
    [aux_sym_array_type_token22] = ACTIONS(133),
    [aux_sym_array_type_token23] = ACTIONS(133),
    [aux_sym_array_type_token24] = ACTIONS(133),
    [aux_sym_c_type_token1] = ACTIONS(133),
    [aux_sym_c_type_token2] = ACTIONS(133),
    [aux_sym_c_type_token3] = ACTIONS(133),
    [aux_sym_c_type_token4] = ACTIONS(133),
    [aux_sym_c_type_token5] = ACTIONS(133),
    [aux_sym_c_type_token6] = ACTIONS(133),
    [aux_sym_c_type_token7] = ACTIONS(133),
    [aux_sym_c_type_token8] = ACTIONS(133),
    [aux_sym_c_type_token9] = ACTIONS(133),
    [aux_sym_c_type_token10] = ACTIONS(133),
    [aux_sym_c_type_token11] = ACTIONS(135),
    [aux_sym_c_type_token12] = ACTIONS(133),
    [aux_sym_c_type_token13] = ACTIONS(133),
    [aux_sym_c_type_token14] = ACTIONS(133),
    [aux_sym_c_type_token15] = ACTIONS(133),
    [aux_sym_c_type_token16] = ACTIONS(133),
    [aux_sym_c_type_token17] = ACTIONS(133),
    [aux_sym_c_type_token18] = ACTIONS(133),
    [aux_sym_c_type_token19] = ACTIONS(133),
    [aux_sym_c_type_token20] = ACTIONS(133),
    [aux_sym_c_type_token21] = ACTIONS(135),
    [aux_sym_c_type_token22] = ACTIONS(133),
    [aux_sym_c_type_token23] = ACTIONS(133),
    [aux_sym_c_type_token24] = ACTIONS(133),
    [aux_sym_c_type_token25] = ACTIONS(133),
    [aux_sym_c_type_token26] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(133),
    [anon_sym_SLASH_STAR] = ACTIONS(133),
    [aux_sym_for_block_token1] = ACTIONS(133),
    [aux_sym_for_block_token2] = ACTIONS(133),
    [aux_sym_for_block_token3] = ACTIONS(133),
    [aux_sym_for_block_token4] = ACTIONS(133),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_array_type_token1] = ACTIONS(137),
    [aux_sym_array_type_token2] = ACTIONS(137),
    [aux_sym_array_type_token3] = ACTIONS(137),
    [aux_sym_array_type_token4] = ACTIONS(137),
    [aux_sym_array_type_token5] = ACTIONS(137),
    [aux_sym_array_type_token6] = ACTIONS(137),
    [aux_sym_array_type_token7] = ACTIONS(137),
    [aux_sym_array_type_token8] = ACTIONS(137),
    [aux_sym_array_type_token9] = ACTIONS(137),
    [aux_sym_array_type_token10] = ACTIONS(137),
    [aux_sym_array_type_token11] = ACTIONS(137),
    [aux_sym_array_type_token12] = ACTIONS(137),
    [aux_sym_array_type_token13] = ACTIONS(137),
    [aux_sym_array_type_token14] = ACTIONS(137),
    [aux_sym_array_type_token15] = ACTIONS(137),
    [aux_sym_array_type_token16] = ACTIONS(137),
    [aux_sym_array_type_token17] = ACTIONS(137),
    [aux_sym_array_type_token18] = ACTIONS(137),
    [aux_sym_array_type_token19] = ACTIONS(137),
    [aux_sym_array_type_token20] = ACTIONS(137),
    [aux_sym_array_type_token21] = ACTIONS(139),
    [aux_sym_array_type_token22] = ACTIONS(137),
    [aux_sym_array_type_token23] = ACTIONS(137),
    [aux_sym_array_type_token24] = ACTIONS(137),
    [aux_sym_c_type_token1] = ACTIONS(137),
    [aux_sym_c_type_token2] = ACTIONS(137),
    [aux_sym_c_type_token3] = ACTIONS(137),
    [aux_sym_c_type_token4] = ACTIONS(137),
    [aux_sym_c_type_token5] = ACTIONS(137),
    [aux_sym_c_type_token6] = ACTIONS(137),
    [aux_sym_c_type_token7] = ACTIONS(137),
    [aux_sym_c_type_token8] = ACTIONS(137),
    [aux_sym_c_type_token9] = ACTIONS(137),
    [aux_sym_c_type_token10] = ACTIONS(137),
    [aux_sym_c_type_token11] = ACTIONS(139),
    [aux_sym_c_type_token12] = ACTIONS(137),
    [aux_sym_c_type_token13] = ACTIONS(137),
    [aux_sym_c_type_token14] = ACTIONS(137),
    [aux_sym_c_type_token15] = ACTIONS(137),
    [aux_sym_c_type_token16] = ACTIONS(137),
    [aux_sym_c_type_token17] = ACTIONS(137),
    [aux_sym_c_type_token18] = ACTIONS(137),
    [aux_sym_c_type_token19] = ACTIONS(137),
    [aux_sym_c_type_token20] = ACTIONS(137),
    [aux_sym_c_type_token21] = ACTIONS(139),
    [aux_sym_c_type_token22] = ACTIONS(137),
    [aux_sym_c_type_token23] = ACTIONS(137),
    [aux_sym_c_type_token24] = ACTIONS(137),
    [aux_sym_c_type_token25] = ACTIONS(137),
    [aux_sym_c_type_token26] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(137),
    [anon_sym_SLASH_STAR] = ACTIONS(137),
    [aux_sym_for_block_token1] = ACTIONS(137),
    [aux_sym_for_block_token2] = ACTIONS(137),
    [aux_sym_for_block_token3] = ACTIONS(137),
    [aux_sym_for_block_token4] = ACTIONS(137),
  },
  [28] = {
    [sym_identifier] = STATE(10),
    [aux_sym_array_type_token1] = ACTIONS(141),
    [aux_sym_array_type_token2] = ACTIONS(141),
    [aux_sym_array_type_token3] = ACTIONS(141),
    [aux_sym_array_type_token4] = ACTIONS(141),
    [aux_sym_array_type_token5] = ACTIONS(141),
    [aux_sym_array_type_token6] = ACTIONS(141),
    [aux_sym_array_type_token7] = ACTIONS(141),
    [aux_sym_array_type_token8] = ACTIONS(141),
    [aux_sym_array_type_token9] = ACTIONS(141),
    [aux_sym_array_type_token10] = ACTIONS(141),
    [aux_sym_array_type_token11] = ACTIONS(141),
    [aux_sym_array_type_token12] = ACTIONS(141),
    [aux_sym_array_type_token13] = ACTIONS(141),
    [aux_sym_array_type_token14] = ACTIONS(141),
    [aux_sym_array_type_token15] = ACTIONS(141),
    [aux_sym_array_type_token16] = ACTIONS(141),
    [aux_sym_array_type_token17] = ACTIONS(141),
    [aux_sym_array_type_token18] = ACTIONS(141),
    [aux_sym_array_type_token19] = ACTIONS(141),
    [aux_sym_array_type_token20] = ACTIONS(141),
    [aux_sym_array_type_token21] = ACTIONS(143),
    [aux_sym_array_type_token22] = ACTIONS(141),
    [aux_sym_array_type_token23] = ACTIONS(141),
    [aux_sym_array_type_token24] = ACTIONS(141),
    [aux_sym_c_type_token1] = ACTIONS(141),
    [aux_sym_c_type_token2] = ACTIONS(141),
    [aux_sym_c_type_token3] = ACTIONS(141),
    [aux_sym_c_type_token4] = ACTIONS(141),
    [aux_sym_c_type_token5] = ACTIONS(141),
    [aux_sym_c_type_token6] = ACTIONS(141),
    [aux_sym_c_type_token7] = ACTIONS(141),
    [aux_sym_c_type_token8] = ACTIONS(141),
    [aux_sym_c_type_token9] = ACTIONS(141),
    [aux_sym_c_type_token10] = ACTIONS(141),
    [aux_sym_c_type_token11] = ACTIONS(143),
    [aux_sym_c_type_token12] = ACTIONS(141),
    [aux_sym_c_type_token13] = ACTIONS(141),
    [aux_sym_c_type_token14] = ACTIONS(141),
    [aux_sym_c_type_token15] = ACTIONS(141),
    [aux_sym_c_type_token16] = ACTIONS(141),
    [aux_sym_c_type_token17] = ACTIONS(141),
    [aux_sym_c_type_token18] = ACTIONS(141),
    [aux_sym_c_type_token19] = ACTIONS(141),
    [aux_sym_c_type_token20] = ACTIONS(141),
    [aux_sym_c_type_token21] = ACTIONS(143),
    [aux_sym_c_type_token22] = ACTIONS(141),
    [aux_sym_c_type_token23] = ACTIONS(141),
    [aux_sym_c_type_token24] = ACTIONS(141),
    [aux_sym_c_type_token25] = ACTIONS(141),
    [aux_sym_c_type_token26] = ACTIONS(141),
    [aux_sym_identifier_token1] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(141),
    [aux_sym_for_block_token1] = ACTIONS(141),
    [aux_sym_for_block_token2] = ACTIONS(141),
    [aux_sym_for_block_token3] = ACTIONS(141),
  },
  [29] = {
    [sym_identifier] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_array_type_token1] = ACTIONS(141),
    [aux_sym_array_type_token2] = ACTIONS(141),
    [aux_sym_array_type_token3] = ACTIONS(141),
    [aux_sym_array_type_token4] = ACTIONS(141),
    [aux_sym_array_type_token5] = ACTIONS(141),
    [aux_sym_array_type_token6] = ACTIONS(141),
    [aux_sym_array_type_token7] = ACTIONS(141),
    [aux_sym_array_type_token8] = ACTIONS(141),
    [aux_sym_array_type_token9] = ACTIONS(141),
    [aux_sym_array_type_token10] = ACTIONS(141),
    [aux_sym_array_type_token11] = ACTIONS(141),
    [aux_sym_array_type_token12] = ACTIONS(141),
    [aux_sym_array_type_token13] = ACTIONS(141),
    [aux_sym_array_type_token14] = ACTIONS(141),
    [aux_sym_array_type_token15] = ACTIONS(141),
    [aux_sym_array_type_token16] = ACTIONS(141),
    [aux_sym_array_type_token17] = ACTIONS(141),
    [aux_sym_array_type_token18] = ACTIONS(141),
    [aux_sym_array_type_token19] = ACTIONS(141),
    [aux_sym_array_type_token20] = ACTIONS(141),
    [aux_sym_array_type_token21] = ACTIONS(143),
    [aux_sym_array_type_token22] = ACTIONS(141),
    [aux_sym_array_type_token23] = ACTIONS(141),
    [aux_sym_array_type_token24] = ACTIONS(141),
    [aux_sym_c_type_token1] = ACTIONS(141),
    [aux_sym_c_type_token2] = ACTIONS(141),
    [aux_sym_c_type_token3] = ACTIONS(141),
    [aux_sym_c_type_token4] = ACTIONS(141),
    [aux_sym_c_type_token5] = ACTIONS(141),
    [aux_sym_c_type_token6] = ACTIONS(141),
    [aux_sym_c_type_token7] = ACTIONS(141),
    [aux_sym_c_type_token8] = ACTIONS(141),
    [aux_sym_c_type_token9] = ACTIONS(141),
    [aux_sym_c_type_token10] = ACTIONS(141),
    [aux_sym_c_type_token11] = ACTIONS(143),
    [aux_sym_c_type_token12] = ACTIONS(141),
    [aux_sym_c_type_token13] = ACTIONS(141),
    [aux_sym_c_type_token14] = ACTIONS(141),
    [aux_sym_c_type_token15] = ACTIONS(141),
    [aux_sym_c_type_token16] = ACTIONS(141),
    [aux_sym_c_type_token17] = ACTIONS(141),
    [aux_sym_c_type_token18] = ACTIONS(141),
    [aux_sym_c_type_token19] = ACTIONS(141),
    [aux_sym_c_type_token20] = ACTIONS(141),
    [aux_sym_c_type_token21] = ACTIONS(143),
    [aux_sym_c_type_token22] = ACTIONS(141),
    [aux_sym_c_type_token23] = ACTIONS(141),
    [aux_sym_c_type_token24] = ACTIONS(141),
    [aux_sym_c_type_token25] = ACTIONS(141),
    [aux_sym_c_type_token26] = ACTIONS(141),
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(141),
    [aux_sym_for_block_token1] = ACTIONS(141),
    [aux_sym_for_block_token3] = ACTIONS(141),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_array_type_token1] = ACTIONS(149),
    [aux_sym_array_type_token2] = ACTIONS(149),
    [aux_sym_array_type_token3] = ACTIONS(149),
    [aux_sym_array_type_token4] = ACTIONS(149),
    [aux_sym_array_type_token5] = ACTIONS(149),
    [aux_sym_array_type_token6] = ACTIONS(149),
    [aux_sym_array_type_token7] = ACTIONS(149),
    [aux_sym_array_type_token8] = ACTIONS(149),
    [aux_sym_array_type_token9] = ACTIONS(149),
    [aux_sym_array_type_token10] = ACTIONS(149),
    [aux_sym_array_type_token11] = ACTIONS(149),
    [aux_sym_array_type_token12] = ACTIONS(149),
    [aux_sym_array_type_token13] = ACTIONS(149),
    [aux_sym_array_type_token14] = ACTIONS(149),
    [aux_sym_array_type_token15] = ACTIONS(149),
    [aux_sym_array_type_token16] = ACTIONS(149),
    [aux_sym_array_type_token17] = ACTIONS(149),
    [aux_sym_array_type_token18] = ACTIONS(149),
    [aux_sym_array_type_token19] = ACTIONS(149),
    [aux_sym_array_type_token20] = ACTIONS(149),
    [aux_sym_array_type_token21] = ACTIONS(151),
    [aux_sym_array_type_token22] = ACTIONS(149),
    [aux_sym_array_type_token23] = ACTIONS(149),
    [aux_sym_array_type_token24] = ACTIONS(149),
    [aux_sym_c_type_token1] = ACTIONS(149),
    [aux_sym_c_type_token2] = ACTIONS(149),
    [aux_sym_c_type_token3] = ACTIONS(149),
    [aux_sym_c_type_token4] = ACTIONS(149),
    [aux_sym_c_type_token5] = ACTIONS(149),
    [aux_sym_c_type_token6] = ACTIONS(149),
    [aux_sym_c_type_token7] = ACTIONS(149),
    [aux_sym_c_type_token8] = ACTIONS(149),
    [aux_sym_c_type_token9] = ACTIONS(149),
    [aux_sym_c_type_token10] = ACTIONS(149),
    [aux_sym_c_type_token11] = ACTIONS(151),
    [aux_sym_c_type_token12] = ACTIONS(149),
    [aux_sym_c_type_token13] = ACTIONS(149),
    [aux_sym_c_type_token14] = ACTIONS(149),
    [aux_sym_c_type_token15] = ACTIONS(149),
    [aux_sym_c_type_token16] = ACTIONS(149),
    [aux_sym_c_type_token17] = ACTIONS(149),
    [aux_sym_c_type_token18] = ACTIONS(149),
    [aux_sym_c_type_token19] = ACTIONS(149),
    [aux_sym_c_type_token20] = ACTIONS(149),
    [aux_sym_c_type_token21] = ACTIONS(151),
    [aux_sym_c_type_token22] = ACTIONS(149),
    [aux_sym_c_type_token23] = ACTIONS(149),
    [aux_sym_c_type_token24] = ACTIONS(149),
    [aux_sym_c_type_token25] = ACTIONS(149),
    [aux_sym_c_type_token26] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_SLASH_STAR] = ACTIONS(149),
    [aux_sym_for_block_token1] = ACTIONS(149),
    [aux_sym_for_block_token2] = ACTIONS(149),
    [aux_sym_for_block_token3] = ACTIONS(149),
    [aux_sym_for_block_token4] = ACTIONS(149),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_array_type_token1] = ACTIONS(153),
    [aux_sym_array_type_token2] = ACTIONS(153),
    [aux_sym_array_type_token3] = ACTIONS(153),
    [aux_sym_array_type_token4] = ACTIONS(153),
    [aux_sym_array_type_token5] = ACTIONS(153),
    [aux_sym_array_type_token6] = ACTIONS(153),
    [aux_sym_array_type_token7] = ACTIONS(153),
    [aux_sym_array_type_token8] = ACTIONS(153),
    [aux_sym_array_type_token9] = ACTIONS(153),
    [aux_sym_array_type_token10] = ACTIONS(153),
    [aux_sym_array_type_token11] = ACTIONS(153),
    [aux_sym_array_type_token12] = ACTIONS(153),
    [aux_sym_array_type_token13] = ACTIONS(153),
    [aux_sym_array_type_token14] = ACTIONS(153),
    [aux_sym_array_type_token15] = ACTIONS(153),
    [aux_sym_array_type_token16] = ACTIONS(153),
    [aux_sym_array_type_token17] = ACTIONS(153),
    [aux_sym_array_type_token18] = ACTIONS(153),
    [aux_sym_array_type_token19] = ACTIONS(153),
    [aux_sym_array_type_token20] = ACTIONS(153),
    [aux_sym_array_type_token21] = ACTIONS(155),
    [aux_sym_array_type_token22] = ACTIONS(153),
    [aux_sym_array_type_token23] = ACTIONS(153),
    [aux_sym_array_type_token24] = ACTIONS(153),
    [aux_sym_c_type_token1] = ACTIONS(153),
    [aux_sym_c_type_token2] = ACTIONS(153),
    [aux_sym_c_type_token3] = ACTIONS(153),
    [aux_sym_c_type_token4] = ACTIONS(153),
    [aux_sym_c_type_token5] = ACTIONS(153),
    [aux_sym_c_type_token6] = ACTIONS(153),
    [aux_sym_c_type_token7] = ACTIONS(153),
    [aux_sym_c_type_token8] = ACTIONS(153),
    [aux_sym_c_type_token9] = ACTIONS(153),
    [aux_sym_c_type_token10] = ACTIONS(153),
    [aux_sym_c_type_token11] = ACTIONS(155),
    [aux_sym_c_type_token12] = ACTIONS(153),
    [aux_sym_c_type_token13] = ACTIONS(153),
    [aux_sym_c_type_token14] = ACTIONS(153),
    [aux_sym_c_type_token15] = ACTIONS(153),
    [aux_sym_c_type_token16] = ACTIONS(153),
    [aux_sym_c_type_token17] = ACTIONS(153),
    [aux_sym_c_type_token18] = ACTIONS(153),
    [aux_sym_c_type_token19] = ACTIONS(153),
    [aux_sym_c_type_token20] = ACTIONS(153),
    [aux_sym_c_type_token21] = ACTIONS(155),
    [aux_sym_c_type_token22] = ACTIONS(153),
    [aux_sym_c_type_token23] = ACTIONS(153),
    [aux_sym_c_type_token24] = ACTIONS(153),
    [aux_sym_c_type_token25] = ACTIONS(153),
    [aux_sym_c_type_token26] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(153),
    [aux_sym_for_block_token1] = ACTIONS(153),
    [aux_sym_for_block_token2] = ACTIONS(153),
    [aux_sym_for_block_token3] = ACTIONS(153),
    [aux_sym_for_block_token4] = ACTIONS(153),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_array_type_token1] = ACTIONS(157),
    [aux_sym_array_type_token2] = ACTIONS(157),
    [aux_sym_array_type_token3] = ACTIONS(157),
    [aux_sym_array_type_token4] = ACTIONS(157),
    [aux_sym_array_type_token5] = ACTIONS(157),
    [aux_sym_array_type_token6] = ACTIONS(157),
    [aux_sym_array_type_token7] = ACTIONS(157),
    [aux_sym_array_type_token8] = ACTIONS(157),
    [aux_sym_array_type_token9] = ACTIONS(157),
    [aux_sym_array_type_token10] = ACTIONS(157),
    [aux_sym_array_type_token11] = ACTIONS(157),
    [aux_sym_array_type_token12] = ACTIONS(157),
    [aux_sym_array_type_token13] = ACTIONS(157),
    [aux_sym_array_type_token14] = ACTIONS(157),
    [aux_sym_array_type_token15] = ACTIONS(157),
    [aux_sym_array_type_token16] = ACTIONS(157),
    [aux_sym_array_type_token17] = ACTIONS(157),
    [aux_sym_array_type_token18] = ACTIONS(157),
    [aux_sym_array_type_token19] = ACTIONS(157),
    [aux_sym_array_type_token20] = ACTIONS(157),
    [aux_sym_array_type_token21] = ACTIONS(159),
    [aux_sym_array_type_token22] = ACTIONS(157),
    [aux_sym_array_type_token23] = ACTIONS(157),
    [aux_sym_array_type_token24] = ACTIONS(157),
    [aux_sym_c_type_token1] = ACTIONS(157),
    [aux_sym_c_type_token2] = ACTIONS(157),
    [aux_sym_c_type_token3] = ACTIONS(157),
    [aux_sym_c_type_token4] = ACTIONS(157),
    [aux_sym_c_type_token5] = ACTIONS(157),
    [aux_sym_c_type_token6] = ACTIONS(157),
    [aux_sym_c_type_token7] = ACTIONS(157),
    [aux_sym_c_type_token8] = ACTIONS(157),
    [aux_sym_c_type_token9] = ACTIONS(157),
    [aux_sym_c_type_token10] = ACTIONS(157),
    [aux_sym_c_type_token11] = ACTIONS(159),
    [aux_sym_c_type_token12] = ACTIONS(157),
    [aux_sym_c_type_token13] = ACTIONS(157),
    [aux_sym_c_type_token14] = ACTIONS(157),
    [aux_sym_c_type_token15] = ACTIONS(157),
    [aux_sym_c_type_token16] = ACTIONS(157),
    [aux_sym_c_type_token17] = ACTIONS(157),
    [aux_sym_c_type_token18] = ACTIONS(157),
    [aux_sym_c_type_token19] = ACTIONS(157),
    [aux_sym_c_type_token20] = ACTIONS(157),
    [aux_sym_c_type_token21] = ACTIONS(159),
    [aux_sym_c_type_token22] = ACTIONS(157),
    [aux_sym_c_type_token23] = ACTIONS(157),
    [aux_sym_c_type_token24] = ACTIONS(157),
    [aux_sym_c_type_token25] = ACTIONS(157),
    [aux_sym_c_type_token26] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_SLASH_STAR] = ACTIONS(157),
    [aux_sym_for_block_token1] = ACTIONS(157),
    [aux_sym_for_block_token2] = ACTIONS(157),
    [aux_sym_for_block_token3] = ACTIONS(157),
    [aux_sym_for_block_token4] = ACTIONS(157),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_array_type_token1] = ACTIONS(74),
    [aux_sym_array_type_token2] = ACTIONS(74),
    [aux_sym_array_type_token3] = ACTIONS(74),
    [aux_sym_array_type_token4] = ACTIONS(74),
    [aux_sym_array_type_token5] = ACTIONS(74),
    [aux_sym_array_type_token6] = ACTIONS(74),
    [aux_sym_array_type_token7] = ACTIONS(74),
    [aux_sym_array_type_token8] = ACTIONS(74),
    [aux_sym_array_type_token9] = ACTIONS(74),
    [aux_sym_array_type_token10] = ACTIONS(74),
    [aux_sym_array_type_token11] = ACTIONS(74),
    [aux_sym_array_type_token12] = ACTIONS(74),
    [aux_sym_array_type_token13] = ACTIONS(74),
    [aux_sym_array_type_token14] = ACTIONS(74),
    [aux_sym_array_type_token15] = ACTIONS(74),
    [aux_sym_array_type_token16] = ACTIONS(74),
    [aux_sym_array_type_token17] = ACTIONS(74),
    [aux_sym_array_type_token18] = ACTIONS(74),
    [aux_sym_array_type_token19] = ACTIONS(74),
    [aux_sym_array_type_token20] = ACTIONS(74),
    [aux_sym_array_type_token21] = ACTIONS(76),
    [aux_sym_array_type_token22] = ACTIONS(74),
    [aux_sym_array_type_token23] = ACTIONS(74),
    [aux_sym_array_type_token24] = ACTIONS(74),
    [aux_sym_c_type_token1] = ACTIONS(74),
    [aux_sym_c_type_token2] = ACTIONS(74),
    [aux_sym_c_type_token3] = ACTIONS(74),
    [aux_sym_c_type_token4] = ACTIONS(74),
    [aux_sym_c_type_token5] = ACTIONS(74),
    [aux_sym_c_type_token6] = ACTIONS(74),
    [aux_sym_c_type_token7] = ACTIONS(74),
    [aux_sym_c_type_token8] = ACTIONS(74),
    [aux_sym_c_type_token9] = ACTIONS(74),
    [aux_sym_c_type_token10] = ACTIONS(74),
    [aux_sym_c_type_token11] = ACTIONS(76),
    [aux_sym_c_type_token12] = ACTIONS(74),
    [aux_sym_c_type_token13] = ACTIONS(74),
    [aux_sym_c_type_token14] = ACTIONS(74),
    [aux_sym_c_type_token15] = ACTIONS(74),
    [aux_sym_c_type_token16] = ACTIONS(74),
    [aux_sym_c_type_token17] = ACTIONS(74),
    [aux_sym_c_type_token18] = ACTIONS(74),
    [aux_sym_c_type_token19] = ACTIONS(74),
    [aux_sym_c_type_token20] = ACTIONS(74),
    [aux_sym_c_type_token21] = ACTIONS(76),
    [aux_sym_c_type_token22] = ACTIONS(74),
    [aux_sym_c_type_token23] = ACTIONS(74),
    [aux_sym_c_type_token24] = ACTIONS(74),
    [aux_sym_c_type_token25] = ACTIONS(74),
    [aux_sym_c_type_token26] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_STAR] = ACTIONS(74),
    [aux_sym_for_block_token1] = ACTIONS(74),
    [aux_sym_for_block_token2] = ACTIONS(74),
    [aux_sym_for_block_token3] = ACTIONS(74),
    [aux_sym_for_block_token4] = ACTIONS(74),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_array_type_token1] = ACTIONS(161),
    [aux_sym_array_type_token2] = ACTIONS(161),
    [aux_sym_array_type_token3] = ACTIONS(161),
    [aux_sym_array_type_token4] = ACTIONS(161),
    [aux_sym_array_type_token5] = ACTIONS(161),
    [aux_sym_array_type_token6] = ACTIONS(161),
    [aux_sym_array_type_token7] = ACTIONS(161),
    [aux_sym_array_type_token8] = ACTIONS(161),
    [aux_sym_array_type_token9] = ACTIONS(161),
    [aux_sym_array_type_token10] = ACTIONS(161),
    [aux_sym_array_type_token11] = ACTIONS(161),
    [aux_sym_array_type_token12] = ACTIONS(161),
    [aux_sym_array_type_token13] = ACTIONS(161),
    [aux_sym_array_type_token14] = ACTIONS(161),
    [aux_sym_array_type_token15] = ACTIONS(161),
    [aux_sym_array_type_token16] = ACTIONS(161),
    [aux_sym_array_type_token17] = ACTIONS(161),
    [aux_sym_array_type_token18] = ACTIONS(161),
    [aux_sym_array_type_token19] = ACTIONS(161),
    [aux_sym_array_type_token20] = ACTIONS(161),
    [aux_sym_array_type_token21] = ACTIONS(163),
    [aux_sym_array_type_token22] = ACTIONS(161),
    [aux_sym_array_type_token23] = ACTIONS(161),
    [aux_sym_array_type_token24] = ACTIONS(161),
    [aux_sym_c_type_token1] = ACTIONS(161),
    [aux_sym_c_type_token2] = ACTIONS(161),
    [aux_sym_c_type_token3] = ACTIONS(161),
    [aux_sym_c_type_token4] = ACTIONS(161),
    [aux_sym_c_type_token5] = ACTIONS(161),
    [aux_sym_c_type_token6] = ACTIONS(161),
    [aux_sym_c_type_token7] = ACTIONS(161),
    [aux_sym_c_type_token8] = ACTIONS(161),
    [aux_sym_c_type_token9] = ACTIONS(161),
    [aux_sym_c_type_token10] = ACTIONS(161),
    [aux_sym_c_type_token11] = ACTIONS(163),
    [aux_sym_c_type_token12] = ACTIONS(161),
    [aux_sym_c_type_token13] = ACTIONS(161),
    [aux_sym_c_type_token14] = ACTIONS(161),
    [aux_sym_c_type_token15] = ACTIONS(161),
    [aux_sym_c_type_token16] = ACTIONS(161),
    [aux_sym_c_type_token17] = ACTIONS(161),
    [aux_sym_c_type_token18] = ACTIONS(161),
    [aux_sym_c_type_token19] = ACTIONS(161),
    [aux_sym_c_type_token20] = ACTIONS(161),
    [aux_sym_c_type_token21] = ACTIONS(163),
    [aux_sym_c_type_token22] = ACTIONS(161),
    [aux_sym_c_type_token23] = ACTIONS(161),
    [aux_sym_c_type_token24] = ACTIONS(161),
    [aux_sym_c_type_token25] = ACTIONS(161),
    [aux_sym_c_type_token26] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(161),
    [anon_sym_SLASH_STAR] = ACTIONS(161),
    [aux_sym_for_block_token1] = ACTIONS(161),
    [aux_sym_for_block_token2] = ACTIONS(161),
    [aux_sym_for_block_token3] = ACTIONS(161),
    [aux_sym_for_block_token4] = ACTIONS(161),
  },
  [35] = {
    [sym_identifier] = STATE(11),
    [aux_sym_array_type_token1] = ACTIONS(127),
    [aux_sym_array_type_token2] = ACTIONS(127),
    [aux_sym_array_type_token3] = ACTIONS(127),
    [aux_sym_array_type_token4] = ACTIONS(127),
    [aux_sym_array_type_token5] = ACTIONS(127),
    [aux_sym_array_type_token6] = ACTIONS(127),
    [aux_sym_array_type_token7] = ACTIONS(127),
    [aux_sym_array_type_token8] = ACTIONS(127),
    [aux_sym_array_type_token9] = ACTIONS(127),
    [aux_sym_array_type_token10] = ACTIONS(127),
    [aux_sym_array_type_token11] = ACTIONS(127),
    [aux_sym_array_type_token12] = ACTIONS(127),
    [aux_sym_array_type_token13] = ACTIONS(127),
    [aux_sym_array_type_token14] = ACTIONS(127),
    [aux_sym_array_type_token15] = ACTIONS(127),
    [aux_sym_array_type_token16] = ACTIONS(127),
    [aux_sym_array_type_token17] = ACTIONS(127),
    [aux_sym_array_type_token18] = ACTIONS(127),
    [aux_sym_array_type_token19] = ACTIONS(127),
    [aux_sym_array_type_token20] = ACTIONS(127),
    [aux_sym_array_type_token21] = ACTIONS(129),
    [aux_sym_array_type_token22] = ACTIONS(127),
    [aux_sym_array_type_token23] = ACTIONS(127),
    [aux_sym_array_type_token24] = ACTIONS(127),
    [aux_sym_c_type_token1] = ACTIONS(127),
    [aux_sym_c_type_token2] = ACTIONS(127),
    [aux_sym_c_type_token3] = ACTIONS(127),
    [aux_sym_c_type_token4] = ACTIONS(127),
    [aux_sym_c_type_token5] = ACTIONS(127),
    [aux_sym_c_type_token6] = ACTIONS(127),
    [aux_sym_c_type_token7] = ACTIONS(127),
    [aux_sym_c_type_token8] = ACTIONS(127),
    [aux_sym_c_type_token9] = ACTIONS(127),
    [aux_sym_c_type_token10] = ACTIONS(127),
    [aux_sym_c_type_token11] = ACTIONS(129),
    [aux_sym_c_type_token12] = ACTIONS(127),
    [aux_sym_c_type_token13] = ACTIONS(127),
    [aux_sym_c_type_token14] = ACTIONS(127),
    [aux_sym_c_type_token15] = ACTIONS(127),
    [aux_sym_c_type_token16] = ACTIONS(127),
    [aux_sym_c_type_token17] = ACTIONS(127),
    [aux_sym_c_type_token18] = ACTIONS(127),
    [aux_sym_c_type_token19] = ACTIONS(127),
    [aux_sym_c_type_token20] = ACTIONS(127),
    [aux_sym_c_type_token21] = ACTIONS(129),
    [aux_sym_c_type_token22] = ACTIONS(127),
    [aux_sym_c_type_token23] = ACTIONS(127),
    [aux_sym_c_type_token24] = ACTIONS(127),
    [aux_sym_c_type_token25] = ACTIONS(127),
    [aux_sym_c_type_token26] = ACTIONS(127),
    [aux_sym_identifier_token1] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(127),
    [anon_sym_SLASH_STAR] = ACTIONS(127),
    [aux_sym_for_block_token1] = ACTIONS(127),
    [aux_sym_for_block_token2] = ACTIONS(127),
    [aux_sym_for_block_token3] = ACTIONS(127),
  },
  [36] = {
    [sym_identifier] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_array_type_token1] = ACTIONS(127),
    [aux_sym_array_type_token2] = ACTIONS(127),
    [aux_sym_array_type_token3] = ACTIONS(127),
    [aux_sym_array_type_token4] = ACTIONS(127),
    [aux_sym_array_type_token5] = ACTIONS(127),
    [aux_sym_array_type_token6] = ACTIONS(127),
    [aux_sym_array_type_token7] = ACTIONS(127),
    [aux_sym_array_type_token8] = ACTIONS(127),
    [aux_sym_array_type_token9] = ACTIONS(127),
    [aux_sym_array_type_token10] = ACTIONS(127),
    [aux_sym_array_type_token11] = ACTIONS(127),
    [aux_sym_array_type_token12] = ACTIONS(127),
    [aux_sym_array_type_token13] = ACTIONS(127),
    [aux_sym_array_type_token14] = ACTIONS(127),
    [aux_sym_array_type_token15] = ACTIONS(127),
    [aux_sym_array_type_token16] = ACTIONS(127),
    [aux_sym_array_type_token17] = ACTIONS(127),
    [aux_sym_array_type_token18] = ACTIONS(127),
    [aux_sym_array_type_token19] = ACTIONS(127),
    [aux_sym_array_type_token20] = ACTIONS(127),
    [aux_sym_array_type_token21] = ACTIONS(129),
    [aux_sym_array_type_token22] = ACTIONS(127),
    [aux_sym_array_type_token23] = ACTIONS(127),
    [aux_sym_array_type_token24] = ACTIONS(127),
    [aux_sym_c_type_token1] = ACTIONS(127),
    [aux_sym_c_type_token2] = ACTIONS(127),
    [aux_sym_c_type_token3] = ACTIONS(127),
    [aux_sym_c_type_token4] = ACTIONS(127),
    [aux_sym_c_type_token5] = ACTIONS(127),
    [aux_sym_c_type_token6] = ACTIONS(127),
    [aux_sym_c_type_token7] = ACTIONS(127),
    [aux_sym_c_type_token8] = ACTIONS(127),
    [aux_sym_c_type_token9] = ACTIONS(127),
    [aux_sym_c_type_token10] = ACTIONS(127),
    [aux_sym_c_type_token11] = ACTIONS(129),
    [aux_sym_c_type_token12] = ACTIONS(127),
    [aux_sym_c_type_token13] = ACTIONS(127),
    [aux_sym_c_type_token14] = ACTIONS(127),
    [aux_sym_c_type_token15] = ACTIONS(127),
    [aux_sym_c_type_token16] = ACTIONS(127),
    [aux_sym_c_type_token17] = ACTIONS(127),
    [aux_sym_c_type_token18] = ACTIONS(127),
    [aux_sym_c_type_token19] = ACTIONS(127),
    [aux_sym_c_type_token20] = ACTIONS(127),
    [aux_sym_c_type_token21] = ACTIONS(129),
    [aux_sym_c_type_token22] = ACTIONS(127),
    [aux_sym_c_type_token23] = ACTIONS(127),
    [aux_sym_c_type_token24] = ACTIONS(127),
    [aux_sym_c_type_token25] = ACTIONS(127),
    [aux_sym_c_type_token26] = ACTIONS(127),
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(127),
    [anon_sym_SLASH_STAR] = ACTIONS(127),
    [aux_sym_for_block_token1] = ACTIONS(127),
    [aux_sym_for_block_token3] = ACTIONS(127),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_array_type_token1] = ACTIONS(165),
    [aux_sym_array_type_token2] = ACTIONS(165),
    [aux_sym_array_type_token3] = ACTIONS(165),
    [aux_sym_array_type_token4] = ACTIONS(165),
    [aux_sym_array_type_token5] = ACTIONS(165),
    [aux_sym_array_type_token6] = ACTIONS(165),
    [aux_sym_array_type_token7] = ACTIONS(165),
    [aux_sym_array_type_token8] = ACTIONS(165),
    [aux_sym_array_type_token9] = ACTIONS(165),
    [aux_sym_array_type_token10] = ACTIONS(165),
    [aux_sym_array_type_token11] = ACTIONS(165),
    [aux_sym_array_type_token12] = ACTIONS(165),
    [aux_sym_array_type_token13] = ACTIONS(165),
    [aux_sym_array_type_token14] = ACTIONS(165),
    [aux_sym_array_type_token15] = ACTIONS(165),
    [aux_sym_array_type_token16] = ACTIONS(165),
    [aux_sym_array_type_token17] = ACTIONS(165),
    [aux_sym_array_type_token18] = ACTIONS(165),
    [aux_sym_array_type_token19] = ACTIONS(165),
    [aux_sym_array_type_token20] = ACTIONS(165),
    [aux_sym_array_type_token21] = ACTIONS(167),
    [aux_sym_array_type_token22] = ACTIONS(165),
    [aux_sym_array_type_token23] = ACTIONS(165),
    [aux_sym_array_type_token24] = ACTIONS(165),
    [aux_sym_c_type_token1] = ACTIONS(165),
    [aux_sym_c_type_token2] = ACTIONS(165),
    [aux_sym_c_type_token3] = ACTIONS(165),
    [aux_sym_c_type_token4] = ACTIONS(165),
    [aux_sym_c_type_token5] = ACTIONS(165),
    [aux_sym_c_type_token6] = ACTIONS(165),
    [aux_sym_c_type_token7] = ACTIONS(165),
    [aux_sym_c_type_token8] = ACTIONS(165),
    [aux_sym_c_type_token9] = ACTIONS(165),
    [aux_sym_c_type_token10] = ACTIONS(165),
    [aux_sym_c_type_token11] = ACTIONS(167),
    [aux_sym_c_type_token12] = ACTIONS(165),
    [aux_sym_c_type_token13] = ACTIONS(165),
    [aux_sym_c_type_token14] = ACTIONS(165),
    [aux_sym_c_type_token15] = ACTIONS(165),
    [aux_sym_c_type_token16] = ACTIONS(165),
    [aux_sym_c_type_token17] = ACTIONS(165),
    [aux_sym_c_type_token18] = ACTIONS(165),
    [aux_sym_c_type_token19] = ACTIONS(165),
    [aux_sym_c_type_token20] = ACTIONS(165),
    [aux_sym_c_type_token21] = ACTIONS(167),
    [aux_sym_c_type_token22] = ACTIONS(165),
    [aux_sym_c_type_token23] = ACTIONS(165),
    [aux_sym_c_type_token24] = ACTIONS(165),
    [aux_sym_c_type_token25] = ACTIONS(165),
    [aux_sym_c_type_token26] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_SLASH_SLASH] = ACTIONS(165),
    [anon_sym_SLASH_STAR] = ACTIONS(165),
    [aux_sym_for_block_token1] = ACTIONS(165),
    [aux_sym_for_block_token2] = ACTIONS(165),
    [aux_sym_for_block_token3] = ACTIONS(165),
    [aux_sym_for_block_token4] = ACTIONS(165),
  },
  [38] = {
    [sym_identifier] = STATE(10),
    [aux_sym_array_type_token1] = ACTIONS(141),
    [aux_sym_array_type_token2] = ACTIONS(141),
    [aux_sym_array_type_token3] = ACTIONS(141),
    [aux_sym_array_type_token4] = ACTIONS(141),
    [aux_sym_array_type_token5] = ACTIONS(141),
    [aux_sym_array_type_token6] = ACTIONS(141),
    [aux_sym_array_type_token7] = ACTIONS(141),
    [aux_sym_array_type_token8] = ACTIONS(141),
    [aux_sym_array_type_token9] = ACTIONS(141),
    [aux_sym_array_type_token10] = ACTIONS(141),
    [aux_sym_array_type_token11] = ACTIONS(141),
    [aux_sym_array_type_token12] = ACTIONS(141),
    [aux_sym_array_type_token13] = ACTIONS(141),
    [aux_sym_array_type_token14] = ACTIONS(141),
    [aux_sym_array_type_token15] = ACTIONS(141),
    [aux_sym_array_type_token16] = ACTIONS(141),
    [aux_sym_array_type_token17] = ACTIONS(141),
    [aux_sym_array_type_token18] = ACTIONS(141),
    [aux_sym_array_type_token19] = ACTIONS(141),
    [aux_sym_array_type_token20] = ACTIONS(141),
    [aux_sym_array_type_token21] = ACTIONS(143),
    [aux_sym_array_type_token22] = ACTIONS(141),
    [aux_sym_array_type_token23] = ACTIONS(141),
    [aux_sym_array_type_token24] = ACTIONS(141),
    [aux_sym_c_type_token1] = ACTIONS(141),
    [aux_sym_c_type_token2] = ACTIONS(141),
    [aux_sym_c_type_token3] = ACTIONS(141),
    [aux_sym_c_type_token4] = ACTIONS(141),
    [aux_sym_c_type_token5] = ACTIONS(141),
    [aux_sym_c_type_token6] = ACTIONS(141),
    [aux_sym_c_type_token7] = ACTIONS(141),
    [aux_sym_c_type_token8] = ACTIONS(141),
    [aux_sym_c_type_token9] = ACTIONS(141),
    [aux_sym_c_type_token10] = ACTIONS(141),
    [aux_sym_c_type_token11] = ACTIONS(143),
    [aux_sym_c_type_token12] = ACTIONS(141),
    [aux_sym_c_type_token13] = ACTIONS(141),
    [aux_sym_c_type_token14] = ACTIONS(141),
    [aux_sym_c_type_token15] = ACTIONS(141),
    [aux_sym_c_type_token16] = ACTIONS(141),
    [aux_sym_c_type_token17] = ACTIONS(141),
    [aux_sym_c_type_token18] = ACTIONS(141),
    [aux_sym_c_type_token19] = ACTIONS(141),
    [aux_sym_c_type_token20] = ACTIONS(141),
    [aux_sym_c_type_token21] = ACTIONS(143),
    [aux_sym_c_type_token22] = ACTIONS(141),
    [aux_sym_c_type_token23] = ACTIONS(141),
    [aux_sym_c_type_token24] = ACTIONS(141),
    [aux_sym_c_type_token25] = ACTIONS(141),
    [aux_sym_c_type_token26] = ACTIONS(141),
    [aux_sym_identifier_token1] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(141),
    [aux_sym_for_block_token1] = ACTIONS(141),
    [aux_sym_for_block_token3] = ACTIONS(141),
    [aux_sym_for_block_token4] = ACTIONS(141),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_array_type_token1] = ACTIONS(169),
    [aux_sym_array_type_token2] = ACTIONS(169),
    [aux_sym_array_type_token3] = ACTIONS(169),
    [aux_sym_array_type_token4] = ACTIONS(169),
    [aux_sym_array_type_token5] = ACTIONS(169),
    [aux_sym_array_type_token6] = ACTIONS(169),
    [aux_sym_array_type_token7] = ACTIONS(169),
    [aux_sym_array_type_token8] = ACTIONS(169),
    [aux_sym_array_type_token9] = ACTIONS(169),
    [aux_sym_array_type_token10] = ACTIONS(169),
    [aux_sym_array_type_token11] = ACTIONS(169),
    [aux_sym_array_type_token12] = ACTIONS(169),
    [aux_sym_array_type_token13] = ACTIONS(169),
    [aux_sym_array_type_token14] = ACTIONS(169),
    [aux_sym_array_type_token15] = ACTIONS(169),
    [aux_sym_array_type_token16] = ACTIONS(169),
    [aux_sym_array_type_token17] = ACTIONS(169),
    [aux_sym_array_type_token18] = ACTIONS(169),
    [aux_sym_array_type_token19] = ACTIONS(169),
    [aux_sym_array_type_token20] = ACTIONS(169),
    [aux_sym_array_type_token21] = ACTIONS(171),
    [aux_sym_array_type_token22] = ACTIONS(169),
    [aux_sym_array_type_token23] = ACTIONS(169),
    [aux_sym_array_type_token24] = ACTIONS(169),
    [aux_sym_c_type_token1] = ACTIONS(169),
    [aux_sym_c_type_token2] = ACTIONS(169),
    [aux_sym_c_type_token3] = ACTIONS(169),
    [aux_sym_c_type_token4] = ACTIONS(169),
    [aux_sym_c_type_token5] = ACTIONS(169),
    [aux_sym_c_type_token6] = ACTIONS(169),
    [aux_sym_c_type_token7] = ACTIONS(169),
    [aux_sym_c_type_token8] = ACTIONS(169),
    [aux_sym_c_type_token9] = ACTIONS(169),
    [aux_sym_c_type_token10] = ACTIONS(169),
    [aux_sym_c_type_token11] = ACTIONS(171),
    [aux_sym_c_type_token12] = ACTIONS(169),
    [aux_sym_c_type_token13] = ACTIONS(169),
    [aux_sym_c_type_token14] = ACTIONS(169),
    [aux_sym_c_type_token15] = ACTIONS(169),
    [aux_sym_c_type_token16] = ACTIONS(169),
    [aux_sym_c_type_token17] = ACTIONS(169),
    [aux_sym_c_type_token18] = ACTIONS(169),
    [aux_sym_c_type_token19] = ACTIONS(169),
    [aux_sym_c_type_token20] = ACTIONS(169),
    [aux_sym_c_type_token21] = ACTIONS(171),
    [aux_sym_c_type_token22] = ACTIONS(169),
    [aux_sym_c_type_token23] = ACTIONS(169),
    [aux_sym_c_type_token24] = ACTIONS(169),
    [aux_sym_c_type_token25] = ACTIONS(169),
    [aux_sym_c_type_token26] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_SLASH_SLASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(169),
    [aux_sym_for_block_token1] = ACTIONS(169),
    [aux_sym_for_block_token2] = ACTIONS(169),
    [aux_sym_for_block_token3] = ACTIONS(169),
    [aux_sym_for_block_token4] = ACTIONS(169),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_array_type_token1] = ACTIONS(173),
    [aux_sym_array_type_token2] = ACTIONS(173),
    [aux_sym_array_type_token3] = ACTIONS(173),
    [aux_sym_array_type_token4] = ACTIONS(173),
    [aux_sym_array_type_token5] = ACTIONS(173),
    [aux_sym_array_type_token6] = ACTIONS(173),
    [aux_sym_array_type_token7] = ACTIONS(173),
    [aux_sym_array_type_token8] = ACTIONS(173),
    [aux_sym_array_type_token9] = ACTIONS(173),
    [aux_sym_array_type_token10] = ACTIONS(173),
    [aux_sym_array_type_token11] = ACTIONS(173),
    [aux_sym_array_type_token12] = ACTIONS(173),
    [aux_sym_array_type_token13] = ACTIONS(173),
    [aux_sym_array_type_token14] = ACTIONS(173),
    [aux_sym_array_type_token15] = ACTIONS(173),
    [aux_sym_array_type_token16] = ACTIONS(173),
    [aux_sym_array_type_token17] = ACTIONS(173),
    [aux_sym_array_type_token18] = ACTIONS(173),
    [aux_sym_array_type_token19] = ACTIONS(173),
    [aux_sym_array_type_token20] = ACTIONS(173),
    [aux_sym_array_type_token21] = ACTIONS(175),
    [aux_sym_array_type_token22] = ACTIONS(173),
    [aux_sym_array_type_token23] = ACTIONS(173),
    [aux_sym_array_type_token24] = ACTIONS(173),
    [aux_sym_c_type_token1] = ACTIONS(173),
    [aux_sym_c_type_token2] = ACTIONS(173),
    [aux_sym_c_type_token3] = ACTIONS(173),
    [aux_sym_c_type_token4] = ACTIONS(173),
    [aux_sym_c_type_token5] = ACTIONS(173),
    [aux_sym_c_type_token6] = ACTIONS(173),
    [aux_sym_c_type_token7] = ACTIONS(173),
    [aux_sym_c_type_token8] = ACTIONS(173),
    [aux_sym_c_type_token9] = ACTIONS(173),
    [aux_sym_c_type_token10] = ACTIONS(173),
    [aux_sym_c_type_token11] = ACTIONS(175),
    [aux_sym_c_type_token12] = ACTIONS(173),
    [aux_sym_c_type_token13] = ACTIONS(173),
    [aux_sym_c_type_token14] = ACTIONS(173),
    [aux_sym_c_type_token15] = ACTIONS(173),
    [aux_sym_c_type_token16] = ACTIONS(173),
    [aux_sym_c_type_token17] = ACTIONS(173),
    [aux_sym_c_type_token18] = ACTIONS(173),
    [aux_sym_c_type_token19] = ACTIONS(173),
    [aux_sym_c_type_token20] = ACTIONS(173),
    [aux_sym_c_type_token21] = ACTIONS(175),
    [aux_sym_c_type_token22] = ACTIONS(173),
    [aux_sym_c_type_token23] = ACTIONS(173),
    [aux_sym_c_type_token24] = ACTIONS(173),
    [aux_sym_c_type_token25] = ACTIONS(173),
    [aux_sym_c_type_token26] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_SLASH_SLASH] = ACTIONS(173),
    [anon_sym_SLASH_STAR] = ACTIONS(173),
    [aux_sym_for_block_token1] = ACTIONS(173),
    [aux_sym_for_block_token2] = ACTIONS(173),
    [aux_sym_for_block_token3] = ACTIONS(173),
    [aux_sym_for_block_token4] = ACTIONS(173),
  },
  [41] = {
    [sym_declaration_argument] = STATE(85),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(85),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(185),
  },
  [42] = {
    [sym_declaration_argument] = STATE(86),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(86),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(187),
  },
  [43] = {
    [sym_declaration_argument] = STATE(72),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(72),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(189),
  },
  [44] = {
    [sym_declaration_argument] = STATE(82),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(82),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
  },
  [45] = {
    [sym_declaration_argument] = STATE(83),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(83),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
  },
  [46] = {
    [sym_declaration_argument] = STATE(85),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(85),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
  },
  [47] = {
    [sym_declaration_argument] = STATE(100),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(100),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
  },
  [48] = {
    [sym_declaration_argument] = STATE(73),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_integer_constant] = STATE(73),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_parameter_token1] = ACTIONS(183),
  },
  [49] = {
    [sym_declaration_argument_list] = STATE(87),
    [sym_declaration_argument] = STATE(62),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [anon_sym_RPAREN] = ACTIONS(191),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
  },
  [50] = {
    [sym_declaration_argument] = STATE(96),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_for_block_arguments] = STATE(98),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
  },
  [51] = {
    [sym_declaration_argument] = STATE(96),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_for_block_arguments] = STATE(99),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
  },
  [52] = {
    [sym_declaration_argument] = STATE(88),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
  },
  [53] = {
    [sym_declaration_argument] = STATE(66),
    [sym_identifier] = STATE(76),
    [sym_interprocess_variable] = STATE(76),
    [sym_local_variable] = STATE(76),
    [sym_parameter] = STATE(76),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_LT_GT] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
  },
  [54] = {
    [aux_sym_identifier_repeat1] = STATE(56),
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_argument_separator] = ACTIONS(78),
    [aux_sym_identifier_token2] = ACTIONS(193),
    [aux_sym_storage_suffix_token1] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
  },
  [55] = {
    [aux_sym_identifier_repeat1] = STATE(54),
    [anon_sym_RPAREN] = ACTIONS(96),
    [sym_argument_separator] = ACTIONS(96),
    [aux_sym_identifier_token2] = ACTIONS(195),
    [aux_sym_storage_suffix_token1] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
  },
  [56] = {
    [aux_sym_identifier_repeat1] = STATE(56),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_argument_separator] = ACTIONS(82),
    [aux_sym_identifier_token2] = ACTIONS(197),
    [aux_sym_storage_suffix_token1] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
  },
  [57] = {
    [sym_array_declaration_arguments] = STATE(27),
    [sym_command_suffix] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(200),
    [aux_sym_command_suffix_token1] = ACTIONS(202),
  },
  [58] = {
    [sym_c_declaration_arguments] = STATE(24),
    [sym_command_suffix] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(204),
    [aux_sym_command_suffix_token1] = ACTIONS(202),
  },
  [59] = {
    [sym_identifier] = STATE(81),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [aux_sym_parameter_token1] = ACTIONS(206),
  },
  [60] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(60),
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_argument_separator] = ACTIONS(210),
  },
  [61] = {
    [sym_storage_suffix] = STATE(101),
    [aux_sym_storage_suffix_token1] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(213),
  },
  [62] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(63),
    [anon_sym_RPAREN] = ACTIONS(215),
    [sym_argument_separator] = ACTIONS(217),
  },
  [63] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(60),
    [anon_sym_RPAREN] = ACTIONS(219),
    [sym_argument_separator] = ACTIONS(217),
  },
  [64] = {
    [sym_storage_suffix] = STATE(95),
    [aux_sym_storage_suffix_token1] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(221),
  },
  [65] = {
    [sym_storage_suffix] = STATE(97),
    [aux_sym_storage_suffix_token1] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(223),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_argument_separator] = ACTIONS(208),
  },
  [67] = {
    [sym_c_declaration_arguments] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(204),
  },
  [68] = {
    [sym_identifier] = STATE(64),
    [aux_sym_identifier_token1] = ACTIONS(177),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(225),
    [aux_sym_command_suffix_token1] = ACTIONS(225),
  },
  [70] = {
    [sym_array_declaration_arguments] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(200),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(227),
    [sym_argument_separator] = ACTIONS(227),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(229),
    [sym_argument_separator] = ACTIONS(231),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(233),
    [sym_argument_separator] = ACTIONS(235),
  },
  [74] = {
    [sym_identifier] = STATE(61),
    [aux_sym_identifier_token1] = ACTIONS(177),
  },
  [75] = {
    [sym_identifier] = STATE(65),
    [aux_sym_identifier_token1] = ACTIONS(177),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(237),
    [sym_argument_separator] = ACTIONS(237),
  },
  [77] = {
    [sym_identifier] = STATE(79),
    [aux_sym_identifier_token1] = ACTIONS(177),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(239),
    [aux_sym_command_suffix_token1] = ACTIONS(239),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(241),
    [sym_argument_separator] = ACTIONS(241),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(243),
    [sym_argument_separator] = ACTIONS(243),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(245),
    [sym_argument_separator] = ACTIONS(245),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(247),
  },
  [83] = {
    [sym_argument_separator] = ACTIONS(249),
  },
  [84] = {
    [anon_sym_SLASH] = ACTIONS(251),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(253),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(255),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(257),
  },
  [88] = {
    [sym_argument_separator] = ACTIONS(259),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(261),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(263),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(265),
  },
  [92] = {
    [aux_sym_comment_token2] = ACTIONS(267),
  },
  [93] = {
    [aux_sym_comment_token1] = ACTIONS(269),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(271),
  },
  [95] = {
    [anon_sym_RBRACK] = ACTIONS(273),
  },
  [96] = {
    [sym_argument_separator] = ACTIONS(275),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(277),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(279),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(283),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(285),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(78),
  [7] = {.count = 1, .reusable = false}, SHIFT(78),
  [9] = {.count = 1, .reusable = true}, SHIFT(69),
  [11] = {.count = 1, .reusable = false}, SHIFT(69),
  [13] = {.count = 1, .reusable = true}, SHIFT(74),
  [15] = {.count = 1, .reusable = true}, SHIFT(93),
  [17] = {.count = 1, .reusable = true}, SHIFT(92),
  [19] = {.count = 1, .reusable = true}, SHIFT(91),
  [21] = {.count = 1, .reusable = true}, SHIFT(90),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 1),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(78),
  [28] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(78),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(69),
  [34] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(69),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(75),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(93),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(92),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(91),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(90),
  [52] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(68),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(74),
  [60] = {.count = 1, .reusable = true}, SHIFT(68),
  [62] = {.count = 1, .reusable = true}, SHIFT(30),
  [64] = {.count = 1, .reusable = true}, SHIFT(26),
  [66] = {.count = 1, .reusable = true}, SHIFT(75),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [72] = {.count = 1, .reusable = true}, SHIFT(15),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [80] = {.count = 1, .reusable = false}, SHIFT(19),
  [82] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(13),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [89] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(14),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_storage_suffix, 1),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_storage_suffix, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [98] = {.count = 1, .reusable = false}, SHIFT(12),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [102] = {.count = 1, .reusable = false}, SHIFT(14),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [106] = {.count = 1, .reusable = false}, SHIFT(17),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(19),
  [111] = {.count = 1, .reusable = false}, SHIFT(21),
  [113] = {.count = 1, .reusable = false}, SHIFT(13),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration_arguments, 5),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration_arguments, 5),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_field, 6),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_field, 6),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [131] = {.count = 1, .reusable = false}, SHIFT(20),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_for_block, 6),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_for_block, 6),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3),
  [145] = {.count = 1, .reusable = false}, SHIFT(16),
  [147] = {.count = 1, .reusable = false}, SHIFT(18),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_for_block, 5),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_for_block, 5),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 3),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 3),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(55),
  [179] = {.count = 1, .reusable = true}, SHIFT(77),
  [181] = {.count = 1, .reusable = true}, SHIFT(59),
  [183] = {.count = 1, .reusable = true}, SHIFT(80),
  [185] = {.count = 1, .reusable = true}, SHIFT(44),
  [187] = {.count = 1, .reusable = true}, SHIFT(46),
  [189] = {.count = 1, .reusable = true}, SHIFT(48),
  [191] = {.count = 1, .reusable = true}, SHIFT(40),
  [193] = {.count = 1, .reusable = true}, SHIFT(56),
  [195] = {.count = 1, .reusable = true}, SHIFT(54),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(56),
  [200] = {.count = 1, .reusable = true}, SHIFT(52),
  [202] = {.count = 1, .reusable = true}, SHIFT(94),
  [204] = {.count = 1, .reusable = true}, SHIFT(49),
  [206] = {.count = 1, .reusable = true}, SHIFT(71),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2), SHIFT_REPEAT(53),
  [213] = {.count = 1, .reusable = true}, SHIFT(29),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 1),
  [217] = {.count = 1, .reusable = true}, SHIFT(53),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(28),
  [223] = {.count = 1, .reusable = true}, SHIFT(38),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_c_type, 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_for_block_arguments, 5),
  [231] = {.count = 1, .reusable = true}, SHIFT(42),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_for_block_arguments, 6),
  [235] = {.count = 1, .reusable = true}, SHIFT(41),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_interprocess_variable, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_integer_constant, 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_local_variable, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_for_block_arguments, 9),
  [249] = {.count = 1, .reusable = true}, SHIFT(43),
  [251] = {.count = 1, .reusable = true}, SHIFT(31),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_for_block_arguments, 8),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_for_block_arguments, 7),
  [257] = {.count = 1, .reusable = true}, SHIFT(34),
  [259] = {.count = 1, .reusable = true}, SHIFT(47),
  [261] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [263] = {.count = 1, .reusable = true}, SHIFT(51),
  [265] = {.count = 1, .reusable = true}, SHIFT(50),
  [267] = {.count = 1, .reusable = true}, SHIFT(84),
  [269] = {.count = 1, .reusable = true}, SHIFT(32),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_command_suffix, 1),
  [273] = {.count = 1, .reusable = true}, SHIFT(35),
  [275] = {.count = 1, .reusable = true}, SHIFT(45),
  [277] = {.count = 1, .reusable = true}, SHIFT(25),
  [279] = {.count = 1, .reusable = true}, SHIFT(6),
  [281] = {.count = 1, .reusable = true}, SHIFT(8),
  [283] = {.count = 1, .reusable = true}, SHIFT(22),
  [285] = {.count = 1, .reusable = true}, SHIFT(36),
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
