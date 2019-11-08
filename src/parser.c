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
#define STATE_COUNT 196
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 7
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
  aux_sym__time_token1 = 46,
  anon_sym_BANG = 47,
  anon_sym_DASH = 48,
  anon_sym_DOT = 49,
  sym__string = 50,
  sym__name = 51,
  aux_sym__storage_suffix_token1 = 52,
  anon_sym_LBRACK = 53,
  anon_sym_RBRACK = 54,
  anon_sym_LT_GT = 55,
  anon_sym_DOLLAR = 56,
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
  sym__number = 129,
  sym__time = 130,
  sym__date = 131,
  sym__storage_suffix = 132,
  sym__table = 133,
  sym__field = 134,
  sym__local_variable = 135,
  sym__interprocess_variable = 136,
  sym__variable = 137,
  sym__dereference = 138,
  sym__pointer = 139,
  sym__reference = 140,
  sym__value = 141,
  sym__operator = 142,
  sym__formula = 143,
  sym__arguments = 144,
  sym_statement = 145,
  sym__function = 146,
  sym_assignment = 147,
  sym__notation = 148,
  aux_sym_source_repeat1 = 149,
  aux_sym_case_block_repeat1 = 150,
  aux_sym__arguments_repeat1 = 151,
  aux_sym__notation_repeat1 = 152,
  anon_alias_sym_Date = 153,
  anon_alias_sym_Field = 154,
  anon_alias_sym_Reference = 155,
  anon_alias_sym_Table = 156,
  anon_alias_sym_Time = 157,
  anon_alias_sym_Value = 158,
  anon_alias_sym_Variable = 159,
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
  [anon_sym_QMARK] = "Time",
  [aux_sym__time_token1] = "_time_token1",
  [anon_sym_BANG] = "Date",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [sym__string] = "Value",
  [sym__name] = "_name",
  [aux_sym__storage_suffix_token1] = "_storage_suffix_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DOLLAR] = "$",
  [sym_parameter] = "Variable",
  [anon_sym_LBRACE] = "Variable",
  [anon_sym_RBRACE] = "Variable",
  [anon_sym_LBRACK_LBRACK] = "Variable",
  [anon_sym_RBRACK_RBRACK] = "Variable",
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
  [sym__number] = "Value",
  [sym__time] = "Value",
  [sym__date] = "Value",
  [sym__storage_suffix] = "_storage_suffix",
  [sym__table] = "_table",
  [sym__field] = "Reference",
  [sym__local_variable] = "Variable",
  [sym__interprocess_variable] = "Variable",
  [sym__variable] = "_variable",
  [sym__dereference] = "Reference",
  [sym__pointer] = "Value",
  [sym__reference] = "_reference",
  [sym__value] = "_value",
  [sym__operator] = "_operator",
  [sym__formula] = "Value",
  [sym__arguments] = "_arguments",
  [sym_statement] = "statement",
  [sym__function] = "_function",
  [sym_assignment] = "assignment",
  [sym__notation] = "_notation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_case_block_repeat1] = "case_block_repeat1",
  [aux_sym__arguments_repeat1] = "_arguments_repeat1",
  [aux_sym__notation_repeat1] = "_notation_repeat1",
  [anon_alias_sym_Date] = "Date",
  [anon_alias_sym_Field] = "Field",
  [anon_alias_sym_Reference] = "Reference",
  [anon_alias_sym_Table] = "Table",
  [anon_alias_sym_Time] = "Time",
  [anon_alias_sym_Value] = "Value",
  [anon_alias_sym_Variable] = "Variable",
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__time_token1] = {
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
  [sym__string] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_parameter] = {
    .visible = true,
    .named = false,
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
  [sym__number] = {
    .visible = true,
    .named = false,
  },
  [sym__time] = {
    .visible = true,
    .named = false,
  },
  [sym__date] = {
    .visible = true,
    .named = false,
  },
  [sym__storage_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym__table] = {
    .visible = false,
    .named = true,
  },
  [sym__field] = {
    .visible = true,
    .named = false,
  },
  [sym__local_variable] = {
    .visible = true,
    .named = false,
  },
  [sym__interprocess_variable] = {
    .visible = true,
    .named = false,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym__dereference] = {
    .visible = true,
    .named = false,
  },
  [sym__pointer] = {
    .visible = true,
    .named = false,
  },
  [sym__reference] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym__formula] = {
    .visible = true,
    .named = false,
  },
  [sym__arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
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
  [aux_sym__arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__notation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Field] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Reference] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Time] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Value] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_Variable] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[12][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_Reference,
  },
  [2] = {
    [0] = anon_alias_sym_Value,
  },
  [3] = {
    [0] = anon_alias_sym_Field,
    [1] = anon_alias_sym_Field,
    [2] = anon_alias_sym_Field,
  },
  [4] = {
    [0] = anon_alias_sym_Variable,
    [1] = anon_alias_sym_Variable,
    [2] = anon_alias_sym_Variable,
    [3] = anon_alias_sym_Variable,
  },
  [5] = {
    [0] = anon_alias_sym_Variable,
    [2] = anon_alias_sym_Variable,
  },
  [6] = {
    [0] = anon_alias_sym_Table,
    [1] = anon_alias_sym_Table,
    [2] = anon_alias_sym_Table,
  },
  [7] = {
    [0] = anon_alias_sym_Field,
    [1] = anon_alias_sym_Field,
    [2] = anon_alias_sym_Field,
    [3] = anon_alias_sym_Field,
  },
  [8] = {
    [0] = anon_alias_sym_Table,
    [1] = anon_alias_sym_Table,
    [2] = anon_alias_sym_Table,
    [3] = anon_alias_sym_Table,
  },
  [9] = {
    [0] = anon_alias_sym_Variable,
    [2] = anon_alias_sym_Variable,
    [5] = anon_alias_sym_Variable,
  },
  [10] = {
    [1] = anon_alias_sym_Time,
    [2] = anon_alias_sym_Time,
    [3] = anon_alias_sym_Time,
    [4] = anon_alias_sym_Time,
    [5] = anon_alias_sym_Time,
  },
  [11] = {
    [1] = anon_alias_sym_Date,
    [2] = anon_alias_sym_Date,
    [3] = anon_alias_sym_Date,
    [4] = anon_alias_sym_Date,
    [5] = anon_alias_sym_Date,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(207);
      if (lookahead == '!') ADVANCE(279);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(379);
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
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(379);
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
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(379);
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
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '?') ADVANCE(274);
      if (lookahead == '[') ADVANCE(356);
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
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(379);
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
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '&') ADVANCE(371);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(379);
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
      if (lookahead == '+') ADVANCE(386);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == '?') ADVANCE(384);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(390);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(359);
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
      if (lookahead == '=') ADVANCE(390);
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
      if (lookahead == '+') ADVANCE(386);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == '?') ADVANCE(384);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__time_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__time_token1);
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
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__string);
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
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
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
      if (lookahead == '=') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead == '>') ADVANCE(359);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(381);
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 390:
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
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33},
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
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 30},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 33},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 30},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 209},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 30},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 33},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 30},
  [176] = {.lex_state = 30},
  [177] = {.lex_state = 30},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 30},
  [184] = {.lex_state = 30},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 35},
  [187] = {.lex_state = 30},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 30},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 33},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
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
    [aux_sym__time_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [sym_source] = STATE(158),
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
    [sym__for_each_e] = STATE(157),
    [sym__for_each_f] = STATE(157),
    [sym_for_each] = STATE(135),
    [sym__while_e] = STATE(170),
    [sym_while] = STATE(136),
    [sym__for_e] = STATE(154),
    [sym__for_f] = STATE(154),
    [sym_for] = STATE(141),
    [sym__use_e] = STATE(148),
    [sym__use_f] = STATE(148),
    [sym_use] = STATE(142),
    [sym_repeat] = STATE(121),
    [sym_if] = STATE(137),
    [sym_case_of] = STATE(131),
    [sym_begin_sql] = STATE(122),
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(25),
    [sym_statement] = STATE(3),
    [sym__function] = STATE(48),
    [sym_assignment] = STATE(3),
    [sym__notation] = STATE(48),
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
    [sym__name] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
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
    [sym__for_each_e] = STATE(157),
    [sym__for_each_f] = STATE(157),
    [sym_for_each] = STATE(135),
    [sym__while_e] = STATE(170),
    [sym_while] = STATE(136),
    [sym__for_e] = STATE(154),
    [sym__for_f] = STATE(154),
    [sym_for] = STATE(141),
    [sym__use_e] = STATE(148),
    [sym__use_f] = STATE(148),
    [sym_use] = STATE(142),
    [sym_repeat] = STATE(121),
    [sym_if] = STATE(137),
    [sym_case_of] = STATE(131),
    [sym_begin_sql] = STATE(122),
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(25),
    [sym_statement] = STATE(2),
    [sym__function] = STATE(48),
    [sym_assignment] = STATE(2),
    [sym__notation] = STATE(48),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_STAR] = ACTIONS(48),
    [aux_sym__for_each_e_token1] = ACTIONS(51),
    [aux_sym__for_each_f_token1] = ACTIONS(54),
    [aux_sym__while_e_token1] = ACTIONS(57),
    [sym__while_f] = ACTIONS(60),
    [aux_sym__for_e_token1] = ACTIONS(63),
    [aux_sym__for_f_token1] = ACTIONS(66),
    [aux_sym__use_e_token1] = ACTIONS(69),
    [aux_sym__use_f_token1] = ACTIONS(72),
    [sym__repeat_e] = ACTIONS(75),
    [sym__repeat_f] = ACTIONS(75),
    [sym__if_e] = ACTIONS(78),
    [sym__if_f] = ACTIONS(78),
    [sym__case_of_e] = ACTIONS(81),
    [sym__case_of_f] = ACTIONS(81),
    [sym__begin_sql_e] = ACTIONS(84),
    [sym__begin_sql_f] = ACTIONS(84),
    [sym__name] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LT_GT] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [sym_parameter] = ACTIONS(99),
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
    [sym__for_each_e] = STATE(157),
    [sym__for_each_f] = STATE(157),
    [sym_for_each] = STATE(135),
    [sym__while_e] = STATE(170),
    [sym_while] = STATE(136),
    [sym__for_e] = STATE(154),
    [sym__for_f] = STATE(154),
    [sym_for] = STATE(141),
    [sym__use_e] = STATE(148),
    [sym__use_f] = STATE(148),
    [sym_use] = STATE(142),
    [sym_repeat] = STATE(121),
    [sym_if] = STATE(137),
    [sym_case_of] = STATE(131),
    [sym_begin_sql] = STATE(122),
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(25),
    [sym_statement] = STATE(2),
    [sym__function] = STATE(48),
    [sym_assignment] = STATE(2),
    [sym__notation] = STATE(48),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
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
    [sym__name] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_SLASH_SLASH] = ACTIONS(104),
    [anon_sym_SLASH_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [aux_sym__for_each_e_token1] = ACTIONS(106),
    [aux_sym__for_each_f_token1] = ACTIONS(106),
    [aux_sym__while_e_token1] = ACTIONS(106),
    [sym__while_f] = ACTIONS(106),
    [aux_sym__for_e_token1] = ACTIONS(106),
    [aux_sym__for_f_token1] = ACTIONS(106),
    [aux_sym__use_e_token1] = ACTIONS(106),
    [aux_sym__use_f_token1] = ACTIONS(106),
    [sym__repeat_e] = ACTIONS(106),
    [sym__repeat_f] = ACTIONS(106),
    [sym__if_e] = ACTIONS(106),
    [sym__if_f] = ACTIONS(106),
    [sym__case_of_e] = ACTIONS(106),
    [sym__case_of_f] = ACTIONS(106),
    [sym__begin_sql_e] = ACTIONS(106),
    [sym__begin_sql_f] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(104),
    [sym__name] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_LT_GT] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [sym_parameter] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(108),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_CARET_PIPE] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_QMARK_QMARK] = ACTIONS(104),
    [anon_sym_QMARK_DASH] = ACTIONS(104),
    [anon_sym_QMARK_PLUS] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_COLON_EQ] = ACTIONS(104),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_SLASH_SLASH] = ACTIONS(104),
    [anon_sym_SLASH_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [aux_sym__for_each_e_token1] = ACTIONS(106),
    [aux_sym__for_each_f_token1] = ACTIONS(106),
    [aux_sym__while_e_token1] = ACTIONS(106),
    [sym__while_f] = ACTIONS(106),
    [aux_sym__for_e_token1] = ACTIONS(106),
    [aux_sym__for_f_token1] = ACTIONS(106),
    [aux_sym__use_e_token1] = ACTIONS(106),
    [aux_sym__use_f_token1] = ACTIONS(106),
    [sym__repeat_e] = ACTIONS(106),
    [sym__repeat_f] = ACTIONS(106),
    [sym__if_e] = ACTIONS(106),
    [sym__if_f] = ACTIONS(106),
    [sym__case_of_e] = ACTIONS(106),
    [sym__case_of_f] = ACTIONS(106),
    [sym__begin_sql_e] = ACTIONS(106),
    [sym__begin_sql_f] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(104),
    [sym__name] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_LT_GT] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [sym_parameter] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_CARET_PIPE] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_QMARK_QMARK] = ACTIONS(104),
    [anon_sym_QMARK_DASH] = ACTIONS(104),
    [anon_sym_QMARK_PLUS] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_COLON_EQ] = ACTIONS(104),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_SLASH_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [aux_sym__for_each_e_token1] = ACTIONS(112),
    [aux_sym__for_each_f_token1] = ACTIONS(112),
    [aux_sym__while_e_token1] = ACTIONS(112),
    [sym__while_f] = ACTIONS(112),
    [aux_sym__for_e_token1] = ACTIONS(112),
    [aux_sym__for_f_token1] = ACTIONS(112),
    [aux_sym__use_e_token1] = ACTIONS(112),
    [aux_sym__use_f_token1] = ACTIONS(112),
    [sym__repeat_e] = ACTIONS(112),
    [sym__repeat_f] = ACTIONS(112),
    [sym__if_e] = ACTIONS(112),
    [sym__if_f] = ACTIONS(112),
    [sym__case_of_e] = ACTIONS(112),
    [sym__case_of_f] = ACTIONS(112),
    [sym__begin_sql_e] = ACTIONS(112),
    [sym__begin_sql_f] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(110),
    [sym__name] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LT_GT] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [sym_parameter] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_BSLASH] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_CARET_PIPE] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_QMARK_QMARK] = ACTIONS(110),
    [anon_sym_QMARK_DASH] = ACTIONS(110),
    [anon_sym_QMARK_PLUS] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_COLON_EQ] = ACTIONS(110),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [aux_sym__for_each_e_token1] = ACTIONS(116),
    [aux_sym__for_each_f_token1] = ACTIONS(116),
    [aux_sym__while_e_token1] = ACTIONS(116),
    [sym__while_f] = ACTIONS(116),
    [aux_sym__for_e_token1] = ACTIONS(116),
    [aux_sym__for_f_token1] = ACTIONS(116),
    [aux_sym__use_e_token1] = ACTIONS(116),
    [aux_sym__use_f_token1] = ACTIONS(116),
    [sym__repeat_e] = ACTIONS(116),
    [sym__repeat_f] = ACTIONS(116),
    [sym__if_e] = ACTIONS(116),
    [sym__if_f] = ACTIONS(116),
    [sym__case_of_e] = ACTIONS(116),
    [sym__case_of_f] = ACTIONS(116),
    [sym__begin_sql_e] = ACTIONS(116),
    [sym__begin_sql_f] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(114),
    [sym__name] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
    [anon_sym_LT_GT] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [sym_parameter] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_CARET_PIPE] = ACTIONS(114),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_QMARK_QMARK] = ACTIONS(114),
    [anon_sym_QMARK_DASH] = ACTIONS(114),
    [anon_sym_QMARK_PLUS] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_COLON_EQ] = ACTIONS(114),
  },
  [8] = {
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
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(118),
    [sym__name] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_LT_GT] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_parameter] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_DASH_GT] = ACTIONS(118),
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
    [anon_sym_COLON_EQ] = ACTIONS(118),
  },
  [9] = {
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
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(122),
    [sym__name] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_LT_GT] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [sym_parameter] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_DASH_GT] = ACTIONS(122),
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
    [anon_sym_COLON_EQ] = ACTIONS(122),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [aux_sym__for_each_e_token1] = ACTIONS(128),
    [aux_sym__for_each_f_token1] = ACTIONS(128),
    [aux_sym__while_e_token1] = ACTIONS(128),
    [sym__while_f] = ACTIONS(128),
    [aux_sym__for_e_token1] = ACTIONS(128),
    [aux_sym__for_f_token1] = ACTIONS(128),
    [aux_sym__use_e_token1] = ACTIONS(128),
    [aux_sym__use_f_token1] = ACTIONS(128),
    [sym__repeat_e] = ACTIONS(128),
    [sym__repeat_f] = ACTIONS(128),
    [sym__if_e] = ACTIONS(128),
    [sym__if_f] = ACTIONS(128),
    [sym__case_of_e] = ACTIONS(128),
    [sym__case_of_f] = ACTIONS(128),
    [sym__begin_sql_e] = ACTIONS(128),
    [sym__begin_sql_f] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(126),
    [sym__name] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_LT_GT] = ACTIONS(126),
    [anon_sym_DOLLAR] = ACTIONS(128),
    [sym_parameter] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(126),
    [anon_sym_BSLASH] = ACTIONS(126),
    [anon_sym_AMP] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_CARET_PIPE] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(126),
    [anon_sym_QMARK_QMARK] = ACTIONS(126),
    [anon_sym_QMARK_DASH] = ACTIONS(126),
    [anon_sym_QMARK_PLUS] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_COLON_EQ] = ACTIONS(126),
  },
  [11] = {
    [sym__storage_suffix] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_SLASH_SLASH] = ACTIONS(130),
    [anon_sym_SLASH_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [aux_sym__for_each_e_token1] = ACTIONS(132),
    [aux_sym__for_each_f_token1] = ACTIONS(132),
    [aux_sym__while_e_token1] = ACTIONS(132),
    [sym__while_f] = ACTIONS(132),
    [aux_sym__for_e_token1] = ACTIONS(132),
    [aux_sym__for_f_token1] = ACTIONS(132),
    [aux_sym__use_e_token1] = ACTIONS(132),
    [aux_sym__use_f_token1] = ACTIONS(132),
    [sym__repeat_e] = ACTIONS(132),
    [sym__repeat_f] = ACTIONS(132),
    [sym__if_e] = ACTIONS(132),
    [sym__if_f] = ACTIONS(132),
    [sym__case_of_e] = ACTIONS(132),
    [sym__case_of_f] = ACTIONS(132),
    [sym__begin_sql_e] = ACTIONS(132),
    [sym__begin_sql_f] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [sym__name] = ACTIONS(132),
    [aux_sym__storage_suffix_token1] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_LT_GT] = ACTIONS(130),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [sym_parameter] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_BSLASH] = ACTIONS(130),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_CARET_PIPE] = ACTIONS(130),
    [anon_sym_LT_LT] = ACTIONS(130),
    [anon_sym_GT_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_QMARK_QMARK] = ACTIONS(130),
    [anon_sym_QMARK_DASH] = ACTIONS(130),
    [anon_sym_QMARK_PLUS] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_COLON_EQ] = ACTIONS(130),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_SLASH_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [aux_sym__for_each_e_token1] = ACTIONS(138),
    [aux_sym__for_each_f_token1] = ACTIONS(138),
    [aux_sym__while_e_token1] = ACTIONS(138),
    [sym__while_f] = ACTIONS(138),
    [aux_sym__for_e_token1] = ACTIONS(138),
    [aux_sym__for_f_token1] = ACTIONS(138),
    [aux_sym__use_e_token1] = ACTIONS(138),
    [aux_sym__use_f_token1] = ACTIONS(138),
    [sym__repeat_e] = ACTIONS(138),
    [sym__repeat_f] = ACTIONS(138),
    [sym__if_e] = ACTIONS(138),
    [sym__if_f] = ACTIONS(138),
    [sym__case_of_e] = ACTIONS(138),
    [sym__case_of_f] = ACTIONS(138),
    [sym__begin_sql_e] = ACTIONS(138),
    [sym__begin_sql_f] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(136),
    [sym__name] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_LT_GT] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [sym_parameter] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_CARET_PIPE] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_QMARK_QMARK] = ACTIONS(136),
    [anon_sym_QMARK_DASH] = ACTIONS(136),
    [anon_sym_QMARK_PLUS] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_COLON_EQ] = ACTIONS(136),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_SLASH_SLASH] = ACTIONS(142),
    [anon_sym_SLASH_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(144),
    [aux_sym__for_each_e_token1] = ACTIONS(144),
    [aux_sym__for_each_f_token1] = ACTIONS(144),
    [aux_sym__while_e_token1] = ACTIONS(144),
    [sym__while_f] = ACTIONS(144),
    [aux_sym__for_e_token1] = ACTIONS(144),
    [aux_sym__for_f_token1] = ACTIONS(144),
    [aux_sym__use_e_token1] = ACTIONS(144),
    [aux_sym__use_f_token1] = ACTIONS(144),
    [sym__repeat_e] = ACTIONS(144),
    [sym__repeat_f] = ACTIONS(144),
    [sym__if_e] = ACTIONS(144),
    [sym__if_f] = ACTIONS(144),
    [sym__case_of_e] = ACTIONS(144),
    [sym__case_of_f] = ACTIONS(144),
    [sym__begin_sql_e] = ACTIONS(144),
    [sym__begin_sql_f] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [sym__name] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_LT_GT] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym_parameter] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(142),
    [anon_sym_BSLASH] = ACTIONS(142),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_CARET_PIPE] = ACTIONS(142),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_QMARK_QMARK] = ACTIONS(142),
    [anon_sym_QMARK_DASH] = ACTIONS(142),
    [anon_sym_QMARK_PLUS] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_COLON_EQ] = ACTIONS(142),
  },
  [14] = {
    [sym__operator] = STATE(29),
    [sym__arguments] = STATE(52),
    [aux_sym__notation_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_STAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__for_each_e_token1] = ACTIONS(150),
    [aux_sym__for_each_f_token1] = ACTIONS(150),
    [aux_sym__while_e_token1] = ACTIONS(150),
    [sym__while_f] = ACTIONS(150),
    [aux_sym__for_e_token1] = ACTIONS(150),
    [aux_sym__for_f_token1] = ACTIONS(150),
    [aux_sym__use_e_token1] = ACTIONS(150),
    [aux_sym__use_f_token1] = ACTIONS(150),
    [sym__repeat_e] = ACTIONS(150),
    [sym__repeat_f] = ACTIONS(150),
    [sym__if_e] = ACTIONS(150),
    [sym__if_f] = ACTIONS(150),
    [sym__case_of_e] = ACTIONS(150),
    [sym__case_of_f] = ACTIONS(150),
    [sym__begin_sql_e] = ACTIONS(150),
    [sym__begin_sql_f] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(154),
    [sym__name] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LT_GT] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [sym_parameter] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_PERCENT] = ACTIONS(152),
    [anon_sym_BSLASH] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_CARET] = ACTIONS(148),
    [anon_sym_CARET_PIPE] = ACTIONS(152),
    [anon_sym_LT_LT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_POUND] = ACTIONS(152),
    [anon_sym_QMARK_QMARK] = ACTIONS(152),
    [anon_sym_QMARK_DASH] = ACTIONS(152),
    [anon_sym_QMARK_PLUS] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(156),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [anon_sym_SLASH_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(160),
    [aux_sym__for_each_e_token1] = ACTIONS(160),
    [aux_sym__for_each_f_token1] = ACTIONS(160),
    [aux_sym__while_e_token1] = ACTIONS(160),
    [sym__while_f] = ACTIONS(160),
    [aux_sym__for_e_token1] = ACTIONS(160),
    [aux_sym__for_f_token1] = ACTIONS(160),
    [aux_sym__use_e_token1] = ACTIONS(160),
    [aux_sym__use_f_token1] = ACTIONS(160),
    [sym__repeat_e] = ACTIONS(160),
    [sym__repeat_f] = ACTIONS(160),
    [sym__if_e] = ACTIONS(160),
    [sym__if_f] = ACTIONS(160),
    [sym__case_of_e] = ACTIONS(160),
    [sym__case_of_f] = ACTIONS(160),
    [sym__begin_sql_e] = ACTIONS(160),
    [sym__begin_sql_f] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(158),
    [sym__name] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_LT_GT] = ACTIONS(158),
    [anon_sym_DOLLAR] = ACTIONS(160),
    [sym_parameter] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(160),
    [anon_sym_CARET_PIPE] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(158),
    [anon_sym_QMARK_QMARK] = ACTIONS(158),
    [anon_sym_QMARK_DASH] = ACTIONS(158),
    [anon_sym_QMARK_PLUS] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_COLON_EQ] = ACTIONS(158),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(162),
    [anon_sym_SLASH_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(164),
    [aux_sym__for_each_e_token1] = ACTIONS(164),
    [aux_sym__for_each_f_token1] = ACTIONS(164),
    [aux_sym__while_e_token1] = ACTIONS(164),
    [sym__while_f] = ACTIONS(164),
    [aux_sym__for_e_token1] = ACTIONS(164),
    [aux_sym__for_f_token1] = ACTIONS(164),
    [aux_sym__use_e_token1] = ACTIONS(164),
    [aux_sym__use_f_token1] = ACTIONS(164),
    [sym__repeat_e] = ACTIONS(164),
    [sym__repeat_f] = ACTIONS(164),
    [sym__if_e] = ACTIONS(164),
    [sym__if_f] = ACTIONS(164),
    [sym__case_of_e] = ACTIONS(164),
    [sym__case_of_f] = ACTIONS(164),
    [sym__begin_sql_e] = ACTIONS(164),
    [sym__begin_sql_f] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [sym__name] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_LT_GT] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [sym_parameter] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_CARET_PIPE] = ACTIONS(162),
    [anon_sym_LT_LT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_QMARK_QMARK] = ACTIONS(162),
    [anon_sym_QMARK_DASH] = ACTIONS(162),
    [anon_sym_QMARK_PLUS] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_COLON_EQ] = ACTIONS(162),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_STAR] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(168),
    [aux_sym__for_each_e_token1] = ACTIONS(168),
    [aux_sym__for_each_f_token1] = ACTIONS(168),
    [aux_sym__while_e_token1] = ACTIONS(168),
    [sym__while_f] = ACTIONS(168),
    [aux_sym__for_e_token1] = ACTIONS(168),
    [aux_sym__for_f_token1] = ACTIONS(168),
    [aux_sym__use_e_token1] = ACTIONS(168),
    [aux_sym__use_f_token1] = ACTIONS(168),
    [sym__repeat_e] = ACTIONS(168),
    [sym__repeat_f] = ACTIONS(168),
    [sym__if_e] = ACTIONS(168),
    [sym__if_f] = ACTIONS(168),
    [sym__case_of_e] = ACTIONS(168),
    [sym__case_of_f] = ACTIONS(168),
    [sym__begin_sql_e] = ACTIONS(168),
    [sym__begin_sql_f] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [sym__name] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_LT_GT] = ACTIONS(166),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [sym_parameter] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_CARET_PIPE] = ACTIONS(166),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_POUND] = ACTIONS(166),
    [anon_sym_QMARK_QMARK] = ACTIONS(166),
    [anon_sym_QMARK_DASH] = ACTIONS(166),
    [anon_sym_QMARK_PLUS] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_COLON_EQ] = ACTIONS(166),
  },
  [18] = {
    [sym__arguments] = STATE(54),
    [aux_sym__notation_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_STAR] = ACTIONS(170),
    [aux_sym__for_each_e_token1] = ACTIONS(172),
    [aux_sym__for_each_f_token1] = ACTIONS(172),
    [aux_sym__while_e_token1] = ACTIONS(172),
    [sym__while_f] = ACTIONS(172),
    [aux_sym__for_e_token1] = ACTIONS(172),
    [aux_sym__for_f_token1] = ACTIONS(172),
    [aux_sym__use_e_token1] = ACTIONS(172),
    [aux_sym__use_f_token1] = ACTIONS(172),
    [sym__repeat_e] = ACTIONS(172),
    [sym__repeat_f] = ACTIONS(172),
    [sym__if_e] = ACTIONS(172),
    [sym__if_f] = ACTIONS(172),
    [sym__case_of_e] = ACTIONS(172),
    [sym__case_of_f] = ACTIONS(172),
    [sym__begin_sql_e] = ACTIONS(172),
    [sym__begin_sql_f] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(154),
    [sym__name] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LT_GT] = ACTIONS(170),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [sym_parameter] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
  },
  [19] = {
    [sym__storage_suffix] = STATE(44),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [aux_sym__storage_suffix_token1] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_BSLASH] = ACTIONS(130),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_CARET_PIPE] = ACTIONS(130),
    [anon_sym_LT_LT] = ACTIONS(130),
    [anon_sym_GT_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_QMARK_QMARK] = ACTIONS(130),
    [anon_sym_QMARK_DASH] = ACTIONS(130),
    [anon_sym_QMARK_PLUS] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
  },
  [20] = {
    [sym__number] = STATE(114),
    [sym__time] = STATE(114),
    [sym__date] = STATE(114),
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__pointer] = STATE(114),
    [sym__reference] = STATE(21),
    [sym__value] = STATE(114),
    [sym__formula] = STATE(114),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(186),
    [sym__name] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(200),
  },
  [21] = {
    [sym__operator] = STATE(39),
    [sym__arguments] = STATE(52),
    [aux_sym__notation_repeat1] = STATE(18),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(204),
    [anon_sym_CARET_PIPE] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_GT_GT] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(202),
    [anon_sym_QMARK_QMARK] = ACTIONS(202),
    [anon_sym_QMARK_DASH] = ACTIONS(202),
    [anon_sym_QMARK_PLUS] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
  },
  [22] = {
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_CARET_PIPE] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_QMARK_QMARK] = ACTIONS(104),
    [anon_sym_QMARK_DASH] = ACTIONS(104),
    [anon_sym_QMARK_PLUS] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
  },
  [23] = {
    [sym__number] = STATE(117),
    [sym__time] = STATE(117),
    [sym__date] = STATE(117),
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__pointer] = STATE(117),
    [sym__reference] = STATE(21),
    [sym__value] = STATE(117),
    [sym__formula] = STATE(117),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(208),
    [sym__name] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(210),
  },
  [24] = {
    [aux_sym__notation_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_STAR] = ACTIONS(212),
    [aux_sym__for_each_e_token1] = ACTIONS(214),
    [aux_sym__for_each_f_token1] = ACTIONS(214),
    [aux_sym__while_e_token1] = ACTIONS(214),
    [sym__while_f] = ACTIONS(214),
    [aux_sym__for_e_token1] = ACTIONS(214),
    [aux_sym__for_f_token1] = ACTIONS(214),
    [aux_sym__use_e_token1] = ACTIONS(214),
    [aux_sym__use_f_token1] = ACTIONS(214),
    [sym__repeat_e] = ACTIONS(214),
    [sym__repeat_f] = ACTIONS(214),
    [sym__if_e] = ACTIONS(214),
    [sym__if_f] = ACTIONS(214),
    [sym__case_of_e] = ACTIONS(214),
    [sym__case_of_f] = ACTIONS(214),
    [sym__begin_sql_e] = ACTIONS(214),
    [sym__begin_sql_f] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(216),
    [sym__name] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_LT_GT] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [sym_parameter] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
  },
  [25] = {
    [sym__arguments] = STATE(52),
    [aux_sym__notation_repeat1] = STATE(18),
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
    [anon_sym_DOT] = ACTIONS(154),
    [sym__name] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LT_GT] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(224),
    [sym_parameter] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_COLON_EQ] = ACTIONS(226),
  },
  [26] = {
    [sym__number] = STATE(120),
    [sym__time] = STATE(120),
    [sym__date] = STATE(120),
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__pointer] = STATE(120),
    [sym__reference] = STATE(21),
    [sym__value] = STATE(120),
    [sym__formula] = STATE(120),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(228),
    [sym__name] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(230),
  },
  [27] = {
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(118),
    [anon_sym_DASH_GT] = ACTIONS(118),
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
  [28] = {
    [sym__number] = STATE(138),
    [sym__time] = STATE(138),
    [sym__date] = STATE(138),
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__pointer] = STATE(138),
    [sym__reference] = STATE(21),
    [sym__value] = STATE(138),
    [sym__formula] = STATE(138),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(232),
    [sym__name] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(198),
  },
  [29] = {
    [sym__number] = STATE(51),
    [sym__time] = STATE(51),
    [sym__date] = STATE(51),
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__pointer] = STATE(51),
    [sym__reference] = STATE(14),
    [sym__value] = STATE(51),
    [sym__formula] = STATE(51),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(234),
    [sym__name] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(198),
  },
  [30] = {
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_CARET_PIPE] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_QMARK_QMARK] = ACTIONS(136),
    [anon_sym_QMARK_DASH] = ACTIONS(136),
    [anon_sym_QMARK_PLUS] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_SLASH_STAR] = ACTIONS(212),
    [aux_sym__for_each_e_token1] = ACTIONS(214),
    [aux_sym__for_each_f_token1] = ACTIONS(214),
    [aux_sym__while_e_token1] = ACTIONS(214),
    [sym__while_f] = ACTIONS(214),
    [aux_sym__for_e_token1] = ACTIONS(214),
    [aux_sym__for_f_token1] = ACTIONS(214),
    [aux_sym__use_e_token1] = ACTIONS(214),
    [aux_sym__use_f_token1] = ACTIONS(214),
    [sym__repeat_e] = ACTIONS(214),
    [sym__repeat_f] = ACTIONS(214),
    [sym__if_e] = ACTIONS(214),
    [sym__if_f] = ACTIONS(214),
    [sym__case_of_e] = ACTIONS(214),
    [sym__case_of_f] = ACTIONS(214),
    [sym__begin_sql_e] = ACTIONS(214),
    [sym__begin_sql_f] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(212),
    [sym__name] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_LT_GT] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [sym_parameter] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
  },
  [32] = {
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_CARET_PIPE] = ACTIONS(104),
    [anon_sym_LT_LT] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_QMARK_QMARK] = ACTIONS(104),
    [anon_sym_QMARK_DASH] = ACTIONS(104),
    [anon_sym_QMARK_PLUS] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
  },
  [33] = {
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_BSLASH] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_CARET_PIPE] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_QMARK_QMARK] = ACTIONS(110),
    [anon_sym_QMARK_DASH] = ACTIONS(110),
    [anon_sym_QMARK_PLUS] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
  },
  [34] = {
    [sym__arguments] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_SLASH_SLASH] = ACTIONS(240),
    [anon_sym_SLASH_STAR] = ACTIONS(240),
    [aux_sym__for_each_e_token1] = ACTIONS(242),
    [aux_sym__for_each_f_token1] = ACTIONS(242),
    [aux_sym__while_e_token1] = ACTIONS(242),
    [sym__while_f] = ACTIONS(242),
    [aux_sym__for_e_token1] = ACTIONS(242),
    [aux_sym__for_f_token1] = ACTIONS(242),
    [aux_sym__use_e_token1] = ACTIONS(242),
    [aux_sym__use_f_token1] = ACTIONS(242),
    [sym__repeat_e] = ACTIONS(242),
    [sym__repeat_f] = ACTIONS(242),
    [sym__if_e] = ACTIONS(242),
    [sym__if_f] = ACTIONS(242),
    [sym__case_of_e] = ACTIONS(242),
    [sym__case_of_f] = ACTIONS(242),
    [sym__begin_sql_e] = ACTIONS(242),
    [sym__begin_sql_f] = ACTIONS(242),
    [sym__name] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_LT_GT] = ACTIONS(240),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [sym_parameter] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(156),
  },
  [35] = {
    [sym__number] = STATE(63),
    [sym__time] = STATE(63),
    [sym__date] = STATE(63),
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__pointer] = STATE(63),
    [sym__reference] = STATE(14),
    [sym__value] = STATE(63),
    [sym__formula] = STATE(63),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(250),
    [sym__name] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(198),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_SLASH_STAR] = ACTIONS(252),
    [aux_sym__for_each_e_token1] = ACTIONS(254),
    [aux_sym__for_each_f_token1] = ACTIONS(254),
    [aux_sym__while_e_token1] = ACTIONS(254),
    [sym__while_f] = ACTIONS(254),
    [aux_sym__for_e_token1] = ACTIONS(254),
    [aux_sym__for_f_token1] = ACTIONS(254),
    [aux_sym__use_e_token1] = ACTIONS(254),
    [aux_sym__use_f_token1] = ACTIONS(254),
    [sym__repeat_e] = ACTIONS(254),
    [sym__repeat_f] = ACTIONS(254),
    [sym__if_e] = ACTIONS(254),
    [sym__if_f] = ACTIONS(254),
    [sym__case_of_e] = ACTIONS(254),
    [sym__case_of_f] = ACTIONS(254),
    [sym__begin_sql_e] = ACTIONS(254),
    [sym__begin_sql_f] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(252),
    [sym__name] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_LT_GT] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(254),
    [sym_parameter] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
  },
  [37] = {
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(126),
    [anon_sym_BSLASH] = ACTIONS(126),
    [anon_sym_AMP] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_CARET_PIPE] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(126),
    [anon_sym_QMARK_QMARK] = ACTIONS(126),
    [anon_sym_QMARK_DASH] = ACTIONS(126),
    [anon_sym_QMARK_PLUS] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
  },
  [38] = {
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(122),
    [anon_sym_DASH_GT] = ACTIONS(122),
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
  [39] = {
    [sym__number] = STATE(51),
    [sym__time] = STATE(51),
    [sym__date] = STATE(51),
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__pointer] = STATE(51),
    [sym__reference] = STATE(21),
    [sym__value] = STATE(51),
    [sym__formula] = STATE(51),
    [sym_statement] = STATE(57),
    [sym__function] = STATE(48),
    [sym__notation] = STATE(48),
    [sym__hex_literal] = ACTIONS(178),
    [sym__dec_literal] = ACTIONS(180),
    [sym__num_literal] = ACTIONS(180),
    [sym__exp_literal] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [sym__string] = ACTIONS(234),
    [sym__name] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(198),
  },
  [40] = {
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_CARET_PIPE] = ACTIONS(114),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_QMARK_QMARK] = ACTIONS(114),
    [anon_sym_QMARK_DASH] = ACTIONS(114),
    [anon_sym_QMARK_PLUS] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
  },
  [41] = {
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_CARET_PIPE] = ACTIONS(166),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_POUND] = ACTIONS(166),
    [anon_sym_QMARK_QMARK] = ACTIONS(166),
    [anon_sym_QMARK_DASH] = ACTIONS(166),
    [anon_sym_QMARK_PLUS] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
  },
  [42] = {
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(142),
    [anon_sym_BSLASH] = ACTIONS(142),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_CARET_PIPE] = ACTIONS(142),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_QMARK_QMARK] = ACTIONS(142),
    [anon_sym_QMARK_DASH] = ACTIONS(142),
    [anon_sym_QMARK_PLUS] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
  },
  [43] = {
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_CARET_PIPE] = ACTIONS(162),
    [anon_sym_LT_LT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_QMARK_QMARK] = ACTIONS(162),
    [anon_sym_QMARK_DASH] = ACTIONS(162),
    [anon_sym_QMARK_PLUS] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
  },
  [44] = {
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(160),
    [anon_sym_CARET_PIPE] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(158),
    [anon_sym_QMARK_QMARK] = ACTIONS(158),
    [anon_sym_QMARK_DASH] = ACTIONS(158),
    [anon_sym_QMARK_PLUS] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(256),
    [anon_sym_SLASH_STAR] = ACTIONS(256),
    [aux_sym__for_each_e_token1] = ACTIONS(258),
    [aux_sym__for_each_f_token1] = ACTIONS(258),
    [aux_sym__while_e_token1] = ACTIONS(258),
    [sym__while_f] = ACTIONS(258),
    [aux_sym__for_e_token1] = ACTIONS(258),
    [aux_sym__for_f_token1] = ACTIONS(258),
    [aux_sym__use_e_token1] = ACTIONS(258),
    [aux_sym__use_f_token1] = ACTIONS(258),
    [sym__repeat_e] = ACTIONS(258),
    [sym__repeat_f] = ACTIONS(258),
    [sym__if_e] = ACTIONS(258),
    [sym__if_f] = ACTIONS(258),
    [sym__case_of_e] = ACTIONS(258),
    [sym__case_of_f] = ACTIONS(258),
    [sym__begin_sql_e] = ACTIONS(258),
    [sym__begin_sql_f] = ACTIONS(258),
    [sym__name] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_LT_GT] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(258),
    [sym_parameter] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_SLASH_SLASH] = ACTIONS(260),
    [anon_sym_SLASH_STAR] = ACTIONS(260),
    [aux_sym__for_each_e_token1] = ACTIONS(262),
    [aux_sym__for_each_f_token1] = ACTIONS(262),
    [aux_sym__while_e_token1] = ACTIONS(262),
    [sym__while_f] = ACTIONS(262),
    [aux_sym__for_e_token1] = ACTIONS(262),
    [aux_sym__for_f_token1] = ACTIONS(262),
    [aux_sym__use_e_token1] = ACTIONS(262),
    [aux_sym__use_f_token1] = ACTIONS(262),
    [sym__repeat_e] = ACTIONS(262),
    [sym__repeat_f] = ACTIONS(262),
    [sym__if_e] = ACTIONS(262),
    [sym__if_f] = ACTIONS(262),
    [sym__case_of_e] = ACTIONS(262),
    [sym__case_of_f] = ACTIONS(262),
    [sym__begin_sql_e] = ACTIONS(262),
    [sym__begin_sql_f] = ACTIONS(262),
    [sym__name] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_LT_GT] = ACTIONS(260),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [sym_parameter] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_STAR] = ACTIONS(264),
    [aux_sym__for_each_e_token1] = ACTIONS(266),
    [aux_sym__for_each_f_token1] = ACTIONS(266),
    [aux_sym__while_e_token1] = ACTIONS(266),
    [sym__while_f] = ACTIONS(266),
    [aux_sym__for_e_token1] = ACTIONS(266),
    [aux_sym__for_f_token1] = ACTIONS(266),
    [aux_sym__use_e_token1] = ACTIONS(266),
    [aux_sym__use_f_token1] = ACTIONS(266),
    [sym__repeat_e] = ACTIONS(266),
    [sym__repeat_f] = ACTIONS(266),
    [sym__if_e] = ACTIONS(266),
    [sym__if_f] = ACTIONS(266),
    [sym__case_of_e] = ACTIONS(266),
    [sym__case_of_f] = ACTIONS(266),
    [sym__begin_sql_e] = ACTIONS(266),
    [sym__begin_sql_f] = ACTIONS(266),
    [sym__name] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_LT_GT] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [sym_parameter] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [anon_sym_SLASH_STAR] = ACTIONS(268),
    [aux_sym__for_each_e_token1] = ACTIONS(270),
    [aux_sym__for_each_f_token1] = ACTIONS(270),
    [aux_sym__while_e_token1] = ACTIONS(270),
    [sym__while_f] = ACTIONS(270),
    [aux_sym__for_e_token1] = ACTIONS(270),
    [aux_sym__for_f_token1] = ACTIONS(270),
    [aux_sym__use_e_token1] = ACTIONS(270),
    [aux_sym__use_f_token1] = ACTIONS(270),
    [sym__repeat_e] = ACTIONS(270),
    [sym__repeat_f] = ACTIONS(270),
    [sym__if_e] = ACTIONS(270),
    [sym__if_f] = ACTIONS(270),
    [sym__case_of_e] = ACTIONS(270),
    [sym__case_of_f] = ACTIONS(270),
    [sym__begin_sql_e] = ACTIONS(270),
    [sym__begin_sql_f] = ACTIONS(270),
    [sym__name] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(268),
    [anon_sym_LT_GT] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [sym_parameter] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_SLASH_SLASH] = ACTIONS(272),
    [anon_sym_SLASH_STAR] = ACTIONS(272),
    [aux_sym__for_each_e_token1] = ACTIONS(274),
    [aux_sym__for_each_f_token1] = ACTIONS(274),
    [aux_sym__while_e_token1] = ACTIONS(274),
    [sym__while_f] = ACTIONS(274),
    [aux_sym__for_e_token1] = ACTIONS(274),
    [aux_sym__for_f_token1] = ACTIONS(274),
    [aux_sym__use_e_token1] = ACTIONS(274),
    [aux_sym__use_f_token1] = ACTIONS(274),
    [sym__repeat_e] = ACTIONS(274),
    [sym__repeat_f] = ACTIONS(274),
    [sym__if_e] = ACTIONS(274),
    [sym__if_f] = ACTIONS(274),
    [sym__case_of_e] = ACTIONS(274),
    [sym__case_of_f] = ACTIONS(274),
    [sym__begin_sql_e] = ACTIONS(274),
    [sym__begin_sql_f] = ACTIONS(274),
    [sym__name] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_LT_GT] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [sym_parameter] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [anon_sym_SLASH_STAR] = ACTIONS(276),
    [aux_sym__for_each_e_token1] = ACTIONS(278),
    [aux_sym__for_each_f_token1] = ACTIONS(278),
    [aux_sym__while_e_token1] = ACTIONS(278),
    [sym__while_f] = ACTIONS(278),
    [aux_sym__for_e_token1] = ACTIONS(278),
    [aux_sym__for_f_token1] = ACTIONS(278),
    [aux_sym__use_e_token1] = ACTIONS(278),
    [aux_sym__use_f_token1] = ACTIONS(278),
    [sym__repeat_e] = ACTIONS(278),
    [sym__repeat_f] = ACTIONS(278),
    [sym__if_e] = ACTIONS(278),
    [sym__if_f] = ACTIONS(278),
    [sym__case_of_e] = ACTIONS(278),
    [sym__case_of_f] = ACTIONS(278),
    [sym__begin_sql_e] = ACTIONS(278),
    [sym__begin_sql_f] = ACTIONS(278),
    [sym__name] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_LT_GT] = ACTIONS(276),
    [anon_sym_DOLLAR] = ACTIONS(278),
    [sym_parameter] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [anon_sym_SLASH_STAR] = ACTIONS(280),
    [aux_sym__for_each_e_token1] = ACTIONS(282),
    [aux_sym__for_each_f_token1] = ACTIONS(282),
    [aux_sym__while_e_token1] = ACTIONS(282),
    [sym__while_f] = ACTIONS(282),
    [aux_sym__for_e_token1] = ACTIONS(282),
    [aux_sym__for_f_token1] = ACTIONS(282),
    [aux_sym__use_e_token1] = ACTIONS(282),
    [aux_sym__use_f_token1] = ACTIONS(282),
    [sym__repeat_e] = ACTIONS(282),
    [sym__repeat_f] = ACTIONS(282),
    [sym__if_e] = ACTIONS(282),
    [sym__if_f] = ACTIONS(282),
    [sym__case_of_e] = ACTIONS(282),
    [sym__case_of_f] = ACTIONS(282),
    [sym__begin_sql_e] = ACTIONS(282),
    [sym__begin_sql_f] = ACTIONS(282),
    [sym__name] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_LT_GT] = ACTIONS(280),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [sym_parameter] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_SLASH_STAR] = ACTIONS(170),
    [aux_sym__for_each_e_token1] = ACTIONS(172),
    [aux_sym__for_each_f_token1] = ACTIONS(172),
    [aux_sym__while_e_token1] = ACTIONS(172),
    [sym__while_f] = ACTIONS(172),
    [aux_sym__for_e_token1] = ACTIONS(172),
    [aux_sym__for_f_token1] = ACTIONS(172),
    [aux_sym__use_e_token1] = ACTIONS(172),
    [aux_sym__use_f_token1] = ACTIONS(172),
    [sym__repeat_e] = ACTIONS(172),
    [sym__repeat_f] = ACTIONS(172),
    [sym__if_e] = ACTIONS(172),
    [sym__if_f] = ACTIONS(172),
    [sym__case_of_e] = ACTIONS(172),
    [sym__case_of_f] = ACTIONS(172),
    [sym__begin_sql_e] = ACTIONS(172),
    [sym__begin_sql_f] = ACTIONS(172),
    [sym__name] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LT_GT] = ACTIONS(170),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [sym_parameter] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_SLASH_STAR] = ACTIONS(284),
    [aux_sym__for_each_e_token1] = ACTIONS(286),
    [aux_sym__for_each_f_token1] = ACTIONS(286),
    [aux_sym__while_e_token1] = ACTIONS(286),
    [sym__while_f] = ACTIONS(286),
    [aux_sym__for_e_token1] = ACTIONS(286),
    [aux_sym__for_f_token1] = ACTIONS(286),
    [aux_sym__use_e_token1] = ACTIONS(286),
    [aux_sym__use_f_token1] = ACTIONS(286),
    [sym__repeat_e] = ACTIONS(286),
    [sym__repeat_f] = ACTIONS(286),
    [sym__if_e] = ACTIONS(286),
    [sym__if_f] = ACTIONS(286),
    [sym__case_of_e] = ACTIONS(286),
    [sym__case_of_f] = ACTIONS(286),
    [sym__begin_sql_e] = ACTIONS(286),
    [sym__begin_sql_f] = ACTIONS(286),
    [sym__name] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_LT_GT] = ACTIONS(284),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [sym_parameter] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_STAR] = ACTIONS(288),
    [aux_sym__for_each_e_token1] = ACTIONS(290),
    [aux_sym__for_each_f_token1] = ACTIONS(290),
    [aux_sym__while_e_token1] = ACTIONS(290),
    [sym__while_f] = ACTIONS(290),
    [aux_sym__for_e_token1] = ACTIONS(290),
    [aux_sym__for_f_token1] = ACTIONS(290),
    [aux_sym__use_e_token1] = ACTIONS(290),
    [aux_sym__use_f_token1] = ACTIONS(290),
    [sym__repeat_e] = ACTIONS(290),
    [sym__repeat_f] = ACTIONS(290),
    [sym__if_e] = ACTIONS(290),
    [sym__if_f] = ACTIONS(290),
    [sym__case_of_e] = ACTIONS(290),
    [sym__case_of_f] = ACTIONS(290),
    [sym__begin_sql_e] = ACTIONS(290),
    [sym__begin_sql_f] = ACTIONS(290),
    [sym__name] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_LT_GT] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(290),
    [sym_parameter] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_SLASH_STAR] = ACTIONS(292),
    [aux_sym__for_each_e_token1] = ACTIONS(294),
    [aux_sym__for_each_f_token1] = ACTIONS(294),
    [aux_sym__while_e_token1] = ACTIONS(294),
    [sym__while_f] = ACTIONS(294),
    [aux_sym__for_e_token1] = ACTIONS(294),
    [aux_sym__for_f_token1] = ACTIONS(294),
    [aux_sym__use_e_token1] = ACTIONS(294),
    [aux_sym__use_f_token1] = ACTIONS(294),
    [sym__repeat_e] = ACTIONS(294),
    [sym__repeat_f] = ACTIONS(294),
    [sym__if_e] = ACTIONS(294),
    [sym__if_f] = ACTIONS(294),
    [sym__case_of_e] = ACTIONS(294),
    [sym__case_of_f] = ACTIONS(294),
    [sym__begin_sql_e] = ACTIONS(294),
    [sym__begin_sql_f] = ACTIONS(294),
    [sym__name] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(292),
    [anon_sym_LT_GT] = ACTIONS(292),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [sym_parameter] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [anon_sym_SLASH_STAR] = ACTIONS(296),
    [aux_sym__for_each_e_token1] = ACTIONS(298),
    [aux_sym__for_each_f_token1] = ACTIONS(298),
    [aux_sym__while_e_token1] = ACTIONS(298),
    [sym__while_f] = ACTIONS(298),
    [aux_sym__for_e_token1] = ACTIONS(298),
    [aux_sym__for_f_token1] = ACTIONS(298),
    [aux_sym__use_e_token1] = ACTIONS(298),
    [aux_sym__use_f_token1] = ACTIONS(298),
    [sym__repeat_e] = ACTIONS(298),
    [sym__repeat_f] = ACTIONS(298),
    [sym__if_e] = ACTIONS(298),
    [sym__if_f] = ACTIONS(298),
    [sym__case_of_e] = ACTIONS(298),
    [sym__case_of_f] = ACTIONS(298),
    [sym__begin_sql_e] = ACTIONS(298),
    [sym__begin_sql_f] = ACTIONS(298),
    [sym__name] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_LT_GT] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [sym_parameter] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_SLASH_SLASH] = ACTIONS(146),
    [anon_sym_SLASH_STAR] = ACTIONS(146),
    [aux_sym__for_each_e_token1] = ACTIONS(150),
    [aux_sym__for_each_f_token1] = ACTIONS(150),
    [aux_sym__while_e_token1] = ACTIONS(150),
    [sym__while_f] = ACTIONS(150),
    [aux_sym__for_e_token1] = ACTIONS(150),
    [aux_sym__for_f_token1] = ACTIONS(150),
    [aux_sym__use_e_token1] = ACTIONS(150),
    [aux_sym__use_f_token1] = ACTIONS(150),
    [sym__repeat_e] = ACTIONS(150),
    [sym__repeat_f] = ACTIONS(150),
    [sym__if_e] = ACTIONS(150),
    [sym__if_f] = ACTIONS(150),
    [sym__case_of_e] = ACTIONS(150),
    [sym__case_of_f] = ACTIONS(150),
    [sym__begin_sql_e] = ACTIONS(150),
    [sym__begin_sql_f] = ACTIONS(150),
    [sym__name] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LT_GT] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [sym_parameter] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_SLASH_STAR] = ACTIONS(300),
    [aux_sym__for_each_e_token1] = ACTIONS(302),
    [aux_sym__for_each_f_token1] = ACTIONS(302),
    [aux_sym__while_e_token1] = ACTIONS(302),
    [sym__while_f] = ACTIONS(302),
    [aux_sym__for_e_token1] = ACTIONS(302),
    [aux_sym__for_f_token1] = ACTIONS(302),
    [aux_sym__use_e_token1] = ACTIONS(302),
    [aux_sym__use_f_token1] = ACTIONS(302),
    [sym__repeat_e] = ACTIONS(302),
    [sym__repeat_f] = ACTIONS(302),
    [sym__if_e] = ACTIONS(302),
    [sym__if_f] = ACTIONS(302),
    [sym__case_of_e] = ACTIONS(302),
    [sym__case_of_f] = ACTIONS(302),
    [sym__begin_sql_e] = ACTIONS(302),
    [sym__begin_sql_f] = ACTIONS(302),
    [sym__name] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_LT_GT] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [sym_parameter] = ACTIONS(300),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_STAR] = ACTIONS(304),
    [aux_sym__for_each_e_token1] = ACTIONS(306),
    [aux_sym__for_each_f_token1] = ACTIONS(306),
    [aux_sym__while_e_token1] = ACTIONS(306),
    [sym__while_f] = ACTIONS(306),
    [aux_sym__for_e_token1] = ACTIONS(306),
    [aux_sym__for_f_token1] = ACTIONS(306),
    [aux_sym__use_e_token1] = ACTIONS(306),
    [aux_sym__use_f_token1] = ACTIONS(306),
    [sym__repeat_e] = ACTIONS(306),
    [sym__repeat_f] = ACTIONS(306),
    [sym__if_e] = ACTIONS(306),
    [sym__if_f] = ACTIONS(306),
    [sym__case_of_e] = ACTIONS(306),
    [sym__case_of_f] = ACTIONS(306),
    [sym__begin_sql_e] = ACTIONS(306),
    [sym__begin_sql_f] = ACTIONS(306),
    [sym__name] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_LT_GT] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [sym_parameter] = ACTIONS(304),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_SLASH_STAR] = ACTIONS(308),
    [aux_sym__for_each_e_token1] = ACTIONS(310),
    [aux_sym__for_each_f_token1] = ACTIONS(310),
    [aux_sym__while_e_token1] = ACTIONS(310),
    [sym__while_f] = ACTIONS(310),
    [aux_sym__for_e_token1] = ACTIONS(310),
    [aux_sym__for_f_token1] = ACTIONS(310),
    [aux_sym__use_e_token1] = ACTIONS(310),
    [aux_sym__use_f_token1] = ACTIONS(310),
    [sym__repeat_e] = ACTIONS(310),
    [sym__repeat_f] = ACTIONS(310),
    [sym__if_e] = ACTIONS(310),
    [sym__if_f] = ACTIONS(310),
    [sym__case_of_e] = ACTIONS(310),
    [sym__case_of_f] = ACTIONS(310),
    [sym__begin_sql_e] = ACTIONS(310),
    [sym__begin_sql_f] = ACTIONS(310),
    [sym__name] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_LT_GT] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [sym_parameter] = ACTIONS(308),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [aux_sym__for_each_e_token1] = ACTIONS(314),
    [aux_sym__for_each_f_token1] = ACTIONS(314),
    [aux_sym__while_e_token1] = ACTIONS(314),
    [sym__while_f] = ACTIONS(314),
    [aux_sym__for_e_token1] = ACTIONS(314),
    [aux_sym__for_f_token1] = ACTIONS(314),
    [aux_sym__use_e_token1] = ACTIONS(314),
    [aux_sym__use_f_token1] = ACTIONS(314),
    [sym__repeat_e] = ACTIONS(314),
    [sym__repeat_f] = ACTIONS(314),
    [sym__if_e] = ACTIONS(314),
    [sym__if_f] = ACTIONS(314),
    [sym__case_of_e] = ACTIONS(314),
    [sym__case_of_f] = ACTIONS(314),
    [sym__begin_sql_e] = ACTIONS(314),
    [sym__begin_sql_f] = ACTIONS(314),
    [sym__name] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_LT_GT] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [sym_parameter] = ACTIONS(312),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(316),
    [anon_sym_SLASH_STAR] = ACTIONS(316),
    [aux_sym__for_each_e_token1] = ACTIONS(318),
    [aux_sym__for_each_f_token1] = ACTIONS(318),
    [aux_sym__while_e_token1] = ACTIONS(318),
    [sym__while_f] = ACTIONS(318),
    [aux_sym__for_e_token1] = ACTIONS(318),
    [aux_sym__for_f_token1] = ACTIONS(318),
    [aux_sym__use_e_token1] = ACTIONS(318),
    [aux_sym__use_f_token1] = ACTIONS(318),
    [sym__repeat_e] = ACTIONS(318),
    [sym__repeat_f] = ACTIONS(318),
    [sym__if_e] = ACTIONS(318),
    [sym__if_f] = ACTIONS(318),
    [sym__case_of_e] = ACTIONS(318),
    [sym__case_of_f] = ACTIONS(318),
    [sym__begin_sql_e] = ACTIONS(318),
    [sym__begin_sql_f] = ACTIONS(318),
    [sym__name] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_LT_GT] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(318),
    [sym_parameter] = ACTIONS(316),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_SLASH_STAR] = ACTIONS(320),
    [aux_sym__for_each_e_token1] = ACTIONS(322),
    [aux_sym__for_each_f_token1] = ACTIONS(322),
    [aux_sym__while_e_token1] = ACTIONS(322),
    [sym__while_f] = ACTIONS(322),
    [aux_sym__for_e_token1] = ACTIONS(322),
    [aux_sym__for_f_token1] = ACTIONS(322),
    [aux_sym__use_e_token1] = ACTIONS(322),
    [aux_sym__use_f_token1] = ACTIONS(322),
    [sym__repeat_e] = ACTIONS(322),
    [sym__repeat_f] = ACTIONS(322),
    [sym__if_e] = ACTIONS(322),
    [sym__if_f] = ACTIONS(322),
    [sym__case_of_e] = ACTIONS(322),
    [sym__case_of_f] = ACTIONS(322),
    [sym__begin_sql_e] = ACTIONS(322),
    [sym__begin_sql_f] = ACTIONS(322),
    [sym__name] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_LT_GT] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [sym_parameter] = ACTIONS(320),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_STAR] = ACTIONS(324),
    [aux_sym__for_each_e_token1] = ACTIONS(326),
    [aux_sym__for_each_f_token1] = ACTIONS(326),
    [aux_sym__while_e_token1] = ACTIONS(326),
    [sym__while_f] = ACTIONS(326),
    [aux_sym__for_e_token1] = ACTIONS(326),
    [aux_sym__for_f_token1] = ACTIONS(326),
    [aux_sym__use_e_token1] = ACTIONS(326),
    [aux_sym__use_f_token1] = ACTIONS(326),
    [sym__repeat_e] = ACTIONS(326),
    [sym__repeat_f] = ACTIONS(326),
    [sym__if_e] = ACTIONS(326),
    [sym__if_f] = ACTIONS(326),
    [sym__case_of_e] = ACTIONS(326),
    [sym__case_of_f] = ACTIONS(326),
    [sym__begin_sql_e] = ACTIONS(326),
    [sym__begin_sql_f] = ACTIONS(326),
    [sym__name] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_LT_GT] = ACTIONS(324),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [sym_parameter] = ACTIONS(324),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(328),
    [anon_sym_SLASH_STAR] = ACTIONS(328),
    [aux_sym__for_each_e_token1] = ACTIONS(330),
    [aux_sym__for_each_f_token1] = ACTIONS(330),
    [aux_sym__while_e_token1] = ACTIONS(330),
    [sym__while_f] = ACTIONS(330),
    [aux_sym__for_e_token1] = ACTIONS(330),
    [aux_sym__for_f_token1] = ACTIONS(330),
    [aux_sym__use_e_token1] = ACTIONS(330),
    [aux_sym__use_f_token1] = ACTIONS(330),
    [sym__repeat_e] = ACTIONS(330),
    [sym__repeat_f] = ACTIONS(330),
    [sym__if_e] = ACTIONS(330),
    [sym__if_f] = ACTIONS(330),
    [sym__case_of_e] = ACTIONS(330),
    [sym__case_of_f] = ACTIONS(330),
    [sym__begin_sql_e] = ACTIONS(330),
    [sym__begin_sql_f] = ACTIONS(330),
    [sym__name] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LT_GT] = ACTIONS(328),
    [anon_sym_DOLLAR] = ACTIONS(330),
    [sym_parameter] = ACTIONS(328),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_SLASH_SLASH] = ACTIONS(332),
    [anon_sym_SLASH_STAR] = ACTIONS(332),
    [aux_sym__for_each_e_token1] = ACTIONS(334),
    [aux_sym__for_each_f_token1] = ACTIONS(334),
    [aux_sym__while_e_token1] = ACTIONS(334),
    [sym__while_f] = ACTIONS(334),
    [aux_sym__for_e_token1] = ACTIONS(334),
    [aux_sym__for_f_token1] = ACTIONS(334),
    [aux_sym__use_e_token1] = ACTIONS(334),
    [aux_sym__use_f_token1] = ACTIONS(334),
    [sym__repeat_e] = ACTIONS(334),
    [sym__repeat_f] = ACTIONS(334),
    [sym__if_e] = ACTIONS(334),
    [sym__if_f] = ACTIONS(334),
    [sym__case_of_e] = ACTIONS(334),
    [sym__case_of_f] = ACTIONS(334),
    [sym__begin_sql_e] = ACTIONS(334),
    [sym__begin_sql_f] = ACTIONS(334),
    [sym__name] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LT_GT] = ACTIONS(332),
    [anon_sym_DOLLAR] = ACTIONS(334),
    [sym_parameter] = ACTIONS(332),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_STAR] = ACTIONS(336),
    [aux_sym__for_each_e_token1] = ACTIONS(338),
    [aux_sym__for_each_f_token1] = ACTIONS(338),
    [aux_sym__while_e_token1] = ACTIONS(338),
    [sym__while_f] = ACTIONS(338),
    [aux_sym__for_e_token1] = ACTIONS(338),
    [aux_sym__for_f_token1] = ACTIONS(338),
    [aux_sym__use_e_token1] = ACTIONS(338),
    [aux_sym__use_f_token1] = ACTIONS(338),
    [sym__repeat_e] = ACTIONS(338),
    [sym__repeat_f] = ACTIONS(338),
    [sym__if_e] = ACTIONS(338),
    [sym__if_f] = ACTIONS(338),
    [sym__case_of_e] = ACTIONS(338),
    [sym__case_of_f] = ACTIONS(338),
    [sym__begin_sql_e] = ACTIONS(338),
    [sym__begin_sql_f] = ACTIONS(338),
    [sym__name] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_LT_GT] = ACTIONS(336),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [sym_parameter] = ACTIONS(336),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_STAR] = ACTIONS(340),
    [aux_sym__for_each_e_token1] = ACTIONS(342),
    [aux_sym__for_each_f_token1] = ACTIONS(342),
    [aux_sym__while_e_token1] = ACTIONS(342),
    [sym__while_f] = ACTIONS(342),
    [aux_sym__for_e_token1] = ACTIONS(342),
    [aux_sym__for_f_token1] = ACTIONS(342),
    [aux_sym__use_e_token1] = ACTIONS(342),
    [aux_sym__use_f_token1] = ACTIONS(342),
    [sym__repeat_e] = ACTIONS(342),
    [sym__repeat_f] = ACTIONS(342),
    [sym__if_e] = ACTIONS(342),
    [sym__if_f] = ACTIONS(342),
    [sym__case_of_e] = ACTIONS(342),
    [sym__case_of_f] = ACTIONS(342),
    [sym__begin_sql_e] = ACTIONS(342),
    [sym__begin_sql_f] = ACTIONS(342),
    [sym__name] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LT_GT] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [sym_parameter] = ACTIONS(340),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_SLASH_SLASH] = ACTIONS(344),
    [anon_sym_SLASH_STAR] = ACTIONS(344),
    [aux_sym__for_each_e_token1] = ACTIONS(346),
    [aux_sym__for_each_f_token1] = ACTIONS(346),
    [aux_sym__while_e_token1] = ACTIONS(346),
    [sym__while_f] = ACTIONS(346),
    [aux_sym__for_e_token1] = ACTIONS(346),
    [aux_sym__for_f_token1] = ACTIONS(346),
    [aux_sym__use_e_token1] = ACTIONS(346),
    [aux_sym__use_f_token1] = ACTIONS(346),
    [sym__repeat_e] = ACTIONS(346),
    [sym__repeat_f] = ACTIONS(346),
    [sym__if_e] = ACTIONS(346),
    [sym__if_f] = ACTIONS(346),
    [sym__case_of_e] = ACTIONS(346),
    [sym__case_of_f] = ACTIONS(346),
    [sym__begin_sql_e] = ACTIONS(346),
    [sym__begin_sql_f] = ACTIONS(346),
    [sym__name] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_LT_GT] = ACTIONS(344),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [sym_parameter] = ACTIONS(344),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [anon_sym_SLASH_STAR] = ACTIONS(348),
    [aux_sym__for_each_e_token1] = ACTIONS(350),
    [aux_sym__for_each_f_token1] = ACTIONS(350),
    [aux_sym__while_e_token1] = ACTIONS(350),
    [sym__while_f] = ACTIONS(350),
    [aux_sym__for_e_token1] = ACTIONS(350),
    [aux_sym__for_f_token1] = ACTIONS(350),
    [aux_sym__use_e_token1] = ACTIONS(350),
    [aux_sym__use_f_token1] = ACTIONS(350),
    [sym__repeat_e] = ACTIONS(350),
    [sym__repeat_f] = ACTIONS(350),
    [sym__if_e] = ACTIONS(350),
    [sym__if_f] = ACTIONS(350),
    [sym__case_of_e] = ACTIONS(350),
    [sym__case_of_f] = ACTIONS(350),
    [sym__begin_sql_e] = ACTIONS(350),
    [sym__begin_sql_f] = ACTIONS(350),
    [sym__name] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_LT_GT] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [sym_parameter] = ACTIONS(348),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_SLASH_STAR] = ACTIONS(352),
    [aux_sym__for_each_e_token1] = ACTIONS(354),
    [aux_sym__for_each_f_token1] = ACTIONS(354),
    [aux_sym__while_e_token1] = ACTIONS(354),
    [sym__while_f] = ACTIONS(354),
    [aux_sym__for_e_token1] = ACTIONS(354),
    [aux_sym__for_f_token1] = ACTIONS(354),
    [aux_sym__use_e_token1] = ACTIONS(354),
    [aux_sym__use_f_token1] = ACTIONS(354),
    [sym__repeat_e] = ACTIONS(354),
    [sym__repeat_f] = ACTIONS(354),
    [sym__if_e] = ACTIONS(354),
    [sym__if_f] = ACTIONS(354),
    [sym__case_of_e] = ACTIONS(354),
    [sym__case_of_f] = ACTIONS(354),
    [sym__begin_sql_e] = ACTIONS(354),
    [sym__begin_sql_f] = ACTIONS(354),
    [sym__name] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_LT_GT] = ACTIONS(352),
    [anon_sym_DOLLAR] = ACTIONS(354),
    [sym_parameter] = ACTIONS(352),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_STAR] = ACTIONS(356),
    [aux_sym__for_each_e_token1] = ACTIONS(358),
    [aux_sym__for_each_f_token1] = ACTIONS(358),
    [aux_sym__while_e_token1] = ACTIONS(358),
    [sym__while_f] = ACTIONS(358),
    [aux_sym__for_e_token1] = ACTIONS(358),
    [aux_sym__for_f_token1] = ACTIONS(358),
    [aux_sym__use_e_token1] = ACTIONS(358),
    [aux_sym__use_f_token1] = ACTIONS(358),
    [sym__repeat_e] = ACTIONS(358),
    [sym__repeat_f] = ACTIONS(358),
    [sym__if_e] = ACTIONS(358),
    [sym__if_f] = ACTIONS(358),
    [sym__case_of_e] = ACTIONS(358),
    [sym__case_of_f] = ACTIONS(358),
    [sym__begin_sql_e] = ACTIONS(358),
    [sym__begin_sql_f] = ACTIONS(358),
    [sym__name] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_LT_GT] = ACTIONS(356),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [sym_parameter] = ACTIONS(356),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_SLASH_STAR] = ACTIONS(360),
    [aux_sym__for_each_e_token1] = ACTIONS(362),
    [aux_sym__for_each_f_token1] = ACTIONS(362),
    [aux_sym__while_e_token1] = ACTIONS(362),
    [sym__while_f] = ACTIONS(362),
    [aux_sym__for_e_token1] = ACTIONS(362),
    [aux_sym__for_f_token1] = ACTIONS(362),
    [aux_sym__use_e_token1] = ACTIONS(362),
    [aux_sym__use_f_token1] = ACTIONS(362),
    [sym__repeat_e] = ACTIONS(362),
    [sym__repeat_f] = ACTIONS(362),
    [sym__if_e] = ACTIONS(362),
    [sym__if_f] = ACTIONS(362),
    [sym__case_of_e] = ACTIONS(362),
    [sym__case_of_f] = ACTIONS(362),
    [sym__begin_sql_e] = ACTIONS(362),
    [sym__begin_sql_f] = ACTIONS(362),
    [sym__name] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_LT_GT] = ACTIONS(360),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [sym_parameter] = ACTIONS(360),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_SLASH_SLASH] = ACTIONS(364),
    [anon_sym_SLASH_STAR] = ACTIONS(364),
    [aux_sym__for_each_e_token1] = ACTIONS(366),
    [aux_sym__for_each_f_token1] = ACTIONS(366),
    [aux_sym__while_e_token1] = ACTIONS(366),
    [sym__while_f] = ACTIONS(366),
    [aux_sym__for_e_token1] = ACTIONS(366),
    [aux_sym__for_f_token1] = ACTIONS(366),
    [aux_sym__use_e_token1] = ACTIONS(366),
    [aux_sym__use_f_token1] = ACTIONS(366),
    [sym__repeat_e] = ACTIONS(366),
    [sym__repeat_f] = ACTIONS(366),
    [sym__if_e] = ACTIONS(366),
    [sym__if_f] = ACTIONS(366),
    [sym__case_of_e] = ACTIONS(366),
    [sym__case_of_f] = ACTIONS(366),
    [sym__begin_sql_e] = ACTIONS(366),
    [sym__begin_sql_f] = ACTIONS(366),
    [sym__name] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_LT_GT] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(366),
    [sym_parameter] = ACTIONS(364),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_STAR] = ACTIONS(368),
    [aux_sym__for_each_e_token1] = ACTIONS(370),
    [aux_sym__for_each_f_token1] = ACTIONS(370),
    [aux_sym__while_e_token1] = ACTIONS(370),
    [sym__while_f] = ACTIONS(370),
    [aux_sym__for_e_token1] = ACTIONS(370),
    [aux_sym__for_f_token1] = ACTIONS(370),
    [aux_sym__use_e_token1] = ACTIONS(370),
    [aux_sym__use_f_token1] = ACTIONS(370),
    [sym__repeat_e] = ACTIONS(370),
    [sym__repeat_f] = ACTIONS(370),
    [sym__if_e] = ACTIONS(370),
    [sym__if_f] = ACTIONS(370),
    [sym__case_of_e] = ACTIONS(370),
    [sym__case_of_f] = ACTIONS(370),
    [sym__begin_sql_e] = ACTIONS(370),
    [sym__begin_sql_f] = ACTIONS(370),
    [sym__name] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_LT_GT] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [sym_parameter] = ACTIONS(368),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_SLASH_SLASH] = ACTIONS(372),
    [anon_sym_SLASH_STAR] = ACTIONS(372),
    [aux_sym__for_each_e_token1] = ACTIONS(374),
    [aux_sym__for_each_f_token1] = ACTIONS(374),
    [aux_sym__while_e_token1] = ACTIONS(374),
    [sym__while_f] = ACTIONS(374),
    [aux_sym__for_e_token1] = ACTIONS(374),
    [aux_sym__for_f_token1] = ACTIONS(374),
    [aux_sym__use_e_token1] = ACTIONS(374),
    [aux_sym__use_f_token1] = ACTIONS(374),
    [sym__repeat_e] = ACTIONS(374),
    [sym__repeat_f] = ACTIONS(374),
    [sym__if_e] = ACTIONS(374),
    [sym__if_f] = ACTIONS(374),
    [sym__case_of_e] = ACTIONS(374),
    [sym__case_of_f] = ACTIONS(374),
    [sym__begin_sql_e] = ACTIONS(374),
    [sym__begin_sql_f] = ACTIONS(374),
    [sym__name] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_LT_GT] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(374),
    [sym_parameter] = ACTIONS(372),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_SLASH_STAR] = ACTIONS(376),
    [aux_sym__for_each_e_token1] = ACTIONS(378),
    [aux_sym__for_each_f_token1] = ACTIONS(378),
    [aux_sym__while_e_token1] = ACTIONS(378),
    [sym__while_f] = ACTIONS(378),
    [aux_sym__for_e_token1] = ACTIONS(378),
    [aux_sym__for_f_token1] = ACTIONS(378),
    [aux_sym__use_e_token1] = ACTIONS(378),
    [aux_sym__use_f_token1] = ACTIONS(378),
    [sym__repeat_e] = ACTIONS(378),
    [sym__repeat_f] = ACTIONS(378),
    [sym__if_e] = ACTIONS(378),
    [sym__if_f] = ACTIONS(378),
    [sym__case_of_e] = ACTIONS(378),
    [sym__case_of_f] = ACTIONS(378),
    [sym__begin_sql_e] = ACTIONS(378),
    [sym__begin_sql_f] = ACTIONS(378),
    [sym__name] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_LT_GT] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [sym_parameter] = ACTIONS(376),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_SLASH_SLASH] = ACTIONS(380),
    [anon_sym_SLASH_STAR] = ACTIONS(380),
    [aux_sym__for_each_e_token1] = ACTIONS(382),
    [aux_sym__for_each_f_token1] = ACTIONS(382),
    [aux_sym__while_e_token1] = ACTIONS(382),
    [sym__while_f] = ACTIONS(382),
    [aux_sym__for_e_token1] = ACTIONS(382),
    [aux_sym__for_f_token1] = ACTIONS(382),
    [aux_sym__use_e_token1] = ACTIONS(382),
    [aux_sym__use_f_token1] = ACTIONS(382),
    [sym__repeat_e] = ACTIONS(382),
    [sym__repeat_f] = ACTIONS(382),
    [sym__if_e] = ACTIONS(382),
    [sym__if_f] = ACTIONS(382),
    [sym__case_of_e] = ACTIONS(382),
    [sym__case_of_f] = ACTIONS(382),
    [sym__begin_sql_e] = ACTIONS(382),
    [sym__begin_sql_f] = ACTIONS(382),
    [sym__name] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_LT_GT] = ACTIONS(380),
    [anon_sym_DOLLAR] = ACTIONS(382),
    [sym_parameter] = ACTIONS(380),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_SLASH_SLASH] = ACTIONS(384),
    [anon_sym_SLASH_STAR] = ACTIONS(384),
    [aux_sym__for_each_e_token1] = ACTIONS(386),
    [aux_sym__for_each_f_token1] = ACTIONS(386),
    [aux_sym__while_e_token1] = ACTIONS(386),
    [sym__while_f] = ACTIONS(386),
    [aux_sym__for_e_token1] = ACTIONS(386),
    [aux_sym__for_f_token1] = ACTIONS(386),
    [aux_sym__use_e_token1] = ACTIONS(386),
    [aux_sym__use_f_token1] = ACTIONS(386),
    [sym__repeat_e] = ACTIONS(386),
    [sym__repeat_f] = ACTIONS(386),
    [sym__if_e] = ACTIONS(386),
    [sym__if_f] = ACTIONS(386),
    [sym__case_of_e] = ACTIONS(386),
    [sym__case_of_f] = ACTIONS(386),
    [sym__begin_sql_e] = ACTIONS(386),
    [sym__begin_sql_f] = ACTIONS(386),
    [sym__name] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_LT_GT] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [sym_parameter] = ACTIONS(384),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_SLASH_SLASH] = ACTIONS(388),
    [anon_sym_SLASH_STAR] = ACTIONS(388),
    [aux_sym__for_each_e_token1] = ACTIONS(390),
    [aux_sym__for_each_f_token1] = ACTIONS(390),
    [aux_sym__while_e_token1] = ACTIONS(390),
    [sym__while_f] = ACTIONS(390),
    [aux_sym__for_e_token1] = ACTIONS(390),
    [aux_sym__for_f_token1] = ACTIONS(390),
    [aux_sym__use_e_token1] = ACTIONS(390),
    [aux_sym__use_f_token1] = ACTIONS(390),
    [sym__repeat_e] = ACTIONS(390),
    [sym__repeat_f] = ACTIONS(390),
    [sym__if_e] = ACTIONS(390),
    [sym__if_f] = ACTIONS(390),
    [sym__case_of_e] = ACTIONS(390),
    [sym__case_of_f] = ACTIONS(390),
    [sym__begin_sql_e] = ACTIONS(390),
    [sym__begin_sql_f] = ACTIONS(390),
    [sym__name] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_LT_GT] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(390),
    [sym_parameter] = ACTIONS(388),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_STAR] = ACTIONS(392),
    [aux_sym__for_each_e_token1] = ACTIONS(394),
    [aux_sym__for_each_f_token1] = ACTIONS(394),
    [aux_sym__while_e_token1] = ACTIONS(394),
    [sym__while_f] = ACTIONS(394),
    [aux_sym__for_e_token1] = ACTIONS(394),
    [aux_sym__for_f_token1] = ACTIONS(394),
    [aux_sym__use_e_token1] = ACTIONS(394),
    [aux_sym__use_f_token1] = ACTIONS(394),
    [sym__repeat_e] = ACTIONS(394),
    [sym__repeat_f] = ACTIONS(394),
    [sym__if_e] = ACTIONS(394),
    [sym__if_f] = ACTIONS(394),
    [sym__case_of_e] = ACTIONS(394),
    [sym__case_of_f] = ACTIONS(394),
    [sym__begin_sql_e] = ACTIONS(394),
    [sym__begin_sql_f] = ACTIONS(394),
    [sym__name] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(392),
    [anon_sym_LT_GT] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(394),
    [sym_parameter] = ACTIONS(392),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_SLASH_STAR] = ACTIONS(396),
    [aux_sym__for_each_e_token1] = ACTIONS(398),
    [aux_sym__for_each_f_token1] = ACTIONS(398),
    [aux_sym__while_e_token1] = ACTIONS(398),
    [sym__while_f] = ACTIONS(398),
    [aux_sym__for_e_token1] = ACTIONS(398),
    [aux_sym__for_f_token1] = ACTIONS(398),
    [aux_sym__use_e_token1] = ACTIONS(398),
    [aux_sym__use_f_token1] = ACTIONS(398),
    [sym__repeat_e] = ACTIONS(398),
    [sym__repeat_f] = ACTIONS(398),
    [sym__if_e] = ACTIONS(398),
    [sym__if_f] = ACTIONS(398),
    [sym__case_of_e] = ACTIONS(398),
    [sym__case_of_f] = ACTIONS(398),
    [sym__begin_sql_e] = ACTIONS(398),
    [sym__begin_sql_f] = ACTIONS(398),
    [sym__name] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_LT_GT] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [sym_parameter] = ACTIONS(396),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_SLASH_SLASH] = ACTIONS(400),
    [anon_sym_SLASH_STAR] = ACTIONS(400),
    [aux_sym__for_each_e_token1] = ACTIONS(402),
    [aux_sym__for_each_f_token1] = ACTIONS(402),
    [aux_sym__while_e_token1] = ACTIONS(402),
    [sym__while_f] = ACTIONS(402),
    [aux_sym__for_e_token1] = ACTIONS(402),
    [aux_sym__for_f_token1] = ACTIONS(402),
    [aux_sym__use_e_token1] = ACTIONS(402),
    [aux_sym__use_f_token1] = ACTIONS(402),
    [sym__repeat_e] = ACTIONS(402),
    [sym__repeat_f] = ACTIONS(402),
    [sym__if_e] = ACTIONS(402),
    [sym__if_f] = ACTIONS(402),
    [sym__case_of_e] = ACTIONS(402),
    [sym__case_of_f] = ACTIONS(402),
    [sym__begin_sql_e] = ACTIONS(402),
    [sym__begin_sql_f] = ACTIONS(402),
    [sym__name] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_LT_GT] = ACTIONS(400),
    [anon_sym_DOLLAR] = ACTIONS(402),
    [sym_parameter] = ACTIONS(400),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_STAR] = ACTIONS(404),
    [aux_sym__for_each_e_token1] = ACTIONS(406),
    [aux_sym__for_each_f_token1] = ACTIONS(406),
    [aux_sym__while_e_token1] = ACTIONS(406),
    [sym__while_f] = ACTIONS(406),
    [aux_sym__for_e_token1] = ACTIONS(406),
    [aux_sym__for_f_token1] = ACTIONS(406),
    [aux_sym__use_e_token1] = ACTIONS(406),
    [aux_sym__use_f_token1] = ACTIONS(406),
    [sym__repeat_e] = ACTIONS(406),
    [sym__repeat_f] = ACTIONS(406),
    [sym__if_e] = ACTIONS(406),
    [sym__if_f] = ACTIONS(406),
    [sym__case_of_e] = ACTIONS(406),
    [sym__case_of_f] = ACTIONS(406),
    [sym__begin_sql_e] = ACTIONS(406),
    [sym__begin_sql_f] = ACTIONS(406),
    [sym__name] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_LT_GT] = ACTIONS(404),
    [anon_sym_DOLLAR] = ACTIONS(406),
    [sym_parameter] = ACTIONS(404),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_SLASH_STAR] = ACTIONS(408),
    [aux_sym__for_each_e_token1] = ACTIONS(410),
    [aux_sym__for_each_f_token1] = ACTIONS(410),
    [aux_sym__while_e_token1] = ACTIONS(410),
    [sym__while_f] = ACTIONS(410),
    [aux_sym__for_e_token1] = ACTIONS(410),
    [aux_sym__for_f_token1] = ACTIONS(410),
    [aux_sym__use_e_token1] = ACTIONS(410),
    [aux_sym__use_f_token1] = ACTIONS(410),
    [sym__repeat_e] = ACTIONS(410),
    [sym__repeat_f] = ACTIONS(410),
    [sym__if_e] = ACTIONS(410),
    [sym__if_f] = ACTIONS(410),
    [sym__case_of_e] = ACTIONS(410),
    [sym__case_of_f] = ACTIONS(410),
    [sym__begin_sql_e] = ACTIONS(410),
    [sym__begin_sql_f] = ACTIONS(410),
    [sym__name] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_LT_GT] = ACTIONS(408),
    [anon_sym_DOLLAR] = ACTIONS(410),
    [sym_parameter] = ACTIONS(408),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_SLASH_SLASH] = ACTIONS(412),
    [anon_sym_SLASH_STAR] = ACTIONS(412),
    [aux_sym__for_each_e_token1] = ACTIONS(414),
    [aux_sym__for_each_f_token1] = ACTIONS(414),
    [aux_sym__while_e_token1] = ACTIONS(414),
    [sym__while_f] = ACTIONS(414),
    [aux_sym__for_e_token1] = ACTIONS(414),
    [aux_sym__for_f_token1] = ACTIONS(414),
    [aux_sym__use_e_token1] = ACTIONS(414),
    [aux_sym__use_f_token1] = ACTIONS(414),
    [sym__repeat_e] = ACTIONS(414),
    [sym__repeat_f] = ACTIONS(414),
    [sym__if_e] = ACTIONS(414),
    [sym__if_f] = ACTIONS(414),
    [sym__case_of_e] = ACTIONS(414),
    [sym__case_of_f] = ACTIONS(414),
    [sym__begin_sql_e] = ACTIONS(414),
    [sym__begin_sql_f] = ACTIONS(414),
    [sym__name] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_LT_GT] = ACTIONS(412),
    [anon_sym_DOLLAR] = ACTIONS(414),
    [sym_parameter] = ACTIONS(412),
  },
  [87] = {
    [anon_sym_COLON] = ACTIONS(284),
    [aux_sym__end_for_each_e_token1] = ACTIONS(284),
    [sym__end_for_each_f] = ACTIONS(284),
    [aux_sym__while_e_token1] = ACTIONS(284),
    [sym__while_f] = ACTIONS(284),
    [sym__until_e] = ACTIONS(284),
    [sym__until_f] = ACTIONS(284),
    [aux_sym__end_use_e_token1] = ACTIONS(284),
    [aux_sym__end_use_f_token1] = ACTIONS(284),
    [aux_sym__end_while_e_token1] = ACTIONS(284),
    [aux_sym__end_while_f_token1] = ACTIONS(284),
    [sym__else_e] = ACTIONS(284),
    [sym__else_f] = ACTIONS(284),
    [aux_sym__end_if_e_token1] = ACTIONS(284),
    [aux_sym__end_if_f_token1] = ACTIONS(284),
    [sym__end_case_e] = ACTIONS(284),
    [sym__end_case_f] = ACTIONS(284),
  },
  [88] = {
    [anon_sym_COLON] = ACTIONS(276),
    [aux_sym__end_for_each_e_token1] = ACTIONS(276),
    [sym__end_for_each_f] = ACTIONS(276),
    [aux_sym__while_e_token1] = ACTIONS(276),
    [sym__while_f] = ACTIONS(276),
    [sym__until_e] = ACTIONS(276),
    [sym__until_f] = ACTIONS(276),
    [aux_sym__end_use_e_token1] = ACTIONS(276),
    [aux_sym__end_use_f_token1] = ACTIONS(276),
    [aux_sym__end_while_e_token1] = ACTIONS(276),
    [aux_sym__end_while_f_token1] = ACTIONS(276),
    [sym__else_e] = ACTIONS(276),
    [sym__else_f] = ACTIONS(276),
    [aux_sym__end_if_e_token1] = ACTIONS(276),
    [aux_sym__end_if_f_token1] = ACTIONS(276),
    [sym__end_case_e] = ACTIONS(276),
    [sym__end_case_f] = ACTIONS(276),
  },
  [89] = {
    [anon_sym_COLON] = ACTIONS(256),
    [aux_sym__end_for_each_e_token1] = ACTIONS(256),
    [sym__end_for_each_f] = ACTIONS(256),
    [aux_sym__while_e_token1] = ACTIONS(256),
    [sym__while_f] = ACTIONS(256),
    [sym__until_e] = ACTIONS(256),
    [sym__until_f] = ACTIONS(256),
    [aux_sym__end_use_e_token1] = ACTIONS(256),
    [aux_sym__end_use_f_token1] = ACTIONS(256),
    [aux_sym__end_while_e_token1] = ACTIONS(256),
    [aux_sym__end_while_f_token1] = ACTIONS(256),
    [sym__else_e] = ACTIONS(256),
    [sym__else_f] = ACTIONS(256),
    [aux_sym__end_if_e_token1] = ACTIONS(256),
    [aux_sym__end_if_f_token1] = ACTIONS(256),
    [sym__end_case_e] = ACTIONS(256),
    [sym__end_case_f] = ACTIONS(256),
  },
  [90] = {
    [sym__end_for_each_e] = STATE(83),
    [sym_end_for_each] = STATE(84),
    [sym__while_e] = STATE(170),
    [sym_while] = STATE(132),
    [sym_until] = STATE(132),
    [aux_sym__end_for_each_e_token1] = ACTIONS(416),
    [sym__end_for_each_f] = ACTIONS(418),
    [aux_sym__while_e_token1] = ACTIONS(420),
    [sym__while_f] = ACTIONS(422),
    [sym__until_e] = ACTIONS(424),
    [sym__until_f] = ACTIONS(424),
  },
  [91] = {
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__reference] = STATE(193),
    [sym__name] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
  },
  [92] = {
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__reference] = STATE(143),
    [sym__name] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
  },
  [93] = {
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(189),
    [sym__name] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [94] = {
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(192),
    [sym__name] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [95] = {
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(180),
    [sym__name] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [96] = {
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__reference] = STATE(185),
    [sym__name] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
  },
  [97] = {
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(191),
    [sym__name] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [98] = {
    [sym__field] = STATE(13),
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(12),
    [sym__dereference] = STATE(13),
    [sym__reference] = STATE(181),
    [sym__name] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [99] = {
    [sym__field] = STATE(42),
    [sym__local_variable] = STATE(27),
    [sym__interprocess_variable] = STATE(27),
    [sym__variable] = STATE(30),
    [sym__dereference] = STATE(42),
    [sym__reference] = STATE(182),
    [sym__name] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_LT_GT] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [sym_parameter] = ACTIONS(196),
  },
  [100] = {
    [sym_else] = STATE(105),
    [sym__end_if_e] = STATE(68),
    [sym__end_if_f] = STATE(68),
    [sym_end_if] = STATE(62),
    [sym__else_e] = ACTIONS(430),
    [sym__else_f] = ACTIONS(430),
    [aux_sym__end_if_e_token1] = ACTIONS(432),
    [aux_sym__end_if_f_token1] = ACTIONS(434),
  },
  [101] = {
    [sym_else] = STATE(124),
    [sym_end_case] = STATE(60),
    [aux_sym_case_block_repeat1] = STATE(104),
    [anon_sym_COLON] = ACTIONS(436),
    [sym__else_e] = ACTIONS(430),
    [sym__else_f] = ACTIONS(430),
    [sym__end_case_e] = ACTIONS(438),
    [sym__end_case_f] = ACTIONS(438),
  },
  [102] = {
    [sym__local_variable] = STATE(8),
    [sym__interprocess_variable] = STATE(8),
    [sym__variable] = STATE(47),
    [sym__name] = ACTIONS(428),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [sym_parameter] = ACTIONS(41),
  },
  [103] = {
    [sym__arguments] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
  },
  [104] = {
    [aux_sym_case_block_repeat1] = STATE(104),
    [anon_sym_COLON] = ACTIONS(446),
    [sym__else_e] = ACTIONS(449),
    [sym__else_f] = ACTIONS(449),
    [sym__end_case_e] = ACTIONS(449),
    [sym__end_case_f] = ACTIONS(449),
  },
  [105] = {
    [sym__end_if_e] = STATE(68),
    [sym__end_if_f] = STATE(68),
    [sym_end_if] = STATE(76),
    [aux_sym__end_if_e_token1] = ACTIONS(432),
    [aux_sym__end_if_f_token1] = ACTIONS(434),
  },
  [106] = {
    [anon_sym_COLON] = ACTIONS(449),
    [sym__else_e] = ACTIONS(449),
    [sym__else_f] = ACTIONS(449),
    [sym__end_case_e] = ACTIONS(449),
    [sym__end_case_f] = ACTIONS(449),
  },
  [107] = {
    [sym__end_while_e] = STATE(66),
    [sym__end_while_f] = STATE(66),
    [sym_end_while] = STATE(65),
    [aux_sym__end_while_e_token1] = ACTIONS(451),
    [aux_sym__end_while_f_token1] = ACTIONS(453),
  },
  [108] = {
    [sym__end_use_e] = STATE(74),
    [sym__end_use_f] = STATE(74),
    [sym_end_use] = STATE(73),
    [aux_sym__end_use_e_token1] = ACTIONS(455),
    [aux_sym__end_use_f_token1] = ACTIONS(457),
  },
  [109] = {
    [aux_sym__end_if_e_token1] = ACTIONS(459),
    [aux_sym__end_if_f_token1] = ACTIONS(459),
    [sym__end_case_e] = ACTIONS(459),
    [sym__end_case_f] = ACTIONS(459),
  },
  [110] = {
    [sym__end_for_each_e] = STATE(83),
    [sym_end_for_each] = STATE(79),
    [aux_sym__end_for_each_e_token1] = ACTIONS(416),
    [sym__end_for_each_f] = ACTIONS(418),
  },
  [111] = {
    [sym__end_for_e] = STATE(78),
    [sym_end_for] = STATE(59),
    [aux_sym__end_for_e_token1] = ACTIONS(461),
    [sym__end_for_f] = ACTIONS(463),
  },
  [112] = {
    [aux_sym__arguments_repeat1] = STATE(116),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(467),
  },
  [113] = {
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(248),
  },
  [114] = {
    [aux_sym__arguments_repeat1] = STATE(119),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(469),
  },
  [115] = {
    [sym__storage_suffix] = STATE(174),
    [aux_sym__storage_suffix_token1] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(471),
  },
  [116] = {
    [aux_sym__arguments_repeat1] = STATE(116),
    [anon_sym_SEMI] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(476),
  },
  [117] = {
    [aux_sym__arguments_repeat1] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(478),
  },
  [118] = {
    [anon_sym_SLASH] = ACTIONS(480),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [119] = {
    [aux_sym__arguments_repeat1] = STATE(116),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(486),
  },
  [120] = {
    [aux_sym__arguments_repeat1] = STATE(112),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(488),
  },
  [121] = {
    [sym_until] = STATE(127),
    [sym__until_e] = ACTIONS(424),
    [sym__until_f] = ACTIONS(424),
  },
  [122] = {
    [sym_end_sql] = STATE(80),
    [sym__end_sql_e] = ACTIONS(490),
    [sym__end_sql_f] = ACTIONS(490),
  },
  [123] = {
    [aux_sym__arguments_repeat1] = STATE(116),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(492),
  },
  [124] = {
    [sym_end_case] = STATE(77),
    [sym__end_case_e] = ACTIONS(438),
    [sym__end_case_f] = ACTIONS(438),
  },
  [125] = {
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(444),
  },
  [126] = {
    [aux_sym__end_for_e_token1] = ACTIONS(276),
    [sym__end_for_f] = ACTIONS(276),
  },
  [127] = {
    [sym__arguments] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(156),
  },
  [128] = {
    [aux_sym__end_for_e_token1] = ACTIONS(256),
    [sym__end_for_f] = ACTIONS(256),
  },
  [129] = {
    [sym__until_e] = ACTIONS(494),
    [sym__until_f] = ACTIONS(494),
  },
  [130] = {
    [sym__table] = STATE(179),
    [anon_sym_LBRACK] = ACTIONS(496),
  },
  [131] = {
    [aux_sym_case_block_repeat1] = STATE(101),
    [anon_sym_COLON] = ACTIONS(436),
  },
  [132] = {
    [sym__arguments] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(498),
  },
  [133] = {
    [sym__end_sql_e] = ACTIONS(500),
    [sym__end_sql_f] = ACTIONS(500),
  },
  [134] = {
    [sym__table] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(496),
  },
  [135] = {
    [sym__arguments] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(498),
  },
  [136] = {
    [sym__arguments] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(498),
  },
  [137] = {
    [sym__arguments] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(498),
  },
  [138] = {
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(476),
  },
  [139] = {
    [aux_sym__end_for_e_token1] = ACTIONS(284),
    [sym__end_for_f] = ACTIONS(284),
  },
  [140] = {
    [sym__arguments] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(498),
  },
  [141] = {
    [sym__arguments] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(502),
  },
  [142] = {
    [sym__arguments] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(498),
  },
  [143] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(504),
  },
  [144] = {
    [anon_sym_COLON] = ACTIONS(506),
  },
  [145] = {
    [anon_sym_SLASH] = ACTIONS(508),
  },
  [146] = {
    [anon_sym_DASH] = ACTIONS(508),
  },
  [147] = {
    [anon_sym_DOT] = ACTIONS(508),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(510),
  },
  [149] = {
    [aux_sym__time_token1] = ACTIONS(512),
  },
  [150] = {
    [aux_sym__time_token1] = ACTIONS(514),
  },
  [151] = {
    [anon_sym_QMARK] = ACTIONS(516),
  },
  [152] = {
    [anon_sym_BANG] = ACTIONS(518),
  },
  [153] = {
    [aux_sym_comment_token1] = ACTIONS(520),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(522),
  },
  [155] = {
    [sym__name] = ACTIONS(524),
  },
  [156] = {
    [aux_sym__time_token1] = ACTIONS(526),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(528),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(530),
  },
  [159] = {
    [sym__name] = ACTIONS(532),
  },
  [160] = {
    [sym__name] = ACTIONS(534),
  },
  [161] = {
    [aux_sym__time_token1] = ACTIONS(536),
  },
  [162] = {
    [aux_sym__time_token1] = ACTIONS(538),
  },
  [163] = {
    [anon_sym_COLON] = ACTIONS(540),
  },
  [164] = {
    [anon_sym_LPAREN] = ACTIONS(542),
  },
  [165] = {
    [aux_sym__time_token1] = ACTIONS(544),
  },
  [166] = {
    [anon_sym_LPAREN] = ACTIONS(546),
  },
  [167] = {
    [anon_sym_LPAREN] = ACTIONS(548),
  },
  [168] = {
    [anon_sym_LPAREN] = ACTIONS(550),
  },
  [169] = {
    [anon_sym_LPAREN] = ACTIONS(552),
  },
  [170] = {
    [anon_sym_LPAREN] = ACTIONS(554),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(556),
  },
  [172] = {
    [anon_sym_LPAREN] = ACTIONS(558),
  },
  [173] = {
    [anon_sym_SLASH] = ACTIONS(560),
  },
  [174] = {
    [anon_sym_RBRACK] = ACTIONS(562),
  },
  [175] = {
    [sym__name] = ACTIONS(564),
  },
  [176] = {
    [sym__name] = ACTIONS(566),
  },
  [177] = {
    [sym__name] = ACTIONS(568),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(570),
  },
  [179] = {
    [sym__name] = ACTIONS(572),
  },
  [180] = {
    [anon_sym_RBRACK] = ACTIONS(574),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(576),
  },
  [182] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(578),
  },
  [183] = {
    [sym__name] = ACTIONS(580),
  },
  [184] = {
    [sym__name] = ACTIONS(582),
  },
  [185] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(584),
  },
  [186] = {
    [aux_sym_comment_token2] = ACTIONS(586),
  },
  [187] = {
    [anon_sym_COLON] = ACTIONS(588),
  },
  [188] = {
    [anon_sym_LPAREN] = ACTIONS(590),
  },
  [189] = {
    [anon_sym_RBRACK] = ACTIONS(592),
  },
  [190] = {
    [sym__name] = ACTIONS(594),
  },
  [191] = {
    [anon_sym_RBRACK] = ACTIONS(596),
  },
  [192] = {
    [anon_sym_RBRACE] = ACTIONS(598),
  },
  [193] = {
    [anon_sym_RBRACK_RBRACK] = ACTIONS(600),
  },
  [194] = {
    [aux_sym__time_token1] = ACTIONS(602),
  },
  [195] = {
    [aux_sym__time_token1] = ACTIONS(604),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(153),
  [7] = {.count = 1, .reusable = true}, SHIFT(186),
  [9] = {.count = 1, .reusable = false}, SHIFT(178),
  [11] = {.count = 1, .reusable = false}, SHIFT(172),
  [13] = {.count = 1, .reusable = false}, SHIFT(171),
  [15] = {.count = 1, .reusable = false}, SHIFT(170),
  [17] = {.count = 1, .reusable = false}, SHIFT(169),
  [19] = {.count = 1, .reusable = false}, SHIFT(168),
  [21] = {.count = 1, .reusable = false}, SHIFT(167),
  [23] = {.count = 1, .reusable = false}, SHIFT(166),
  [25] = {.count = 1, .reusable = false}, SHIFT(129),
  [27] = {.count = 1, .reusable = false}, SHIFT(164),
  [29] = {.count = 1, .reusable = false}, SHIFT(163),
  [31] = {.count = 1, .reusable = false}, SHIFT(133),
  [33] = {.count = 1, .reusable = false}, SHIFT(34),
  [35] = {.count = 1, .reusable = true}, SHIFT(134),
  [37] = {.count = 1, .reusable = true}, SHIFT(160),
  [39] = {.count = 1, .reusable = false}, SHIFT(159),
  [41] = {.count = 1, .reusable = true}, SHIFT(8),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(153),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(186),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(178),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(172),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(171),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(170),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(169),
  [66] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(168),
  [69] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(167),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(166),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(129),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(164),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(163),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(133),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(134),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(160),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(159),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym__variable, 4, .production_id = 5),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym__variable, 4, .production_id = 5),
  [108] = {.count = 1, .reusable = true}, SHIFT(92),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__variable, 4, .production_id = 4),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__variable, 4, .production_id = 4),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__variable, 7, .production_id = 9),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__variable, 7, .production_id = 9),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__variable, 1),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym__variable, 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__local_variable, 2),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__local_variable, 2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__interprocess_variable, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__interprocess_variable, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym__field, 3, .production_id = 3),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym__field, 3, .production_id = 3),
  [134] = {.count = 1, .reusable = true}, SHIFT(16),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__reference, 1, .production_id = 1),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym__reference, 1, .production_id = 1),
  [140] = {.count = 1, .reusable = true}, SHIFT(17),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__reference, 1),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__reference, 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .production_id = 2),
  [148] = {.count = 1, .reusable = false}, SHIFT(29),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .production_id = 2),
  [152] = {.count = 1, .reusable = true}, SHIFT(29),
  [154] = {.count = 1, .reusable = true}, SHIFT(190),
  [156] = {.count = 1, .reusable = true}, SHIFT(23),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym__field, 4, .production_id = 7),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym__field, 4, .production_id = 7),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__storage_suffix, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym__storage_suffix, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__dereference, 2),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym__dereference, 2),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__notation, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__notation, 2),
  [174] = {.count = 1, .reusable = true}, SHIFT(93),
  [176] = {.count = 1, .reusable = true}, SHIFT(43),
  [178] = {.count = 1, .reusable = true}, SHIFT(49),
  [180] = {.count = 1, .reusable = false}, SHIFT(49),
  [182] = {.count = 1, .reusable = true}, SHIFT(194),
  [184] = {.count = 1, .reusable = true}, SHIFT(195),
  [186] = {.count = 1, .reusable = true}, SHIFT(114),
  [188] = {.count = 1, .reusable = true}, SHIFT(103),
  [190] = {.count = 1, .reusable = true}, SHIFT(130),
  [192] = {.count = 1, .reusable = true}, SHIFT(176),
  [194] = {.count = 1, .reusable = false}, SHIFT(177),
  [196] = {.count = 1, .reusable = true}, SHIFT(27),
  [198] = {.count = 1, .reusable = true}, SHIFT(102),
  [200] = {.count = 1, .reusable = true}, SHIFT(126),
  [202] = {.count = 1, .reusable = true}, SHIFT(39),
  [204] = {.count = 1, .reusable = false}, SHIFT(39),
  [206] = {.count = 1, .reusable = true}, SHIFT(96),
  [208] = {.count = 1, .reusable = true}, SHIFT(117),
  [210] = {.count = 1, .reusable = true}, SHIFT(50),
  [212] = {.count = 1, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 2),
  [214] = {.count = 1, .reusable = false}, REDUCE(aux_sym__notation_repeat1, 2),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 2), SHIFT_REPEAT(190),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 2), SHIFT_REPEAT(93),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__notation, 1),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym__notation, 1),
  [226] = {.count = 1, .reusable = true}, SHIFT(35),
  [228] = {.count = 1, .reusable = true}, SHIFT(120),
  [230] = {.count = 1, .reusable = true}, SHIFT(88),
  [232] = {.count = 1, .reusable = true}, SHIFT(138),
  [234] = {.count = 1, .reusable = true}, SHIFT(51),
  [236] = {.count = 1, .reusable = true}, SHIFT(34),
  [238] = {.count = 1, .reusable = true}, SHIFT(41),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__function, 1),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__function, 1),
  [244] = {.count = 1, .reusable = false}, SHIFT(97),
  [246] = {.count = 1, .reusable = true}, SHIFT(94),
  [248] = {.count = 1, .reusable = true}, SHIFT(91),
  [250] = {.count = 1, .reusable = true}, SHIFT(63),
  [252] = {.count = 1, .reusable = true}, REDUCE(aux_sym__notation_repeat1, 3),
  [254] = {.count = 1, .reusable = false}, REDUCE(aux_sym__notation_repeat1, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 3),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym__arguments, 3),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym__function, 2),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym__function, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__pointer, 2),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym__pointer, 2),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 1),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym__number, 1),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym__number, 1),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 2),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym__arguments, 2),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym__formula, 3),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym__formula, 3),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__arguments, 4),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym__arguments, 4),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym__notation, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym__notation, 3),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__time, 7, .production_id = 10),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym__time, 7, .production_id = 10),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym__date, 7, .production_id = 11),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym__date, 7, .production_id = 11),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_end_sql, 1),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_end_sql, 1),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_for_block, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_for_block, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_case_block, 3),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_case_block, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 1),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_end_case, 1),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_if_block, 3),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 3),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_e, 1),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym__end_for_e, 1),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_while_block, 3),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_while_block, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 1),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_end_while, 1),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 1),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_end_if, 1),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__end_if_f, 1),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym__end_if_f, 1),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym__end_if_e, 1),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym__end_if_e, 1),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_block, 3),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_block, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_use_block, 3),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_use_block, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_end_use, 1),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_end_use, 1),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym__end_use_f, 1),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym__end_use_f, 1),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 4),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_if_block, 4),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_case_block, 4),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_case_block, 4),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_end_for, 1),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_end_for, 1),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 5),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 5),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_sql_block, 2),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_sql_block, 2),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym__end_while_f, 1),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym__end_while_f, 1),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym__end_for_each_e, 1),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym__end_for_each_e, 1),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_end_for_each, 1),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_end_for_each, 1),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_block, 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_block, 3),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym__end_use_e, 1),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym__end_use_e, 1),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym__end_while_e, 1),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym__end_while_e, 1),
  [416] = {.count = 1, .reusable = true}, SHIFT(82),
  [418] = {.count = 1, .reusable = true}, SHIFT(83),
  [420] = {.count = 1, .reusable = true}, SHIFT(171),
  [422] = {.count = 1, .reusable = true}, SHIFT(170),
  [424] = {.count = 1, .reusable = true}, SHIFT(188),
  [426] = {.count = 1, .reusable = true}, SHIFT(125),
  [428] = {.count = 1, .reusable = true}, SHIFT(113),
  [430] = {.count = 1, .reusable = true}, SHIFT(109),
  [432] = {.count = 1, .reusable = true}, SHIFT(70),
  [434] = {.count = 1, .reusable = true}, SHIFT(69),
  [436] = {.count = 1, .reusable = true}, SHIFT(140),
  [438] = {.count = 1, .reusable = true}, SHIFT(61),
  [440] = {.count = 1, .reusable = false}, SHIFT(95),
  [442] = {.count = 1, .reusable = true}, SHIFT(98),
  [444] = {.count = 1, .reusable = true}, SHIFT(99),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_block_repeat1, 2), SHIFT_REPEAT(140),
  [449] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_block_repeat1, 2),
  [451] = {.count = 1, .reusable = true}, SHIFT(86),
  [453] = {.count = 1, .reusable = true}, SHIFT(81),
  [455] = {.count = 1, .reusable = true}, SHIFT(85),
  [457] = {.count = 1, .reusable = true}, SHIFT(75),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_else, 1),
  [461] = {.count = 1, .reusable = true}, SHIFT(64),
  [463] = {.count = 1, .reusable = true}, SHIFT(78),
  [465] = {.count = 1, .reusable = true}, SHIFT(28),
  [467] = {.count = 1, .reusable = true}, SHIFT(87),
  [469] = {.count = 1, .reusable = true}, SHIFT(128),
  [471] = {.count = 1, .reusable = true}, SHIFT(175),
  [473] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(28),
  [476] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arguments_repeat1, 2),
  [478] = {.count = 1, .reusable = true}, SHIFT(45),
  [480] = {.count = 1, .reusable = true}, SHIFT(162),
  [482] = {.count = 1, .reusable = true}, SHIFT(161),
  [484] = {.count = 1, .reusable = true}, SHIFT(156),
  [486] = {.count = 1, .reusable = true}, SHIFT(139),
  [488] = {.count = 1, .reusable = true}, SHIFT(89),
  [490] = {.count = 1, .reusable = true}, SHIFT(58),
  [492] = {.count = 1, .reusable = true}, SHIFT(53),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 1),
  [496] = {.count = 1, .reusable = true}, SHIFT(183),
  [498] = {.count = 1, .reusable = true}, SHIFT(26),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_begin_sql, 1),
  [502] = {.count = 1, .reusable = true}, SHIFT(20),
  [504] = {.count = 1, .reusable = true}, SHIFT(7),
  [506] = {.count = 1, .reusable = true}, SHIFT(149),
  [508] = {.count = 1, .reusable = true}, SHIFT(150),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_use, 1),
  [512] = {.count = 1, .reusable = true}, SHIFT(151),
  [514] = {.count = 1, .reusable = true}, SHIFT(152),
  [516] = {.count = 1, .reusable = true}, SHIFT(55),
  [518] = {.count = 1, .reusable = true}, SHIFT(56),
  [520] = {.count = 1, .reusable = true}, SHIFT(72),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_for, 1),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym__table, 4, .production_id = 8),
  [526] = {.count = 1, .reusable = true}, SHIFT(147),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_for_each, 1),
  [530] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [532] = {.count = 1, .reusable = true}, SHIFT(10),
  [534] = {.count = 1, .reusable = true}, SHIFT(9),
  [536] = {.count = 1, .reusable = true}, SHIFT(146),
  [538] = {.count = 1, .reusable = true}, SHIFT(145),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_case_of, 1),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_if, 1),
  [544] = {.count = 1, .reusable = true}, SHIFT(144),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym__use_f, 1),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym__use_e, 1),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym__for_f, 1),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym__for_e, 1),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_while, 1),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym__while_e, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_f, 1),
  [560] = {.count = 1, .reusable = true}, SHIFT(67),
  [562] = {.count = 1, .reusable = true}, SHIFT(155),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym__table, 3, .production_id = 6),
  [566] = {.count = 1, .reusable = true}, SHIFT(38),
  [568] = {.count = 1, .reusable = true}, SHIFT(37),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym__for_each_e, 1),
  [572] = {.count = 1, .reusable = true}, SHIFT(19),
  [574] = {.count = 1, .reusable = true}, SHIFT(33),
  [576] = {.count = 1, .reusable = true}, SHIFT(32),
  [578] = {.count = 1, .reusable = true}, SHIFT(22),
  [580] = {.count = 1, .reusable = true}, SHIFT(115),
  [582] = {.count = 1, .reusable = true}, SHIFT(11),
  [584] = {.count = 1, .reusable = true}, SHIFT(40),
  [586] = {.count = 1, .reusable = true}, SHIFT(173),
  [588] = {.count = 1, .reusable = true}, SHIFT(165),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_until, 1),
  [592] = {.count = 1, .reusable = true}, SHIFT(36),
  [594] = {.count = 1, .reusable = true}, SHIFT(31),
  [596] = {.count = 1, .reusable = true}, SHIFT(6),
  [598] = {.count = 1, .reusable = true}, SHIFT(5),
  [600] = {.count = 1, .reusable = true}, SHIFT(4),
  [602] = {.count = 1, .reusable = true}, SHIFT(187),
  [604] = {.count = 1, .reusable = true}, SHIFT(118),
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
