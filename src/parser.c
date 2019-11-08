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
#define STATE_COUNT 180
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_COLON = 6,
  aux_sym__for_each_e_token1 = 7,
  aux_sym__for_each_f_token1 = 8,
  aux_sym__end_for_each_e_token1 = 9,
  sym__end_for_each_f = 10,
  aux_sym__while_e_token1 = 11,
  sym__while_f = 12,
  sym__until_e = 13,
  sym__until_f = 14,
  aux_sym__for_e_token1 = 15,
  aux_sym__for_f_token1 = 16,
  aux_sym__end_for_e_token1 = 17,
  sym__end_for_f = 18,
  aux_sym__use_e_token1 = 19,
  aux_sym__use_f_token1 = 20,
  aux_sym__end_use_e_token1 = 21,
  aux_sym__end_use_f_token1 = 22,
  sym__repeat_e = 23,
  sym__repeat_f = 24,
  aux_sym__end_while_e_token1 = 25,
  aux_sym__end_while_f_token1 = 26,
  sym__if_e = 27,
  sym__if_f = 28,
  sym__else_e = 29,
  sym__else_f = 30,
  aux_sym__end_if_e_token1 = 31,
  aux_sym__end_if_f_token1 = 32,
  sym__case_of_e = 33,
  sym__case_of_f = 34,
  sym__end_case_e = 35,
  sym__end_case_f = 36,
  sym__begin_sql_e = 37,
  sym__begin_sql_f = 38,
  sym__end_sql_e = 39,
  sym__end_sql_f = 40,
  sym__hex_literal = 41,
  sym__dec_literal = 42,
  sym__num_literal = 43,
  sym__exp_literal = 44,
  anon_sym_QMARK = 45,
  aux_sym_time_token1 = 46,
  anon_sym_BANG = 47,
  anon_sym_DASH = 48,
  anon_sym_DOT = 49,
  sym_string = 50,
  sym__name = 51,
  aux_sym__storage_suffix_token1 = 52,
  anon_sym_LBRACK = 53,
  anon_sym_RBRACK = 54,
  anon_sym_DOLLAR = 55,
  anon_sym_LT_GT = 56,
  sym_parameter = 57,
  anon_sym_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_LBRACK_LBRACK = 60,
  anon_sym_RBRACK_RBRACK = 61,
  anon_sym_DASH_GT = 62,
  anon_sym_STAR = 63,
  anon_sym_PLUS = 64,
  anon_sym_PERCENT = 65,
  anon_sym_BSLASH = 66,
  anon_sym_AMP = 67,
  anon_sym_PIPE = 68,
  anon_sym_CARET = 69,
  anon_sym_CARET_PIPE = 70,
  anon_sym_LT_LT = 71,
  anon_sym_GT_GT = 72,
  anon_sym_LT = 73,
  anon_sym_GT = 74,
  anon_sym_LT_EQ = 75,
  anon_sym_GT_EQ = 76,
  anon_sym_EQ = 77,
  anon_sym_POUND = 78,
  anon_sym_QMARK_QMARK = 79,
  anon_sym_QMARK_DASH = 80,
  anon_sym_QMARK_PLUS = 81,
  anon_sym_LPAREN = 82,
  anon_sym_SEMI = 83,
  anon_sym_RPAREN = 84,
  anon_sym_COLON_EQ = 85,
  sym_source = 86,
  sym__token = 87,
  sym_comment = 88,
  sym_for_each_block = 89,
  sym_while_block = 90,
  sym_repeat_block = 91,
  sym_if_block = 92,
  sym_for_block = 93,
  sym_use_block = 94,
  sym_sql_block = 95,
  sym_case_block = 96,
  sym__for_each_e = 97,
  sym__for_each_f = 98,
  sym_for_each = 99,
  sym__end_for_each_e = 100,
  sym_end_for_each = 101,
  sym__while_e = 102,
  sym_while = 103,
  sym_until = 104,
  sym__for_e = 105,
  sym__for_f = 106,
  sym_for = 107,
  sym__end_for_e = 108,
  sym_end_for = 109,
  sym__use_e = 110,
  sym__use_f = 111,
  sym_use = 112,
  sym__end_use_e = 113,
  sym__end_use_f = 114,
  sym_end_use = 115,
  sym_repeat = 116,
  sym__end_while_e = 117,
  sym__end_while_f = 118,
  sym_end_while = 119,
  sym_if = 120,
  sym_else = 121,
  sym__end_if_e = 122,
  sym__end_if_f = 123,
  sym_end_if = 124,
  sym_case_of = 125,
  sym_end_case = 126,
  sym_begin_sql = 127,
  sym_end_sql = 128,
  sym_number = 129,
  sym_time = 130,
  sym_date = 131,
  sym__storage_suffix = 132,
  sym_table = 133,
  sym_field = 134,
  sym_local_variable = 135,
  sym_interprocess_variable = 136,
  sym_variable = 137,
  sym__dereference = 138,
  sym__pointer = 139,
  sym_reference = 140,
  sym_value = 141,
  sym__operator = 142,
  sym__formula = 143,
  sym_argument = 144,
  sym_arguments = 145,
  sym_statement = 146,
  sym_function = 147,
  sym_assignment = 148,
  sym__notation = 149,
  aux_sym_source_repeat1 = 150,
  aux_sym_case_block_repeat1 = 151,
  aux_sym_arguments_repeat1 = 152,
  aux_sym__notation_repeat1 = 153,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [aux_sym__for_each_e_token1] = "_for_each_e_token1",
  [aux_sym__for_each_f_token1] = "_for_each_f_token1",
  [aux_sym__end_for_each_e_token1] = "_end_for_each_e_token1",
  [sym__end_for_each_f] = "_end_for_each_f",
  [aux_sym__while_e_token1] = "_while_e_token1",
  [sym__while_f] = "_while_f",
  [sym__until_e] = "_until_e",
  [sym__until_f] = "_until_f",
  [aux_sym__for_e_token1] = "_for_e_token1",
  [aux_sym__for_f_token1] = "_for_f_token1",
  [aux_sym__end_for_e_token1] = "_end_for_e_token1",
  [sym__end_for_f] = "_end_for_f",
  [aux_sym__use_e_token1] = "_use_e_token1",
  [aux_sym__use_f_token1] = "_use_f_token1",
  [aux_sym__end_use_e_token1] = "_end_use_e_token1",
  [aux_sym__end_use_f_token1] = "_end_use_f_token1",
  [sym__repeat_e] = "_repeat_e",
  [sym__repeat_f] = "_repeat_f",
  [aux_sym__end_while_e_token1] = "_end_while_e_token1",
  [aux_sym__end_while_f_token1] = "_end_while_f_token1",
  [sym__if_e] = "_if_e",
  [sym__if_f] = "_if_f",
  [sym__else_e] = "_else_e",
  [sym__else_f] = "_else_f",
  [aux_sym__end_if_e_token1] = "_end_if_e_token1",
  [aux_sym__end_if_f_token1] = "_end_if_f_token1",
  [sym__case_of_e] = "_case_of_e",
  [sym__case_of_f] = "_case_of_f",
  [sym__end_case_e] = "_end_case_e",
  [sym__end_case_f] = "_end_case_f",
  [sym__begin_sql_e] = "_begin_sql_e",
  [sym__begin_sql_f] = "_begin_sql_f",
  [sym__end_sql_e] = "_end_sql_e",
  [sym__end_sql_f] = "_end_sql_f",
  [sym__hex_literal] = "_hex_literal",
  [sym__dec_literal] = "_dec_literal",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [anon_sym_QMARK] = "?",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [sym_string] = "string",
  [sym__name] = "_name",
  [aux_sym__storage_suffix_token1] = "_storage_suffix_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LT_GT] = "<>",
  [sym_parameter] = "parameter",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_CARET_PIPE] = "^|",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [anon_sym_QMARK_QMARK] = "??",
  [anon_sym_QMARK_DASH] = "?-",
  [anon_sym_QMARK_PLUS] = "?+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_EQ] = ":=",
  [sym_source] = "source",
  [sym__token] = "_token",
  [sym_comment] = "comment",
  [sym_for_each_block] = "for_each_block",
  [sym_while_block] = "while_block",
  [sym_repeat_block] = "repeat_block",
  [sym_if_block] = "if_block",
  [sym_for_block] = "for_block",
  [sym_use_block] = "use_block",
  [sym_sql_block] = "sql_block",
  [sym_case_block] = "case_block",
  [sym__for_each_e] = "_for_each_e",
  [sym__for_each_f] = "_for_each_f",
  [sym_for_each] = "for_each",
  [sym__end_for_each_e] = "_end_for_each_e",
  [sym_end_for_each] = "end_for_each",
  [sym__while_e] = "_while_e",
  [sym_while] = "while",
  [sym_until] = "until",
  [sym__for_e] = "_for_e",
  [sym__for_f] = "_for_f",
  [sym_for] = "for",
  [sym__end_for_e] = "_end_for_e",
  [sym_end_for] = "end_for",
  [sym__use_e] = "_use_e",
  [sym__use_f] = "_use_f",
  [sym_use] = "use",
  [sym__end_use_e] = "_end_use_e",
  [sym__end_use_f] = "_end_use_f",
  [sym_end_use] = "end_use",
  [sym_repeat] = "repeat",
  [sym__end_while_e] = "_end_while_e",
  [sym__end_while_f] = "_end_while_f",
  [sym_end_while] = "end_while",
  [sym_if] = "if",
  [sym_else] = "else",
  [sym__end_if_e] = "_end_if_e",
  [sym__end_if_f] = "_end_if_f",
  [sym_end_if] = "end_if",
  [sym_case_of] = "case_of",
  [sym_end_case] = "end_case",
  [sym_begin_sql] = "begin_sql",
  [sym_end_sql] = "end_sql",
  [sym_number] = "number",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__storage_suffix] = "_storage_suffix",
  [sym_table] = "table",
  [sym_field] = "field",
  [sym_local_variable] = "local_variable",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym_variable] = "variable",
  [sym__dereference] = "_dereference",
  [sym__pointer] = "_pointer",
  [sym_reference] = "reference",
  [sym_value] = "value",
  [sym__operator] = "_operator",
  [sym__formula] = "_formula",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_statement] = "statement",
  [sym_function] = "function",
  [sym_assignment] = "assignment",
  [sym__notation] = "_notation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_case_block_repeat1] = "case_block_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__notation_repeat1] = "_notation_repeat1",
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
    .visible = false,
    .named = true,
  },
  [aux_sym__while_e_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__while_f] = {
    .visible = false,
    .named = true,
  },
  [sym__until_e] = {
    .visible = false,
    .named = true,
  },
  [sym__until_f] = {
    .visible = false,
    .named = true,
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
    .visible = false,
    .named = true,
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
    .visible = false,
    .named = true,
  },
  [sym__repeat_f] = {
    .visible = false,
    .named = true,
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
    .visible = false,
    .named = true,
  },
  [sym__if_f] = {
    .visible = false,
    .named = true,
  },
  [sym__else_e] = {
    .visible = false,
    .named = true,
  },
  [sym__else_f] = {
    .visible = false,
    .named = true,
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
    .visible = false,
    .named = true,
  },
  [sym__case_of_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_case_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_case_f] = {
    .visible = false,
    .named = true,
  },
  [sym__begin_sql_e] = {
    .visible = false,
    .named = true,
  },
  [sym__begin_sql_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_sql_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_sql_f] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__dec_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__num_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__exp_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__storage_suffix_token1] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
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
    .visible = false,
    .named = true,
  },
  [sym__for_each_f] = {
    .visible = false,
    .named = true,
  },
  [sym_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym__end_for_each_e] = {
    .visible = false,
    .named = true,
  },
  [sym_end_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym__while_e] = {
    .visible = false,
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
  [sym__for_e] = {
    .visible = false,
    .named = true,
  },
  [sym__for_f] = {
    .visible = false,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym__end_for_e] = {
    .visible = false,
    .named = true,
  },
  [sym_end_for] = {
    .visible = true,
    .named = true,
  },
  [sym__use_e] = {
    .visible = false,
    .named = true,
  },
  [sym__use_f] = {
    .visible = false,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__end_use_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_use_f] = {
    .visible = false,
    .named = true,
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
    .visible = false,
    .named = true,
  },
  [sym__end_while_f] = {
    .visible = false,
    .named = true,
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
    .visible = false,
    .named = true,
  },
  [sym__end_if_f] = {
    .visible = false,
    .named = true,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym__storage_suffix] = {
    .visible = false,
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
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interprocess_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__dereference] = {
    .visible = false,
    .named = true,
  },
  [sym__pointer] = {
    .visible = false,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym__formula] = {
    .visible = false,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__notation] = {
    .visible = false,
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__notation_repeat1] = {
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
      if (lookahead == 0) ADVANCE(207);
      if (lookahead == '!') ADVANCE(279);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(388);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(358);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '|') ADVANCE(372);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(207);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(388);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(358);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == '|') ADVANCE(372);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(293);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(311);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('E' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(207);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(388);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(358);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '|') ADVANCE(372);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(293);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(311);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('E' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(279);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(379);
      if (lookahead == '?') ADVANCE(274);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(388);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == '|') ADVANCE(372);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(388);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '[') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == '|') ADVANCE(372);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(118);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(212);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '+') ADVANCE(387);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == '?') ADVANCE(385);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(365);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 99:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 100:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(253);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(255);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 155:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 156:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(127);
      END_STATE();
    case 160:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(128);
      END_STATE();
    case 161:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(195);
      END_STATE();
    case 162:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(196);
      END_STATE();
    case 163:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(197);
      END_STATE();
    case 164:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(198);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 175:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 177:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 182:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 189:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 190:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 191:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 193:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 194:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 198:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 199:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 200:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__for_each_e_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__for_each_e_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__for_each_f_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__for_each_f_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__end_for_each_e_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__while_e_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__while_e_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__while_f);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__for_e_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__for_e_token1);
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__for_f_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__for_f_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__end_for_e_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__use_e_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__use_e_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__use_f_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__use_f_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__end_use_e_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__end_use_f_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__repeat_e);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__repeat_f);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__end_while_e_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__end_while_f_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__if_e);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__end_if_e_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__end_if_f_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__case_of_e);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__case_of_f);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__begin_sql_e);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__begin_sql_f);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == '.') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__num_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__exp_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(387);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == '?') ADVANCE(385);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__storage_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '|') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_CARET_PIPE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '=') ADVANCE(381);
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
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
  [4] = {.lex_state = 2},
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
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 30},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 30},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 30},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 30},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 30},
  [141] = {.lex_state = 30},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 209},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 30},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 30},
  [152] = {.lex_state = 30},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 30},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 30},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 30},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 30},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 30},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 30},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 35},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_parameter] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_CARET_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_DASH] = ACTIONS(1),
    [anon_sym_QMARK_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(154),
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
    [sym__for_each_e] = STATE(153),
    [sym__for_each_f] = STATE(153),
    [sym_for_each] = STATE(127),
    [sym__while_e] = STATE(178),
    [sym_while] = STATE(128),
    [sym__for_e] = STATE(150),
    [sym__for_f] = STATE(150),
    [sym_for] = STATE(129),
    [sym__use_e] = STATE(148),
    [sym__use_f] = STATE(148),
    [sym_use] = STATE(130),
    [sym_repeat] = STATE(105),
    [sym_if] = STATE(132),
    [sym_case_of] = STATE(134),
    [sym_begin_sql] = STATE(103),
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(20),
    [sym_statement] = STATE(3),
    [sym_function] = STATE(53),
    [sym_assignment] = STATE(3),
    [sym__notation] = STATE(53),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym__for_each_e_token1] = ACTIONS(9),
    [aux_sym__for_each_f_token1] = ACTIONS(9),
    [aux_sym__while_e_token1] = ACTIONS(11),
    [sym__while_f] = ACTIONS(11),
    [aux_sym__for_e_token1] = ACTIONS(13),
    [aux_sym__for_f_token1] = ACTIONS(13),
    [aux_sym__use_e_token1] = ACTIONS(15),
    [aux_sym__use_f_token1] = ACTIONS(15),
    [sym__repeat_e] = ACTIONS(17),
    [sym__repeat_f] = ACTIONS(17),
    [sym__if_e] = ACTIONS(19),
    [sym__if_f] = ACTIONS(19),
    [sym__case_of_e] = ACTIONS(21),
    [sym__case_of_f] = ACTIONS(21),
    [sym__begin_sql_e] = ACTIONS(23),
    [sym__begin_sql_f] = ACTIONS(23),
    [sym__name] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
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
    [sym__for_each_e] = STATE(153),
    [sym__for_each_f] = STATE(153),
    [sym_for_each] = STATE(127),
    [sym__while_e] = STATE(178),
    [sym_while] = STATE(128),
    [sym__for_e] = STATE(150),
    [sym__for_f] = STATE(150),
    [sym_for] = STATE(129),
    [sym__use_e] = STATE(148),
    [sym__use_f] = STATE(148),
    [sym_use] = STATE(130),
    [sym_repeat] = STATE(105),
    [sym_if] = STATE(132),
    [sym_case_of] = STATE(134),
    [sym_begin_sql] = STATE(103),
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(20),
    [sym_statement] = STATE(2),
    [sym_function] = STATE(53),
    [sym_assignment] = STATE(2),
    [sym__notation] = STATE(53),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_STAR] = ACTIONS(40),
    [aux_sym__for_each_e_token1] = ACTIONS(43),
    [aux_sym__for_each_f_token1] = ACTIONS(43),
    [aux_sym__while_e_token1] = ACTIONS(46),
    [sym__while_f] = ACTIONS(46),
    [aux_sym__for_e_token1] = ACTIONS(49),
    [aux_sym__for_f_token1] = ACTIONS(49),
    [aux_sym__use_e_token1] = ACTIONS(52),
    [aux_sym__use_f_token1] = ACTIONS(52),
    [sym__repeat_e] = ACTIONS(55),
    [sym__repeat_f] = ACTIONS(55),
    [sym__if_e] = ACTIONS(58),
    [sym__if_f] = ACTIONS(58),
    [sym__case_of_e] = ACTIONS(61),
    [sym__case_of_f] = ACTIONS(61),
    [sym__begin_sql_e] = ACTIONS(64),
    [sym__begin_sql_f] = ACTIONS(64),
    [sym__name] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_LT_GT] = ACTIONS(76),
    [sym_parameter] = ACTIONS(79),
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
    [sym__for_each_e] = STATE(153),
    [sym__for_each_f] = STATE(153),
    [sym_for_each] = STATE(127),
    [sym__while_e] = STATE(178),
    [sym_while] = STATE(128),
    [sym__for_e] = STATE(150),
    [sym__for_f] = STATE(150),
    [sym_for] = STATE(129),
    [sym__use_e] = STATE(148),
    [sym__use_f] = STATE(148),
    [sym_use] = STATE(130),
    [sym_repeat] = STATE(105),
    [sym_if] = STATE(132),
    [sym_case_of] = STATE(134),
    [sym_begin_sql] = STATE(103),
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(20),
    [sym_statement] = STATE(2),
    [sym_function] = STATE(53),
    [sym_assignment] = STATE(2),
    [sym__notation] = STATE(53),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [aux_sym__for_each_e_token1] = ACTIONS(9),
    [aux_sym__for_each_f_token1] = ACTIONS(9),
    [aux_sym__while_e_token1] = ACTIONS(11),
    [sym__while_f] = ACTIONS(11),
    [aux_sym__for_e_token1] = ACTIONS(13),
    [aux_sym__for_f_token1] = ACTIONS(13),
    [aux_sym__use_e_token1] = ACTIONS(15),
    [aux_sym__use_f_token1] = ACTIONS(15),
    [sym__repeat_e] = ACTIONS(17),
    [sym__repeat_f] = ACTIONS(17),
    [sym__if_e] = ACTIONS(19),
    [sym__if_f] = ACTIONS(19),
    [sym__case_of_e] = ACTIONS(21),
    [sym__case_of_f] = ACTIONS(21),
    [sym__begin_sql_e] = ACTIONS(23),
    [sym__begin_sql_f] = ACTIONS(23),
    [sym__name] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_SLASH_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [aux_sym__for_each_e_token1] = ACTIONS(86),
    [aux_sym__for_each_f_token1] = ACTIONS(86),
    [aux_sym__while_e_token1] = ACTIONS(86),
    [sym__while_f] = ACTIONS(86),
    [aux_sym__for_e_token1] = ACTIONS(86),
    [aux_sym__for_f_token1] = ACTIONS(86),
    [aux_sym__use_e_token1] = ACTIONS(86),
    [aux_sym__use_f_token1] = ACTIONS(86),
    [sym__repeat_e] = ACTIONS(86),
    [sym__repeat_f] = ACTIONS(86),
    [sym__if_e] = ACTIONS(86),
    [sym__if_f] = ACTIONS(86),
    [sym__case_of_e] = ACTIONS(86),
    [sym__case_of_f] = ACTIONS(86),
    [sym__begin_sql_e] = ACTIONS(86),
    [sym__begin_sql_f] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(84),
    [sym__name] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_LT_GT] = ACTIONS(84),
    [sym_parameter] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_CARET_PIPE] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_QMARK_QMARK] = ACTIONS(84),
    [anon_sym_QMARK_DASH] = ACTIONS(84),
    [anon_sym_QMARK_PLUS] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_COLON_EQ] = ACTIONS(84),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_SLASH_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [aux_sym__for_each_e_token1] = ACTIONS(86),
    [aux_sym__for_each_f_token1] = ACTIONS(86),
    [aux_sym__while_e_token1] = ACTIONS(86),
    [sym__while_f] = ACTIONS(86),
    [aux_sym__for_e_token1] = ACTIONS(86),
    [aux_sym__for_f_token1] = ACTIONS(86),
    [aux_sym__use_e_token1] = ACTIONS(86),
    [aux_sym__use_f_token1] = ACTIONS(86),
    [sym__repeat_e] = ACTIONS(86),
    [sym__repeat_f] = ACTIONS(86),
    [sym__if_e] = ACTIONS(86),
    [sym__if_f] = ACTIONS(86),
    [sym__case_of_e] = ACTIONS(86),
    [sym__case_of_f] = ACTIONS(86),
    [sym__begin_sql_e] = ACTIONS(86),
    [sym__begin_sql_f] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(84),
    [sym__name] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_LT_GT] = ACTIONS(84),
    [sym_parameter] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_CARET_PIPE] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_QMARK_QMARK] = ACTIONS(84),
    [anon_sym_QMARK_DASH] = ACTIONS(84),
    [anon_sym_QMARK_PLUS] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_COLON_EQ] = ACTIONS(84),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [aux_sym__for_each_e_token1] = ACTIONS(92),
    [aux_sym__for_each_f_token1] = ACTIONS(92),
    [aux_sym__while_e_token1] = ACTIONS(92),
    [sym__while_f] = ACTIONS(92),
    [aux_sym__for_e_token1] = ACTIONS(92),
    [aux_sym__for_f_token1] = ACTIONS(92),
    [aux_sym__use_e_token1] = ACTIONS(92),
    [aux_sym__use_f_token1] = ACTIONS(92),
    [sym__repeat_e] = ACTIONS(92),
    [sym__repeat_f] = ACTIONS(92),
    [sym__if_e] = ACTIONS(92),
    [sym__if_f] = ACTIONS(92),
    [sym__case_of_e] = ACTIONS(92),
    [sym__case_of_f] = ACTIONS(92),
    [sym__begin_sql_e] = ACTIONS(92),
    [sym__begin_sql_f] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(90),
    [sym__name] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_LT_GT] = ACTIONS(90),
    [sym_parameter] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_CARET_PIPE] = ACTIONS(90),
    [anon_sym_LT_LT] = ACTIONS(90),
    [anon_sym_GT_GT] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(90),
    [anon_sym_QMARK_QMARK] = ACTIONS(90),
    [anon_sym_QMARK_DASH] = ACTIONS(90),
    [anon_sym_QMARK_PLUS] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_COLON_EQ] = ACTIONS(90),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_SLASH_SLASH] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym__for_each_e_token1] = ACTIONS(96),
    [aux_sym__for_each_f_token1] = ACTIONS(96),
    [aux_sym__while_e_token1] = ACTIONS(96),
    [sym__while_f] = ACTIONS(96),
    [aux_sym__for_e_token1] = ACTIONS(96),
    [aux_sym__for_f_token1] = ACTIONS(96),
    [aux_sym__use_e_token1] = ACTIONS(96),
    [aux_sym__use_f_token1] = ACTIONS(96),
    [sym__repeat_e] = ACTIONS(96),
    [sym__repeat_f] = ACTIONS(96),
    [sym__if_e] = ACTIONS(96),
    [sym__if_f] = ACTIONS(96),
    [sym__case_of_e] = ACTIONS(96),
    [sym__case_of_f] = ACTIONS(96),
    [sym__begin_sql_e] = ACTIONS(96),
    [sym__begin_sql_f] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(94),
    [sym__name] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_LT_GT] = ACTIONS(94),
    [sym_parameter] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_CARET_PIPE] = ACTIONS(94),
    [anon_sym_LT_LT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_QMARK_QMARK] = ACTIONS(94),
    [anon_sym_QMARK_DASH] = ACTIONS(94),
    [anon_sym_QMARK_PLUS] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_COLON_EQ] = ACTIONS(94),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_SLASH_SLASH] = ACTIONS(98),
    [anon_sym_SLASH_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [aux_sym__for_each_e_token1] = ACTIONS(100),
    [aux_sym__for_each_f_token1] = ACTIONS(100),
    [aux_sym__while_e_token1] = ACTIONS(100),
    [sym__while_f] = ACTIONS(100),
    [aux_sym__for_e_token1] = ACTIONS(100),
    [aux_sym__for_f_token1] = ACTIONS(100),
    [aux_sym__use_e_token1] = ACTIONS(100),
    [aux_sym__use_f_token1] = ACTIONS(100),
    [sym__repeat_e] = ACTIONS(100),
    [sym__repeat_f] = ACTIONS(100),
    [sym__if_e] = ACTIONS(100),
    [sym__if_f] = ACTIONS(100),
    [sym__case_of_e] = ACTIONS(100),
    [sym__case_of_f] = ACTIONS(100),
    [sym__begin_sql_e] = ACTIONS(100),
    [sym__begin_sql_f] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(98),
    [sym__name] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_LT_GT] = ACTIONS(98),
    [sym_parameter] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_CARET_PIPE] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_QMARK_QMARK] = ACTIONS(98),
    [anon_sym_QMARK_DASH] = ACTIONS(98),
    [anon_sym_QMARK_PLUS] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_COLON_EQ] = ACTIONS(98),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym__for_each_e_token1] = ACTIONS(104),
    [aux_sym__for_each_f_token1] = ACTIONS(104),
    [aux_sym__while_e_token1] = ACTIONS(104),
    [sym__while_f] = ACTIONS(104),
    [aux_sym__for_e_token1] = ACTIONS(104),
    [aux_sym__for_f_token1] = ACTIONS(104),
    [aux_sym__use_e_token1] = ACTIONS(104),
    [aux_sym__use_f_token1] = ACTIONS(104),
    [sym__repeat_e] = ACTIONS(104),
    [sym__repeat_f] = ACTIONS(104),
    [sym__if_e] = ACTIONS(104),
    [sym__if_f] = ACTIONS(104),
    [sym__case_of_e] = ACTIONS(104),
    [sym__case_of_f] = ACTIONS(104),
    [sym__begin_sql_e] = ACTIONS(104),
    [sym__begin_sql_f] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(102),
    [sym__name] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_DOLLAR] = ACTIONS(104),
    [anon_sym_LT_GT] = ACTIONS(102),
    [sym_parameter] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_CARET_PIPE] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_LT_EQ] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(102),
    [anon_sym_QMARK_QMARK] = ACTIONS(102),
    [anon_sym_QMARK_DASH] = ACTIONS(102),
    [anon_sym_QMARK_PLUS] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_COLON_EQ] = ACTIONS(102),
  },
  [10] = {
    [sym__storage_suffix] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [aux_sym__for_each_e_token1] = ACTIONS(108),
    [aux_sym__for_each_f_token1] = ACTIONS(108),
    [aux_sym__while_e_token1] = ACTIONS(108),
    [sym__while_f] = ACTIONS(108),
    [aux_sym__for_e_token1] = ACTIONS(108),
    [aux_sym__for_f_token1] = ACTIONS(108),
    [aux_sym__use_e_token1] = ACTIONS(108),
    [aux_sym__use_f_token1] = ACTIONS(108),
    [sym__repeat_e] = ACTIONS(108),
    [sym__repeat_f] = ACTIONS(108),
    [sym__if_e] = ACTIONS(108),
    [sym__if_f] = ACTIONS(108),
    [sym__case_of_e] = ACTIONS(108),
    [sym__case_of_f] = ACTIONS(108),
    [sym__begin_sql_e] = ACTIONS(108),
    [sym__begin_sql_f] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(106),
    [sym__name] = ACTIONS(108),
    [aux_sym__storage_suffix_token1] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_LT_GT] = ACTIONS(106),
    [sym_parameter] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_BSLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_CARET_PIPE] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_LT_EQ] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_QMARK_QMARK] = ACTIONS(106),
    [anon_sym_QMARK_DASH] = ACTIONS(106),
    [anon_sym_QMARK_PLUS] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_COLON_EQ] = ACTIONS(106),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_SLASH_SLASH] = ACTIONS(112),
    [anon_sym_SLASH_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [aux_sym__for_each_e_token1] = ACTIONS(114),
    [aux_sym__for_each_f_token1] = ACTIONS(114),
    [aux_sym__while_e_token1] = ACTIONS(114),
    [sym__while_f] = ACTIONS(114),
    [aux_sym__for_e_token1] = ACTIONS(114),
    [aux_sym__for_f_token1] = ACTIONS(114),
    [aux_sym__use_e_token1] = ACTIONS(114),
    [aux_sym__use_f_token1] = ACTIONS(114),
    [sym__repeat_e] = ACTIONS(114),
    [sym__repeat_f] = ACTIONS(114),
    [sym__if_e] = ACTIONS(114),
    [sym__if_f] = ACTIONS(114),
    [sym__case_of_e] = ACTIONS(114),
    [sym__case_of_f] = ACTIONS(114),
    [sym__begin_sql_e] = ACTIONS(114),
    [sym__begin_sql_f] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(112),
    [sym__name] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_LT_GT] = ACTIONS(112),
    [sym_parameter] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_CARET_PIPE] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_QMARK_QMARK] = ACTIONS(112),
    [anon_sym_QMARK_DASH] = ACTIONS(112),
    [anon_sym_QMARK_PLUS] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_COLON_EQ] = ACTIONS(112),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_SLASH_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(120),
    [aux_sym__for_each_e_token1] = ACTIONS(120),
    [aux_sym__for_each_f_token1] = ACTIONS(120),
    [aux_sym__while_e_token1] = ACTIONS(120),
    [sym__while_f] = ACTIONS(120),
    [aux_sym__for_e_token1] = ACTIONS(120),
    [aux_sym__for_f_token1] = ACTIONS(120),
    [aux_sym__use_e_token1] = ACTIONS(120),
    [aux_sym__use_f_token1] = ACTIONS(120),
    [sym__repeat_e] = ACTIONS(120),
    [sym__repeat_f] = ACTIONS(120),
    [sym__if_e] = ACTIONS(120),
    [sym__if_f] = ACTIONS(120),
    [sym__case_of_e] = ACTIONS(120),
    [sym__case_of_f] = ACTIONS(120),
    [sym__begin_sql_e] = ACTIONS(120),
    [sym__begin_sql_f] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [sym__name] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [anon_sym_LT_GT] = ACTIONS(118),
    [sym_parameter] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_CARET_PIPE] = ACTIONS(118),
    [anon_sym_LT_LT] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_QMARK_QMARK] = ACTIONS(118),
    [anon_sym_QMARK_DASH] = ACTIONS(118),
    [anon_sym_QMARK_PLUS] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_COLON_EQ] = ACTIONS(118),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(124),
    [aux_sym__for_each_e_token1] = ACTIONS(124),
    [aux_sym__for_each_f_token1] = ACTIONS(124),
    [aux_sym__while_e_token1] = ACTIONS(124),
    [sym__while_f] = ACTIONS(124),
    [aux_sym__for_e_token1] = ACTIONS(124),
    [aux_sym__for_f_token1] = ACTIONS(124),
    [aux_sym__use_e_token1] = ACTIONS(124),
    [aux_sym__use_f_token1] = ACTIONS(124),
    [sym__repeat_e] = ACTIONS(124),
    [sym__repeat_f] = ACTIONS(124),
    [sym__if_e] = ACTIONS(124),
    [sym__if_f] = ACTIONS(124),
    [sym__case_of_e] = ACTIONS(124),
    [sym__case_of_f] = ACTIONS(124),
    [sym__begin_sql_e] = ACTIONS(124),
    [sym__begin_sql_f] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym__name] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_LT_GT] = ACTIONS(122),
    [sym_parameter] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_CARET_PIPE] = ACTIONS(122),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_QMARK_QMARK] = ACTIONS(122),
    [anon_sym_QMARK_DASH] = ACTIONS(122),
    [anon_sym_QMARK_PLUS] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_COLON_EQ] = ACTIONS(122),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_SLASH_SLASH] = ACTIONS(112),
    [anon_sym_SLASH_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [aux_sym__for_each_e_token1] = ACTIONS(114),
    [aux_sym__for_each_f_token1] = ACTIONS(114),
    [aux_sym__while_e_token1] = ACTIONS(114),
    [sym__while_f] = ACTIONS(114),
    [aux_sym__for_e_token1] = ACTIONS(114),
    [aux_sym__for_f_token1] = ACTIONS(114),
    [aux_sym__use_e_token1] = ACTIONS(114),
    [aux_sym__use_f_token1] = ACTIONS(114),
    [sym__repeat_e] = ACTIONS(114),
    [sym__repeat_f] = ACTIONS(114),
    [sym__if_e] = ACTIONS(114),
    [sym__if_f] = ACTIONS(114),
    [sym__case_of_e] = ACTIONS(114),
    [sym__case_of_f] = ACTIONS(114),
    [sym__begin_sql_e] = ACTIONS(114),
    [sym__begin_sql_f] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [sym__name] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_LT_GT] = ACTIONS(112),
    [sym_parameter] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_CARET_PIPE] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_QMARK_QMARK] = ACTIONS(112),
    [anon_sym_QMARK_DASH] = ACTIONS(112),
    [anon_sym_QMARK_PLUS] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_COLON_EQ] = ACTIONS(112),
  },
  [15] = {
    [sym__operator] = STATE(27),
    [sym_arguments] = STATE(51),
    [aux_sym__notation_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [aux_sym__for_each_e_token1] = ACTIONS(130),
    [aux_sym__for_each_f_token1] = ACTIONS(130),
    [aux_sym__while_e_token1] = ACTIONS(130),
    [sym__while_f] = ACTIONS(130),
    [aux_sym__for_e_token1] = ACTIONS(130),
    [aux_sym__for_f_token1] = ACTIONS(130),
    [aux_sym__use_e_token1] = ACTIONS(130),
    [aux_sym__use_f_token1] = ACTIONS(130),
    [sym__repeat_e] = ACTIONS(130),
    [sym__repeat_f] = ACTIONS(130),
    [sym__if_e] = ACTIONS(130),
    [sym__if_f] = ACTIONS(130),
    [sym__case_of_e] = ACTIONS(130),
    [sym__case_of_f] = ACTIONS(130),
    [sym__begin_sql_e] = ACTIONS(130),
    [sym__begin_sql_f] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(134),
    [sym__name] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_LT_GT] = ACTIONS(126),
    [sym_parameter] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_CARET_PIPE] = ACTIONS(132),
    [anon_sym_LT_LT] = ACTIONS(132),
    [anon_sym_GT_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_QMARK_QMARK] = ACTIONS(132),
    [anon_sym_QMARK_DASH] = ACTIONS(132),
    [anon_sym_QMARK_PLUS] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(136),
  },
  [16] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_table] = STATE(131),
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(23),
    [sym_value] = STATE(131),
    [sym__formula] = STATE(44),
    [sym_argument] = STATE(107),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(162),
  },
  [17] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_table] = STATE(131),
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(23),
    [sym_value] = STATE(131),
    [sym__formula] = STATE(44),
    [sym_argument] = STATE(115),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(164),
  },
  [18] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_table] = STATE(131),
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(23),
    [sym_value] = STATE(131),
    [sym__formula] = STATE(44),
    [sym_argument] = STATE(116),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(166),
  },
  [19] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_table] = STATE(131),
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(23),
    [sym_value] = STATE(131),
    [sym__formula] = STATE(44),
    [sym_argument] = STATE(123),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
  },
  [20] = {
    [sym_arguments] = STATE(51),
    [aux_sym__notation_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_SLASH_STAR] = ACTIONS(168),
    [aux_sym__for_each_e_token1] = ACTIONS(170),
    [aux_sym__for_each_f_token1] = ACTIONS(170),
    [aux_sym__while_e_token1] = ACTIONS(170),
    [sym__while_f] = ACTIONS(170),
    [aux_sym__for_e_token1] = ACTIONS(170),
    [aux_sym__for_f_token1] = ACTIONS(170),
    [aux_sym__use_e_token1] = ACTIONS(170),
    [aux_sym__use_f_token1] = ACTIONS(170),
    [sym__repeat_e] = ACTIONS(170),
    [sym__repeat_f] = ACTIONS(170),
    [sym__if_e] = ACTIONS(170),
    [sym__if_f] = ACTIONS(170),
    [sym__case_of_e] = ACTIONS(170),
    [sym__case_of_f] = ACTIONS(170),
    [sym__begin_sql_e] = ACTIONS(170),
    [sym__begin_sql_f] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(134),
    [sym__name] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(170),
    [anon_sym_LT_GT] = ACTIONS(168),
    [sym_parameter] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_COLON_EQ] = ACTIONS(174),
  },
  [21] = {
    [sym__storage_suffix] = STATE(38),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(106),
    [aux_sym__storage_suffix_token1] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_BSLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_CARET_PIPE] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_LT_EQ] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_QMARK_QMARK] = ACTIONS(106),
    [anon_sym_QMARK_DASH] = ACTIONS(106),
    [anon_sym_QMARK_PLUS] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
  },
  [22] = {
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_CARET_PIPE] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_QMARK_QMARK] = ACTIONS(84),
    [anon_sym_QMARK_DASH] = ACTIONS(84),
    [anon_sym_QMARK_PLUS] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
  },
  [23] = {
    [sym__operator] = STATE(34),
    [sym_arguments] = STATE(51),
    [aux_sym__notation_repeat1] = STATE(92),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_CARET_PIPE] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(180),
    [anon_sym_QMARK_QMARK] = ACTIONS(180),
    [anon_sym_QMARK_DASH] = ACTIONS(180),
    [anon_sym_QMARK_PLUS] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
  },
  [24] = {
    [aux_sym__notation_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [anon_sym_SLASH_STAR] = ACTIONS(184),
    [aux_sym__for_each_e_token1] = ACTIONS(186),
    [aux_sym__for_each_f_token1] = ACTIONS(186),
    [aux_sym__while_e_token1] = ACTIONS(186),
    [sym__while_f] = ACTIONS(186),
    [aux_sym__for_e_token1] = ACTIONS(186),
    [aux_sym__for_f_token1] = ACTIONS(186),
    [aux_sym__use_e_token1] = ACTIONS(186),
    [aux_sym__use_f_token1] = ACTIONS(186),
    [sym__repeat_e] = ACTIONS(186),
    [sym__repeat_f] = ACTIONS(186),
    [sym__if_e] = ACTIONS(186),
    [sym__if_f] = ACTIONS(186),
    [sym__case_of_e] = ACTIONS(186),
    [sym__case_of_f] = ACTIONS(186),
    [sym__begin_sql_e] = ACTIONS(186),
    [sym__begin_sql_f] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(188),
    [sym__name] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [anon_sym_LT_GT] = ACTIONS(184),
    [sym_parameter] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
  },
  [25] = {
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(90),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_CARET_PIPE] = ACTIONS(90),
    [anon_sym_LT_LT] = ACTIONS(90),
    [anon_sym_GT_GT] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(90),
    [anon_sym_QMARK_QMARK] = ACTIONS(90),
    [anon_sym_QMARK_DASH] = ACTIONS(90),
    [anon_sym_QMARK_PLUS] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
  },
  [26] = {
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_CARET_PIPE] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_QMARK_QMARK] = ACTIONS(98),
    [anon_sym_QMARK_DASH] = ACTIONS(98),
    [anon_sym_QMARK_PLUS] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
  },
  [27] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(15),
    [sym_value] = STATE(49),
    [sym__formula] = STATE(44),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(158),
  },
  [28] = {
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_CARET_PIPE] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_QMARK_QMARK] = ACTIONS(84),
    [anon_sym_QMARK_DASH] = ACTIONS(84),
    [anon_sym_QMARK_PLUS] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [anon_sym_SLASH_STAR] = ACTIONS(184),
    [aux_sym__for_each_e_token1] = ACTIONS(186),
    [aux_sym__for_each_f_token1] = ACTIONS(186),
    [aux_sym__while_e_token1] = ACTIONS(186),
    [sym__while_f] = ACTIONS(186),
    [aux_sym__for_e_token1] = ACTIONS(186),
    [aux_sym__for_f_token1] = ACTIONS(186),
    [aux_sym__use_e_token1] = ACTIONS(186),
    [aux_sym__use_f_token1] = ACTIONS(186),
    [sym__repeat_e] = ACTIONS(186),
    [sym__repeat_f] = ACTIONS(186),
    [sym__if_e] = ACTIONS(186),
    [sym__if_f] = ACTIONS(186),
    [sym__case_of_e] = ACTIONS(186),
    [sym__case_of_f] = ACTIONS(186),
    [sym__begin_sql_e] = ACTIONS(186),
    [sym__begin_sql_f] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(184),
    [sym__name] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [anon_sym_LT_GT] = ACTIONS(184),
    [sym_parameter] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
  },
  [30] = {
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_CARET_PIPE] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_LT_EQ] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(102),
    [anon_sym_QMARK_QMARK] = ACTIONS(102),
    [anon_sym_QMARK_DASH] = ACTIONS(102),
    [anon_sym_QMARK_PLUS] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
  },
  [31] = {
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_CARET_PIPE] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_QMARK_QMARK] = ACTIONS(112),
    [anon_sym_QMARK_DASH] = ACTIONS(112),
    [anon_sym_QMARK_PLUS] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
  },
  [32] = {
    [sym_arguments] = STATE(45),
    [aux_sym__notation_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_SLASH_SLASH] = ACTIONS(198),
    [anon_sym_SLASH_STAR] = ACTIONS(198),
    [aux_sym__for_each_e_token1] = ACTIONS(200),
    [aux_sym__for_each_f_token1] = ACTIONS(200),
    [aux_sym__while_e_token1] = ACTIONS(200),
    [sym__while_f] = ACTIONS(200),
    [aux_sym__for_e_token1] = ACTIONS(200),
    [aux_sym__for_f_token1] = ACTIONS(200),
    [aux_sym__use_e_token1] = ACTIONS(200),
    [aux_sym__use_f_token1] = ACTIONS(200),
    [sym__repeat_e] = ACTIONS(200),
    [sym__repeat_f] = ACTIONS(200),
    [sym__if_e] = ACTIONS(200),
    [sym__if_f] = ACTIONS(200),
    [sym__case_of_e] = ACTIONS(200),
    [sym__case_of_f] = ACTIONS(200),
    [sym__begin_sql_e] = ACTIONS(200),
    [sym__begin_sql_f] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(134),
    [sym__name] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(200),
    [anon_sym_LT_GT] = ACTIONS(198),
    [sym_parameter] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(136),
  },
  [33] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(15),
    [sym_value] = STATE(56),
    [sym__formula] = STATE(44),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(158),
  },
  [34] = {
    [sym_number] = STATE(44),
    [sym_time] = STATE(44),
    [sym_date] = STATE(44),
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym__pointer] = STATE(44),
    [sym_reference] = STATE(23),
    [sym_value] = STATE(49),
    [sym__formula] = STATE(44),
    [sym_statement] = STATE(44),
    [sym_function] = STATE(53),
    [sym__notation] = STATE(53),
    [sym__hex_literal] = ACTIONS(138),
    [sym__dec_literal] = ACTIONS(140),
    [sym__num_literal] = ACTIONS(140),
    [sym__exp_literal] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_string] = ACTIONS(146),
    [sym__name] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(158),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_SLASH_SLASH] = ACTIONS(204),
    [anon_sym_SLASH_STAR] = ACTIONS(204),
    [aux_sym__for_each_e_token1] = ACTIONS(206),
    [aux_sym__for_each_f_token1] = ACTIONS(206),
    [aux_sym__while_e_token1] = ACTIONS(206),
    [sym__while_f] = ACTIONS(206),
    [aux_sym__for_e_token1] = ACTIONS(206),
    [aux_sym__for_f_token1] = ACTIONS(206),
    [aux_sym__use_e_token1] = ACTIONS(206),
    [aux_sym__use_f_token1] = ACTIONS(206),
    [sym__repeat_e] = ACTIONS(206),
    [sym__repeat_f] = ACTIONS(206),
    [sym__if_e] = ACTIONS(206),
    [sym__if_f] = ACTIONS(206),
    [sym__case_of_e] = ACTIONS(206),
    [sym__case_of_f] = ACTIONS(206),
    [sym__begin_sql_e] = ACTIONS(206),
    [sym__begin_sql_f] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(204),
    [sym__name] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_LT_GT] = ACTIONS(204),
    [sym_parameter] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
  },
  [36] = {
    [sym_arguments] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_SLASH_SLASH] = ACTIONS(208),
    [anon_sym_SLASH_STAR] = ACTIONS(208),
    [aux_sym__for_each_e_token1] = ACTIONS(210),
    [aux_sym__for_each_f_token1] = ACTIONS(210),
    [aux_sym__while_e_token1] = ACTIONS(210),
    [sym__while_f] = ACTIONS(210),
    [aux_sym__for_e_token1] = ACTIONS(210),
    [aux_sym__for_f_token1] = ACTIONS(210),
    [aux_sym__use_e_token1] = ACTIONS(210),
    [aux_sym__use_f_token1] = ACTIONS(210),
    [sym__repeat_e] = ACTIONS(210),
    [sym__repeat_f] = ACTIONS(210),
    [sym__if_e] = ACTIONS(210),
    [sym__if_f] = ACTIONS(210),
    [sym__case_of_e] = ACTIONS(210),
    [sym__case_of_f] = ACTIONS(210),
    [sym__begin_sql_e] = ACTIONS(210),
    [sym__begin_sql_f] = ACTIONS(210),
    [sym__name] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_LT_GT] = ACTIONS(208),
    [sym_parameter] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(136),
  },
  [37] = {
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_CARET_PIPE] = ACTIONS(94),
    [anon_sym_LT_LT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_QMARK_QMARK] = ACTIONS(94),
    [anon_sym_QMARK_DASH] = ACTIONS(94),
    [anon_sym_QMARK_PLUS] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
  },
  [38] = {
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_CARET_PIPE] = ACTIONS(118),
    [anon_sym_LT_LT] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_QMARK_QMARK] = ACTIONS(118),
    [anon_sym_QMARK_DASH] = ACTIONS(118),
    [anon_sym_QMARK_PLUS] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
  },
  [39] = {
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_CARET_PIPE] = ACTIONS(122),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_QMARK_QMARK] = ACTIONS(122),
    [anon_sym_QMARK_DASH] = ACTIONS(122),
    [anon_sym_QMARK_PLUS] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
  },
  [40] = {
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_CARET_PIPE] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_QMARK_QMARK] = ACTIONS(112),
    [anon_sym_QMARK_DASH] = ACTIONS(112),
    [anon_sym_QMARK_PLUS] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_SLASH_SLASH] = ACTIONS(218),
    [anon_sym_SLASH_STAR] = ACTIONS(218),
    [aux_sym__for_each_e_token1] = ACTIONS(220),
    [aux_sym__for_each_f_token1] = ACTIONS(220),
    [aux_sym__while_e_token1] = ACTIONS(220),
    [sym__while_f] = ACTIONS(220),
    [aux_sym__for_e_token1] = ACTIONS(220),
    [aux_sym__for_f_token1] = ACTIONS(220),
    [aux_sym__use_e_token1] = ACTIONS(220),
    [aux_sym__use_f_token1] = ACTIONS(220),
    [sym__repeat_e] = ACTIONS(220),
    [sym__repeat_f] = ACTIONS(220),
    [sym__if_e] = ACTIONS(220),
    [sym__if_f] = ACTIONS(220),
    [sym__case_of_e] = ACTIONS(220),
    [sym__case_of_f] = ACTIONS(220),
    [sym__begin_sql_e] = ACTIONS(220),
    [sym__begin_sql_f] = ACTIONS(220),
    [sym__name] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(220),
    [anon_sym_LT_GT] = ACTIONS(218),
    [sym_parameter] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_STAR] = ACTIONS(222),
    [aux_sym__for_each_e_token1] = ACTIONS(224),
    [aux_sym__for_each_f_token1] = ACTIONS(224),
    [aux_sym__while_e_token1] = ACTIONS(224),
    [sym__while_f] = ACTIONS(224),
    [aux_sym__for_e_token1] = ACTIONS(224),
    [aux_sym__for_f_token1] = ACTIONS(224),
    [aux_sym__use_e_token1] = ACTIONS(224),
    [aux_sym__use_f_token1] = ACTIONS(224),
    [sym__repeat_e] = ACTIONS(224),
    [sym__repeat_f] = ACTIONS(224),
    [sym__if_e] = ACTIONS(224),
    [sym__if_f] = ACTIONS(224),
    [sym__case_of_e] = ACTIONS(224),
    [sym__case_of_f] = ACTIONS(224),
    [sym__begin_sql_e] = ACTIONS(224),
    [sym__begin_sql_f] = ACTIONS(224),
    [sym__name] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(224),
    [anon_sym_LT_GT] = ACTIONS(222),
    [sym_parameter] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_SLASH_SLASH] = ACTIONS(226),
    [anon_sym_SLASH_STAR] = ACTIONS(226),
    [aux_sym__for_each_e_token1] = ACTIONS(228),
    [aux_sym__for_each_f_token1] = ACTIONS(228),
    [aux_sym__while_e_token1] = ACTIONS(228),
    [sym__while_f] = ACTIONS(228),
    [aux_sym__for_e_token1] = ACTIONS(228),
    [aux_sym__for_f_token1] = ACTIONS(228),
    [aux_sym__use_e_token1] = ACTIONS(228),
    [aux_sym__use_f_token1] = ACTIONS(228),
    [sym__repeat_e] = ACTIONS(228),
    [sym__repeat_f] = ACTIONS(228),
    [sym__if_e] = ACTIONS(228),
    [sym__if_f] = ACTIONS(228),
    [sym__case_of_e] = ACTIONS(228),
    [sym__case_of_f] = ACTIONS(228),
    [sym__begin_sql_e] = ACTIONS(228),
    [sym__begin_sql_f] = ACTIONS(228),
    [sym__name] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [anon_sym_LT_GT] = ACTIONS(226),
    [sym_parameter] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(126),
    [aux_sym__for_each_e_token1] = ACTIONS(130),
    [aux_sym__for_each_f_token1] = ACTIONS(130),
    [aux_sym__while_e_token1] = ACTIONS(130),
    [sym__while_f] = ACTIONS(130),
    [aux_sym__for_e_token1] = ACTIONS(130),
    [aux_sym__for_f_token1] = ACTIONS(130),
    [aux_sym__use_e_token1] = ACTIONS(130),
    [aux_sym__use_f_token1] = ACTIONS(130),
    [sym__repeat_e] = ACTIONS(130),
    [sym__repeat_f] = ACTIONS(130),
    [sym__if_e] = ACTIONS(130),
    [sym__if_f] = ACTIONS(130),
    [sym__case_of_e] = ACTIONS(130),
    [sym__case_of_f] = ACTIONS(130),
    [sym__begin_sql_e] = ACTIONS(130),
    [sym__begin_sql_f] = ACTIONS(130),
    [sym__name] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_LT_GT] = ACTIONS(126),
    [sym_parameter] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(230),
    [anon_sym_SLASH_STAR] = ACTIONS(230),
    [aux_sym__for_each_e_token1] = ACTIONS(232),
    [aux_sym__for_each_f_token1] = ACTIONS(232),
    [aux_sym__while_e_token1] = ACTIONS(232),
    [sym__while_f] = ACTIONS(232),
    [aux_sym__for_e_token1] = ACTIONS(232),
    [aux_sym__for_f_token1] = ACTIONS(232),
    [aux_sym__use_e_token1] = ACTIONS(232),
    [aux_sym__use_f_token1] = ACTIONS(232),
    [sym__repeat_e] = ACTIONS(232),
    [sym__repeat_f] = ACTIONS(232),
    [sym__if_e] = ACTIONS(232),
    [sym__if_f] = ACTIONS(232),
    [sym__case_of_e] = ACTIONS(232),
    [sym__case_of_f] = ACTIONS(232),
    [sym__begin_sql_e] = ACTIONS(232),
    [sym__begin_sql_f] = ACTIONS(232),
    [sym__name] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_DOLLAR] = ACTIONS(232),
    [anon_sym_LT_GT] = ACTIONS(230),
    [sym_parameter] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_SLASH_STAR] = ACTIONS(234),
    [aux_sym__for_each_e_token1] = ACTIONS(236),
    [aux_sym__for_each_f_token1] = ACTIONS(236),
    [aux_sym__while_e_token1] = ACTIONS(236),
    [sym__while_f] = ACTIONS(236),
    [aux_sym__for_e_token1] = ACTIONS(236),
    [aux_sym__for_f_token1] = ACTIONS(236),
    [aux_sym__use_e_token1] = ACTIONS(236),
    [aux_sym__use_f_token1] = ACTIONS(236),
    [sym__repeat_e] = ACTIONS(236),
    [sym__repeat_f] = ACTIONS(236),
    [sym__if_e] = ACTIONS(236),
    [sym__if_f] = ACTIONS(236),
    [sym__case_of_e] = ACTIONS(236),
    [sym__case_of_f] = ACTIONS(236),
    [sym__begin_sql_e] = ACTIONS(236),
    [sym__begin_sql_f] = ACTIONS(236),
    [sym__name] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [anon_sym_LT_GT] = ACTIONS(234),
    [sym_parameter] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_SLASH_SLASH] = ACTIONS(238),
    [anon_sym_SLASH_STAR] = ACTIONS(238),
    [aux_sym__for_each_e_token1] = ACTIONS(240),
    [aux_sym__for_each_f_token1] = ACTIONS(240),
    [aux_sym__while_e_token1] = ACTIONS(240),
    [sym__while_f] = ACTIONS(240),
    [aux_sym__for_e_token1] = ACTIONS(240),
    [aux_sym__for_f_token1] = ACTIONS(240),
    [aux_sym__use_e_token1] = ACTIONS(240),
    [aux_sym__use_f_token1] = ACTIONS(240),
    [sym__repeat_e] = ACTIONS(240),
    [sym__repeat_f] = ACTIONS(240),
    [sym__if_e] = ACTIONS(240),
    [sym__if_f] = ACTIONS(240),
    [sym__case_of_e] = ACTIONS(240),
    [sym__case_of_f] = ACTIONS(240),
    [sym__begin_sql_e] = ACTIONS(240),
    [sym__begin_sql_f] = ACTIONS(240),
    [sym__name] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [anon_sym_LT_GT] = ACTIONS(238),
    [sym_parameter] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_SLASH_SLASH] = ACTIONS(242),
    [anon_sym_SLASH_STAR] = ACTIONS(242),
    [aux_sym__for_each_e_token1] = ACTIONS(244),
    [aux_sym__for_each_f_token1] = ACTIONS(244),
    [aux_sym__while_e_token1] = ACTIONS(244),
    [sym__while_f] = ACTIONS(244),
    [aux_sym__for_e_token1] = ACTIONS(244),
    [aux_sym__for_f_token1] = ACTIONS(244),
    [aux_sym__use_e_token1] = ACTIONS(244),
    [aux_sym__use_f_token1] = ACTIONS(244),
    [sym__repeat_e] = ACTIONS(244),
    [sym__repeat_f] = ACTIONS(244),
    [sym__if_e] = ACTIONS(244),
    [sym__if_f] = ACTIONS(244),
    [sym__case_of_e] = ACTIONS(244),
    [sym__case_of_f] = ACTIONS(244),
    [sym__begin_sql_e] = ACTIONS(244),
    [sym__begin_sql_f] = ACTIONS(244),
    [sym__name] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [anon_sym_LT_GT] = ACTIONS(242),
    [sym_parameter] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_STAR] = ACTIONS(246),
    [aux_sym__for_each_e_token1] = ACTIONS(248),
    [aux_sym__for_each_f_token1] = ACTIONS(248),
    [aux_sym__while_e_token1] = ACTIONS(248),
    [sym__while_f] = ACTIONS(248),
    [aux_sym__for_e_token1] = ACTIONS(248),
    [aux_sym__for_f_token1] = ACTIONS(248),
    [aux_sym__use_e_token1] = ACTIONS(248),
    [aux_sym__use_f_token1] = ACTIONS(248),
    [sym__repeat_e] = ACTIONS(248),
    [sym__repeat_f] = ACTIONS(248),
    [sym__if_e] = ACTIONS(248),
    [sym__if_f] = ACTIONS(248),
    [sym__case_of_e] = ACTIONS(248),
    [sym__case_of_f] = ACTIONS(248),
    [sym__begin_sql_e] = ACTIONS(248),
    [sym__begin_sql_f] = ACTIONS(248),
    [sym__name] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(248),
    [anon_sym_LT_GT] = ACTIONS(246),
    [sym_parameter] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_SLASH_STAR] = ACTIONS(250),
    [aux_sym__for_each_e_token1] = ACTIONS(252),
    [aux_sym__for_each_f_token1] = ACTIONS(252),
    [aux_sym__while_e_token1] = ACTIONS(252),
    [sym__while_f] = ACTIONS(252),
    [aux_sym__for_e_token1] = ACTIONS(252),
    [aux_sym__for_f_token1] = ACTIONS(252),
    [aux_sym__use_e_token1] = ACTIONS(252),
    [aux_sym__use_f_token1] = ACTIONS(252),
    [sym__repeat_e] = ACTIONS(252),
    [sym__repeat_f] = ACTIONS(252),
    [sym__if_e] = ACTIONS(252),
    [sym__if_f] = ACTIONS(252),
    [sym__case_of_e] = ACTIONS(252),
    [sym__case_of_f] = ACTIONS(252),
    [sym__begin_sql_e] = ACTIONS(252),
    [sym__begin_sql_f] = ACTIONS(252),
    [sym__name] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_DOLLAR] = ACTIONS(252),
    [anon_sym_LT_GT] = ACTIONS(250),
    [sym_parameter] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_SLASH_SLASH] = ACTIONS(198),
    [anon_sym_SLASH_STAR] = ACTIONS(198),
    [aux_sym__for_each_e_token1] = ACTIONS(200),
    [aux_sym__for_each_f_token1] = ACTIONS(200),
    [aux_sym__while_e_token1] = ACTIONS(200),
    [sym__while_f] = ACTIONS(200),
    [aux_sym__for_e_token1] = ACTIONS(200),
    [aux_sym__for_f_token1] = ACTIONS(200),
    [aux_sym__use_e_token1] = ACTIONS(200),
    [aux_sym__use_f_token1] = ACTIONS(200),
    [sym__repeat_e] = ACTIONS(200),
    [sym__repeat_f] = ACTIONS(200),
    [sym__if_e] = ACTIONS(200),
    [sym__if_f] = ACTIONS(200),
    [sym__case_of_e] = ACTIONS(200),
    [sym__case_of_f] = ACTIONS(200),
    [sym__begin_sql_e] = ACTIONS(200),
    [sym__begin_sql_f] = ACTIONS(200),
    [sym__name] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(200),
    [anon_sym_LT_GT] = ACTIONS(198),
    [sym_parameter] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_SLASH_SLASH] = ACTIONS(254),
    [anon_sym_SLASH_STAR] = ACTIONS(254),
    [aux_sym__for_each_e_token1] = ACTIONS(256),
    [aux_sym__for_each_f_token1] = ACTIONS(256),
    [aux_sym__while_e_token1] = ACTIONS(256),
    [sym__while_f] = ACTIONS(256),
    [aux_sym__for_e_token1] = ACTIONS(256),
    [aux_sym__for_f_token1] = ACTIONS(256),
    [aux_sym__use_e_token1] = ACTIONS(256),
    [aux_sym__use_f_token1] = ACTIONS(256),
    [sym__repeat_e] = ACTIONS(256),
    [sym__repeat_f] = ACTIONS(256),
    [sym__if_e] = ACTIONS(256),
    [sym__if_f] = ACTIONS(256),
    [sym__case_of_e] = ACTIONS(256),
    [sym__case_of_f] = ACTIONS(256),
    [sym__begin_sql_e] = ACTIONS(256),
    [sym__begin_sql_f] = ACTIONS(256),
    [sym__name] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_LT_GT] = ACTIONS(254),
    [sym_parameter] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_STAR] = ACTIONS(258),
    [aux_sym__for_each_e_token1] = ACTIONS(260),
    [aux_sym__for_each_f_token1] = ACTIONS(260),
    [aux_sym__while_e_token1] = ACTIONS(260),
    [sym__while_f] = ACTIONS(260),
    [aux_sym__for_e_token1] = ACTIONS(260),
    [aux_sym__for_f_token1] = ACTIONS(260),
    [aux_sym__use_e_token1] = ACTIONS(260),
    [aux_sym__use_f_token1] = ACTIONS(260),
    [sym__repeat_e] = ACTIONS(260),
    [sym__repeat_f] = ACTIONS(260),
    [sym__if_e] = ACTIONS(260),
    [sym__if_f] = ACTIONS(260),
    [sym__case_of_e] = ACTIONS(260),
    [sym__case_of_f] = ACTIONS(260),
    [sym__begin_sql_e] = ACTIONS(260),
    [sym__begin_sql_f] = ACTIONS(260),
    [sym__name] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [anon_sym_LT_GT] = ACTIONS(258),
    [sym_parameter] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_SLASH_STAR] = ACTIONS(262),
    [aux_sym__for_each_e_token1] = ACTIONS(264),
    [aux_sym__for_each_f_token1] = ACTIONS(264),
    [aux_sym__while_e_token1] = ACTIONS(264),
    [sym__while_f] = ACTIONS(264),
    [aux_sym__for_e_token1] = ACTIONS(264),
    [aux_sym__for_f_token1] = ACTIONS(264),
    [aux_sym__use_e_token1] = ACTIONS(264),
    [aux_sym__use_f_token1] = ACTIONS(264),
    [sym__repeat_e] = ACTIONS(264),
    [sym__repeat_f] = ACTIONS(264),
    [sym__if_e] = ACTIONS(264),
    [sym__if_f] = ACTIONS(264),
    [sym__case_of_e] = ACTIONS(264),
    [sym__case_of_f] = ACTIONS(264),
    [sym__begin_sql_e] = ACTIONS(264),
    [sym__begin_sql_f] = ACTIONS(264),
    [sym__name] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [anon_sym_LT_GT] = ACTIONS(262),
    [sym_parameter] = ACTIONS(262),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_STAR] = ACTIONS(266),
    [aux_sym__for_each_e_token1] = ACTIONS(268),
    [aux_sym__for_each_f_token1] = ACTIONS(268),
    [aux_sym__while_e_token1] = ACTIONS(268),
    [sym__while_f] = ACTIONS(268),
    [aux_sym__for_e_token1] = ACTIONS(268),
    [aux_sym__for_f_token1] = ACTIONS(268),
    [aux_sym__use_e_token1] = ACTIONS(268),
    [aux_sym__use_f_token1] = ACTIONS(268),
    [sym__repeat_e] = ACTIONS(268),
    [sym__repeat_f] = ACTIONS(268),
    [sym__if_e] = ACTIONS(268),
    [sym__if_f] = ACTIONS(268),
    [sym__case_of_e] = ACTIONS(268),
    [sym__case_of_f] = ACTIONS(268),
    [sym__begin_sql_e] = ACTIONS(268),
    [sym__begin_sql_f] = ACTIONS(268),
    [sym__name] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [anon_sym_LT_GT] = ACTIONS(266),
    [sym_parameter] = ACTIONS(266),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_SLASH_STAR] = ACTIONS(270),
    [aux_sym__for_each_e_token1] = ACTIONS(272),
    [aux_sym__for_each_f_token1] = ACTIONS(272),
    [aux_sym__while_e_token1] = ACTIONS(272),
    [sym__while_f] = ACTIONS(272),
    [aux_sym__for_e_token1] = ACTIONS(272),
    [aux_sym__for_f_token1] = ACTIONS(272),
    [aux_sym__use_e_token1] = ACTIONS(272),
    [aux_sym__use_f_token1] = ACTIONS(272),
    [sym__repeat_e] = ACTIONS(272),
    [sym__repeat_f] = ACTIONS(272),
    [sym__if_e] = ACTIONS(272),
    [sym__if_f] = ACTIONS(272),
    [sym__case_of_e] = ACTIONS(272),
    [sym__case_of_f] = ACTIONS(272),
    [sym__begin_sql_e] = ACTIONS(272),
    [sym__begin_sql_f] = ACTIONS(272),
    [sym__name] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(272),
    [anon_sym_LT_GT] = ACTIONS(270),
    [sym_parameter] = ACTIONS(270),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_SLASH_SLASH] = ACTIONS(274),
    [anon_sym_SLASH_STAR] = ACTIONS(274),
    [aux_sym__for_each_e_token1] = ACTIONS(276),
    [aux_sym__for_each_f_token1] = ACTIONS(276),
    [aux_sym__while_e_token1] = ACTIONS(276),
    [sym__while_f] = ACTIONS(276),
    [aux_sym__for_e_token1] = ACTIONS(276),
    [aux_sym__for_f_token1] = ACTIONS(276),
    [aux_sym__use_e_token1] = ACTIONS(276),
    [aux_sym__use_f_token1] = ACTIONS(276),
    [sym__repeat_e] = ACTIONS(276),
    [sym__repeat_f] = ACTIONS(276),
    [sym__if_e] = ACTIONS(276),
    [sym__if_f] = ACTIONS(276),
    [sym__case_of_e] = ACTIONS(276),
    [sym__case_of_f] = ACTIONS(276),
    [sym__begin_sql_e] = ACTIONS(276),
    [sym__begin_sql_f] = ACTIONS(276),
    [sym__name] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_DOLLAR] = ACTIONS(276),
    [anon_sym_LT_GT] = ACTIONS(274),
    [sym_parameter] = ACTIONS(274),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [anon_sym_SLASH_STAR] = ACTIONS(278),
    [aux_sym__for_each_e_token1] = ACTIONS(280),
    [aux_sym__for_each_f_token1] = ACTIONS(280),
    [aux_sym__while_e_token1] = ACTIONS(280),
    [sym__while_f] = ACTIONS(280),
    [aux_sym__for_e_token1] = ACTIONS(280),
    [aux_sym__for_f_token1] = ACTIONS(280),
    [aux_sym__use_e_token1] = ACTIONS(280),
    [aux_sym__use_f_token1] = ACTIONS(280),
    [sym__repeat_e] = ACTIONS(280),
    [sym__repeat_f] = ACTIONS(280),
    [sym__if_e] = ACTIONS(280),
    [sym__if_f] = ACTIONS(280),
    [sym__case_of_e] = ACTIONS(280),
    [sym__case_of_f] = ACTIONS(280),
    [sym__begin_sql_e] = ACTIONS(280),
    [sym__begin_sql_f] = ACTIONS(280),
    [sym__name] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(280),
    [anon_sym_LT_GT] = ACTIONS(278),
    [sym_parameter] = ACTIONS(278),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(282),
    [anon_sym_SLASH_STAR] = ACTIONS(282),
    [aux_sym__for_each_e_token1] = ACTIONS(284),
    [aux_sym__for_each_f_token1] = ACTIONS(284),
    [aux_sym__while_e_token1] = ACTIONS(284),
    [sym__while_f] = ACTIONS(284),
    [aux_sym__for_e_token1] = ACTIONS(284),
    [aux_sym__for_f_token1] = ACTIONS(284),
    [aux_sym__use_e_token1] = ACTIONS(284),
    [aux_sym__use_f_token1] = ACTIONS(284),
    [sym__repeat_e] = ACTIONS(284),
    [sym__repeat_f] = ACTIONS(284),
    [sym__if_e] = ACTIONS(284),
    [sym__if_f] = ACTIONS(284),
    [sym__case_of_e] = ACTIONS(284),
    [sym__case_of_f] = ACTIONS(284),
    [sym__begin_sql_e] = ACTIONS(284),
    [sym__begin_sql_f] = ACTIONS(284),
    [sym__name] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_DOLLAR] = ACTIONS(284),
    [anon_sym_LT_GT] = ACTIONS(282),
    [sym_parameter] = ACTIONS(282),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_STAR] = ACTIONS(286),
    [aux_sym__for_each_e_token1] = ACTIONS(288),
    [aux_sym__for_each_f_token1] = ACTIONS(288),
    [aux_sym__while_e_token1] = ACTIONS(288),
    [sym__while_f] = ACTIONS(288),
    [aux_sym__for_e_token1] = ACTIONS(288),
    [aux_sym__for_f_token1] = ACTIONS(288),
    [aux_sym__use_e_token1] = ACTIONS(288),
    [aux_sym__use_f_token1] = ACTIONS(288),
    [sym__repeat_e] = ACTIONS(288),
    [sym__repeat_f] = ACTIONS(288),
    [sym__if_e] = ACTIONS(288),
    [sym__if_f] = ACTIONS(288),
    [sym__case_of_e] = ACTIONS(288),
    [sym__case_of_f] = ACTIONS(288),
    [sym__begin_sql_e] = ACTIONS(288),
    [sym__begin_sql_f] = ACTIONS(288),
    [sym__name] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_DOLLAR] = ACTIONS(288),
    [anon_sym_LT_GT] = ACTIONS(286),
    [sym_parameter] = ACTIONS(286),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_STAR] = ACTIONS(290),
    [aux_sym__for_each_e_token1] = ACTIONS(292),
    [aux_sym__for_each_f_token1] = ACTIONS(292),
    [aux_sym__while_e_token1] = ACTIONS(292),
    [sym__while_f] = ACTIONS(292),
    [aux_sym__for_e_token1] = ACTIONS(292),
    [aux_sym__for_f_token1] = ACTIONS(292),
    [aux_sym__use_e_token1] = ACTIONS(292),
    [aux_sym__use_f_token1] = ACTIONS(292),
    [sym__repeat_e] = ACTIONS(292),
    [sym__repeat_f] = ACTIONS(292),
    [sym__if_e] = ACTIONS(292),
    [sym__if_f] = ACTIONS(292),
    [sym__case_of_e] = ACTIONS(292),
    [sym__case_of_f] = ACTIONS(292),
    [sym__begin_sql_e] = ACTIONS(292),
    [sym__begin_sql_f] = ACTIONS(292),
    [sym__name] = ACTIONS(292),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [anon_sym_LT_GT] = ACTIONS(290),
    [sym_parameter] = ACTIONS(290),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_SLASH_STAR] = ACTIONS(294),
    [aux_sym__for_each_e_token1] = ACTIONS(296),
    [aux_sym__for_each_f_token1] = ACTIONS(296),
    [aux_sym__while_e_token1] = ACTIONS(296),
    [sym__while_f] = ACTIONS(296),
    [aux_sym__for_e_token1] = ACTIONS(296),
    [aux_sym__for_f_token1] = ACTIONS(296),
    [aux_sym__use_e_token1] = ACTIONS(296),
    [aux_sym__use_f_token1] = ACTIONS(296),
    [sym__repeat_e] = ACTIONS(296),
    [sym__repeat_f] = ACTIONS(296),
    [sym__if_e] = ACTIONS(296),
    [sym__if_f] = ACTIONS(296),
    [sym__case_of_e] = ACTIONS(296),
    [sym__case_of_f] = ACTIONS(296),
    [sym__begin_sql_e] = ACTIONS(296),
    [sym__begin_sql_f] = ACTIONS(296),
    [sym__name] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_LT_GT] = ACTIONS(294),
    [sym_parameter] = ACTIONS(294),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_STAR] = ACTIONS(298),
    [aux_sym__for_each_e_token1] = ACTIONS(300),
    [aux_sym__for_each_f_token1] = ACTIONS(300),
    [aux_sym__while_e_token1] = ACTIONS(300),
    [sym__while_f] = ACTIONS(300),
    [aux_sym__for_e_token1] = ACTIONS(300),
    [aux_sym__for_f_token1] = ACTIONS(300),
    [aux_sym__use_e_token1] = ACTIONS(300),
    [aux_sym__use_f_token1] = ACTIONS(300),
    [sym__repeat_e] = ACTIONS(300),
    [sym__repeat_f] = ACTIONS(300),
    [sym__if_e] = ACTIONS(300),
    [sym__if_f] = ACTIONS(300),
    [sym__case_of_e] = ACTIONS(300),
    [sym__case_of_f] = ACTIONS(300),
    [sym__begin_sql_e] = ACTIONS(300),
    [sym__begin_sql_f] = ACTIONS(300),
    [sym__name] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [anon_sym_LT_GT] = ACTIONS(298),
    [sym_parameter] = ACTIONS(298),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_STAR] = ACTIONS(302),
    [aux_sym__for_each_e_token1] = ACTIONS(304),
    [aux_sym__for_each_f_token1] = ACTIONS(304),
    [aux_sym__while_e_token1] = ACTIONS(304),
    [sym__while_f] = ACTIONS(304),
    [aux_sym__for_e_token1] = ACTIONS(304),
    [aux_sym__for_f_token1] = ACTIONS(304),
    [aux_sym__use_e_token1] = ACTIONS(304),
    [aux_sym__use_f_token1] = ACTIONS(304),
    [sym__repeat_e] = ACTIONS(304),
    [sym__repeat_f] = ACTIONS(304),
    [sym__if_e] = ACTIONS(304),
    [sym__if_f] = ACTIONS(304),
    [sym__case_of_e] = ACTIONS(304),
    [sym__case_of_f] = ACTIONS(304),
    [sym__begin_sql_e] = ACTIONS(304),
    [sym__begin_sql_f] = ACTIONS(304),
    [sym__name] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(304),
    [anon_sym_LT_GT] = ACTIONS(302),
    [sym_parameter] = ACTIONS(302),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_STAR] = ACTIONS(306),
    [aux_sym__for_each_e_token1] = ACTIONS(308),
    [aux_sym__for_each_f_token1] = ACTIONS(308),
    [aux_sym__while_e_token1] = ACTIONS(308),
    [sym__while_f] = ACTIONS(308),
    [aux_sym__for_e_token1] = ACTIONS(308),
    [aux_sym__for_f_token1] = ACTIONS(308),
    [aux_sym__use_e_token1] = ACTIONS(308),
    [aux_sym__use_f_token1] = ACTIONS(308),
    [sym__repeat_e] = ACTIONS(308),
    [sym__repeat_f] = ACTIONS(308),
    [sym__if_e] = ACTIONS(308),
    [sym__if_f] = ACTIONS(308),
    [sym__case_of_e] = ACTIONS(308),
    [sym__case_of_f] = ACTIONS(308),
    [sym__begin_sql_e] = ACTIONS(308),
    [sym__begin_sql_f] = ACTIONS(308),
    [sym__name] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_LT_GT] = ACTIONS(306),
    [sym_parameter] = ACTIONS(306),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [anon_sym_SLASH_STAR] = ACTIONS(310),
    [aux_sym__for_each_e_token1] = ACTIONS(312),
    [aux_sym__for_each_f_token1] = ACTIONS(312),
    [aux_sym__while_e_token1] = ACTIONS(312),
    [sym__while_f] = ACTIONS(312),
    [aux_sym__for_e_token1] = ACTIONS(312),
    [aux_sym__for_f_token1] = ACTIONS(312),
    [aux_sym__use_e_token1] = ACTIONS(312),
    [aux_sym__use_f_token1] = ACTIONS(312),
    [sym__repeat_e] = ACTIONS(312),
    [sym__repeat_f] = ACTIONS(312),
    [sym__if_e] = ACTIONS(312),
    [sym__if_f] = ACTIONS(312),
    [sym__case_of_e] = ACTIONS(312),
    [sym__case_of_f] = ACTIONS(312),
    [sym__begin_sql_e] = ACTIONS(312),
    [sym__begin_sql_f] = ACTIONS(312),
    [sym__name] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(312),
    [anon_sym_LT_GT] = ACTIONS(310),
    [sym_parameter] = ACTIONS(310),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_SLASH_STAR] = ACTIONS(314),
    [aux_sym__for_each_e_token1] = ACTIONS(316),
    [aux_sym__for_each_f_token1] = ACTIONS(316),
    [aux_sym__while_e_token1] = ACTIONS(316),
    [sym__while_f] = ACTIONS(316),
    [aux_sym__for_e_token1] = ACTIONS(316),
    [aux_sym__for_f_token1] = ACTIONS(316),
    [aux_sym__use_e_token1] = ACTIONS(316),
    [aux_sym__use_f_token1] = ACTIONS(316),
    [sym__repeat_e] = ACTIONS(316),
    [sym__repeat_f] = ACTIONS(316),
    [sym__if_e] = ACTIONS(316),
    [sym__if_f] = ACTIONS(316),
    [sym__case_of_e] = ACTIONS(316),
    [sym__case_of_f] = ACTIONS(316),
    [sym__begin_sql_e] = ACTIONS(316),
    [sym__begin_sql_f] = ACTIONS(316),
    [sym__name] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [anon_sym_LT_GT] = ACTIONS(314),
    [sym_parameter] = ACTIONS(314),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(318),
    [anon_sym_SLASH_STAR] = ACTIONS(318),
    [aux_sym__for_each_e_token1] = ACTIONS(320),
    [aux_sym__for_each_f_token1] = ACTIONS(320),
    [aux_sym__while_e_token1] = ACTIONS(320),
    [sym__while_f] = ACTIONS(320),
    [aux_sym__for_e_token1] = ACTIONS(320),
    [aux_sym__for_f_token1] = ACTIONS(320),
    [aux_sym__use_e_token1] = ACTIONS(320),
    [aux_sym__use_f_token1] = ACTIONS(320),
    [sym__repeat_e] = ACTIONS(320),
    [sym__repeat_f] = ACTIONS(320),
    [sym__if_e] = ACTIONS(320),
    [sym__if_f] = ACTIONS(320),
    [sym__case_of_e] = ACTIONS(320),
    [sym__case_of_f] = ACTIONS(320),
    [sym__begin_sql_e] = ACTIONS(320),
    [sym__begin_sql_f] = ACTIONS(320),
    [sym__name] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [anon_sym_LT_GT] = ACTIONS(318),
    [sym_parameter] = ACTIONS(318),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_STAR] = ACTIONS(322),
    [aux_sym__for_each_e_token1] = ACTIONS(324),
    [aux_sym__for_each_f_token1] = ACTIONS(324),
    [aux_sym__while_e_token1] = ACTIONS(324),
    [sym__while_f] = ACTIONS(324),
    [aux_sym__for_e_token1] = ACTIONS(324),
    [aux_sym__for_f_token1] = ACTIONS(324),
    [aux_sym__use_e_token1] = ACTIONS(324),
    [aux_sym__use_f_token1] = ACTIONS(324),
    [sym__repeat_e] = ACTIONS(324),
    [sym__repeat_f] = ACTIONS(324),
    [sym__if_e] = ACTIONS(324),
    [sym__if_f] = ACTIONS(324),
    [sym__case_of_e] = ACTIONS(324),
    [sym__case_of_f] = ACTIONS(324),
    [sym__begin_sql_e] = ACTIONS(324),
    [sym__begin_sql_f] = ACTIONS(324),
    [sym__name] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_DOLLAR] = ACTIONS(324),
    [anon_sym_LT_GT] = ACTIONS(322),
    [sym_parameter] = ACTIONS(322),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_SLASH_STAR] = ACTIONS(326),
    [aux_sym__for_each_e_token1] = ACTIONS(328),
    [aux_sym__for_each_f_token1] = ACTIONS(328),
    [aux_sym__while_e_token1] = ACTIONS(328),
    [sym__while_f] = ACTIONS(328),
    [aux_sym__for_e_token1] = ACTIONS(328),
    [aux_sym__for_f_token1] = ACTIONS(328),
    [aux_sym__use_e_token1] = ACTIONS(328),
    [aux_sym__use_f_token1] = ACTIONS(328),
    [sym__repeat_e] = ACTIONS(328),
    [sym__repeat_f] = ACTIONS(328),
    [sym__if_e] = ACTIONS(328),
    [sym__if_f] = ACTIONS(328),
    [sym__case_of_e] = ACTIONS(328),
    [sym__case_of_f] = ACTIONS(328),
    [sym__begin_sql_e] = ACTIONS(328),
    [sym__begin_sql_f] = ACTIONS(328),
    [sym__name] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_LT_GT] = ACTIONS(326),
    [sym_parameter] = ACTIONS(326),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_STAR] = ACTIONS(330),
    [aux_sym__for_each_e_token1] = ACTIONS(332),
    [aux_sym__for_each_f_token1] = ACTIONS(332),
    [aux_sym__while_e_token1] = ACTIONS(332),
    [sym__while_f] = ACTIONS(332),
    [aux_sym__for_e_token1] = ACTIONS(332),
    [aux_sym__for_f_token1] = ACTIONS(332),
    [aux_sym__use_e_token1] = ACTIONS(332),
    [aux_sym__use_f_token1] = ACTIONS(332),
    [sym__repeat_e] = ACTIONS(332),
    [sym__repeat_f] = ACTIONS(332),
    [sym__if_e] = ACTIONS(332),
    [sym__if_f] = ACTIONS(332),
    [sym__case_of_e] = ACTIONS(332),
    [sym__case_of_f] = ACTIONS(332),
    [sym__begin_sql_e] = ACTIONS(332),
    [sym__begin_sql_f] = ACTIONS(332),
    [sym__name] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(332),
    [anon_sym_LT_GT] = ACTIONS(330),
    [sym_parameter] = ACTIONS(330),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_SLASH_SLASH] = ACTIONS(334),
    [anon_sym_SLASH_STAR] = ACTIONS(334),
    [aux_sym__for_each_e_token1] = ACTIONS(336),
    [aux_sym__for_each_f_token1] = ACTIONS(336),
    [aux_sym__while_e_token1] = ACTIONS(336),
    [sym__while_f] = ACTIONS(336),
    [aux_sym__for_e_token1] = ACTIONS(336),
    [aux_sym__for_f_token1] = ACTIONS(336),
    [aux_sym__use_e_token1] = ACTIONS(336),
    [aux_sym__use_f_token1] = ACTIONS(336),
    [sym__repeat_e] = ACTIONS(336),
    [sym__repeat_f] = ACTIONS(336),
    [sym__if_e] = ACTIONS(336),
    [sym__if_f] = ACTIONS(336),
    [sym__case_of_e] = ACTIONS(336),
    [sym__case_of_f] = ACTIONS(336),
    [sym__begin_sql_e] = ACTIONS(336),
    [sym__begin_sql_f] = ACTIONS(336),
    [sym__name] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(336),
    [anon_sym_LT_GT] = ACTIONS(334),
    [sym_parameter] = ACTIONS(334),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_STAR] = ACTIONS(338),
    [aux_sym__for_each_e_token1] = ACTIONS(340),
    [aux_sym__for_each_f_token1] = ACTIONS(340),
    [aux_sym__while_e_token1] = ACTIONS(340),
    [sym__while_f] = ACTIONS(340),
    [aux_sym__for_e_token1] = ACTIONS(340),
    [aux_sym__for_f_token1] = ACTIONS(340),
    [aux_sym__use_e_token1] = ACTIONS(340),
    [aux_sym__use_f_token1] = ACTIONS(340),
    [sym__repeat_e] = ACTIONS(340),
    [sym__repeat_f] = ACTIONS(340),
    [sym__if_e] = ACTIONS(340),
    [sym__if_f] = ACTIONS(340),
    [sym__case_of_e] = ACTIONS(340),
    [sym__case_of_f] = ACTIONS(340),
    [sym__begin_sql_e] = ACTIONS(340),
    [sym__begin_sql_f] = ACTIONS(340),
    [sym__name] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_LT_GT] = ACTIONS(338),
    [sym_parameter] = ACTIONS(338),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_STAR] = ACTIONS(342),
    [aux_sym__for_each_e_token1] = ACTIONS(344),
    [aux_sym__for_each_f_token1] = ACTIONS(344),
    [aux_sym__while_e_token1] = ACTIONS(344),
    [sym__while_f] = ACTIONS(344),
    [aux_sym__for_e_token1] = ACTIONS(344),
    [aux_sym__for_f_token1] = ACTIONS(344),
    [aux_sym__use_e_token1] = ACTIONS(344),
    [aux_sym__use_f_token1] = ACTIONS(344),
    [sym__repeat_e] = ACTIONS(344),
    [sym__repeat_f] = ACTIONS(344),
    [sym__if_e] = ACTIONS(344),
    [sym__if_f] = ACTIONS(344),
    [sym__case_of_e] = ACTIONS(344),
    [sym__case_of_f] = ACTIONS(344),
    [sym__begin_sql_e] = ACTIONS(344),
    [sym__begin_sql_f] = ACTIONS(344),
    [sym__name] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(344),
    [anon_sym_LT_GT] = ACTIONS(342),
    [sym_parameter] = ACTIONS(342),
  },
  [75] = {
    [anon_sym_COLON] = ACTIONS(226),
    [aux_sym__end_for_each_e_token1] = ACTIONS(226),
    [sym__end_for_each_f] = ACTIONS(226),
    [aux_sym__while_e_token1] = ACTIONS(226),
    [sym__while_f] = ACTIONS(226),
    [sym__until_e] = ACTIONS(226),
    [sym__until_f] = ACTIONS(226),
    [aux_sym__end_use_e_token1] = ACTIONS(226),
    [aux_sym__end_use_f_token1] = ACTIONS(226),
    [aux_sym__end_while_e_token1] = ACTIONS(226),
    [aux_sym__end_while_f_token1] = ACTIONS(226),
    [sym__else_e] = ACTIONS(226),
    [sym__else_f] = ACTIONS(226),
    [aux_sym__end_if_e_token1] = ACTIONS(226),
    [aux_sym__end_if_f_token1] = ACTIONS(226),
    [sym__end_case_e] = ACTIONS(226),
    [sym__end_case_f] = ACTIONS(226),
  },
  [76] = {
    [anon_sym_COLON] = ACTIONS(250),
    [aux_sym__end_for_each_e_token1] = ACTIONS(250),
    [sym__end_for_each_f] = ACTIONS(250),
    [aux_sym__while_e_token1] = ACTIONS(250),
    [sym__while_f] = ACTIONS(250),
    [sym__until_e] = ACTIONS(250),
    [sym__until_f] = ACTIONS(250),
    [aux_sym__end_use_e_token1] = ACTIONS(250),
    [aux_sym__end_use_f_token1] = ACTIONS(250),
    [aux_sym__end_while_e_token1] = ACTIONS(250),
    [aux_sym__end_while_f_token1] = ACTIONS(250),
    [sym__else_e] = ACTIONS(250),
    [sym__else_f] = ACTIONS(250),
    [aux_sym__end_if_e_token1] = ACTIONS(250),
    [aux_sym__end_if_f_token1] = ACTIONS(250),
    [sym__end_case_e] = ACTIONS(250),
    [sym__end_case_f] = ACTIONS(250),
  },
  [77] = {
    [anon_sym_COLON] = ACTIONS(242),
    [aux_sym__end_for_each_e_token1] = ACTIONS(242),
    [sym__end_for_each_f] = ACTIONS(242),
    [aux_sym__while_e_token1] = ACTIONS(242),
    [sym__while_f] = ACTIONS(242),
    [sym__until_e] = ACTIONS(242),
    [sym__until_f] = ACTIONS(242),
    [aux_sym__end_use_e_token1] = ACTIONS(242),
    [aux_sym__end_use_f_token1] = ACTIONS(242),
    [aux_sym__end_while_e_token1] = ACTIONS(242),
    [aux_sym__end_while_f_token1] = ACTIONS(242),
    [sym__else_e] = ACTIONS(242),
    [sym__else_f] = ACTIONS(242),
    [aux_sym__end_if_e_token1] = ACTIONS(242),
    [aux_sym__end_if_f_token1] = ACTIONS(242),
    [sym__end_case_e] = ACTIONS(242),
    [sym__end_case_f] = ACTIONS(242),
  },
  [78] = {
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(158),
    [sym__name] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [79] = {
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym_reference] = STATE(166),
    [sym__name] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
  },
  [80] = {
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(165),
    [sym__name] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [81] = {
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(170),
    [sym__name] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [82] = {
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(164),
    [sym__name] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [83] = {
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym_reference] = STATE(171),
    [sym__name] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
  },
  [84] = {
    [sym__end_for_each_e] = STATE(63),
    [sym_end_for_each] = STATE(60),
    [sym__while_e] = STATE(178),
    [sym_while] = STATE(135),
    [sym_until] = STATE(135),
    [aux_sym__end_for_each_e_token1] = ACTIONS(350),
    [sym__end_for_each_f] = ACTIONS(350),
    [aux_sym__while_e_token1] = ACTIONS(352),
    [sym__while_f] = ACTIONS(352),
    [sym__until_e] = ACTIONS(354),
    [sym__until_f] = ACTIONS(354),
  },
  [85] = {
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym_reference] = STATE(169),
    [sym__name] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
  },
  [86] = {
    [sym_field] = STATE(40),
    [sym_local_variable] = STATE(26),
    [sym_interprocess_variable] = STATE(26),
    [sym_variable] = STATE(31),
    [sym__dereference] = STATE(40),
    [sym_reference] = STATE(152),
    [sym__name] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_LT_GT] = ACTIONS(154),
    [sym_parameter] = ACTIONS(156),
  },
  [87] = {
    [sym_field] = STATE(14),
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(11),
    [sym__dereference] = STATE(14),
    [sym_reference] = STATE(167),
    [sym__name] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [88] = {
    [sym_else] = STATE(113),
    [sym_end_case] = STATE(62),
    [aux_sym_case_block_repeat1] = STATE(93),
    [anon_sym_COLON] = ACTIONS(356),
    [sym__else_e] = ACTIONS(358),
    [sym__else_f] = ACTIONS(358),
    [sym__end_case_e] = ACTIONS(360),
    [sym__end_case_f] = ACTIONS(360),
  },
  [89] = {
    [sym_else] = STATE(94),
    [sym__end_if_e] = STATE(68),
    [sym__end_if_f] = STATE(68),
    [sym_end_if] = STATE(67),
    [sym__else_e] = ACTIONS(358),
    [sym__else_f] = ACTIONS(358),
    [aux_sym__end_if_e_token1] = ACTIONS(362),
    [aux_sym__end_if_f_token1] = ACTIONS(362),
  },
  [90] = {
    [sym_local_variable] = STATE(8),
    [sym_interprocess_variable] = STATE(8),
    [sym_variable] = STATE(52),
    [sym__name] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(31),
    [sym_parameter] = ACTIONS(33),
  },
  [91] = {
    [sym_arguments] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
  },
  [92] = {
    [sym_arguments] = STATE(45),
    [aux_sym__notation_repeat1] = STATE(24),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
  },
  [93] = {
    [aux_sym_case_block_repeat1] = STATE(93),
    [anon_sym_COLON] = ACTIONS(370),
    [sym__else_e] = ACTIONS(373),
    [sym__else_f] = ACTIONS(373),
    [sym__end_case_e] = ACTIONS(373),
    [sym__end_case_f] = ACTIONS(373),
  },
  [94] = {
    [sym__end_if_e] = STATE(68),
    [sym__end_if_f] = STATE(68),
    [sym_end_if] = STATE(66),
    [aux_sym__end_if_e_token1] = ACTIONS(362),
    [aux_sym__end_if_f_token1] = ACTIONS(362),
  },
  [95] = {
    [sym__end_while_e] = STATE(70),
    [sym__end_while_f] = STATE(70),
    [sym_end_while] = STATE(54),
    [aux_sym__end_while_e_token1] = ACTIONS(375),
    [aux_sym__end_while_f_token1] = ACTIONS(375),
  },
  [96] = {
    [sym__end_use_e] = STATE(71),
    [sym__end_use_f] = STATE(71),
    [sym_end_use] = STATE(55),
    [aux_sym__end_use_e_token1] = ACTIONS(377),
    [aux_sym__end_use_f_token1] = ACTIONS(377),
  },
  [97] = {
    [anon_sym_COLON] = ACTIONS(373),
    [sym__else_e] = ACTIONS(373),
    [sym__else_f] = ACTIONS(373),
    [sym__end_case_e] = ACTIONS(373),
    [sym__end_case_f] = ACTIONS(373),
  },
  [98] = {
    [sym__end_for_e] = STATE(73),
    [sym_end_for] = STATE(72),
    [aux_sym__end_for_e_token1] = ACTIONS(379),
    [sym__end_for_f] = ACTIONS(379),
  },
  [99] = {
    [aux_sym__end_if_e_token1] = ACTIONS(381),
    [aux_sym__end_if_f_token1] = ACTIONS(381),
    [sym__end_case_e] = ACTIONS(381),
    [sym__end_case_f] = ACTIONS(381),
  },
  [100] = {
    [sym__end_for_each_e] = STATE(63),
    [sym_end_for_each] = STATE(74),
    [aux_sym__end_for_each_e_token1] = ACTIONS(350),
    [sym__end_for_each_f] = ACTIONS(350),
  },
  [101] = {
    [sym__name] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
  },
  [102] = {
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(368),
  },
  [103] = {
    [sym_end_sql] = STATE(58),
    [sym__end_sql_e] = ACTIONS(385),
    [sym__end_sql_f] = ACTIONS(385),
  },
  [104] = {
    [aux_sym_arguments_repeat1] = STATE(108),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(389),
  },
  [105] = {
    [sym_until] = STATE(118),
    [sym__until_e] = ACTIONS(354),
    [sym__until_f] = ACTIONS(354),
  },
  [106] = {
    [sym__storage_suffix] = STATE(176),
    [aux_sym__storage_suffix_token1] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(393),
  },
  [107] = {
    [aux_sym_arguments_repeat1] = STATE(109),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(395),
  },
  [108] = {
    [aux_sym_arguments_repeat1] = STATE(108),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(400),
  },
  [109] = {
    [aux_sym_arguments_repeat1] = STATE(108),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(402),
  },
  [110] = {
    [sym__name] = ACTIONS(404),
    [anon_sym_SEMI] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
  },
  [111] = {
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(216),
  },
  [112] = {
    [sym_table] = STATE(163),
    [sym__name] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
  },
  [113] = {
    [sym_end_case] = STATE(64),
    [sym__end_case_e] = ACTIONS(360),
    [sym__end_case_f] = ACTIONS(360),
  },
  [114] = {
    [aux_sym_arguments_repeat1] = STATE(108),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(410),
  },
  [115] = {
    [aux_sym_arguments_repeat1] = STATE(114),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(412),
  },
  [116] = {
    [aux_sym_arguments_repeat1] = STATE(104),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(414),
  },
  [117] = {
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(420),
  },
  [118] = {
    [sym_arguments] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(136),
  },
  [119] = {
    [sym__until_e] = ACTIONS(422),
    [sym__until_f] = ACTIONS(422),
  },
  [120] = {
    [aux_sym__end_for_e_token1] = ACTIONS(242),
    [sym__end_for_f] = ACTIONS(242),
  },
  [121] = {
    [aux_sym__end_for_e_token1] = ACTIONS(226),
    [sym__end_for_f] = ACTIONS(226),
  },
  [122] = {
    [aux_sym__end_for_e_token1] = ACTIONS(250),
    [sym__end_for_f] = ACTIONS(250),
  },
  [123] = {
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
  },
  [124] = {
    [sym__end_sql_e] = ACTIONS(424),
    [sym__end_sql_f] = ACTIONS(424),
  },
  [125] = {
    [sym_table] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(408),
  },
  [126] = {
    [sym_table] = STATE(140),
    [anon_sym_LBRACK] = ACTIONS(408),
  },
  [127] = {
    [sym_arguments] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(426),
  },
  [128] = {
    [sym_arguments] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(426),
  },
  [129] = {
    [sym_arguments] = STATE(98),
    [anon_sym_LPAREN] = ACTIONS(428),
  },
  [130] = {
    [sym_arguments] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(426),
  },
  [131] = {
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
  },
  [132] = {
    [sym_arguments] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(426),
  },
  [133] = {
    [sym_arguments] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(426),
  },
  [134] = {
    [aux_sym_case_block_repeat1] = STATE(88),
    [anon_sym_COLON] = ACTIONS(356),
  },
  [135] = {
    [sym_arguments] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(426),
  },
  [136] = {
    [aux_sym_time_token1] = ACTIONS(432),
  },
  [137] = {
    [sym__name] = ACTIONS(434),
  },
  [138] = {
    [anon_sym_BANG] = ACTIONS(436),
  },
  [139] = {
    [anon_sym_LPAREN] = ACTIONS(438),
  },
  [140] = {
    [sym__name] = ACTIONS(440),
  },
  [141] = {
    [sym__name] = ACTIONS(406),
  },
  [142] = {
    [anon_sym_SLASH] = ACTIONS(442),
  },
  [143] = {
    [aux_sym_comment_token1] = ACTIONS(444),
  },
  [144] = {
    [aux_sym_time_token1] = ACTIONS(446),
  },
  [145] = {
    [aux_sym_time_token1] = ACTIONS(448),
  },
  [146] = {
    [anon_sym_DOT] = ACTIONS(450),
  },
  [147] = {
    [anon_sym_DASH] = ACTIONS(450),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(452),
  },
  [149] = {
    [anon_sym_SLASH] = ACTIONS(450),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(454),
  },
  [151] = {
    [anon_sym_COLON] = ACTIONS(456),
  },
  [152] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(458),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(460),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(462),
  },
  [155] = {
    [sym__name] = ACTIONS(464),
  },
  [156] = {
    [sym__name] = ACTIONS(466),
  },
  [157] = {
    [anon_sym_QMARK] = ACTIONS(468),
  },
  [158] = {
    [anon_sym_RBRACK] = ACTIONS(470),
  },
  [159] = {
    [aux_sym_time_token1] = ACTIONS(472),
  },
  [160] = {
    [sym__name] = ACTIONS(474),
  },
  [161] = {
    [sym__name] = ACTIONS(476),
  },
  [162] = {
    [aux_sym_time_token1] = ACTIONS(478),
  },
  [163] = {
    [sym__name] = ACTIONS(480),
  },
  [164] = {
    [anon_sym_RBRACK] = ACTIONS(482),
  },
  [165] = {
    [anon_sym_RBRACE] = ACTIONS(482),
  },
  [166] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(484),
  },
  [167] = {
    [anon_sym_RBRACK] = ACTIONS(486),
  },
  [168] = {
    [aux_sym_time_token1] = ACTIONS(488),
  },
  [169] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(490),
  },
  [170] = {
    [anon_sym_RBRACE] = ACTIONS(470),
  },
  [171] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(492),
  },
  [172] = {
    [aux_sym_time_token1] = ACTIONS(494),
  },
  [173] = {
    [aux_sym_time_token1] = ACTIONS(496),
  },
  [174] = {
    [anon_sym_COLON] = ACTIONS(498),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(500),
  },
  [176] = {
    [anon_sym_RBRACK] = ACTIONS(502),
  },
  [177] = {
    [anon_sym_COLON] = ACTIONS(504),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(506),
  },
  [179] = {
    [aux_sym_comment_token2] = ACTIONS(508),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(143),
  [7] = {.count = 1, .reusable = true}, SHIFT(179),
  [9] = {.count = 1, .reusable = false}, SHIFT(153),
  [11] = {.count = 1, .reusable = false}, SHIFT(178),
  [13] = {.count = 1, .reusable = false}, SHIFT(150),
  [15] = {.count = 1, .reusable = false}, SHIFT(148),
  [17] = {.count = 1, .reusable = false}, SHIFT(119),
  [19] = {.count = 1, .reusable = false}, SHIFT(175),
  [21] = {.count = 1, .reusable = false}, SHIFT(174),
  [23] = {.count = 1, .reusable = false}, SHIFT(124),
  [25] = {.count = 1, .reusable = false}, SHIFT(36),
  [27] = {.count = 1, .reusable = true}, SHIFT(126),
  [29] = {.count = 1, .reusable = false}, SHIFT(156),
  [31] = {.count = 1, .reusable = true}, SHIFT(155),
  [33] = {.count = 1, .reusable = true}, SHIFT(8),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(143),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(179),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(153),
  [46] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(178),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(150),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(148),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(119),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(175),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(174),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(124),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(126),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(156),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(155),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 4),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 4),
  [88] = {.count = 1, .reusable = true}, SHIFT(86),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_local_variable, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_local_variable, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 7),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 7),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_interprocess_variable, 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_interprocess_variable, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_field, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(12),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_reference, 1),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_reference, 1),
  [116] = {.count = 1, .reusable = true}, SHIFT(13),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__dereference, 2),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__dereference, 2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [128] = {.count = 1, .reusable = false}, SHIFT(27),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_value, 1),
  [132] = {.count = 1, .reusable = true}, SHIFT(27),
  [134] = {.count = 1, .reusable = true}, SHIFT(137),
  [136] = {.count = 1, .reusable = true}, SHIFT(16),
  [138] = {.count = 1, .reusable = true}, SHIFT(47),
  [140] = {.count = 1, .reusable = false}, SHIFT(47),
  [142] = {.count = 1, .reusable = true}, SHIFT(172),
  [144] = {.count = 1, .reusable = true}, SHIFT(173),
  [146] = {.count = 1, .reusable = true}, SHIFT(44),
  [148] = {.count = 1, .reusable = true}, SHIFT(91),
  [150] = {.count = 1, .reusable = true}, SHIFT(112),
  [152] = {.count = 1, .reusable = false}, SHIFT(160),
  [154] = {.count = 1, .reusable = true}, SHIFT(161),
  [156] = {.count = 1, .reusable = true}, SHIFT(26),
  [158] = {.count = 1, .reusable = true}, SHIFT(90),
  [160] = {.count = 1, .reusable = true}, SHIFT(131),
  [162] = {.count = 1, .reusable = true}, SHIFT(50),
  [164] = {.count = 1, .reusable = true}, SHIFT(122),
  [166] = {.count = 1, .reusable = true}, SHIFT(76),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym__notation, 1),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym__notation, 1),
  [172] = {.count = 1, .reusable = true}, SHIFT(87),
  [174] = {.count = 1, .reusable = true}, SHIFT(33),
  [176] = {.count = 1, .reusable = true}, SHIFT(38),
  [178] = {.count = 1, .reusable = true}, SHIFT(85),
  [180] = {.count = 1, .reusable = true}, SHIFT(34),
  [182] = {.count = 1, .reusable = false}, SHIFT(34),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym__notation_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 2), SHIFT_REPEAT(137),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 2), SHIFT_REPEAT(87),
  [194] = {.count = 1, .reusable = true}, SHIFT(36),
  [196] = {.count = 1, .reusable = true}, SHIFT(39),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym__notation, 2),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym__notation, 2),
  [202] = {.count = 1, .reusable = true}, SHIFT(125),
  [204] = {.count = 1, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(aux_sym__notation_repeat1, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [212] = {.count = 1, .reusable = false}, SHIFT(78),
  [214] = {.count = 1, .reusable = true}, SHIFT(81),
  [216] = {.count = 1, .reusable = true}, SHIFT(83),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_function, 2),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_function, 2),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_date, 7),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_date, 7),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym__notation, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym__notation, 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_time, 7),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_time, 7),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__formula, 3),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym__formula, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym__pointer, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__pointer, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 1),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_while_block, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_while_block, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_use_block, 3),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_use_block, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 3),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_end_sql, 1),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_end_sql, 1),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_sql_block, 2),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_sql_block, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 3),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_case_block, 3),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_case_block, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_end_for_each, 1),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_case_block, 4),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_case_block, 4),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 1),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_end_case, 1),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 4),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_if_block, 4),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_if_block, 3),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 1),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_end_if, 1),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_block, 3),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_block, 3),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 1),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_end_while, 1),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_end_use, 1),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_end_use, 1),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_for_block, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_for_block, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_end_for, 1),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_end_for, 1),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 5),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 5),
  [346] = {.count = 1, .reusable = true}, SHIFT(111),
  [348] = {.count = 1, .reusable = true}, SHIFT(102),
  [350] = {.count = 1, .reusable = true}, SHIFT(63),
  [352] = {.count = 1, .reusable = true}, SHIFT(178),
  [354] = {.count = 1, .reusable = true}, SHIFT(139),
  [356] = {.count = 1, .reusable = true}, SHIFT(133),
  [358] = {.count = 1, .reusable = true}, SHIFT(99),
  [360] = {.count = 1, .reusable = true}, SHIFT(65),
  [362] = {.count = 1, .reusable = true}, SHIFT(68),
  [364] = {.count = 1, .reusable = false}, SHIFT(82),
  [366] = {.count = 1, .reusable = true}, SHIFT(80),
  [368] = {.count = 1, .reusable = true}, SHIFT(79),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_block_repeat1, 2), SHIFT_REPEAT(133),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_block_repeat1, 2),
  [375] = {.count = 1, .reusable = true}, SHIFT(70),
  [377] = {.count = 1, .reusable = true}, SHIFT(71),
  [379] = {.count = 1, .reusable = true}, SHIFT(73),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_else, 1),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [385] = {.count = 1, .reusable = true}, SHIFT(57),
  [387] = {.count = 1, .reusable = true}, SHIFT(19),
  [389] = {.count = 1, .reusable = true}, SHIFT(77),
  [391] = {.count = 1, .reusable = true}, SHIFT(176),
  [393] = {.count = 1, .reusable = true}, SHIFT(110),
  [395] = {.count = 1, .reusable = true}, SHIFT(43),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(19),
  [400] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [402] = {.count = 1, .reusable = true}, SHIFT(48),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [406] = {.count = 1, .reusable = true}, SHIFT(106),
  [408] = {.count = 1, .reusable = true}, SHIFT(141),
  [410] = {.count = 1, .reusable = true}, SHIFT(120),
  [412] = {.count = 1, .reusable = true}, SHIFT(121),
  [414] = {.count = 1, .reusable = true}, SHIFT(75),
  [416] = {.count = 1, .reusable = true}, SHIFT(136),
  [418] = {.count = 1, .reusable = true}, SHIFT(162),
  [420] = {.count = 1, .reusable = true}, SHIFT(159),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 1),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_begin_sql, 1),
  [426] = {.count = 1, .reusable = true}, SHIFT(18),
  [428] = {.count = 1, .reusable = true}, SHIFT(17),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_argument, 1),
  [432] = {.count = 1, .reusable = true}, SHIFT(149),
  [434] = {.count = 1, .reusable = true}, SHIFT(29),
  [436] = {.count = 1, .reusable = true}, SHIFT(42),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [440] = {.count = 1, .reusable = true}, SHIFT(10),
  [442] = {.count = 1, .reusable = true}, SHIFT(61),
  [444] = {.count = 1, .reusable = true}, SHIFT(59),
  [446] = {.count = 1, .reusable = true}, SHIFT(138),
  [448] = {.count = 1, .reusable = true}, SHIFT(157),
  [450] = {.count = 1, .reusable = true}, SHIFT(144),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_use, 1),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_for, 1),
  [456] = {.count = 1, .reusable = true}, SHIFT(145),
  [458] = {.count = 1, .reusable = true}, SHIFT(7),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [462] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [464] = {.count = 1, .reusable = true}, SHIFT(9),
  [466] = {.count = 1, .reusable = true}, SHIFT(6),
  [468] = {.count = 1, .reusable = true}, SHIFT(46),
  [470] = {.count = 1, .reusable = true}, SHIFT(5),
  [472] = {.count = 1, .reusable = true}, SHIFT(146),
  [474] = {.count = 1, .reusable = true}, SHIFT(25),
  [476] = {.count = 1, .reusable = true}, SHIFT(30),
  [478] = {.count = 1, .reusable = true}, SHIFT(147),
  [480] = {.count = 1, .reusable = true}, SHIFT(21),
  [482] = {.count = 1, .reusable = true}, SHIFT(28),
  [484] = {.count = 1, .reusable = true}, SHIFT(22),
  [486] = {.count = 1, .reusable = true}, SHIFT(35),
  [488] = {.count = 1, .reusable = true}, SHIFT(151),
  [490] = {.count = 1, .reusable = true}, SHIFT(37),
  [492] = {.count = 1, .reusable = true}, SHIFT(4),
  [494] = {.count = 1, .reusable = true}, SHIFT(177),
  [496] = {.count = 1, .reusable = true}, SHIFT(117),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_case_of, 1),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_if, 1),
  [502] = {.count = 1, .reusable = true}, SHIFT(101),
  [504] = {.count = 1, .reusable = true}, SHIFT(168),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [508] = {.count = 1, .reusable = true}, SHIFT(142),
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
