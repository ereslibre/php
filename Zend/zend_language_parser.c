/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs

/* First part of user prologue.  */
#line 1 "/root/php-src/Zend/zend_language_parser.y"

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2018 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@php.net>                                 |
   |          Zeev Suraski <zeev@php.net>                                 |
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"
#include "zend_exceptions.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif


#line 120 "/root/php-src/Zend/zend_language_parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "zend_language_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* ','  */
  YYSYMBOL_4_ = 4,                         /* '='  */
  YYSYMBOL_5_ = 5,                         /* '?'  */
  YYSYMBOL_6_ = 6,                         /* ':'  */
  YYSYMBOL_7_ = 7,                         /* '|'  */
  YYSYMBOL_8_ = 8,                         /* '^'  */
  YYSYMBOL_9_ = 9,                         /* '&'  */
  YYSYMBOL_10_ = 10,                       /* '<'  */
  YYSYMBOL_11_ = 11,                       /* '>'  */
  YYSYMBOL_12_ = 12,                       /* '+'  */
  YYSYMBOL_13_ = 13,                       /* '-'  */
  YYSYMBOL_14_ = 14,                       /* '.'  */
  YYSYMBOL_15_ = 15,                       /* '*'  */
  YYSYMBOL_16_ = 16,                       /* '/'  */
  YYSYMBOL_17_ = 17,                       /* '%'  */
  YYSYMBOL_18_ = 18,                       /* '!'  */
  YYSYMBOL_19_ = 19,                       /* '~'  */
  YYSYMBOL_20_ = 20,                       /* '@'  */
  YYSYMBOL_21_ = 21,                       /* '['  */
  YYSYMBOL_T_NOELSE = 22,                  /* T_NOELSE  */
  YYSYMBOL_T_LNUMBER = 23,                 /* "integer number (T_LNUMBER)"  */
  YYSYMBOL_T_DNUMBER = 24,                 /* "floating-point number (T_DNUMBER)"  */
  YYSYMBOL_T_STRING = 25,                  /* "identifier (T_STRING)"  */
  YYSYMBOL_T_VARIABLE = 26,                /* "variable (T_VARIABLE)"  */
  YYSYMBOL_T_INLINE_HTML = 27,             /* T_INLINE_HTML  */
  YYSYMBOL_T_ENCAPSED_AND_WHITESPACE = 28, /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
  YYSYMBOL_T_CONSTANT_ENCAPSED_STRING = 29, /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
  YYSYMBOL_T_STRING_VARNAME = 30,          /* "variable name (T_STRING_VARNAME)"  */
  YYSYMBOL_T_NUM_STRING = 31,              /* "number (T_NUM_STRING)"  */
  YYSYMBOL_T_INCLUDE = 32,                 /* "include (T_INCLUDE)"  */
  YYSYMBOL_T_INCLUDE_ONCE = 33,            /* "include_once (T_INCLUDE_ONCE)"  */
  YYSYMBOL_T_EVAL = 34,                    /* "eval (T_EVAL)"  */
  YYSYMBOL_T_REQUIRE = 35,                 /* "require (T_REQUIRE)"  */
  YYSYMBOL_T_REQUIRE_ONCE = 36,            /* "require_once (T_REQUIRE_ONCE)"  */
  YYSYMBOL_T_LOGICAL_OR = 37,              /* "or (T_LOGICAL_OR)"  */
  YYSYMBOL_T_LOGICAL_XOR = 38,             /* "xor (T_LOGICAL_XOR)"  */
  YYSYMBOL_T_LOGICAL_AND = 39,             /* "and (T_LOGICAL_AND)"  */
  YYSYMBOL_T_PRINT = 40,                   /* "print (T_PRINT)"  */
  YYSYMBOL_T_YIELD = 41,                   /* "yield (T_YIELD)"  */
  YYSYMBOL_T_YIELD_FROM = 42,              /* "yield from (T_YIELD_FROM)"  */
  YYSYMBOL_T_PLUS_EQUAL = 43,              /* "+= (T_PLUS_EQUAL)"  */
  YYSYMBOL_T_MINUS_EQUAL = 44,             /* "-= (T_MINUS_EQUAL)"  */
  YYSYMBOL_T_MUL_EQUAL = 45,               /* "*= (T_MUL_EQUAL)"  */
  YYSYMBOL_T_DIV_EQUAL = 46,               /* "/= (T_DIV_EQUAL)"  */
  YYSYMBOL_T_CONCAT_EQUAL = 47,            /* ".= (T_CONCAT_EQUAL)"  */
  YYSYMBOL_T_MOD_EQUAL = 48,               /* "%= (T_MOD_EQUAL)"  */
  YYSYMBOL_T_AND_EQUAL = 49,               /* "&= (T_AND_EQUAL)"  */
  YYSYMBOL_T_OR_EQUAL = 50,                /* "|= (T_OR_EQUAL)"  */
  YYSYMBOL_T_XOR_EQUAL = 51,               /* "^= (T_XOR_EQUAL)"  */
  YYSYMBOL_T_SL_EQUAL = 52,                /* "<<= (T_SL_EQUAL)"  */
  YYSYMBOL_T_SR_EQUAL = 53,                /* ">>= (T_SR_EQUAL)"  */
  YYSYMBOL_T_BOOLEAN_OR = 54,              /* "|| (T_BOOLEAN_OR)"  */
  YYSYMBOL_T_BOOLEAN_AND = 55,             /* "&& (T_BOOLEAN_AND)"  */
  YYSYMBOL_T_IS_EQUAL = 56,                /* "== (T_IS_EQUAL)"  */
  YYSYMBOL_T_IS_NOT_EQUAL = 57,            /* "!= (T_IS_NOT_EQUAL)"  */
  YYSYMBOL_T_IS_IDENTICAL = 58,            /* "=== (T_IS_IDENTICAL)"  */
  YYSYMBOL_T_IS_NOT_IDENTICAL = 59,        /* "!== (T_IS_NOT_IDENTICAL)"  */
  YYSYMBOL_T_IS_SMALLER_OR_EQUAL = 60,     /* "<= (T_IS_SMALLER_OR_EQUAL)"  */
  YYSYMBOL_T_IS_GREATER_OR_EQUAL = 61,     /* ">= (T_IS_GREATER_OR_EQUAL)"  */
  YYSYMBOL_T_SPACESHIP = 62,               /* "<=> (T_SPACESHIP)"  */
  YYSYMBOL_T_SL = 63,                      /* "<< (T_SL)"  */
  YYSYMBOL_T_SR = 64,                      /* ">> (T_SR)"  */
  YYSYMBOL_T_INSTANCEOF = 65,              /* "instanceof (T_INSTANCEOF)"  */
  YYSYMBOL_T_INC = 66,                     /* "++ (T_INC)"  */
  YYSYMBOL_T_DEC = 67,                     /* "-- (T_DEC)"  */
  YYSYMBOL_T_INT_CAST = 68,                /* "(int) (T_INT_CAST)"  */
  YYSYMBOL_T_DOUBLE_CAST = 69,             /* "(double) (T_DOUBLE_CAST)"  */
  YYSYMBOL_T_STRING_CAST = 70,             /* "(string) (T_STRING_CAST)"  */
  YYSYMBOL_T_ARRAY_CAST = 71,              /* "(array) (T_ARRAY_CAST)"  */
  YYSYMBOL_T_OBJECT_CAST = 72,             /* "(object) (T_OBJECT_CAST)"  */
  YYSYMBOL_T_BOOL_CAST = 73,               /* "(bool) (T_BOOL_CAST)"  */
  YYSYMBOL_T_UNSET_CAST = 74,              /* "(unset) (T_UNSET_CAST)"  */
  YYSYMBOL_T_NEW = 75,                     /* "new (T_NEW)"  */
  YYSYMBOL_T_CLONE = 76,                   /* "clone (T_CLONE)"  */
  YYSYMBOL_T_EXIT = 77,                    /* "exit (T_EXIT)"  */
  YYSYMBOL_T_IF = 78,                      /* "if (T_IF)"  */
  YYSYMBOL_T_ELSEIF = 79,                  /* "elseif (T_ELSEIF)"  */
  YYSYMBOL_T_ELSE = 80,                    /* "else (T_ELSE)"  */
  YYSYMBOL_T_ENDIF = 81,                   /* "endif (T_ENDIF)"  */
  YYSYMBOL_T_ECHO = 82,                    /* "echo (T_ECHO)"  */
  YYSYMBOL_T_DO = 83,                      /* "do (T_DO)"  */
  YYSYMBOL_T_WHILE = 84,                   /* "while (T_WHILE)"  */
  YYSYMBOL_T_ENDWHILE = 85,                /* "endwhile (T_ENDWHILE)"  */
  YYSYMBOL_T_FOR = 86,                     /* "for (T_FOR)"  */
  YYSYMBOL_T_ENDFOR = 87,                  /* "endfor (T_ENDFOR)"  */
  YYSYMBOL_T_FOREACH = 88,                 /* "foreach (T_FOREACH)"  */
  YYSYMBOL_T_ENDFOREACH = 89,              /* "endforeach (T_ENDFOREACH)"  */
  YYSYMBOL_T_DECLARE = 90,                 /* "declare (T_DECLARE)"  */
  YYSYMBOL_T_ENDDECLARE = 91,              /* "enddeclare (T_ENDDECLARE)"  */
  YYSYMBOL_T_AS = 92,                      /* "as (T_AS)"  */
  YYSYMBOL_T_SWITCH = 93,                  /* "switch (T_SWITCH)"  */
  YYSYMBOL_T_ENDSWITCH = 94,               /* "endswitch (T_ENDSWITCH)"  */
  YYSYMBOL_T_CASE = 95,                    /* "case (T_CASE)"  */
  YYSYMBOL_T_DEFAULT = 96,                 /* "default (T_DEFAULT)"  */
  YYSYMBOL_T_BREAK = 97,                   /* "break (T_BREAK)"  */
  YYSYMBOL_T_CONTINUE = 98,                /* "continue (T_CONTINUE)"  */
  YYSYMBOL_T_GOTO = 99,                    /* "goto (T_GOTO)"  */
  YYSYMBOL_T_FUNCTION = 100,               /* "function (T_FUNCTION)"  */
  YYSYMBOL_T_CONST = 101,                  /* "const (T_CONST)"  */
  YYSYMBOL_T_RETURN = 102,                 /* "return (T_RETURN)"  */
  YYSYMBOL_T_TRY = 103,                    /* "try (T_TRY)"  */
  YYSYMBOL_T_CATCH = 104,                  /* "catch (T_CATCH)"  */
  YYSYMBOL_T_FINALLY = 105,                /* "finally (T_FINALLY)"  */
  YYSYMBOL_T_THROW = 106,                  /* "throw (T_THROW)"  */
  YYSYMBOL_T_USE = 107,                    /* "use (T_USE)"  */
  YYSYMBOL_T_INSTEADOF = 108,              /* "insteadof (T_INSTEADOF)"  */
  YYSYMBOL_T_GLOBAL = 109,                 /* "global (T_GLOBAL)"  */
  YYSYMBOL_T_STATIC = 110,                 /* "static (T_STATIC)"  */
  YYSYMBOL_T_ABSTRACT = 111,               /* "abstract (T_ABSTRACT)"  */
  YYSYMBOL_T_FINAL = 112,                  /* "final (T_FINAL)"  */
  YYSYMBOL_T_PRIVATE = 113,                /* "private (T_PRIVATE)"  */
  YYSYMBOL_T_PROTECTED = 114,              /* "protected (T_PROTECTED)"  */
  YYSYMBOL_T_PUBLIC = 115,                 /* "public (T_PUBLIC)"  */
  YYSYMBOL_T_VAR = 116,                    /* "var (T_VAR)"  */
  YYSYMBOL_T_UNSET = 117,                  /* "unset (T_UNSET)"  */
  YYSYMBOL_T_ISSET = 118,                  /* "isset (T_ISSET)"  */
  YYSYMBOL_T_EMPTY = 119,                  /* "empty (T_EMPTY)"  */
  YYSYMBOL_T_HALT_COMPILER = 120,          /* "__halt_compiler (T_HALT_COMPILER)"  */
  YYSYMBOL_T_CLASS = 121,                  /* "class (T_CLASS)"  */
  YYSYMBOL_T_TRAIT = 122,                  /* "trait (T_TRAIT)"  */
  YYSYMBOL_T_INTERFACE = 123,              /* "interface (T_INTERFACE)"  */
  YYSYMBOL_T_EXTENDS = 124,                /* "extends (T_EXTENDS)"  */
  YYSYMBOL_T_IMPLEMENTS = 125,             /* "implements (T_IMPLEMENTS)"  */
  YYSYMBOL_T_OBJECT_OPERATOR = 126,        /* "-> (T_OBJECT_OPERATOR)"  */
  YYSYMBOL_T_DOUBLE_ARROW = 127,           /* "=> (T_DOUBLE_ARROW)"  */
  YYSYMBOL_T_LIST = 128,                   /* "list (T_LIST)"  */
  YYSYMBOL_T_ARRAY = 129,                  /* "array (T_ARRAY)"  */
  YYSYMBOL_T_CALLABLE = 130,               /* "callable (T_CALLABLE)"  */
  YYSYMBOL_T_LINE = 131,                   /* "__LINE__ (T_LINE)"  */
  YYSYMBOL_T_FILE = 132,                   /* "__FILE__ (T_FILE)"  */
  YYSYMBOL_T_DIR = 133,                    /* "__DIR__ (T_DIR)"  */
  YYSYMBOL_T_CLASS_C = 134,                /* "__CLASS__ (T_CLASS_C)"  */
  YYSYMBOL_T_TRAIT_C = 135,                /* "__TRAIT__ (T_TRAIT_C)"  */
  YYSYMBOL_T_METHOD_C = 136,               /* "__METHOD__ (T_METHOD_C)"  */
  YYSYMBOL_T_FUNC_C = 137,                 /* "__FUNCTION__ (T_FUNC_C)"  */
  YYSYMBOL_T_COMMENT = 138,                /* "comment (T_COMMENT)"  */
  YYSYMBOL_T_DOC_COMMENT = 139,            /* "doc comment (T_DOC_COMMENT)"  */
  YYSYMBOL_T_OPEN_TAG = 140,               /* "open tag (T_OPEN_TAG)"  */
  YYSYMBOL_T_OPEN_TAG_WITH_ECHO = 141,     /* "open tag with echo (T_OPEN_TAG_WITH_ECHO)"  */
  YYSYMBOL_T_CLOSE_TAG = 142,              /* "close tag (T_CLOSE_TAG)"  */
  YYSYMBOL_T_WHITESPACE = 143,             /* "whitespace (T_WHITESPACE)"  */
  YYSYMBOL_T_START_HEREDOC = 144,          /* "heredoc start (T_START_HEREDOC)"  */
  YYSYMBOL_T_END_HEREDOC = 145,            /* "heredoc end (T_END_HEREDOC)"  */
  YYSYMBOL_T_DOLLAR_OPEN_CURLY_BRACES = 146, /* "${ (T_DOLLAR_OPEN_CURLY_BRACES)"  */
  YYSYMBOL_T_CURLY_OPEN = 147,             /* "{$ (T_CURLY_OPEN)"  */
  YYSYMBOL_T_PAAMAYIM_NEKUDOTAYIM = 148,   /* ":: (T_PAAMAYIM_NEKUDOTAYIM)"  */
  YYSYMBOL_T_NAMESPACE = 149,              /* "namespace (T_NAMESPACE)"  */
  YYSYMBOL_T_NS_C = 150,                   /* "__NAMESPACE__ (T_NS_C)"  */
  YYSYMBOL_T_NS_SEPARATOR = 151,           /* "\\ (T_NS_SEPARATOR)"  */
  YYSYMBOL_T_ELLIPSIS = 152,               /* "... (T_ELLIPSIS)"  */
  YYSYMBOL_T_COALESCE = 153,               /* "?? (T_COALESCE)"  */
  YYSYMBOL_T_POW = 154,                    /* "** (T_POW)"  */
  YYSYMBOL_T_POW_EQUAL = 155,              /* "**= (T_POW_EQUAL)"  */
  YYSYMBOL_T_ERROR = 156,                  /* T_ERROR  */
  YYSYMBOL_157_ = 157,                     /* '('  */
  YYSYMBOL_158_ = 158,                     /* ')'  */
  YYSYMBOL_159_ = 159,                     /* ';'  */
  YYSYMBOL_160_ = 160,                     /* '{'  */
  YYSYMBOL_161_ = 161,                     /* '}'  */
  YYSYMBOL_162_ = 162,                     /* ']'  */
  YYSYMBOL_163_ = 163,                     /* '`'  */
  YYSYMBOL_164_ = 164,                     /* '"'  */
  YYSYMBOL_165_ = 165,                     /* '$'  */
  YYSYMBOL_YYACCEPT = 166,                 /* $accept  */
  YYSYMBOL_start = 167,                    /* start  */
  YYSYMBOL_reserved_non_modifiers = 168,   /* reserved_non_modifiers  */
  YYSYMBOL_semi_reserved = 169,            /* semi_reserved  */
  YYSYMBOL_identifier = 170,               /* identifier  */
  YYSYMBOL_top_statement_list = 171,       /* top_statement_list  */
  YYSYMBOL_namespace_name = 172,           /* namespace_name  */
  YYSYMBOL_name = 173,                     /* name  */
  YYSYMBOL_top_statement = 174,            /* top_statement  */
  YYSYMBOL_175_1 = 175,                    /* $@1  */
  YYSYMBOL_176_2 = 176,                    /* $@2  */
  YYSYMBOL_use_type = 177,                 /* use_type  */
  YYSYMBOL_group_use_declaration = 178,    /* group_use_declaration  */
  YYSYMBOL_mixed_group_use_declaration = 179, /* mixed_group_use_declaration  */
  YYSYMBOL_possible_comma = 180,           /* possible_comma  */
  YYSYMBOL_inline_use_declarations = 181,  /* inline_use_declarations  */
  YYSYMBOL_unprefixed_use_declarations = 182, /* unprefixed_use_declarations  */
  YYSYMBOL_use_declarations = 183,         /* use_declarations  */
  YYSYMBOL_inline_use_declaration = 184,   /* inline_use_declaration  */
  YYSYMBOL_unprefixed_use_declaration = 185, /* unprefixed_use_declaration  */
  YYSYMBOL_use_declaration = 186,          /* use_declaration  */
  YYSYMBOL_const_list = 187,               /* const_list  */
  YYSYMBOL_inner_statement_list = 188,     /* inner_statement_list  */
  YYSYMBOL_inner_statement = 189,          /* inner_statement  */
  YYSYMBOL_statement = 190,                /* statement  */
  YYSYMBOL_191_3 = 191,                    /* $@3  */
  YYSYMBOL_catch_list = 192,               /* catch_list  */
  YYSYMBOL_catch_name_list = 193,          /* catch_name_list  */
  YYSYMBOL_finally_statement = 194,        /* finally_statement  */
  YYSYMBOL_unset_variables = 195,          /* unset_variables  */
  YYSYMBOL_unset_variable = 196,           /* unset_variable  */
  YYSYMBOL_function_declaration_statement = 197, /* function_declaration_statement  */
  YYSYMBOL_is_reference = 198,             /* is_reference  */
  YYSYMBOL_is_variadic = 199,              /* is_variadic  */
  YYSYMBOL_class_declaration_statement = 200, /* class_declaration_statement  */
  YYSYMBOL_201_4 = 201,                    /* @4  */
  YYSYMBOL_202_5 = 202,                    /* @5  */
  YYSYMBOL_class_modifiers = 203,          /* class_modifiers  */
  YYSYMBOL_class_modifier = 204,           /* class_modifier  */
  YYSYMBOL_trait_declaration_statement = 205, /* trait_declaration_statement  */
  YYSYMBOL_206_6 = 206,                    /* @6  */
  YYSYMBOL_interface_declaration_statement = 207, /* interface_declaration_statement  */
  YYSYMBOL_208_7 = 208,                    /* @7  */
  YYSYMBOL_extends_from = 209,             /* extends_from  */
  YYSYMBOL_interface_extends_list = 210,   /* interface_extends_list  */
  YYSYMBOL_implements_list = 211,          /* implements_list  */
  YYSYMBOL_foreach_variable = 212,         /* foreach_variable  */
  YYSYMBOL_for_statement = 213,            /* for_statement  */
  YYSYMBOL_foreach_statement = 214,        /* foreach_statement  */
  YYSYMBOL_declare_statement = 215,        /* declare_statement  */
  YYSYMBOL_switch_case_list = 216,         /* switch_case_list  */
  YYSYMBOL_case_list = 217,                /* case_list  */
  YYSYMBOL_case_separator = 218,           /* case_separator  */
  YYSYMBOL_while_statement = 219,          /* while_statement  */
  YYSYMBOL_if_stmt_without_else = 220,     /* if_stmt_without_else  */
  YYSYMBOL_if_stmt = 221,                  /* if_stmt  */
  YYSYMBOL_alt_if_stmt_without_else = 222, /* alt_if_stmt_without_else  */
  YYSYMBOL_alt_if_stmt = 223,              /* alt_if_stmt  */
  YYSYMBOL_parameter_list = 224,           /* parameter_list  */
  YYSYMBOL_non_empty_parameter_list = 225, /* non_empty_parameter_list  */
  YYSYMBOL_parameter = 226,                /* parameter  */
  YYSYMBOL_optional_type = 227,            /* optional_type  */
  YYSYMBOL_type_expr = 228,                /* type_expr  */
  YYSYMBOL_type = 229,                     /* type  */
  YYSYMBOL_return_type = 230,              /* return_type  */
  YYSYMBOL_argument_list = 231,            /* argument_list  */
  YYSYMBOL_non_empty_argument_list = 232,  /* non_empty_argument_list  */
  YYSYMBOL_argument = 233,                 /* argument  */
  YYSYMBOL_global_var_list = 234,          /* global_var_list  */
  YYSYMBOL_global_var = 235,               /* global_var  */
  YYSYMBOL_static_var_list = 236,          /* static_var_list  */
  YYSYMBOL_static_var = 237,               /* static_var  */
  YYSYMBOL_class_statement_list = 238,     /* class_statement_list  */
  YYSYMBOL_class_statement = 239,          /* class_statement  */
  YYSYMBOL_name_list = 240,                /* name_list  */
  YYSYMBOL_trait_adaptations = 241,        /* trait_adaptations  */
  YYSYMBOL_trait_adaptation_list = 242,    /* trait_adaptation_list  */
  YYSYMBOL_trait_adaptation = 243,         /* trait_adaptation  */
  YYSYMBOL_trait_precedence = 244,         /* trait_precedence  */
  YYSYMBOL_trait_alias = 245,              /* trait_alias  */
  YYSYMBOL_trait_method_reference = 246,   /* trait_method_reference  */
  YYSYMBOL_absolute_trait_method_reference = 247, /* absolute_trait_method_reference  */
  YYSYMBOL_method_body = 248,              /* method_body  */
  YYSYMBOL_variable_modifiers = 249,       /* variable_modifiers  */
  YYSYMBOL_method_modifiers = 250,         /* method_modifiers  */
  YYSYMBOL_non_empty_member_modifiers = 251, /* non_empty_member_modifiers  */
  YYSYMBOL_member_modifier = 252,          /* member_modifier  */
  YYSYMBOL_property_list = 253,            /* property_list  */
  YYSYMBOL_property = 254,                 /* property  */
  YYSYMBOL_class_const_list = 255,         /* class_const_list  */
  YYSYMBOL_class_const_decl = 256,         /* class_const_decl  */
  YYSYMBOL_const_decl = 257,               /* const_decl  */
  YYSYMBOL_echo_expr_list = 258,           /* echo_expr_list  */
  YYSYMBOL_echo_expr = 259,                /* echo_expr  */
  YYSYMBOL_for_exprs = 260,                /* for_exprs  */
  YYSYMBOL_non_empty_for_exprs = 261,      /* non_empty_for_exprs  */
  YYSYMBOL_anonymous_class = 262,          /* anonymous_class  */
  YYSYMBOL_263_8 = 263,                    /* @8  */
  YYSYMBOL_new_expr = 264,                 /* new_expr  */
  YYSYMBOL_expr = 265,                     /* expr  */
  YYSYMBOL_function = 266,                 /* function  */
  YYSYMBOL_backup_doc_comment = 267,       /* backup_doc_comment  */
  YYSYMBOL_backup_fn_flags = 268,          /* backup_fn_flags  */
  YYSYMBOL_returns_ref = 269,              /* returns_ref  */
  YYSYMBOL_lexical_vars = 270,             /* lexical_vars  */
  YYSYMBOL_lexical_var_list = 271,         /* lexical_var_list  */
  YYSYMBOL_lexical_var = 272,              /* lexical_var  */
  YYSYMBOL_function_call = 273,            /* function_call  */
  YYSYMBOL_class_name = 274,               /* class_name  */
  YYSYMBOL_class_name_reference = 275,     /* class_name_reference  */
  YYSYMBOL_exit_expr = 276,                /* exit_expr  */
  YYSYMBOL_backticks_expr = 277,           /* backticks_expr  */
  YYSYMBOL_ctor_arguments = 278,           /* ctor_arguments  */
  YYSYMBOL_dereferencable_scalar = 279,    /* dereferencable_scalar  */
  YYSYMBOL_scalar = 280,                   /* scalar  */
  YYSYMBOL_constant = 281,                 /* constant  */
  YYSYMBOL_optional_expr = 282,            /* optional_expr  */
  YYSYMBOL_variable_class_name = 283,      /* variable_class_name  */
  YYSYMBOL_dereferencable = 284,           /* dereferencable  */
  YYSYMBOL_callable_expr = 285,            /* callable_expr  */
  YYSYMBOL_callable_variable = 286,        /* callable_variable  */
  YYSYMBOL_variable = 287,                 /* variable  */
  YYSYMBOL_simple_variable = 288,          /* simple_variable  */
  YYSYMBOL_static_member = 289,            /* static_member  */
  YYSYMBOL_new_variable = 290,             /* new_variable  */
  YYSYMBOL_member_name = 291,              /* member_name  */
  YYSYMBOL_property_name = 292,            /* property_name  */
  YYSYMBOL_array_pair_list = 293,          /* array_pair_list  */
  YYSYMBOL_possible_array_pair = 294,      /* possible_array_pair  */
  YYSYMBOL_non_empty_array_pair_list = 295, /* non_empty_array_pair_list  */
  YYSYMBOL_array_pair = 296,               /* array_pair  */
  YYSYMBOL_encaps_list = 297,              /* encaps_list  */
  YYSYMBOL_encaps_var = 298,               /* encaps_var  */
  YYSYMBOL_encaps_var_offset = 299,        /* encaps_var_offset  */
  YYSYMBOL_internal_functions_in_yacc = 300, /* internal_functions_in_yacc  */
  YYSYMBOL_isset_variables = 301,          /* isset_variables  */
  YYSYMBOL_isset_variable = 302            /* isset_variable  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  497
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  947

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   392


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,   164,     2,   165,    17,     9,     2,
     157,   158,    15,    12,     3,    13,    14,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     6,   159,
      10,     4,    11,     5,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,   162,     8,     2,   163,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,     7,   161,    19,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   265,   265,   269,   269,   269,   269,   269,   269,   269,
     269,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   275,   275,   275,   275,   275,   275,   275,
     279,   280,   280,   280,   280,   280,   280,   284,   285,   293,
     294,   298,   299,   303,   304,   305,   309,   310,   311,   312,
     313,   314,   318,   321,   321,   324,   324,   327,   328,   329,
     330,   331,   335,   336,   340,   342,   347,   349,   353,   355,
     359,   361,   366,   368,   373,   375,   380,   381,   385,   387,
     392,   393,   397,   398,   402,   405,   410,   411,   412,   413,
     414,   415,   422,   423,   424,   425,   427,   429,   431,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   444,
     448,   447,   451,   452,   454,   455,   456,   461,   462,   467,
     468,   472,   473,   477,   478,   482,   486,   493,   494,   498,
     499,   503,   503,   506,   506,   512,   513,   518,   519,   523,
     523,   529,   529,   535,   536,   540,   541,   545,   546,   550,
     551,   552,   553,   557,   558,   562,   563,   567,   568,   572,
     573,   574,   575,   579,   580,   582,   587,   588,   593,   594,
     599,   602,   608,   609,   614,   617,   623,   624,   630,   631,
     636,   638,   643,   645,   651,   652,   656,   657,   661,   662,
     663,   667,   668,   672,   673,   677,   679,   684,   685,   689,
     690,   694,   700,   701,   705,   706,   711,   714,   719,   721,
     723,   725,   732,   733,   737,   738,   739,   743,   745,   750,
     751,   755,   760,   762,   764,   766,   771,   773,   777,   782,
     783,   787,   788,   792,   793,   798,   799,   804,   805,   806,
     807,   808,   809,   813,   814,   818,   820,   825,   826,   830,
     834,   838,   839,   842,   846,   847,   851,   852,   856,   856,
     866,   868,   873,   875,   877,   879,   881,   883,   884,   886,
     888,   890,   892,   894,   896,   898,   900,   902,   904,   906,
     908,   909,   910,   911,   912,   914,   916,   918,   920,   922,
     923,   924,   925,   926,   927,   928,   929,   930,   931,   932,
     933,   934,   935,   936,   937,   938,   940,   942,   944,   946,
     948,   950,   952,   954,   956,   958,   959,   960,   962,   964,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   988,   996,
    1000,  1004,  1008,  1009,  1013,  1014,  1018,  1019,  1023,  1024,
    1028,  1030,  1032,  1034,  1039,  1042,  1046,  1047,  1051,  1052,
    1057,  1058,  1059,  1064,  1065,  1070,  1071,  1072,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1089,  1090,  1091,  1092,  1096,  1097,  1099,  1104,  1105,  1109,
    1113,  1114,  1115,  1119,  1120,  1121,  1125,  1127,  1129,  1131,
    1133,  1135,  1139,  1141,  1143,  1148,  1149,  1150,  1154,  1156,
    1161,  1163,  1165,  1167,  1169,  1171,  1176,  1177,  1178,  1182,
    1183,  1184,  1188,  1193,  1194,  1198,  1200,  1205,  1207,  1209,
    1211,  1213,  1216,  1222,  1224,  1226,  1228,  1233,  1235,  1238,
    1241,  1243,  1245,  1248,  1252,  1253,  1254,  1255,  1260,  1261,
    1262,  1264,  1266,  1268,  1270,  1275,  1276,  1281
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "','", "'='", "'?'",
  "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "'~'", "'@'", "'['", "T_NOELSE",
  "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"include (T_INCLUDE)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"eval (T_EVAL)\"", "\"require (T_REQUIRE)\"",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"",
  "\"yield from (T_YIELD_FROM)\"", "\"+= (T_PLUS_EQUAL)\"",
  "\"-= (T_MINUS_EQUAL)\"", "\"*= (T_MUL_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "\"== (T_IS_EQUAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<=> (T_SPACESHIP)\"",
  "\"<< (T_SL)\"", "\">> (T_SR)\"", "\"instanceof (T_INSTANCEOF)\"",
  "\"++ (T_INC)\"", "\"-- (T_DEC)\"", "\"(int) (T_INT_CAST)\"",
  "\"(double) (T_DOUBLE_CAST)\"", "\"(string) (T_STRING_CAST)\"",
  "\"(array) (T_ARRAY_CAST)\"", "\"(object) (T_OBJECT_CAST)\"",
  "\"(bool) (T_BOOL_CAST)\"", "\"(unset) (T_UNSET_CAST)\"",
  "\"new (T_NEW)\"", "\"clone (T_CLONE)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"echo (T_ECHO)\"", "\"do (T_DO)\"",
  "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"", "\"for (T_FOR)\"",
  "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"static (T_STATIC)\"", "\"abstract (T_ABSTRACT)\"",
  "\"final (T_FINAL)\"", "\"private (T_PRIVATE)\"",
  "\"protected (T_PROTECTED)\"", "\"public (T_PUBLIC)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"=> (T_DOUBLE_ARROW)\"", "\"list (T_LIST)\"", "\"array (T_ARRAY)\"",
  "\"callable (T_CALLABLE)\"", "\"__LINE__ (T_LINE)\"",
  "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "\"?? (T_COALESCE)\"", "\"** (T_POW)\"",
  "\"**= (T_POW_EQUAL)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "']'", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "possible_comma",
  "inline_use_declarations", "unprefixed_use_declarations",
  "use_declarations", "inline_use_declaration",
  "unprefixed_use_declaration", "use_declaration", "const_list",
  "inner_statement_list", "inner_statement", "statement", "$@3",
  "catch_list", "catch_name_list", "finally_statement", "unset_variables",
  "unset_variable", "function_declaration_statement", "is_reference",
  "is_variadic", "class_declaration_statement", "@4", "@5",
  "class_modifiers", "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type_expr", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr", "expr",
  "function", "backup_doc_comment", "backup_fn_flags", "returns_ref",
  "lexical_vars", "lexical_var_list", "lexical_var", "function_call",
  "class_name", "class_name_reference", "exit_expr", "backticks_expr",
  "ctor_arguments", "dereferencable_scalar", "scalar", "constant",
  "optional_expr", "variable_class_name", "dereferencable",
  "callable_expr", "callable_variable", "variable", "simple_variable",
  "static_member", "new_variable", "member_name", "property_name",
  "array_pair_list", "possible_array_pair", "non_empty_array_pair_list",
  "array_pair", "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-731)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-471)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -731,    96,  3103,  -731,  5971,  5971,  5971,  5971,  5971,  1874,
    -731,  -731,   102,  -731,  -731,  -731,  5971,  5971,   -22,  5971,
    5971,  5971,  5971,  5971,   375,   375,  5971,  5971,  5971,  5971,
    5971,  5971,  5971,   208,  5971,    -6,    -4,  5971,  5378,    23,
     181,   185,   188,   192,  5971,  5971,   130,  -731,   135,  5971,
      35,  5971,   285,   142,    61,  -731,  -731,   194,   201,   204,
     212,  -731,  -731,  -731,   218,   221,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,   367,    73,  -731,   137,  5971,  -731,  -731,
     304,   406,   160,   -13,   -34,  -731,  -731,  -731,  -731,   307,
    -731,  -731,  -731,    31,  -731,   449,  -731,  -731,  2615,   305,
    -731,   232,   217,  -731,   180,   241,   146,   235,   237,   363,
    -731,  -731,  -731,  -731,   298,   252,   263,   305,   263,     2,
     263,   263,   375,   265,  6590,   262,  -731,   438,  -731,  -731,
    6774,  6774,  5971,  6774,  6774,  6949,  6787,  6949,  1874,  -731,
    5971,   295,   180,    37,    37,   263,   263,   263,   263,   263,
     263,   263,  -731,  -731,  -731,   306,   235,  -731,   144,  -731,
    5971,  -731,  5971,    15,  -731,  6774,   383,  5971,  5971,  5971,
     135,  5971,  6774,   316,   319,   327,   469,    34,  -731,   329,
    -731,  2721,  -731,  -731,   137,     3,   152,   336,    54,  -731,
    -731,    57,  -731,  -731,   505,    59,  -731,   305,   375,  5971,
    5971,   352,   490,   494,   497,  1874,  1874,    70,   337,  -731,
    5675,   375,   419,  -731,   137,   205,   365,   -13,  6132,  3252,
     324,   373,   409,   324,   353,  5971,  -731,   537,  5527,  -731,
    -731,  -731,   421,  5378,   423,   557,   427,  1656,  5971,  5971,
    5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,
    5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,
    5971,  5971,  5971,   211,  5971,  5971,  -731,  -731,   560,  7088,
    5971,  7088,  5971,    75,  5971,  -731,  2023,  5971,  5971,  5971,
    5971,  5971,  5971,  5971,  5971,  5971,  5971,  5971,  -731,  -731,
    5971,  -731,    44,  1874,  2172,   586,  1874,  6145,  5971,   429,
    6206,   235,   142,  -731,  -731,  5971,    75,   142,  5971,   437,
    6219,  5971,  -731,   446,  6324,   448,   607,  6774,  6603,    41,
    6337,  -731,  -731,  -731,  5971,   135,  -731,  -731,  3406,  -731,
      32,  -731,   589,    79,   137,    39,   460,    66,  -731,   280,
    -731,   142,  -731,  5971,   596,  -731,  -731,   620,  -731,    47,
    6774,   621,  -731,  6398,   468,   504,  -731,   509,   471,   478,
     466,   612,  -731,  -731,    51,  2333,   479,  -731,  -731,  -731,
     -13,  -731,   481,  -731,   333,   485,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  2346,  -731,  5971,  -731,   640,
    -731,  6774,   622,  5971,  -731,  5971,  -731,  -731,  5971,  6713,
    7008,  1690,  2056,   533,   533,    69,    69,    69,     2,     2,
       2,  2787,  6848,  6949,  6861,  6935,  5560,  5560,  5560,  5560,
     533,   533,  5560,   113,   113,  -731,  6922,   263,  -731,   488,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,  -731,  5971,  -731,  -731,   489,   492,   235,
     493,   489,   492,   235,   496,  -731,  5971,  -731,   235,  2407,
     375,  6949,  6949,  6949,  6949,  6949,  6949,  6949,  6949,  6949,
    6949,  6949,  6949,  6949,   498,   375,   502,  6774,  5971,  -731,
    -731,  6949,  -731,   506,   504,  -731,   499,  -731,  -731,  2420,
    -731,   911,  -731,  5971,  1060,  5971,  5971,   315,  -731,     9,
    6774,  -731,  -731,   115,  -731,    48,    40,   151,  -731,  -731,
     137,   239,  -731,  -731,  6774,  -731,   511,   375,   508,  5971,
     517,  -731,  -731,   314,   525,   516,   314,  -731,   658,  -731,
     649,  -731,  -731,  -731,   519,  -731,  5971,  -731,  -731,  -731,
    -731,  2795,   526,  -731,  6774,  5823,   530,   504,  6411,  6516,
    3560,  6922,  5971,   532,   291,  2528,  -731,  -731,  -731,  -731,
    2541,  -731,  -731,    37,   658,    53,  1874,  6949,   525,  -731,
    -731,  -731,  -731,  6529,  -731,  -731,  -731,   524,  6774,   375,
    1874,   534,   -45,   -25,  1209,   535,   536,  -731,  -731,   334,
      48,   137,   697,  -731,  -731,   163,   137,   291,  -731,   542,
    -731,  -731,  -731,   314,  -731,  -731,  -731,   699,   543,  5971,
    -731,  -731,  1817,  2949,  -731,   545,  -731,  -731,   525,  5378,
     700,   548,  6922,   291,   297,  -731,  -731,  -731,   551,   710,
    -731,   706,  -731,  -731,  -731,  -731,   558,  -731,  5229,   559,
    3709,  5971,   -11,   561,  1874,   315,  1358,  -731,  -731,  -731,
    -731,   439,  -731,   -16,   562,   565,  -731,   697,  -731,    48,
     569,   137,   718,  -731,   564,  -731,   699,   566,   636,   314,
    -731,  6949,   571,  -731,  -731,  -731,  -731,  -731,  -731,   579,
    -731,   631,   347,  -731,   577,   658,   580,  -731,   583,   581,
      -8,   587,   597,  -731,  -731,  -731,  3858,   473,   606,  5971,
      11,    -3,  -731,   314,  -731,   613,  -731,  -731,   718,   137,
     614,   631,  -731,   314,  -731,  -731,  -731,  -731,  -731,  -731,
    -731,  -731,  -731,   751,   360,   461,  -731,  -731,   646,  -731,
     618,  5229,   773,   624,   773,  -731,  -731,   758,  -731,  -731,
    1507,  -731,  1358,  4007,   626,   627,  -731,  2602,  -731,  -731,
    -731,  -731,  -731,    92,  4156,  -731,   632,  -731,  -731,   773,
     657,    62,   783,    67,  -731,  7482,   305,  -731,  -731,  -731,
     347,  -731,   111,  -731,   790,   712,  -731,  -731,  -731,  -731,
     641,  -731,  -731,  -731,  5229,   314,   637,  -731,  -731,  -731,
    -731,  -731,  7222,  -731,  5971,  -731,   751,  -731,   795,    68,
    -731,  7482,   778,  -731,   643,   779,  -731,    72,  -731,   644,
    5971,  -731,  4310,  -731,  5229,  -731,   648,   650,   714,   252,
    -731,  -731,   661,  7352,  -731,   652,   655,   723,   708,  6774,
    -731,  5971,  7482,  -731,  -731,  -731,  -731,  -731,   111,  -731,
    -731,  6774,   662,  -731,  -731,  7482,  -731,  -731,  -731,  -731,
    7601,   314,  -731,  6774,  -731,   660,  4459,  -731,  4613,  -731,
    4767,  4921,  -731,  -731,  -731,  7482,   699,  -731,   291,  -731,
    -731,  -731,  -731,  -731,   671,  -731,  -731,  -731,   773,  -731,
     343,  -731,  -731,  -731,  5075,  -731,  -731
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,   463,
     408,   409,    81,   445,   145,   407,     0,     0,     0,     0,
       0,     0,   373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,   427,   427,     0,   379,     0,   427,
       0,     0,     0,     0,   394,   177,   178,     0,     0,     0,
       0,   173,   179,   181,     0,     0,   410,   411,   412,   417,
     413,   414,   415,     0,    95,   416,     0,     0,   152,   125,
     400,     0,     0,    83,   424,    79,    86,    87,    88,     0,
     175,    89,    90,   212,   133,     0,   134,   356,     0,   382,
     441,     0,   422,   370,   423,     0,   429,     0,   442,   302,
     436,   443,   360,    81,   394,     0,   341,   382,   342,   343,
     344,   369,     0,     0,   468,     0,   466,   462,   464,   156,
     490,   491,     0,   493,   494,   372,   374,   376,   463,   394,
       0,   432,     0,   321,   323,   361,   362,   363,   364,   365,
     366,   367,   298,   395,   301,   396,   403,   450,   397,   307,
     427,   368,     0,     0,   292,   293,     0,     0,   294,     0,
       0,     0,   428,     0,     0,     0,     0,     0,   123,     0,
     125,     0,   102,   103,     0,   118,     0,     0,     0,   120,
     115,     0,   240,   241,   244,     0,   243,   382,     0,     0,
       0,     0,     0,     0,     0,   463,   463,   477,     0,   419,
       0,     0,     0,   475,     0,    93,     0,    85,     0,     0,
     401,     0,   402,     0,     0,     0,   447,     0,     0,   390,
     171,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,   383,   380,     0,
     427,     0,   427,     0,     0,   393,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,   322,
       0,   380,   430,   463,     0,   406,   463,     0,     0,     0,
       0,   403,     0,   404,   300,   427,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,   295,   297,     0,     0,
       0,   139,   140,   155,     0,     0,   101,   141,     0,   154,
     118,   121,     0,     0,     0,   118,     0,     0,    97,     0,
      99,     0,   142,     0,     0,   143,   380,   108,   163,   430,
     497,   108,   495,     0,     0,   183,   380,   185,     0,     0,
       0,     0,   418,   476,     0,     0,   430,   474,   421,   473,
      84,    92,     0,    80,   355,     0,   132,   124,   126,   127,
     128,   129,   130,   371,   420,     0,    82,     0,   233,   108,
     235,   237,     0,     0,   213,     0,   125,   216,     0,     0,
     329,   331,   330,   349,   351,   333,   334,   332,   335,   337,
     338,   326,   328,   327,   324,   325,   347,   348,   345,   346,
     350,   352,   353,   339,   340,   354,   359,   336,   380,     0,
      77,     3,     4,     5,     6,     7,     8,     9,    10,    46,
      47,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      49,    50,    51,    52,    53,    41,    42,    43,    44,    45,
      30,    31,    32,    33,    34,    35,    36,    71,    72,    73,
      74,    75,    76,    37,    38,    39,    40,    61,    59,    60,
      56,    57,    48,    54,    55,    66,    67,    68,    62,    63,
      65,    64,    58,    69,     0,    70,    78,   425,   448,     0,
       0,   426,   449,     0,     0,   459,     0,   461,   444,     0,
       0,   305,   308,   309,   310,   312,   313,   314,   315,   316,
     317,   318,   319,   311,     0,     0,     0,   467,     0,   465,
     492,   375,   406,   431,   183,   454,     0,   453,   455,     0,
     399,     0,   291,     0,     0,   294,     0,     0,   150,     0,
     380,   122,   157,     0,   119,     0,   118,     0,    98,   100,
       0,   118,   114,   239,   245,   242,     0,   109,     0,   109,
       0,   489,    91,     0,   187,     0,     0,   380,     0,   405,
       0,   484,   487,   485,     0,   479,     0,   481,   480,   483,
      80,     0,     0,   446,   238,   109,     0,   183,     0,     0,
       0,   358,     0,     0,   224,     0,   391,   438,   392,   437,
       0,   440,   439,   306,   472,   430,   463,   304,   187,   451,
     452,   125,   210,     0,   125,   208,   135,     0,   296,     0,
     463,     0,     0,   430,     0,   203,   203,   138,   290,   161,
       0,     0,   108,   111,   116,     0,     0,   224,   164,     0,
     496,   488,   184,     0,   380,   247,   252,   186,     0,     0,
     486,   478,     0,     0,    96,     0,   236,   234,   187,     0,
       0,     0,   357,   224,     0,   228,   229,   230,     0,   218,
     220,   167,   225,   226,   457,   460,     0,   380,   214,     0,
       0,   294,   430,     0,   463,     0,     0,   125,   197,   151,
     203,     0,   203,     0,     0,     0,   153,   108,   117,   109,
       0,     0,   108,   113,     0,   147,   188,     0,   273,     0,
     247,   303,     0,    94,   131,   380,   211,   125,   217,     0,
     227,   384,   224,   168,   169,   471,     0,   136,     0,     0,
     406,     0,     0,   125,   195,   148,     0,     0,     0,     0,
       0,     0,   199,     0,   125,     0,   110,   106,   108,   109,
       0,   384,   247,     0,   280,   281,   282,   279,   278,   277,
     272,   180,   246,     0,     0,   274,   275,   253,   273,   482,
       0,   215,   231,     0,   231,   221,   170,     0,   247,   209,
       0,   191,     0,     0,     0,     0,   201,     0,   206,   207,
     125,   200,   159,     0,     0,   107,     0,   112,   104,   231,
     273,     0,   380,     0,   284,     0,   382,   276,   182,   247,
       0,   381,     0,   381,   222,   273,   125,   193,   137,   149,
       0,   198,   202,   125,   205,     0,     0,   162,   105,   381,
     174,   254,     0,   250,     0,   285,     0,   248,     0,     0,
     288,     0,   273,   232,     0,     0,   388,     0,   387,     0,
       0,   299,     0,   196,   204,   160,     0,     0,    81,    58,
     255,   266,     0,     0,   257,     0,     0,     0,   267,   380,
     283,     0,     0,   249,   380,   172,   125,   389,     0,   385,
     125,   223,     0,   125,   125,     0,   256,   258,   259,   260,
       0,     0,   286,   380,   287,     0,     0,   386,     0,   194,
       0,     0,   268,   262,   263,   265,   261,   289,   224,   381,
     381,   158,   381,   264,     0,   166,   377,   378,   231,   381,
       0,   269,   125,   381,     0,   251,   270
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -731,  -731,   -80,  -731,  -226,  -327,    14,   -32,  -731,  -731,
    -731,   780,  -731,  -731,  -335,   183,   110,   651,   116,  -182,
     495,   666,  -176,  -731,    38,  -731,  -731,  -731,  -731,  -731,
     264,     5,  -731,  -731,    12,  -731,  -731,  -731,   750,    17,
    -731,    20,  -731,  -450,  -731,  -519,   138,  -731,    42,  -731,
    -731,  -569,    43,  -731,  -731,  -731,  -731,  -731,  -615,  -731,
     103,  -731,    16,   164,  -730,   -56,  -731,   242,  -731,   512,
    -731,   510,  -160,  -731,  -634,  -731,  -731,   -31,  -731,  -731,
    -731,  -731,  -731,  -731,  -731,  -731,  -726,  -731,    -7,  -731,
     -37,   531,  -731,   546,  -494,  -731,  -731,  -731,  -731,     4,
      -2,  -241,  -328,  -114,    88,  -731,   -38,  -731,    30,   598,
    -731,  -731,   563,   -19,  -731,    97,    29,  -731,  -731,  -731,
    -731,   157,    64,  -731,  -731,   592,   570,   -99,   572,  -731,
    -731,   426,   568,  -731,  -731,  -731,   286
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   505,   506,   858,     2,    83,    84,    85,   372,
     216,   651,   336,   187,   578,   652,   722,   188,   653,   189,
     190,   177,   219,   377,   378,   644,   649,   813,   716,   347,
     348,   379,   744,   797,   380,   392,   202,    89,    90,   381,
     203,   382,   204,   584,   587,   664,   642,   838,   755,   709,
     647,   711,   810,   636,    93,    94,    95,    96,   688,   689,
     690,   691,   692,   693,   831,   303,   389,   390,   191,   192,
     195,   196,   728,   782,   667,   853,   883,   884,   885,   886,
     887,   888,   943,   783,   784,   785,   786,   823,   824,   859,
     860,   178,   163,   164,   315,   316,   154,   301,    97,    98,
     117,   429,   864,   268,   794,   867,   868,   100,   101,   156,
     161,   221,   304,   102,   103,   104,   173,   105,   106,   107,
     108,   109,   110,   111,   158,   509,   518,   125,   126,   127,
     128,   212,   213,   594,   112,   351,   352
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   153,   331,   291,   328,   141,   141,    87,   116,   118,
     119,   120,   121,   124,    88,   645,   580,   808,   311,    91,
     130,   131,    92,   133,   134,   135,   136,   137,   229,   726,
     145,   146,   147,   148,   149,   150,   151,   325,   159,   299,
      86,   165,   724,   507,   325,   511,   601,  -470,   172,   172,
    -165,   275,   197,   172,   606,   181,  -469,   339,  -430,   827,
     341,   637,   344,   155,   833,   729,   185,   263,   739,   339,
     856,   892,   596,   113,   174,   898,   166,   713,   179,   759,
     760,   218,   705,   346,   246,   247,   248,   194,   215,   849,
     217,   360,   759,   760,   628,   332,     3,   157,   113,   845,
     515,    13,  -189,   141,   386,   576,   358,   359,   129,   697,
     232,   233,   197,   706,  -395,   585,  -190,   193,   846,  -192,
     865,   142,   142,   228,   332,   243,   244,   245,   246,   247,
     248,   332,   332,  -189,   263,   132,   297,   866,   227,   821,
     386,   757,   124,   761,   300,   762,   226,  -190,   182,   183,
    -192,   160,   331,   162,   333,   175,   265,   678,   811,   735,
     176,    47,   113,  -430,   172,   305,   310,   272,    13,   646,
     809,   314,   317,   318,   312,   320,   386,   113,   263,   141,
     167,   143,   144,   563,   925,  -430,    13,   613,   386,   309,
     567,   655,   141,   326,   534,   180,   361,  -430,   330,   558,
     335,   270,  -470,   350,   353,  -165,  -470,   749,   939,   124,
     124,  -469,   597,   340,   365,  -469,   342,    99,   345,   142,
     610,   851,   852,   265,   214,   569,   857,   893,   370,   385,
     899,   153,   391,   113,    13,   516,   113,    13,  -432,   565,
      82,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   265,   426,   427,
     306,   394,   273,   673,   172,   650,   172,   926,   519,   292,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   307,   155,   533,   142,   684,   124,   537,   510,
     124,   514,   541,   334,   308,   113,   274,    82,   142,   172,
     113,   656,   549,   934,   267,   165,   113,   720,   139,   648,
     225,   139,   113,   721,   639,    82,    99,   157,   560,   152,
     207,   332,   220,   508,   546,   512,   640,   517,   168,   113,
     113,    13,   169,  -432,    15,   170,   668,   574,   566,   171,
     207,   198,   684,   571,  -431,   349,   227,   115,   199,    76,
     115,   200,    76,   207,   371,  -432,   545,   276,   366,   201,
     517,   548,   113,    82,  -435,   205,    82,  -432,   206,   207,
     269,   367,   765,   654,  -430,   182,   183,   770,   331,   271,
     227,   604,   228,   207,  -433,   208,   138,   608,    47,   609,
     113,    13,   611,   214,    15,   193,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   265,    55,    56,
     685,   686,   293,   727,   295,   139,   685,   686,   230,   288,
     289,   570,   207,   816,   223,   207,   184,   367,   714,   715,
     115,   296,    76,   641,    65,   207,   115,   367,    76,  -219,
     210,   211,  -435,   616,   302,   698,   746,   618,   700,  -431,
      47,   825,   621,   115,   115,    76,    76,   313,   654,   718,
     210,   211,   140,   324,   723,   321,   685,   686,   322,   590,
      82,  -431,   362,   210,   211,   139,   323,  -271,   327,  -430,
    -434,   591,   592,  -431,   790,   338,   115,   593,    76,   210,
     211,   141,   941,   942,    65,   869,   222,   224,   615,   343,
     354,  -430,   209,   210,   211,   355,   141,   384,   290,   356,
     620,   877,   357,  -430,   115,   373,    76,   696,   234,   235,
     236,   756,   140,   758,   759,   760,   383,   654,   141,   723,
      82,   703,   627,  -471,  -471,   243,   244,   245,   246,   247,
     248,   662,   210,   211,   666,   210,   211,   633,   141,   317,
     638,   791,   386,   396,   368,   210,   211,   805,   759,   760,
     788,   774,   775,   776,   777,   778,   779,   803,   393,   571,
     395,   855,   687,   350,   571,   428,   397,   817,   814,   632,
     538,   542,   635,  -471,  -471,   550,   261,   262,   263,    99,
     672,   935,   936,   553,   937,   751,    87,   555,    99,   391,
     556,   940,   820,    88,   564,   945,   682,   142,    91,   568,
     141,    92,   194,   577,   579,   687,   881,   582,   583,   588,
     124,   666,   142,   586,   844,   894,   589,   595,   835,    86,
     599,   600,   602,   605,   124,   614,  -456,   607,   912,  -458,
     663,   687,   687,   915,   142,   617,   624,   881,   619,   626,
     872,   629,   669,  -434,   571,   571,   659,   874,   657,   862,
     571,    99,   927,   731,   142,   661,   665,   623,    87,   922,
     670,   671,   708,   701,   675,    88,   141,   265,   677,   683,
      91,   704,   625,    92,   710,   712,    99,   787,    99,   933,
     719,   725,   729,   730,   734,   317,   737,   738,   124,   741,
     687,    86,   861,   742,   643,   743,   745,   736,   747,   763,
     916,   769,   771,   750,   918,   764,   772,   920,   921,   796,
     767,   812,   789,   571,   349,   571,   142,   792,   793,   800,
     798,   666,   799,   773,   754,   801,   774,   775,   776,   777,
     778,   779,   780,   773,    99,   802,   774,   775,   776,   777,
     778,   779,   780,   807,   773,   806,   944,   774,   775,   776,
     777,   778,   779,   780,   815,   818,   363,   822,   829,   830,
     369,   832,   826,   571,   834,   841,   842,   854,   363,    99,
     369,   363,   369,   848,   870,   876,   702,   781,   687,   891,
     873,    99,   142,   896,   900,   897,   -77,   828,   903,   905,
     904,   908,    99,   875,   909,   910,   911,   928,   850,   773,
     882,   919,   774,   775,   776,   777,   778,   779,   780,   938,
     924,   768,   186,   717,   572,   766,   319,   337,   837,   231,
     754,   658,    99,   752,   839,   795,   863,   676,   740,   890,
     843,   882,   907,   573,   575,   914,   561,   552,   889,   819,
     917,   425,   643,   513,   544,   660,     0,     0,   539,     0,
      99,     0,    99,   871,   901,     0,   547,     0,     0,   666,
       0,     0,     0,     0,     0,   773,     0,     0,   774,   775,
     776,   777,   778,   779,   780,   913,   687,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,    99,   631,    99,    99,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     6,
       7,     8,     9,     0,    10,    11,    12,    13,    14,   895,
      15,     0,    99,    16,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,     0,    51,     0,     0,
      53,    54,     0,     0,     0,     0,     0,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     115,    75,    76,     0,     0,     0,   634,     0,    77,     0,
      78,    79,     4,     5,    80,    81,    82,     0,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,     0,    15,
       0,     0,    16,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,     0,    40,     0,    41,     0,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,     0,    49,    50,     0,     0,    51,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   115,
      75,    76,     0,     0,     0,   707,     0,    77,     0,    78,
      79,     4,     5,    80,    81,    82,     0,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,     0,    15,     0,
       0,    16,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   115,    75,
      76,     0,     0,     0,   753,     0,    77,     0,    78,    79,
       4,     5,    80,    81,    82,     0,     6,     7,     8,     9,
       0,    10,    11,    12,    13,    14,     0,    15,     0,     0,
      16,    17,    18,    19,    20,     0,     0,     0,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,     0,    51,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   115,    75,    76,
       0,     0,     0,   836,     0,    77,     0,    78,    79,     4,
       5,    80,    81,    82,     0,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,     0,    15,     0,     0,    16,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,     0,    51,     0,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   115,    75,    76,     0,
       0,     0,   398,     0,    77,     0,    78,    79,     4,     5,
      80,    81,    82,     0,     6,     7,     8,     9,     0,    10,
      11,   113,    13,     0,     0,    15,     0,     0,    16,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,   240,
     241,   242,   243,   244,   245,   246,   247,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   115,    75,    76,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,    80,
      81,    82,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   122,     0,     0,     4,     5,     0,     0,
       0,     0,     6,     7,     8,     9,     0,    10,    11,   113,
      13,     0,     0,    15,     0,     0,    16,    17,    18,    19,
      20,     0,     0,     0,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     264,   265,     0,     0,    47,     0,     0,     0,     0,   732,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,   123,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   115,    75,    76,     0,     0,     0,     0,
       0,    77,   520,     0,     0,     4,     5,    80,    81,    82,
       0,     6,     7,     8,     9,     0,    10,    11,   113,    13,
       0,     0,    15,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,   241,   242,   243,   244,
     245,   246,   247,   248,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   115,    75,    76,     0,     0,     0,     0,     0,
      77,   535,     0,     0,     4,     5,    80,    81,    82,     0,
       6,     7,     8,     9,     0,    10,    11,   113,    13,     0,
       0,    15,     0,     0,    16,    17,    18,    19,    20,     0,
     265,     0,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
     536,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   115,    75,    76,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,    80,    81,    82,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,     0,     0,     0,     0,     0,     0,
     249,   250,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,   250,   251,     0,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,     0,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,     0,     0,
       0,     0,     0,     0,   249,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,   250,   251,
       0,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,     0,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,     0,
       0,     0,     0,     0,   598,     0,     0,     0,     0,   264,
     265,     0,     0,     0,     0,     0,     0,   603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,     0,
     264,   265,     0,     0,     0,   249,   250,   251,   622,     0,
       0,     0,     0,   264,   265,     0,     0,     0,   249,   250,
     251,   630,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,     0,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   237,   808,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,     0,     0,     0,     0,     0,     0,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,   250,   251,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,     0,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,     0,     0,     0,     0,     0,   694,
       0,     0,     0,     0,   264,   265,     0,     0,     0,     0,
       0,     0,   695,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,   265,     0,   249,   250,
     251,   809,     0,     0,     0,     0,     0,     0,   264,   265,
       0,     0,     0,     0,   266,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     0,     0,     4,     5,     0,
       0,     0,     0,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,     0,    15,   250,   251,    16,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,     0,     0,
       0,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,   264,   265,     0,    37,    38,    39,
     329,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    50,     0,
       0,    51,    52,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
     264,   265,     0,     0,    74,    75,    76,     0,     0,     0,
       0,     0,    77,     0,    78,    79,   674,     0,    80,    81,
      82,     4,     5,     0,     0,     0,     0,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,     0,    15,     0,
       0,    16,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
      48,    49,    50,     0,     0,    51,    52,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,     0,     0,     0,     0,     0,    77,     0,    78,    79,
     733,     0,    80,    81,    82,     4,     5,     0,     0,     0,
       0,     6,     7,     8,     9,     0,    10,    11,    12,    13,
      14,     0,    15,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,    48,    49,    50,     0,     0,    51,
      52,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,    74,    75,    76,     0,     0,     0,     0,     0,
      77,     0,    78,    79,     4,     5,    80,    81,    82,     0,
       6,     7,     8,     9,     0,    10,    11,    12,    13,    14,
       0,    15,     0,     0,    16,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,     0,     0,    44,
      45,    46,    47,     0,    49,    50,     0,     0,    51,     0,
       0,    53,    54,    55,    56,     0,     0,     0,     0,    57,
      58,    59,   375,    61,    62,    63,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   115,    75,    76,     0,     0,     0,     0,     0,    77,
       0,    78,    79,   376,     0,    80,    81,    82,     4,     5,
       0,     0,     0,     0,     6,     7,     8,     9,     0,    10,
      11,    12,    13,    14,     0,    15,     0,     0,    16,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,     0,    49,    50,
       0,     0,    51,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,    58,    59,   375,    61,    62,    63,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   115,    75,    76,     0,     0,
       0,     0,     0,    77,     0,    78,    79,   562,     0,    80,
      81,    82,     4,     5,     0,     0,     0,     0,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,     0,    15,
       0,     0,    16,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,   681,    37,    38,    39,     0,    40,     0,    41,     0,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,     0,    49,    50,     0,     0,    51,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,    58,    59,
     375,    61,    62,    63,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   115,
      75,    76,     0,     0,     0,     0,     0,    77,     0,    78,
      79,     4,     5,    80,    81,    82,     0,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,     0,    15,     0,
       0,    16,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,   748,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   115,    75,
      76,     0,     0,     0,     0,     0,    77,     0,    78,    79,
       4,     5,    80,    81,    82,     0,     6,     7,     8,     9,
       0,    10,    11,    12,    13,    14,     0,    15,     0,     0,
      16,    17,    18,    19,    20,     0,     0,     0,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
      37,    38,    39,     0,    40,     0,    41,     0,    42,   804,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,     0,    51,     0,     0,    53,    54,    55,
      56,     0,     0,     0,     0,    57,    58,    59,   375,    61,
      62,    63,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   115,    75,    76,
       0,     0,     0,     0,     0,    77,     0,    78,    79,     4,
       5,    80,    81,    82,     0,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,     0,    15,     0,     0,    16,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,    40,     0,    41,   840,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,     0,    51,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   115,    75,    76,     0,
       0,     0,     0,     0,    77,     0,    78,    79,     4,     5,
      80,    81,    82,     0,     6,     7,     8,     9,     0,    10,
      11,    12,    13,    14,     0,    15,     0,     0,    16,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,     0,    49,    50,
       0,     0,    51,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,    58,    59,   375,    61,    62,    63,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   115,    75,    76,     0,     0,
       0,     0,     0,    77,     0,    78,    79,   847,     0,    80,
      81,    82,     4,     5,     0,     0,     0,     0,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,     0,    15,
       0,     0,    16,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,     0,    40,   902,    41,     0,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,     0,    49,    50,     0,     0,    51,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,    58,    59,
     375,    61,    62,    63,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   115,
      75,    76,     0,     0,     0,     0,     0,    77,     0,    78,
      79,     4,     5,    80,    81,    82,     0,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,     0,    15,     0,
       0,    16,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   115,    75,
      76,     0,     0,     0,     0,     0,    77,     0,    78,    79,
     929,     0,    80,    81,    82,     4,     5,     0,     0,     0,
       0,     6,     7,     8,     9,     0,    10,    11,    12,    13,
      14,     0,    15,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,     0,    51,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,    58,    59,   375,    61,    62,    63,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   115,    75,    76,     0,     0,     0,     0,     0,
      77,     0,    78,    79,   930,     0,    80,    81,    82,     4,
       5,     0,     0,     0,     0,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,     0,    15,     0,     0,    16,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,     0,    51,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   115,    75,    76,     0,
       0,     0,     0,     0,    77,     0,    78,    79,   931,     0,
      80,    81,    82,     4,     5,     0,     0,     0,     0,     6,
       7,     8,     9,     0,    10,    11,    12,    13,    14,     0,
      15,     0,     0,    16,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,     0,    51,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     115,    75,    76,     0,     0,     0,     0,     0,    77,     0,
      78,    79,   932,     0,    80,    81,    82,     4,     5,     0,
       0,     0,     0,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,     0,    15,     0,     0,    16,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
       0,    51,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,    58,    59,   375,    61,    62,    63,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   115,    75,    76,     0,     0,     0,
       0,     0,    77,     0,    78,    79,   946,     0,    80,    81,
      82,     4,     5,     0,     0,     0,     0,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,     0,    15,     0,
       0,    16,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   115,    75,
      76,     0,     0,     0,     0,     0,    77,     0,    78,    79,
       4,     5,    80,    81,    82,     0,     6,     7,     8,     9,
       0,    10,    11,    12,    13,    14,     0,    15,     0,     0,
      16,    17,    18,    19,    20,     0,     0,     0,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,     0,    51,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   115,    75,    76,
       0,     0,     0,     0,     0,    77,     0,    78,    79,     4,
       5,    80,    81,    82,     0,     6,     7,     8,     9,     0,
      10,    11,   113,    13,     0,     0,    15,     0,     0,    16,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
     241,   242,   243,   244,   245,   246,   247,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -471,  -471,  -471,  -471,
     258,   259,  -471,   261,   262,   263,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,     0,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   115,    75,    76,   387,
       0,     0,     0,     0,    77,   388,     0,     4,     5,     0,
      80,    81,    82,     6,     7,     8,     9,     0,    10,    11,
     113,    13,     0,     0,    15,   364,     0,    16,    17,    18,
      19,    20,     0,     0,   265,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   115,    75,    76,     0,     0,     0,
       0,     0,    77,     0,     0,     4,     5,     0,    80,    81,
      82,     6,     7,     8,     9,     0,    10,    11,   113,    13,
       0,     0,    15,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   115,    75,    76,   387,     0,     0,     0,     0,
      77,     0,     0,     4,     5,     0,    80,    81,    82,     6,
       7,     8,     9,     0,    10,    11,   113,    13,     0,     0,
      15,     0,     0,    16,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     115,    75,    76,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,    80,    81,    82,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,     0,     0,     0,     0,     0,     0,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,   250,   251,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,     0,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,     0,     0,     0,
       0,     0,     0,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,   250,   251,     0,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,     0,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,     0,     0,
     374,     0,     0,     0,     0,     0,     0,     0,   264,   265,
       0,     0,     0,   540,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     0,     0,     0,     0,   264,
     265,   249,   250,   251,   543,     0,     0,     0,     0,     0,
       0,     0,   264,   265,   249,   250,   251,   551,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
       0,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,     0,
       0,     0,     0,     0,     0,   249,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,   250,
     251,     0,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,     0,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
       0,     0,   554,     0,     0,     0,     0,     0,     0,     0,
     264,   265,     0,     0,     0,   559,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,     0,     0,     0,
       0,   264,   265,   249,   250,   251,   581,     0,     0,     0,
       0,     0,     0,     0,   264,   265,   249,   250,   251,   679,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,     0,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,     0,     0,     0,     0,     0,     0,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,   250,   251,     0,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,     0,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,     0,     0,   680,     0,     0,     0,     0,     0,
       0,     0,   264,   265,     0,     0,     0,   699,     0,     0,
       0,     0,     0,     0,     0,   557,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   294,   237,   612,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   264,   265,     0,     0,     0,     0,     0,
     249,   250,   251,     0,     0,     0,   264,   265,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     0,     0,     0,     0,     0,
       0,   249,   250,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
       0,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   264,   265,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,     0,
       0,     0,     0,     0,     0,     0,     0,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   298,     0,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     264,   265,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,     0,     0,
       0,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   265,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,     0,   264,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   264,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   430,    13,     0,     0,     0,     0,     0,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
       0,     0,   265,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,     0,   487,
     488,   489,   490,   491,     0,     0,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   502,   503,     0,
       0,     0,     0,     0,     0,     0,     0,   878,   504,     0,
       0,     0,     0,    82,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,     0,   487,   488,   489,   490,   491,     0,     0,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   879,   503,    76,     0,     0,     0,   878,     0,     0,
       0,     0,     0,   880,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,     0,   487,   488,   489,   490,   491,     0,     0,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   879,   503,    76,     0,     0,     0,   430,     0,     0,
       0,     0,     0,   906,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,     0,   487,   488,   489,   490,   491,     0,     0,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   502,   503,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   774,   775,   776,   777,   778,   779,   483,   484,   485,
     486,     0,   487,   488,   489,   490,   491,     0,     0,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     502,   503
};

static const yytype_int16 yycheck[] =
{
       2,    33,   184,   117,   180,    24,    25,     2,     4,     5,
       6,     7,     8,     9,     2,     6,   351,     6,     3,     2,
      16,    17,     2,    19,    20,    21,    22,    23,    84,   663,
      26,    27,    28,    29,    30,    31,    32,     3,    34,   138,
       2,    37,   657,   269,     3,   271,   373,     3,    44,    45,
       3,   107,    54,    49,   389,    51,     3,     3,    21,   785,
       3,   555,     3,    33,   794,     3,    52,    65,   683,     3,
       3,     3,    21,    25,    45,     3,    38,   646,    49,    95,
      96,    77,   127,   197,    15,    16,    17,    26,    74,   819,
      76,    21,    95,    96,   544,    92,     0,    33,    25,     7,
      25,    26,   127,   122,    25,   346,   205,   206,     6,   628,
      79,    80,   114,   158,   148,   356,   127,    53,    26,   127,
       9,    24,    25,   157,    92,    12,    13,    14,    15,    16,
      17,    92,    92,   158,    65,   157,   132,    26,   151,   773,
      25,   710,   138,   712,   140,   161,    82,   158,   100,   101,
     158,   157,   334,   157,   151,    25,   154,   607,   161,   678,
      25,   100,    25,   126,   160,    21,   162,    21,    26,   160,
     159,   167,   168,   169,   159,   171,    25,    25,    65,   198,
     157,    24,    25,   151,   910,   148,    26,   428,    25,   160,
     151,   151,   211,   159,   293,   160,   126,   160,   184,   158,
     186,    21,   158,   199,   200,   158,   162,   701,   938,   205,
     206,   158,   161,   159,   210,   162,   159,   219,   159,   122,
     396,   159,   160,   154,   151,   159,   159,   159,   214,   225,
     158,   263,   228,    25,    26,   160,    25,    26,    21,   160,
     165,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   154,   264,   265,
     126,   233,   126,   600,   270,   160,   272,   911,   274,   122,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   148,   263,   290,   198,     5,   293,   294,   270,
     296,   272,   298,   151,   160,    25,   160,   165,   211,   305,
      25,   160,   308,   928,     9,   311,    25,   652,   110,   560,
     160,   110,    25,   160,     9,   165,   328,   263,   324,   121,
      26,    92,    28,   269,   305,   271,    21,   273,   157,    25,
      25,    26,   157,   126,    29,   157,   587,   343,   334,   157,
      26,   157,     5,   339,    21,   198,   151,   149,   157,   151,
     149,   157,   151,    26,   159,   148,   302,     4,   211,   157,
     306,   307,    25,   165,   157,   157,   165,   160,   157,    26,
     148,    28,   717,   565,    21,   100,   101,   722,   570,   148,
     151,   387,   157,    26,   157,    28,    21,   393,   100,   395,
      25,    26,   398,   151,    29,   341,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   154,   111,   112,
     129,   130,   157,   664,   162,   110,   129,   130,   121,    66,
      67,   151,    26,   768,    28,    26,   151,    28,   104,   105,
     149,     3,   151,   128,   129,    26,   149,    28,   151,   158,
     146,   147,   157,   509,   148,   631,   697,   513,   634,   126,
     100,   101,   518,   149,   149,   151,   151,    84,   650,   651,
     146,   147,   157,     4,   656,   159,   129,   130,   159,    13,
     165,   148,   145,   146,   147,   110,   159,    26,   159,   126,
     157,    25,    26,   160,   735,   159,   149,    31,   151,   146,
     147,   520,   159,   160,   129,   833,    80,    81,   504,     4,
     158,   148,   145,   146,   147,    25,   535,   164,   155,    25,
     516,   849,    25,   160,   149,   160,   151,   626,    79,    80,
      81,   707,   157,    94,    95,    96,   163,   719,   557,   721,
     165,   640,   538,    10,    11,    12,    13,    14,    15,    16,
      17,   583,   146,   147,   586,   146,   147,   553,   577,   555,
     556,   737,    25,     6,   145,   146,   147,    94,    95,    96,
     730,   110,   111,   112,   113,   114,   115,   753,   157,   565,
     157,   822,   614,   579,   570,    25,   159,   769,   764,   551,
       4,   162,   554,    60,    61,   158,    63,    64,    65,   601,
     596,   929,   930,   157,   932,   704,   601,   159,   610,   605,
       3,   939,   772,   601,    25,   943,   612,   520,   601,   159,
     639,   601,    26,     3,     3,   657,   852,   159,   124,   158,
     626,   663,   535,   124,   810,   861,   158,    25,   798,   601,
     161,   160,   157,     3,   640,   157,   157,    25,   889,   157,
     125,   683,   684,   894,   557,   162,   158,   883,   162,   157,
     836,   162,     4,   157,   650,   651,   158,   843,   157,   829,
     656,   673,   913,   669,   577,   158,   160,   520,   673,   905,
      31,   162,   644,   159,   158,   673,   705,   154,   158,   157,
     673,   157,   535,   673,   159,   159,   698,   729,   700,   925,
       3,   159,     3,   160,   159,   701,     6,   159,   704,   158,
     742,   673,   826,     3,   557,     9,   158,   679,   159,   157,
     896,     3,   158,   162,   900,   160,   160,   903,   904,   152,
     161,   763,   161,   719,   577,   721,   639,   158,   107,   158,
     160,   773,   159,   107,   706,   158,   110,   111,   112,   113,
     114,   115,   116,   107,   756,   158,   110,   111,   112,   113,
     114,   115,   116,   759,   107,   159,   942,   110,   111,   112,
     113,   114,   115,   116,   161,   161,   208,    26,   160,     6,
     212,   157,   784,   769,    26,   159,   159,     4,   220,   791,
     222,   223,   224,   161,     4,   158,   639,   161,   830,     4,
     159,   803,   705,   160,   160,    26,    92,   161,   160,   148,
     160,   159,   814,   845,   159,    92,   108,   157,   161,   107,
     852,   159,   110,   111,   112,   113,   114,   115,   116,   158,
     910,   721,    52,   650,   339,   719,   170,   186,   800,    89,
     802,   577,   844,   705,   802,   742,   830,   605,   684,   856,
     807,   883,   883,   341,   344,   892,   325,   311,   854,   771,
     898,   263,   705,   271,   301,   579,    -1,    -1,   296,    -1,
     872,    -1,   874,   161,   870,    -1,   306,    -1,    -1,   911,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   891,   928,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   916,    -1,   918,     6,   920,   921,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,   161,
      29,    -1,   944,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,   102,   103,    -1,    -1,   106,    -1,    -1,
     109,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,   131,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
     149,   150,   151,    -1,    -1,    -1,     6,    -1,   157,    -1,
     159,   160,    12,    13,   163,   164,   165,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,    -1,     6,    -1,   157,    -1,   159,
     160,    12,    13,   163,   164,   165,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,     6,    -1,   157,    -1,   159,   160,
      12,    13,   163,   164,   165,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
     102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,
      -1,    -1,    -1,     6,    -1,   157,    -1,   159,   160,    12,
      13,   163,   164,   165,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,
     103,    -1,    -1,   106,    -1,    -1,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,
      -1,    -1,     6,    -1,   157,    -1,   159,   160,    12,    13,
     163,   164,   165,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    -1,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,   163,
     164,   165,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,   154,    -1,    -1,   100,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,   157,     9,    -1,    -1,    12,    13,   163,   164,   165,
      -1,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,     9,    -1,    -1,    12,    13,   163,   164,   165,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    -1,
      -1,    29,    -1,    -1,    32,    33,    34,    35,    36,    -1,
     154,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   153,   154,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,   153,
     154,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
     153,   154,    -1,    -1,    -1,    37,    38,    39,   161,    -1,
      -1,    -1,    -1,   153,   154,    -1,    -1,    -1,    37,    38,
      39,   161,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,   153,   154,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,   154,    -1,    37,    38,
      39,   159,    -1,    -1,    -1,    -1,    -1,    -1,   153,   154,
      -1,    -1,    -1,    -1,   159,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    -1,    29,    38,    39,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   153,   154,    -1,    82,    83,    84,
     159,    86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,   106,   107,    -1,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     153,   154,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,   164,
     165,    12,    13,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,   106,   107,    -1,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    82,    83,    84,    -1,    86,
      -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,   106,
     107,    -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,    -1,   159,   160,    12,    13,   163,   164,   165,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,   102,   103,    -1,    -1,   106,    -1,
      -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,
      -1,   159,   160,   161,    -1,   163,   164,   165,    12,    13,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,   103,
      -1,    -1,   106,    -1,    -1,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,
     164,   165,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,
     160,    12,    13,   163,   164,   165,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    -1,    88,    -1,    90,
      -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,
      12,    13,   163,   164,   165,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
     102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,    12,
      13,   163,   164,   165,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,
     103,    -1,    -1,   106,    -1,    -1,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,   157,    -1,   159,   160,    12,    13,
     163,   164,   165,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,   103,
      -1,    -1,   106,    -1,    -1,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,
     164,   165,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    -1,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,
     160,    12,    13,   163,   164,   165,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    82,    83,    84,    -1,    86,
      -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,    -1,   102,   103,    -1,    -1,   106,
      -1,    -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,    -1,   159,   160,   161,    -1,   163,   164,   165,    12,
      13,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,
     103,    -1,    -1,   106,    -1,    -1,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,   157,    -1,   159,   160,   161,    -1,
     163,   164,   165,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,   102,   103,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,    -1,    -1,   128,
     129,    -1,   131,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,    -1,
     159,   160,   161,    -1,   163,   164,   165,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,   102,   103,    -1,
      -1,   106,    -1,    -1,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,   164,
     165,    12,    13,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,   102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,
      12,    13,   163,   164,   165,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
     102,   103,    -1,    -1,   106,    -1,    -1,   109,   110,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,    12,
      13,   163,   164,   165,    -1,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,   157,   158,    -1,    12,    13,    -1,
     163,   164,   165,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    -1,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    -1,    -1,   154,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    12,    13,    -1,   163,   164,
     165,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,   152,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    12,    13,    -1,   163,   164,   165,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,   131,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   153,   154,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   154,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,   153,
     154,    37,    38,    39,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,   154,    37,    38,    39,   158,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   153,   154,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,   154,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,   153,   154,    37,    38,    39,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,   154,    37,    38,    39,   158,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   153,
     154,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,   153,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   153,   154,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   127,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   153,   154,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
     153,   154,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,   153,   154,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   154,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,   153,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   160,    -1,
      -1,    -1,    -1,   165,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,   161,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,   151,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,   161,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,   149,   150,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   167,   171,     0,    12,    13,    18,    19,    20,    21,
      23,    24,    25,    26,    27,    29,    32,    33,    34,    35,
      36,    40,    41,    42,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    82,    83,    84,
      86,    88,    90,    93,    97,    98,    99,   100,   101,   102,
     103,   106,   107,   109,   110,   111,   112,   117,   118,   119,
     120,   121,   122,   123,   128,   129,   131,   132,   133,   134,
     135,   136,   137,   144,   149,   150,   151,   157,   159,   160,
     163,   164,   165,   172,   173,   174,   190,   197,   200,   203,
     204,   205,   207,   220,   221,   222,   223,   264,   265,   266,
     273,   274,   279,   280,   281,   283,   284,   285,   286,   287,
     288,   289,   300,    25,   110,   149,   265,   266,   265,   265,
     265,   265,     9,   128,   265,   293,   294,   295,   296,     6,
     265,   265,   157,   265,   265,   265,   265,   265,    21,   110,
     157,   279,   281,   287,   287,   265,   265,   265,   265,   265,
     265,   265,   121,   173,   262,   274,   275,   288,   290,   265,
     157,   276,   157,   258,   259,   265,   190,   157,   157,   157,
     157,   157,   265,   282,   282,    25,    25,   187,   257,   282,
     160,   265,   100,   101,   151,   172,   177,   179,   183,   185,
     186,   234,   235,   288,    26,   236,   237,   266,   157,   157,
     157,   157,   202,   206,   208,   157,   157,    26,    28,   145,
     146,   147,   297,   298,   151,   172,   176,   172,   265,   188,
      28,   277,   297,    28,   297,   160,   288,   151,   157,   231,
     121,   204,    79,    80,    79,    80,    81,     5,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    37,
      38,    39,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   153,   154,   159,     9,   269,   148,
      21,   148,    21,   126,   160,   231,     4,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    66,    67,
     155,   269,   287,   157,   127,   162,     3,   265,   127,   293,
     265,   263,   148,   231,   278,    21,   126,   148,   160,   282,
     265,     3,   159,    84,   265,   260,   261,   265,   265,   187,
     265,   159,   159,   159,     4,     3,   159,   159,   188,   159,
     172,   185,    92,   151,   151,   172,   178,   183,   159,     3,
     159,     3,   159,     4,     3,   159,   269,   195,   196,   287,
     265,   301,   302,   265,   158,    25,    25,    25,   293,   293,
      21,   126,   145,   298,    30,   265,   287,    28,   145,   298,
     172,   159,   175,   160,   158,   120,   161,   189,   190,   197,
     200,   205,   207,   163,   164,   265,    25,   152,   158,   232,
     233,   265,   201,   157,   190,   157,     6,   159,     6,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   275,   265,   265,    25,   267,
      25,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    65,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   121,   122,   123,
     124,   125,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   149,   150,   160,   168,   169,   170,   288,   291,
     282,   170,   288,   291,   282,    25,   160,   288,   292,   265,
       9,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   293,     9,   128,   265,     4,   294,
     158,   265,   162,   158,   278,   288,   282,   292,   288,   265,
     158,   158,   259,   157,   158,   159,     3,    92,   158,   158,
     265,   257,   161,   151,    25,   160,   172,   151,   159,   159,
     151,   172,   186,   235,   265,   237,   267,     3,   180,     3,
     180,   158,   159,   124,   209,   267,   124,   210,   158,   158,
      13,    25,    26,    31,   299,    25,    21,   161,   161,   161,
     160,   171,   157,   161,   265,     3,   180,    25,   265,   265,
     188,   265,     6,   267,   157,   265,   231,   162,   231,   162,
     265,   231,   161,   287,   158,   287,   157,   265,   209,   162,
     161,     6,   190,   265,     6,   190,   219,   260,   265,     9,
      21,   128,   212,   287,   191,     6,   160,   216,   267,   192,
     160,   177,   181,   184,   185,   151,   160,   157,   196,   158,
     302,   158,   173,   125,   211,   160,   173,   240,   267,     4,
      31,   162,   265,   171,   161,   158,   233,   158,   209,   158,
     158,    81,   265,   157,     5,   129,   130,   173,   224,   225,
     226,   227,   228,   229,   161,   161,   293,   211,   188,   158,
     188,   159,   287,   293,   157,   127,   158,     6,   190,   215,
     159,   217,   159,   217,   104,   105,   194,   181,   185,     3,
     180,   160,   182,   185,   224,   159,   240,   267,   238,     3,
     160,   265,   162,   161,   159,   211,   190,     6,   159,   224,
     229,   158,     3,     9,   198,   158,   267,   159,    85,   260,
     162,   293,   212,     6,   190,   214,   188,   217,    94,    95,
      96,   217,   161,   157,   160,   180,   184,   161,   182,     3,
     180,   158,   160,   107,   110,   111,   112,   113,   114,   115,
     116,   161,   239,   249,   250,   251,   252,   173,   238,   161,
     267,   188,   158,   107,   270,   226,   152,   199,   160,   159,
     158,   158,   158,   188,    91,    94,   159,   265,     6,   159,
     218,   161,   173,   193,   188,   161,   180,   185,   161,   270,
     238,   240,    26,   253,   254,   101,   266,   252,   161,   160,
       6,   230,   157,   230,    26,   238,     6,   190,   213,   214,
      89,   159,   159,   218,   188,     7,    26,   161,   161,   230,
     161,   159,   160,   241,     4,   267,     3,   159,   170,   255,
     256,   269,   238,   228,   268,     9,    26,   271,   272,   268,
       4,   161,   188,   159,   188,   173,   158,   268,    25,   149,
     161,   170,   173,   242,   243,   244,   245,   246,   247,   265,
     254,     4,     3,   159,   170,   161,   160,    26,     3,   158,
     160,   265,    87,   160,   160,   148,   161,   243,   159,   159,
      92,   108,   267,   265,   256,   267,   188,   272,   188,   159,
     188,   188,   170,    25,   168,   252,   240,   267,   157,   161,
     161,   161,   161,   170,   224,   268,   268,   268,   158,   230,
     268,   159,   160,   248,   188,   268,   161
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   166,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   175,   174,   176,   174,   174,   174,   174,
     174,   174,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   189,   189,   189,
     189,   189,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     191,   190,   190,   190,   190,   190,   190,   192,   192,   193,
     193,   194,   194,   195,   195,   196,   197,   198,   198,   199,
     199,   201,   200,   202,   200,   203,   203,   204,   204,   206,
     205,   208,   207,   209,   209,   210,   210,   211,   211,   212,
     212,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   216,   216,   217,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   228,   229,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     234,   235,   236,   236,   237,   237,   238,   238,   239,   239,
     239,   239,   240,   240,   241,   241,   241,   242,   242,   243,
     243,   244,   245,   245,   245,   245,   246,   246,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   252,   252,   252,
     252,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     257,   258,   258,   259,   260,   260,   261,   261,   263,   262,
     264,   264,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   266,
     267,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     273,   273,   273,   273,   274,   274,   275,   275,   276,   276,
     277,   277,   277,   278,   278,   279,   279,   279,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   281,   281,   281,   282,   282,   283,
     284,   284,   284,   285,   285,   285,   286,   286,   286,   286,
     286,   286,   287,   287,   287,   288,   288,   288,   289,   289,
     290,   290,   290,   290,   290,   290,   291,   291,   291,   292,
     292,   292,   293,   294,   294,   295,   295,   296,   296,   296,
     296,   296,   296,   297,   297,   297,   297,   298,   298,   298,
     298,   298,   298,   298,   299,   299,   299,   299,   300,   300,
     300,   300,   300,   300,   300,   301,   301,   302
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     3,
       4,     3,     1,     1,     6,     7,     6,     7,     0,     1,
       3,     1,     3,     1,     3,     1,     1,     2,     1,     3,
       1,     2,     3,     1,     2,     0,     1,     1,     1,     1,
       1,     4,     3,     1,     1,     5,     7,     9,     5,     3,
       3,     3,     3,     3,     3,     1,     2,     6,     7,     9,
       0,     6,     1,     6,     3,     3,     2,     0,     9,     1,
       3,     0,     4,     1,     3,     1,    13,     0,     1,     0,
       1,     0,    10,     0,     9,     1,     2,     1,     1,     0,
       7,     0,     8,     0,     2,     0,     2,     0,     2,     1,
       2,     4,     3,     1,     4,     1,     4,     1,     4,     3,
       4,     4,     5,     0,     5,     4,     1,     1,     1,     4,
       5,     6,     1,     3,     6,     7,     3,     6,     1,     0,
       1,     3,     4,     6,     0,     1,     1,     2,     1,     1,
       1,     0,     2,     2,     4,     1,     3,     1,     2,     3,
       1,     1,     3,     1,     1,     3,     2,     0,     3,     4,
       3,    12,     1,     3,     1,     2,     3,     1,     2,     2,
       2,     3,     3,     3,     4,     3,     1,     1,     3,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     4,     3,     1,     4,
       4,     3,     1,     1,     0,     1,     3,     1,     0,     9,
       3,     2,     1,     6,     5,     3,     4,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     5,     4,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     1,     2,     4,     2,    13,    14,     1,
       0,     0,     0,     1,     0,     4,     3,     1,     1,     2,
       2,     4,     4,     2,     1,     1,     1,     1,     0,     3,
       0,     1,     1,     0,     1,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     3,     1,     1,     1,     3,     3,     0,     1,     1,
       1,     3,     1,     1,     3,     1,     1,     4,     4,     4,
       4,     1,     1,     1,     3,     1,     4,     2,     3,     3,
       1,     4,     4,     3,     3,     3,     1,     3,     1,     1,
       3,     1,     1,     0,     1,     3,     1,     3,     1,     4,
       2,     6,     4,     2,     2,     1,     2,     1,     4,     3,
       3,     3,     6,     3,     1,     1,     2,     1,     5,     4,
       2,     2,     4,     2,     2,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_T_LNUMBER: /* "integer number (T_LNUMBER)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3257 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_DNUMBER: /* "floating-point number (T_DNUMBER)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3263 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_STRING: /* "identifier (T_STRING)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3269 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_VARIABLE: /* "variable (T_VARIABLE)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3275 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_INLINE_HTML: /* T_INLINE_HTML  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3281 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_ENCAPSED_AND_WHITESPACE: /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3287 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_CONSTANT_ENCAPSED_STRING: /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3293 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_STRING_VARNAME: /* "variable name (T_STRING_VARNAME)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3299 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_NUM_STRING: /* "number (T_NUM_STRING)"  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3305 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3311 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_top_statement_list: /* top_statement_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3317 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_namespace_name: /* namespace_name  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3323 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_name: /* name  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3329 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_top_statement: /* top_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3335 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_group_use_declaration: /* group_use_declaration  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3341 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_mixed_group_use_declaration: /* mixed_group_use_declaration  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3347 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inline_use_declarations: /* inline_use_declarations  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3353 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unprefixed_use_declarations: /* unprefixed_use_declarations  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3359 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_use_declarations: /* use_declarations  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3365 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inline_use_declaration: /* inline_use_declaration  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3371 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unprefixed_use_declaration: /* unprefixed_use_declaration  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3377 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_use_declaration: /* use_declaration  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3383 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_const_list: /* const_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3389 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inner_statement_list: /* inner_statement_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3395 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inner_statement: /* inner_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3401 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3407 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_catch_list: /* catch_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3413 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_catch_name_list: /* catch_name_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3419 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_finally_statement: /* finally_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3425 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unset_variables: /* unset_variables  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3431 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unset_variable: /* unset_variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3437 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_function_declaration_statement: /* function_declaration_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3443 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_declaration_statement: /* class_declaration_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3449 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_declaration_statement: /* trait_declaration_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3455 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_interface_declaration_statement: /* interface_declaration_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3461 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_extends_from: /* extends_from  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3467 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_interface_extends_list: /* interface_extends_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3473 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_implements_list: /* implements_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3479 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_foreach_variable: /* foreach_variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3485 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_for_statement: /* for_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3491 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_foreach_statement: /* foreach_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3497 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_declare_statement: /* declare_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3503 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_switch_case_list: /* switch_case_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3509 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3515 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_while_statement: /* while_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3521 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_if_stmt_without_else: /* if_stmt_without_else  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3527 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_if_stmt: /* if_stmt  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3533 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_alt_if_stmt_without_else: /* alt_if_stmt_without_else  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3539 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_alt_if_stmt: /* alt_if_stmt  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3545 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_parameter_list: /* parameter_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3551 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_parameter_list: /* non_empty_parameter_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3557 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_parameter: /* parameter  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3563 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_optional_type: /* optional_type  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3569 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_type_expr: /* type_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3575 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_type: /* type  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3581 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_return_type: /* return_type  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3587 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_argument_list: /* argument_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3593 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_argument_list: /* non_empty_argument_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3599 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_argument: /* argument  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3605 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_global_var_list: /* global_var_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3611 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_global_var: /* global_var  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3617 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_static_var_list: /* static_var_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3623 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_static_var: /* static_var  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3629 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_statement_list: /* class_statement_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3635 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_statement: /* class_statement  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3641 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_name_list: /* name_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3647 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_adaptations: /* trait_adaptations  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3653 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_adaptation_list: /* trait_adaptation_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3659 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_adaptation: /* trait_adaptation  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3665 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_precedence: /* trait_precedence  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3671 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_alias: /* trait_alias  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3677 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_method_reference: /* trait_method_reference  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3683 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_absolute_trait_method_reference: /* absolute_trait_method_reference  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3689 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_method_body: /* method_body  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3695 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_property_list: /* property_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3701 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_property: /* property  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3707 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_const_list: /* class_const_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3713 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_const_decl: /* class_const_decl  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3719 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_const_decl: /* const_decl  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3725 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_echo_expr_list: /* echo_expr_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3731 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_echo_expr: /* echo_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3737 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_for_exprs: /* for_exprs  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3743 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_for_exprs: /* non_empty_for_exprs  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3749 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_anonymous_class: /* anonymous_class  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3755 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_new_expr: /* new_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3761 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3767 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_backup_doc_comment: /* backup_doc_comment  */
#line 52 "/root/php-src/Zend/zend_language_parser.y"
            { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }
#line 3773 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_lexical_vars: /* lexical_vars  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3779 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_lexical_var_list: /* lexical_var_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3785 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_lexical_var: /* lexical_var  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3791 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_function_call: /* function_call  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3797 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_name: /* class_name  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3803 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_name_reference: /* class_name_reference  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3809 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_exit_expr: /* exit_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3815 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_backticks_expr: /* backticks_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3821 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_ctor_arguments: /* ctor_arguments  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3827 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_dereferencable_scalar: /* dereferencable_scalar  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3833 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_scalar: /* scalar  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3839 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_constant: /* constant  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3845 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_optional_expr: /* optional_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3851 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_variable_class_name: /* variable_class_name  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3857 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_dereferencable: /* dereferencable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3863 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_callable_expr: /* callable_expr  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3869 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_callable_variable: /* callable_variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3875 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_variable: /* variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3881 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_simple_variable: /* simple_variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3887 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_static_member: /* static_member  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3893 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_new_variable: /* new_variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3899 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_member_name: /* member_name  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3905 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_property_name: /* property_name  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3911 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_array_pair_list: /* array_pair_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3917 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_possible_array_pair: /* possible_array_pair  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3923 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_array_pair_list: /* non_empty_array_pair_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3929 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_array_pair: /* array_pair  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3935 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_encaps_list: /* encaps_list  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3941 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_encaps_var: /* encaps_var  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3947 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_encaps_var_offset: /* encaps_var_offset  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3953 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_internal_functions_in_yacc: /* internal_functions_in_yacc  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3959 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_isset_variables: /* isset_variables  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3965 "/root/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_isset_variable: /* isset_variable  */
#line 51 "/root/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3971 "/root/php-src/Zend/zend_language_parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval);
    }

  if (yychar <= END)
    {
      yychar = END;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: top_statement_list  */
#line 265 "/root/php-src/Zend/zend_language_parser.y"
                                { CG(ast) = (yyvsp[0].ast); }
#line 4247 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 77: /* identifier: "identifier (T_STRING)"  */
#line 284 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 4253 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 78: /* identifier: semi_reserved  */
#line 285 "/root/php-src/Zend/zend_language_parser.y"
                               {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 4263 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 79: /* top_statement_list: top_statement_list top_statement  */
#line 293 "/root/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4269 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 80: /* top_statement_list: %empty  */
#line 294 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4275 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 81: /* namespace_name: "identifier (T_STRING)"  */
#line 298 "/root/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4281 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 82: /* namespace_name: namespace_name "\\ (T_NS_SEPARATOR)" "identifier (T_STRING)"  */
#line 299 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_append_str((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4287 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 83: /* name: namespace_name  */
#line 303 "/root/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4293 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 84: /* name: "namespace (T_NAMESPACE)" "\\ (T_NS_SEPARATOR)" namespace_name  */
#line 304 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
#line 4299 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 85: /* name: "\\ (T_NS_SEPARATOR)" namespace_name  */
#line 305 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
#line 4305 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 86: /* top_statement: statement  */
#line 309 "/root/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4311 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 87: /* top_statement: function_declaration_statement  */
#line 310 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4317 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 88: /* top_statement: class_declaration_statement  */
#line 311 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4323 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 89: /* top_statement: trait_declaration_statement  */
#line 312 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4329 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 90: /* top_statement: interface_declaration_statement  */
#line 313 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4335 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 91: /* top_statement: "__halt_compiler (T_HALT_COMPILER)" '(' ')' ';'  */
#line 315 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
#line 4343 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 92: /* top_statement: "namespace (T_NAMESPACE)" namespace_name ';'  */
#line 319 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }
#line 4350 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 93: /* $@1: %empty  */
#line 321 "/root/php-src/Zend/zend_language_parser.y"
                                           { RESET_DOC_COMMENT(); }
#line 4356 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 94: /* top_statement: "namespace (T_NAMESPACE)" namespace_name $@1 '{' top_statement_list '}'  */
#line 323 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4362 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 95: /* $@2: %empty  */
#line 324 "/root/php-src/Zend/zend_language_parser.y"
                            { RESET_DOC_COMMENT(); }
#line 4368 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 96: /* top_statement: "namespace (T_NAMESPACE)" $@2 '{' top_statement_list '}'  */
#line 326 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }
#line 4374 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 97: /* top_statement: "use (T_USE)" mixed_group_use_declaration ';'  */
#line 327 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4380 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 98: /* top_statement: "use (T_USE)" use_type group_use_declaration ';'  */
#line 328 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4386 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 99: /* top_statement: "use (T_USE)" use_declarations ';'  */
#line 329 "/root/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 4392 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 100: /* top_statement: "use (T_USE)" use_type use_declarations ';'  */
#line 330 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4398 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 101: /* top_statement: "const (T_CONST)" const_list ';'  */
#line 331 "/root/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4404 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 102: /* use_type: "function (T_FUNCTION)"  */
#line 335 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_SYMBOL_FUNCTION; }
#line 4410 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 103: /* use_type: "const (T_CONST)"  */
#line 336 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_SYMBOL_CONST; }
#line 4416 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 104: /* group_use_declaration: namespace_name "\\ (T_NS_SEPARATOR)" '{' unprefixed_use_declarations possible_comma '}'  */
#line 341 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 4422 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 105: /* group_use_declaration: "\\ (T_NS_SEPARATOR)" namespace_name "\\ (T_NS_SEPARATOR)" '{' unprefixed_use_declarations possible_comma '}'  */
#line 343 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 4428 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 106: /* mixed_group_use_declaration: namespace_name "\\ (T_NS_SEPARATOR)" '{' inline_use_declarations possible_comma '}'  */
#line 348 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}
#line 4434 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 107: /* mixed_group_use_declaration: "\\ (T_NS_SEPARATOR)" namespace_name "\\ (T_NS_SEPARATOR)" '{' inline_use_declarations possible_comma '}'  */
#line 350 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 4440 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 110: /* inline_use_declarations: inline_use_declarations ',' inline_use_declaration  */
#line 360 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4446 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 111: /* inline_use_declarations: inline_use_declaration  */
#line 362 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4452 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 112: /* unprefixed_use_declarations: unprefixed_use_declarations ',' unprefixed_use_declaration  */
#line 367 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4458 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 113: /* unprefixed_use_declarations: unprefixed_use_declaration  */
#line 369 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4464 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 114: /* use_declarations: use_declarations ',' use_declaration  */
#line 374 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4470 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 115: /* use_declarations: use_declaration  */
#line 376 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4476 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 116: /* inline_use_declaration: unprefixed_use_declaration  */
#line 380 "/root/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 4482 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 117: /* inline_use_declaration: use_type unprefixed_use_declaration  */
#line 381 "/root/php-src/Zend/zend_language_parser.y"
                                                    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }
#line 4488 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 118: /* unprefixed_use_declaration: namespace_name  */
#line 386 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 4494 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 119: /* unprefixed_use_declaration: namespace_name "as (T_AS)" "identifier (T_STRING)"  */
#line 388 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4500 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 120: /* use_declaration: unprefixed_use_declaration  */
#line 392 "/root/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[0].ast); }
#line 4506 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 121: /* use_declaration: "\\ (T_NS_SEPARATOR)" unprefixed_use_declaration  */
#line 393 "/root/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[0].ast); }
#line 4512 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 122: /* const_list: const_list ',' const_decl  */
#line 397 "/root/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4518 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 123: /* const_list: const_decl  */
#line 398 "/root/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }
#line 4524 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 124: /* inner_statement_list: inner_statement_list inner_statement  */
#line 403 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4530 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 125: /* inner_statement_list: %empty  */
#line 405 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4536 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 126: /* inner_statement: statement  */
#line 410 "/root/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 4542 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 127: /* inner_statement: function_declaration_statement  */
#line 411 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4548 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 128: /* inner_statement: class_declaration_statement  */
#line 412 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4554 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 129: /* inner_statement: trait_declaration_statement  */
#line 413 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4560 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 130: /* inner_statement: interface_declaration_statement  */
#line 414 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4566 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 131: /* inner_statement: "__halt_compiler (T_HALT_COMPILER)" '(' ')' ';'  */
#line 416 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }
#line 4573 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 132: /* statement: '{' inner_statement_list '}'  */
#line 422 "/root/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = (yyvsp[-1].ast); }
#line 4579 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 133: /* statement: if_stmt  */
#line 423 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4585 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 134: /* statement: alt_if_stmt  */
#line 424 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 4591 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 135: /* statement: "while (T_WHILE)" '(' expr ')' while_statement  */
#line 426 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4597 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 136: /* statement: "do (T_DO)" statement "while (T_WHILE)" '(' expr ')' ';'  */
#line 428 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 4603 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 137: /* statement: "for (T_FOR)" '(' for_exprs ';' for_exprs ';' for_exprs ')' for_statement  */
#line 430 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4609 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 138: /* statement: "switch (T_SWITCH)" '(' expr ')' switch_case_list  */
#line 432 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4615 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 139: /* statement: "break (T_BREAK)" optional_expr ';'  */
#line 433 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }
#line 4621 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 140: /* statement: "continue (T_CONTINUE)" optional_expr ';'  */
#line 434 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }
#line 4627 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 141: /* statement: "return (T_RETURN)" optional_expr ';'  */
#line 435 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }
#line 4633 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 142: /* statement: "global (T_GLOBAL)" global_var_list ';'  */
#line 436 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4639 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 143: /* statement: "static (T_STATIC)" static_var_list ';'  */
#line 437 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4645 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 144: /* statement: "echo (T_ECHO)" echo_expr_list ';'  */
#line 438 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 4651 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 145: /* statement: T_INLINE_HTML  */
#line 439 "/root/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 4657 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 146: /* statement: expr ';'  */
#line 440 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[-1].ast); }
#line 4663 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 147: /* statement: "unset (T_UNSET)" '(' unset_variables possible_comma ')' ';'  */
#line 441 "/root/php-src/Zend/zend_language_parser.y"
                                                                   { (yyval.ast) = (yyvsp[-3].ast); }
#line 4669 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 148: /* statement: "foreach (T_FOREACH)" '(' expr "as (T_AS)" foreach_variable ')' foreach_statement  */
#line 443 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }
#line 4675 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 149: /* statement: "foreach (T_FOREACH)" '(' expr "as (T_AS)" foreach_variable "=> (T_DOUBLE_ARROW)" foreach_variable ')' foreach_statement  */
#line 446 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }
#line 4681 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 150: /* $@3: %empty  */
#line 448 "/root/php-src/Zend/zend_language_parser.y"
                        { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }
#line 4687 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 151: /* statement: "declare (T_DECLARE)" '(' const_list ')' $@3 declare_statement  */
#line 450 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 4693 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 152: /* statement: ';'  */
#line 451 "/root/php-src/Zend/zend_language_parser.y"
                                              { (yyval.ast) = NULL; }
#line 4699 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 153: /* statement: "try (T_TRY)" '{' inner_statement_list '}' catch_list finally_statement  */
#line 453 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4705 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 154: /* statement: "throw (T_THROW)" expr ';'  */
#line 454 "/root/php-src/Zend/zend_language_parser.y"
                                 { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[-1].ast)); }
#line 4711 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 155: /* statement: "goto (T_GOTO)" "identifier (T_STRING)" ';'  */
#line 455 "/root/php-src/Zend/zend_language_parser.y"
                                    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }
#line 4717 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 156: /* statement: "identifier (T_STRING)" ':'  */
#line 456 "/root/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }
#line 4723 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 157: /* catch_list: %empty  */
#line 461 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
#line 4729 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 158: /* catch_list: catch_list "catch (T_CATCH)" '(' catch_name_list "variable (T_VARIABLE)" ')' '{' inner_statement_list '}'  */
#line 463 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }
#line 4735 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 159: /* catch_name_list: name  */
#line 467 "/root/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 4741 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 160: /* catch_name_list: catch_name_list '|' name  */
#line 468 "/root/php-src/Zend/zend_language_parser.y"
                                         { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4747 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 161: /* finally_statement: %empty  */
#line 472 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = NULL; }
#line 4753 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 162: /* finally_statement: "finally (T_FINALLY)" '{' inner_statement_list '}'  */
#line 473 "/root/php-src/Zend/zend_language_parser.y"
                                                       { (yyval.ast) = (yyvsp[-1].ast); }
#line 4759 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 163: /* unset_variables: unset_variable  */
#line 477 "/root/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 4765 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 164: /* unset_variables: unset_variables ',' unset_variable  */
#line 478 "/root/php-src/Zend/zend_language_parser.y"
                                                   { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4771 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 165: /* unset_variable: variable  */
#line 482 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }
#line 4777 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 166: /* function_declaration_statement: function returns_ref "identifier (T_STRING)" backup_doc_comment '(' parameter_list ')' return_type backup_fn_flags '{' inner_statement_list '}' backup_fn_flags  */
#line 488 "/root/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 4784 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 167: /* is_reference: %empty  */
#line 493 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.num) = 0; }
#line 4790 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 168: /* is_reference: '&'  */
#line 494 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_PARAM_REF; }
#line 4796 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 169: /* is_variadic: %empty  */
#line 498 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = 0; }
#line 4802 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 170: /* is_variadic: "... (T_ELLIPSIS)"  */
#line 499 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = ZEND_PARAM_VARIADIC; }
#line 4808 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 171: /* @4: %empty  */
#line 503 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = CG(zend_lineno); }
#line 4814 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 172: /* class_declaration_statement: class_modifiers "class (T_CLASS)" @4 "identifier (T_STRING)" extends_from implements_list backup_doc_comment '{' class_statement_list '}'  */
#line 505 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4820 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 173: /* @5: %empty  */
#line 506 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = CG(zend_lineno); }
#line 4826 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 174: /* class_declaration_statement: "class (T_CLASS)" @5 "identifier (T_STRING)" extends_from implements_list backup_doc_comment '{' class_statement_list '}'  */
#line 508 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4832 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 175: /* class_modifiers: class_modifier  */
#line 512 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.num) = (yyvsp[0].num); }
#line 4838 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 176: /* class_modifiers: class_modifiers class_modifier  */
#line 514 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 4844 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 177: /* class_modifier: "abstract (T_ABSTRACT)"  */
#line 518 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
#line 4850 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 178: /* class_modifier: "final (T_FINAL)"  */
#line 519 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_FINAL; }
#line 4856 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 179: /* @6: %empty  */
#line 523 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = CG(zend_lineno); }
#line 4862 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 180: /* trait_declaration_statement: "trait (T_TRAIT)" @6 "identifier (T_STRING)" backup_doc_comment '{' class_statement_list '}'  */
#line 525 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL); }
#line 4868 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 181: /* @7: %empty  */
#line 529 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = CG(zend_lineno); }
#line 4874 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 182: /* interface_declaration_statement: "interface (T_INTERFACE)" @7 "identifier (T_STRING)" interface_extends_list backup_doc_comment '{' class_statement_list '}'  */
#line 531 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4880 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 183: /* extends_from: %empty  */
#line 535 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = NULL; }
#line 4886 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 184: /* extends_from: "extends (T_EXTENDS)" name  */
#line 536 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4892 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 185: /* interface_extends_list: %empty  */
#line 540 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 4898 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 186: /* interface_extends_list: "extends (T_EXTENDS)" name_list  */
#line 541 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4904 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 187: /* implements_list: %empty  */
#line 545 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 4910 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 188: /* implements_list: "implements (T_IMPLEMENTS)" name_list  */
#line 546 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4916 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 189: /* foreach_variable: variable  */
#line 550 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4922 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 190: /* foreach_variable: '&' variable  */
#line 551 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }
#line 4928 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 191: /* foreach_variable: "list (T_LIST)" '(' array_pair_list ')'  */
#line 552 "/root/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }
#line 4934 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 192: /* foreach_variable: '[' array_pair_list ']'  */
#line 553 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 4940 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 193: /* for_statement: statement  */
#line 557 "/root/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 4946 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 194: /* for_statement: ':' inner_statement_list "endfor (T_ENDFOR)" ';'  */
#line 558 "/root/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = (yyvsp[-2].ast); }
#line 4952 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 195: /* foreach_statement: statement  */
#line 562 "/root/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 4958 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 196: /* foreach_statement: ':' inner_statement_list "endforeach (T_ENDFOREACH)" ';'  */
#line 563 "/root/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-2].ast); }
#line 4964 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 197: /* declare_statement: statement  */
#line 567 "/root/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 4970 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 198: /* declare_statement: ':' inner_statement_list "enddeclare (T_ENDDECLARE)" ';'  */
#line 568 "/root/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-2].ast); }
#line 4976 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 199: /* switch_case_list: '{' case_list '}'  */
#line 572 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 4982 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 200: /* switch_case_list: '{' ';' case_list '}'  */
#line 573 "/root/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4988 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 201: /* switch_case_list: ':' case_list "endswitch (T_ENDSWITCH)" ';'  */
#line 574 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 4994 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 202: /* switch_case_list: ':' ';' case_list "endswitch (T_ENDSWITCH)" ';'  */
#line 575 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5000 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 203: /* case_list: %empty  */
#line 579 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
#line 5006 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 204: /* case_list: case_list "case (T_CASE)" expr case_separator inner_statement_list  */
#line 581 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5012 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 205: /* case_list: case_list "default (T_DEFAULT)" case_separator inner_statement_list  */
#line 583 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }
#line 5018 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 208: /* while_statement: statement  */
#line 593 "/root/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5024 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 209: /* while_statement: ':' inner_statement_list "endwhile (T_ENDWHILE)" ';'  */
#line 594 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5030 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 210: /* if_stmt_without_else: "if (T_IF)" '(' expr ')' statement  */
#line 600 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5037 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 211: /* if_stmt_without_else: if_stmt_without_else "elseif (T_ELSEIF)" '(' expr ')' statement  */
#line 603 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5044 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 212: /* if_stmt: if_stmt_without_else  */
#line 608 "/root/php-src/Zend/zend_language_parser.y"
                                                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5050 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 213: /* if_stmt: if_stmt_without_else "else (T_ELSE)" statement  */
#line 610 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }
#line 5056 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 214: /* alt_if_stmt_without_else: "if (T_IF)" '(' expr ')' ':' inner_statement_list  */
#line 615 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5063 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 215: /* alt_if_stmt_without_else: alt_if_stmt_without_else "elseif (T_ELSEIF)" '(' expr ')' ':' inner_statement_list  */
#line 618 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5070 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 216: /* alt_if_stmt: alt_if_stmt_without_else "endif (T_ENDIF)" ';'  */
#line 623 "/root/php-src/Zend/zend_language_parser.y"
                                                     { (yyval.ast) = (yyvsp[-2].ast); }
#line 5076 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 217: /* alt_if_stmt: alt_if_stmt_without_else "else (T_ELSE)" ':' inner_statement_list "endif (T_ENDIF)" ';'  */
#line 625 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }
#line 5083 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 218: /* parameter_list: non_empty_parameter_list  */
#line 630 "/root/php-src/Zend/zend_language_parser.y"
                                         { (yyval.ast) = (yyvsp[0].ast); }
#line 5089 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 219: /* parameter_list: %empty  */
#line 631 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
#line 5095 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 220: /* non_empty_parameter_list: parameter  */
#line 637 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }
#line 5101 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 221: /* non_empty_parameter_list: non_empty_parameter_list ',' parameter  */
#line 639 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5107 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 222: /* parameter: optional_type is_reference is_variadic "variable (T_VARIABLE)"  */
#line 644 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-2].num) | (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast), NULL); }
#line 5113 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 223: /* parameter: optional_type is_reference is_variadic "variable (T_VARIABLE)" '=' expr  */
#line 646 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-4].num) | (yyvsp[-3].num), (yyvsp[-5].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5119 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 224: /* optional_type: %empty  */
#line 651 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = NULL; }
#line 5125 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 225: /* optional_type: type_expr  */
#line 652 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5131 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 226: /* type_expr: type  */
#line 656 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5137 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 227: /* type_expr: '?' type  */
#line 657 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 5143 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 228: /* type: "array (T_ARRAY)"  */
#line 661 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
#line 5149 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 229: /* type: "callable (T_CALLABLE)"  */
#line 662 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
#line 5155 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 230: /* type: name  */
#line 663 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5161 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 231: /* return_type: %empty  */
#line 667 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = NULL; }
#line 5167 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 232: /* return_type: ':' type_expr  */
#line 668 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5173 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 233: /* argument_list: '(' ')'  */
#line 672 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 5179 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 234: /* argument_list: '(' non_empty_argument_list possible_comma ')'  */
#line 673 "/root/php-src/Zend/zend_language_parser.y"
                                                               { (yyval.ast) = (yyvsp[-2].ast); }
#line 5185 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 235: /* non_empty_argument_list: argument  */
#line 678 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }
#line 5191 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 236: /* non_empty_argument_list: non_empty_argument_list ',' argument  */
#line 680 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5197 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 237: /* argument: expr  */
#line 684 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5203 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 238: /* argument: "... (T_ELLIPSIS)" expr  */
#line 685 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 5209 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 239: /* global_var_list: global_var_list ',' global_var  */
#line 689 "/root/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5215 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 240: /* global_var_list: global_var  */
#line 690 "/root/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5221 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 241: /* global_var: simple_variable  */
#line 695 "/root/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }
#line 5227 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 242: /* static_var_list: static_var_list ',' static_var  */
#line 700 "/root/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5233 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 243: /* static_var_list: static_var  */
#line 701 "/root/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5239 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 244: /* static_var: "variable (T_VARIABLE)"  */
#line 705 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }
#line 5245 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 245: /* static_var: "variable (T_VARIABLE)" '=' expr  */
#line 706 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5251 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 246: /* class_statement_list: class_statement_list class_statement  */
#line 712 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5257 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 247: /* class_statement_list: %empty  */
#line 714 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 5263 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 248: /* class_statement: variable_modifiers property_list ';'  */
#line 720 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 5269 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 249: /* class_statement: method_modifiers "const (T_CONST)" class_const_list ';'  */
#line 722 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-3].num); }
#line 5275 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 250: /* class_statement: "use (T_USE)" name_list trait_adaptations  */
#line 724 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5281 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 251: /* class_statement: method_modifiers function returns_ref identifier backup_doc_comment '(' parameter_list ')' return_type backup_fn_flags method_body backup_fn_flags  */
#line 727 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast)); CG(extra_fn_flags) = (yyvsp[-2].num); }
#line 5288 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 252: /* name_list: name  */
#line 732 "/root/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 5294 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 253: /* name_list: name_list ',' name  */
#line 733 "/root/php-src/Zend/zend_language_parser.y"
                                   { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5300 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 254: /* trait_adaptations: ';'  */
#line 737 "/root/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = NULL; }
#line 5306 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 255: /* trait_adaptations: '{' '}'  */
#line 738 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = NULL; }
#line 5312 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 256: /* trait_adaptations: '{' trait_adaptation_list '}'  */
#line 739 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5318 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 257: /* trait_adaptation_list: trait_adaptation  */
#line 744 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }
#line 5324 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 258: /* trait_adaptation_list: trait_adaptation_list trait_adaptation  */
#line 746 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5330 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 259: /* trait_adaptation: trait_precedence ';'  */
#line 750 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5336 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 260: /* trait_adaptation: trait_alias ';'  */
#line 751 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5342 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 261: /* trait_precedence: absolute_trait_method_reference "insteadof (T_INSTEADOF)" name_list  */
#line 756 "/root/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5348 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 262: /* trait_alias: trait_method_reference "as (T_AS)" "identifier (T_STRING)"  */
#line 761 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5354 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 263: /* trait_alias: trait_method_reference "as (T_AS)" reserved_non_modifiers  */
#line 763 "/root/php-src/Zend/zend_language_parser.y"
                        { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }
#line 5360 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 264: /* trait_alias: trait_method_reference "as (T_AS)" member_modifier identifier  */
#line 765 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5366 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 265: /* trait_alias: trait_method_reference "as (T_AS)" member_modifier  */
#line 767 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }
#line 5372 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 266: /* trait_method_reference: identifier  */
#line 772 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }
#line 5378 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 267: /* trait_method_reference: absolute_trait_method_reference  */
#line 773 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5384 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 268: /* absolute_trait_method_reference: name ":: (T_PAAMAYIM_NEKUDOTAYIM)" identifier  */
#line 778 "/root/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5390 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 269: /* method_body: ';'  */
#line 782 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 5396 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 270: /* method_body: '{' inner_statement_list '}'  */
#line 783 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5402 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 271: /* variable_modifiers: non_empty_member_modifiers  */
#line 787 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = (yyvsp[0].num); }
#line 5408 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 272: /* variable_modifiers: "var (T_VAR)"  */
#line 788 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5414 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 273: /* method_modifiers: %empty  */
#line 792 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5420 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 274: /* method_modifiers: non_empty_member_modifiers  */
#line 794 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
#line 5426 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 275: /* non_empty_member_modifiers: member_modifier  */
#line 798 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.num) = (yyvsp[0].num); }
#line 5432 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 276: /* non_empty_member_modifiers: non_empty_member_modifiers member_modifier  */
#line 800 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 5438 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 277: /* member_modifier: "public (T_PUBLIC)"  */
#line 804 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5444 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 278: /* member_modifier: "protected (T_PROTECTED)"  */
#line 805 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 5450 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 279: /* member_modifier: "private (T_PRIVATE)"  */
#line 806 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 5456 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 280: /* member_modifier: "static (T_STATIC)"  */
#line 807 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_STATIC; }
#line 5462 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 281: /* member_modifier: "abstract (T_ABSTRACT)"  */
#line 808 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_ABSTRACT; }
#line 5468 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 282: /* member_modifier: "final (T_FINAL)"  */
#line 809 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_FINAL; }
#line 5474 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 283: /* property_list: property_list ',' property  */
#line 813 "/root/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5480 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 284: /* property_list: property  */
#line 814 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }
#line 5486 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 285: /* property: "variable (T_VARIABLE)" backup_doc_comment  */
#line 819 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5492 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 286: /* property: "variable (T_VARIABLE)" '=' expr backup_doc_comment  */
#line 821 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5498 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 287: /* class_const_list: class_const_list ',' class_const_decl  */
#line 825 "/root/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5504 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 288: /* class_const_list: class_const_decl  */
#line 826 "/root/php-src/Zend/zend_language_parser.y"
                                 { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }
#line 5510 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 289: /* class_const_decl: identifier '=' expr backup_doc_comment  */
#line 830 "/root/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5516 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 290: /* const_decl: "identifier (T_STRING)" '=' expr backup_doc_comment  */
#line 834 "/root/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5522 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 291: /* echo_expr_list: echo_expr_list ',' echo_expr  */
#line 838 "/root/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5528 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 292: /* echo_expr_list: echo_expr  */
#line 839 "/root/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5534 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 293: /* echo_expr: expr  */
#line 842 "/root/php-src/Zend/zend_language_parser.y"
             { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 5540 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 294: /* for_exprs: %empty  */
#line 846 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 5546 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 295: /* for_exprs: non_empty_for_exprs  */
#line 847 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5552 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 296: /* non_empty_for_exprs: non_empty_for_exprs ',' expr  */
#line 851 "/root/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5558 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 297: /* non_empty_for_exprs: expr  */
#line 852 "/root/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 5564 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 298: /* @8: %empty  */
#line 856 "/root/php-src/Zend/zend_language_parser.y"
                { (yyval.num) = CG(zend_lineno); }
#line 5570 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 299: /* anonymous_class: "class (T_CLASS)" @8 ctor_arguments extends_from implements_list backup_doc_comment '{' class_statement_list '}'  */
#line 857 "/root/php-src/Zend/zend_language_parser.y"
                                                                                             {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}
#line 5581 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 300: /* new_expr: "new (T_NEW)" class_name_reference ctor_arguments  */
#line 867 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5587 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 301: /* new_expr: "new (T_NEW)" anonymous_class  */
#line 869 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5593 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 302: /* expr: variable  */
#line 874 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5599 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 303: /* expr: "list (T_LIST)" '(' array_pair_list ')' '=' expr  */
#line 876 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5605 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 304: /* expr: '[' array_pair_list ']' '=' expr  */
#line 878 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5611 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 305: /* expr: variable '=' expr  */
#line 880 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5617 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 306: /* expr: variable '=' '&' variable  */
#line 882 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5623 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 307: /* expr: "clone (T_CLONE)" expr  */
#line 883 "/root/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }
#line 5629 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 308: /* expr: variable "+= (T_PLUS_EQUAL)" expr  */
#line 885 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5635 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 309: /* expr: variable "-= (T_MINUS_EQUAL)" expr  */
#line 887 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5641 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 310: /* expr: variable "*= (T_MUL_EQUAL)" expr  */
#line 889 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5647 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 311: /* expr: variable "**= (T_POW_EQUAL)" expr  */
#line 891 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5653 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 312: /* expr: variable "/= (T_DIV_EQUAL)" expr  */
#line 893 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5659 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 313: /* expr: variable ".= (T_CONCAT_EQUAL)" expr  */
#line 895 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5665 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 314: /* expr: variable "%= (T_MOD_EQUAL)" expr  */
#line 897 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5671 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 315: /* expr: variable "&= (T_AND_EQUAL)" expr  */
#line 899 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5677 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 316: /* expr: variable "|= (T_OR_EQUAL)" expr  */
#line 901 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5683 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 317: /* expr: variable "^= (T_XOR_EQUAL)" expr  */
#line 903 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5689 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 318: /* expr: variable "<<= (T_SL_EQUAL)" expr  */
#line 905 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5695 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 319: /* expr: variable ">>= (T_SR_EQUAL)" expr  */
#line 907 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5701 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 320: /* expr: variable "++ (T_INC)"  */
#line 908 "/root/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }
#line 5707 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 321: /* expr: "++ (T_INC)" variable  */
#line 909 "/root/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }
#line 5713 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 322: /* expr: variable "-- (T_DEC)"  */
#line 910 "/root/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }
#line 5719 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 323: /* expr: "-- (T_DEC)" variable  */
#line 911 "/root/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }
#line 5725 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 324: /* expr: expr "|| (T_BOOLEAN_OR)" expr  */
#line 913 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5731 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 325: /* expr: expr "&& (T_BOOLEAN_AND)" expr  */
#line 915 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5737 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 326: /* expr: expr "or (T_LOGICAL_OR)" expr  */
#line 917 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5743 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 327: /* expr: expr "and (T_LOGICAL_AND)" expr  */
#line 919 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5749 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 328: /* expr: expr "xor (T_LOGICAL_XOR)" expr  */
#line 921 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5755 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 329: /* expr: expr '|' expr  */
#line 922 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5761 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 330: /* expr: expr '&' expr  */
#line 923 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5767 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 331: /* expr: expr '^' expr  */
#line 924 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5773 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 332: /* expr: expr '.' expr  */
#line 925 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5779 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 333: /* expr: expr '+' expr  */
#line 926 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5785 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 334: /* expr: expr '-' expr  */
#line 927 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5791 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 335: /* expr: expr '*' expr  */
#line 928 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5797 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 336: /* expr: expr "** (T_POW)" expr  */
#line 929 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5803 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 337: /* expr: expr '/' expr  */
#line 930 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5809 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 338: /* expr: expr '%' expr  */
#line 931 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5815 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 339: /* expr: expr "<< (T_SL)" expr  */
#line 932 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5821 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 340: /* expr: expr ">> (T_SR)" expr  */
#line 933 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5827 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 341: /* expr: '+' expr  */
#line 934 "/root/php-src/Zend/zend_language_parser.y"
                                     { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }
#line 5833 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 342: /* expr: '-' expr  */
#line 935 "/root/php-src/Zend/zend_language_parser.y"
                                     { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }
#line 5839 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 343: /* expr: '!' expr  */
#line 936 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }
#line 5845 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 344: /* expr: '~' expr  */
#line 937 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }
#line 5851 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 345: /* expr: expr "=== (T_IS_IDENTICAL)" expr  */
#line 939 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5857 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 346: /* expr: expr "!== (T_IS_NOT_IDENTICAL)" expr  */
#line 941 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5863 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 347: /* expr: expr "== (T_IS_EQUAL)" expr  */
#line 943 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5869 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 348: /* expr: expr "!= (T_IS_NOT_EQUAL)" expr  */
#line 945 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5875 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 349: /* expr: expr '<' expr  */
#line 947 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5881 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 350: /* expr: expr "<= (T_IS_SMALLER_OR_EQUAL)" expr  */
#line 949 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5887 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 351: /* expr: expr '>' expr  */
#line 951 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5893 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 352: /* expr: expr ">= (T_IS_GREATER_OR_EQUAL)" expr  */
#line 953 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5899 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 353: /* expr: expr "<=> (T_SPACESHIP)" expr  */
#line 955 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5905 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 354: /* expr: expr "instanceof (T_INSTANCEOF)" class_name_reference  */
#line 957 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5911 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 355: /* expr: '(' expr ')'  */
#line 958 "/root/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = (yyvsp[-1].ast); }
#line 5917 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 356: /* expr: new_expr  */
#line 959 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 5923 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 357: /* expr: expr '?' expr ':' expr  */
#line 961 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5929 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 358: /* expr: expr '?' ':' expr  */
#line 963 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }
#line 5935 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 359: /* expr: expr "?? (T_COALESCE)" expr  */
#line 965 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5941 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 360: /* expr: internal_functions_in_yacc  */
#line 966 "/root/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); }
#line 5947 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 361: /* expr: "(int) (T_INT_CAST)" expr  */
#line 967 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }
#line 5953 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 362: /* expr: "(double) (T_DOUBLE_CAST)" expr  */
#line 968 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }
#line 5959 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 363: /* expr: "(string) (T_STRING_CAST)" expr  */
#line 969 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }
#line 5965 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 364: /* expr: "(array) (T_ARRAY_CAST)" expr  */
#line 970 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }
#line 5971 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 365: /* expr: "(object) (T_OBJECT_CAST)" expr  */
#line 971 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }
#line 5977 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 366: /* expr: "(bool) (T_BOOL_CAST)" expr  */
#line 972 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }
#line 5983 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 367: /* expr: "(unset) (T_UNSET_CAST)" expr  */
#line 973 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }
#line 5989 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 368: /* expr: "exit (T_EXIT)" exit_expr  */
#line 974 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }
#line 5995 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 369: /* expr: '@' expr  */
#line 975 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }
#line 6001 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 370: /* expr: scalar  */
#line 976 "/root/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6007 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 371: /* expr: '`' backticks_expr '`'  */
#line 977 "/root/php-src/Zend/zend_language_parser.y"
                                       { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }
#line 6013 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 372: /* expr: "print (T_PRINT)" expr  */
#line 978 "/root/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }
#line 6019 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 373: /* expr: "yield (T_YIELD)"  */
#line 979 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6025 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 374: /* expr: "yield (T_YIELD)" expr  */
#line 980 "/root/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6031 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 375: /* expr: "yield (T_YIELD)" expr "=> (T_DOUBLE_ARROW)" expr  */
#line 981 "/root/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6037 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 376: /* expr: "yield from (T_YIELD_FROM)" expr  */
#line 982 "/root/php-src/Zend/zend_language_parser.y"
                                  { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6043 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 377: /* expr: function returns_ref backup_doc_comment '(' parameter_list ')' lexical_vars return_type backup_fn_flags '{' inner_statement_list '}' backup_fn_flags  */
#line 985 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 6051 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 378: /* expr: "static (T_STATIC)" function returns_ref backup_doc_comment '(' parameter_list ')' lexical_vars return_type backup_fn_flags '{' inner_statement_list '}' backup_fn_flags  */
#line 990 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num) | ZEND_ACC_STATIC, (yyvsp[-12].num), (yyvsp[-10].str),
			      zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 6059 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 379: /* function: "function (T_FUNCTION)"  */
#line 996 "/root/php-src/Zend/zend_language_parser.y"
                   { (yyval.num) = CG(zend_lineno); }
#line 6065 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 380: /* backup_doc_comment: %empty  */
#line 1000 "/root/php-src/Zend/zend_language_parser.y"
                    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
#line 6071 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 381: /* backup_fn_flags: %empty  */
#line 1004 "/root/php-src/Zend/zend_language_parser.y"
                    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }
#line 6077 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 382: /* returns_ref: %empty  */
#line 1008 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.num) = 0; }
#line 6083 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 383: /* returns_ref: '&'  */
#line 1009 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
#line 6089 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 384: /* lexical_vars: %empty  */
#line 1013 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = NULL; }
#line 6095 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 385: /* lexical_vars: "use (T_USE)" '(' lexical_var_list ')'  */
#line 1014 "/root/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = (yyvsp[-1].ast); }
#line 6101 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 386: /* lexical_var_list: lexical_var_list ',' lexical_var  */
#line 1018 "/root/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6107 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 387: /* lexical_var_list: lexical_var  */
#line 1019 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }
#line 6113 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 388: /* lexical_var: "variable (T_VARIABLE)"  */
#line 1023 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6119 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 389: /* lexical_var: '&' "variable (T_VARIABLE)"  */
#line 1024 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }
#line 6125 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 390: /* function_call: name argument_list  */
#line 1029 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6131 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 391: /* function_call: class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" member_name argument_list  */
#line 1031 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6137 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 392: /* function_call: variable_class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" member_name argument_list  */
#line 1033 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6143 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 393: /* function_call: callable_expr argument_list  */
#line 1035 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6149 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 394: /* class_name: "static (T_STATIC)"  */
#line 1040 "/root/php-src/Zend/zend_language_parser.y"
                        { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
#line 6156 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 395: /* class_name: name  */
#line 1042 "/root/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6162 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 396: /* class_name_reference: class_name  */
#line 1046 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6168 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 397: /* class_name_reference: new_variable  */
#line 1047 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6174 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 398: /* exit_expr: %empty  */
#line 1051 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 6180 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 399: /* exit_expr: '(' optional_expr ')'  */
#line 1052 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 6186 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 400: /* backticks_expr: %empty  */
#line 1057 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 6192 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 401: /* backticks_expr: "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
#line 1058 "/root/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = (yyvsp[0].ast); }
#line 6198 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 402: /* backticks_expr: encaps_list  */
#line 1059 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 6204 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 403: /* ctor_arguments: %empty  */
#line 1064 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 6210 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 404: /* ctor_arguments: argument_list  */
#line 1065 "/root/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 6216 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 405: /* dereferencable_scalar: "array (T_ARRAY)" '(' array_pair_list ')'  */
#line 1070 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }
#line 6222 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 406: /* dereferencable_scalar: '[' array_pair_list ']'  */
#line 1071 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 6228 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 407: /* dereferencable_scalar: "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
#line 1072 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6234 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 408: /* scalar: "integer number (T_LNUMBER)"  */
#line 1076 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6240 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 409: /* scalar: "floating-point number (T_DNUMBER)"  */
#line 1077 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6246 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 410: /* scalar: "__LINE__ (T_LINE)"  */
#line 1078 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
#line 6252 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 411: /* scalar: "__FILE__ (T_FILE)"  */
#line 1079 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
#line 6258 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 412: /* scalar: "__DIR__ (T_DIR)"  */
#line 1080 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
#line 6264 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 413: /* scalar: "__TRAIT__ (T_TRAIT_C)"  */
#line 1081 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
#line 6270 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 414: /* scalar: "__METHOD__ (T_METHOD_C)"  */
#line 1082 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
#line 6276 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 415: /* scalar: "__FUNCTION__ (T_FUNC_C)"  */
#line 1083 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
#line 6282 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 416: /* scalar: "__NAMESPACE__ (T_NS_C)"  */
#line 1084 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
#line 6288 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 417: /* scalar: "__CLASS__ (T_CLASS_C)"  */
#line 1085 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
#line 6294 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 418: /* scalar: "heredoc start (T_START_HEREDOC)" "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)" "heredoc end (T_END_HEREDOC)"  */
#line 1086 "/root/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 6300 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 419: /* scalar: "heredoc start (T_START_HEREDOC)" "heredoc end (T_END_HEREDOC)"  */
#line 1088 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 6306 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 420: /* scalar: '"' encaps_list '"'  */
#line 1089 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 6312 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 421: /* scalar: "heredoc start (T_START_HEREDOC)" encaps_list "heredoc end (T_END_HEREDOC)"  */
#line 1090 "/root/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 6318 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 422: /* scalar: dereferencable_scalar  */
#line 1091 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6324 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 423: /* scalar: constant  */
#line 1092 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6330 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 424: /* constant: name  */
#line 1096 "/root/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }
#line 6336 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 425: /* constant: class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" identifier  */
#line 1098 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6342 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 426: /* constant: variable_class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" identifier  */
#line 1100 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6348 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 427: /* optional_expr: %empty  */
#line 1104 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = NULL; }
#line 6354 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 428: /* optional_expr: expr  */
#line 1105 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6360 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 429: /* variable_class_name: dereferencable  */
#line 1109 "/root/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6366 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 430: /* dereferencable: variable  */
#line 1113 "/root/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6372 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 431: /* dereferencable: '(' expr ')'  */
#line 1114 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6378 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 432: /* dereferencable: dereferencable_scalar  */
#line 1115 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6384 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 433: /* callable_expr: callable_variable  */
#line 1119 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6390 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 434: /* callable_expr: '(' expr ')'  */
#line 1120 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6396 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 435: /* callable_expr: dereferencable_scalar  */
#line 1121 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6402 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 436: /* callable_variable: simple_variable  */
#line 1126 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6408 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 437: /* callable_variable: dereferencable '[' optional_expr ']'  */
#line 1128 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6414 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 438: /* callable_variable: constant '[' optional_expr ']'  */
#line 1130 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6420 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 439: /* callable_variable: dereferencable '{' expr '}'  */
#line 1132 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6426 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 440: /* callable_variable: dereferencable "-> (T_OBJECT_OPERATOR)" property_name argument_list  */
#line 1134 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6432 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 441: /* callable_variable: function_call  */
#line 1135 "/root/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 6438 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 442: /* variable: callable_variable  */
#line 1140 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6444 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 443: /* variable: static_member  */
#line 1142 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6450 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 444: /* variable: dereferencable "-> (T_OBJECT_OPERATOR)" property_name  */
#line 1144 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6456 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 445: /* simple_variable: "variable (T_VARIABLE)"  */
#line 1148 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6462 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 446: /* simple_variable: '$' '{' expr '}'  */
#line 1149 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 6468 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 447: /* simple_variable: '$' simple_variable  */
#line 1150 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6474 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 448: /* static_member: class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" simple_variable  */
#line 1155 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6480 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 449: /* static_member: variable_class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" simple_variable  */
#line 1157 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6486 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 450: /* new_variable: simple_variable  */
#line 1162 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6492 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 451: /* new_variable: new_variable '[' optional_expr ']'  */
#line 1164 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6498 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 452: /* new_variable: new_variable '{' expr '}'  */
#line 1166 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6504 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 453: /* new_variable: new_variable "-> (T_OBJECT_OPERATOR)" property_name  */
#line 1168 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6510 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 454: /* new_variable: class_name ":: (T_PAAMAYIM_NEKUDOTAYIM)" simple_variable  */
#line 1170 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6516 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 455: /* new_variable: new_variable ":: (T_PAAMAYIM_NEKUDOTAYIM)" simple_variable  */
#line 1172 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6522 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 456: /* member_name: identifier  */
#line 1176 "/root/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = (yyvsp[0].ast); }
#line 6528 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 457: /* member_name: '{' expr '}'  */
#line 1177 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6534 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 458: /* member_name: simple_variable  */
#line 1178 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6540 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 459: /* property_name: "identifier (T_STRING)"  */
#line 1182 "/root/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6546 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 460: /* property_name: '{' expr '}'  */
#line 1183 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6552 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 461: /* property_name: simple_variable  */
#line 1184 "/root/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6558 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 462: /* array_pair_list: non_empty_array_pair_list  */
#line 1189 "/root/php-src/Zend/zend_language_parser.y"
                        { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }
#line 6564 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 463: /* possible_array_pair: %empty  */
#line 1193 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = NULL; }
#line 6570 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 464: /* possible_array_pair: array_pair  */
#line 1194 "/root/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 6576 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 465: /* non_empty_array_pair_list: non_empty_array_pair_list ',' possible_array_pair  */
#line 1199 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6582 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 466: /* non_empty_array_pair_list: possible_array_pair  */
#line 1201 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }
#line 6588 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 467: /* array_pair: expr "=> (T_DOUBLE_ARROW)" expr  */
#line 1206 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 6594 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 468: /* array_pair: expr  */
#line 1208 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }
#line 6600 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 469: /* array_pair: expr "=> (T_DOUBLE_ARROW)" '&' variable  */
#line 1210 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }
#line 6606 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 470: /* array_pair: '&' variable  */
#line 1212 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }
#line 6612 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 471: /* array_pair: expr "=> (T_DOUBLE_ARROW)" "list (T_LIST)" '(' array_pair_list ')'  */
#line 1214 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }
#line 6619 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 472: /* array_pair: "list (T_LIST)" '(' array_pair_list ')'  */
#line 1217 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }
#line 6626 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 473: /* encaps_list: encaps_list encaps_var  */
#line 1223 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6632 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 474: /* encaps_list: encaps_list "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
#line 1225 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6638 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 475: /* encaps_list: encaps_var  */
#line 1227 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }
#line 6644 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 476: /* encaps_list: "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)" encaps_var  */
#line 1229 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6650 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 477: /* encaps_var: "variable (T_VARIABLE)"  */
#line 1234 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6656 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 478: /* encaps_var: "variable (T_VARIABLE)" '[' encaps_var_offset ']'  */
#line 1236 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }
#line 6663 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 479: /* encaps_var: "variable (T_VARIABLE)" "-> (T_OBJECT_OPERATOR)" "identifier (T_STRING)"  */
#line 1239 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6670 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 480: /* encaps_var: "${ (T_DOLLAR_OPEN_CURLY_BRACES)" expr '}'  */
#line 1242 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 6676 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 481: /* encaps_var: "${ (T_DOLLAR_OPEN_CURLY_BRACES)" "variable name (T_STRING_VARNAME)" '}'  */
#line 1244 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 6682 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 482: /* encaps_var: "${ (T_DOLLAR_OPEN_CURLY_BRACES)" "variable name (T_STRING_VARNAME)" '[' expr ']' '}'  */
#line 1246 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }
#line 6689 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 483: /* encaps_var: "{$ (T_CURLY_OPEN)" variable '}'  */
#line 1248 "/root/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 6695 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 484: /* encaps_var_offset: "identifier (T_STRING)"  */
#line 1252 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6701 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 485: /* encaps_var_offset: "number (T_NUM_STRING)"  */
#line 1253 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6707 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 486: /* encaps_var_offset: '-' "number (T_NUM_STRING)"  */
#line 1254 "/root/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }
#line 6713 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 487: /* encaps_var_offset: "variable (T_VARIABLE)"  */
#line 1255 "/root/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6719 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 488: /* internal_functions_in_yacc: "isset (T_ISSET)" '(' isset_variables possible_comma ')'  */
#line 1260 "/root/php-src/Zend/zend_language_parser.y"
                                                               { (yyval.ast) = (yyvsp[-2].ast); }
#line 6725 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 489: /* internal_functions_in_yacc: "empty (T_EMPTY)" '(' expr ')'  */
#line 1261 "/root/php-src/Zend/zend_language_parser.y"
                                     { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }
#line 6731 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 490: /* internal_functions_in_yacc: "include (T_INCLUDE)" expr  */
#line 1263 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }
#line 6737 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 491: /* internal_functions_in_yacc: "include_once (T_INCLUDE_ONCE)" expr  */
#line 1265 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }
#line 6743 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 492: /* internal_functions_in_yacc: "eval (T_EVAL)" '(' expr ')'  */
#line 1267 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }
#line 6749 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 493: /* internal_functions_in_yacc: "require (T_REQUIRE)" expr  */
#line 1269 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }
#line 6755 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 494: /* internal_functions_in_yacc: "require_once (T_REQUIRE_ONCE)" expr  */
#line 1271 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }
#line 6761 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 495: /* isset_variables: isset_variable  */
#line 1275 "/root/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = (yyvsp[0].ast); }
#line 6767 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 496: /* isset_variables: isset_variables ',' isset_variable  */
#line 1277 "/root/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6773 "/root/php-src/Zend/zend_language_parser.c"
    break;

  case 497: /* isset_variable: expr  */
#line 1281 "/root/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }
#line 6779 "/root/php-src/Zend/zend_language_parser.c"
    break;


#line 6783 "/root/php-src/Zend/zend_language_parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= END)
        {
          /* Return failure if at end of input.  */
          if (yychar == END)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1284 "/root/php-src/Zend/zend_language_parser.y"


/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
		unsigned int len = 0, toklen = 0, yystr_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			strcmp(yystr, "\"end of file\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		str = LANG_SCNG(yy_text);
		end = memchr(str, '\n', LANG_SCNG(yy_leng));
		yystr_len = (unsigned int)yystrlen(yystr);

		if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
			&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
			toklen = (tok2 - tok1) + 1;
		} else {
			tok1 = tok2 = NULL;
			toklen = 0;
		}

		if (end == NULL) {
			len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
		} else {
			len = (end - str) > 30 ? 30 : (end - str);
		}
		if (yyres) {
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
		}
		return len + (toklen ? toklen + 1 : 0) + 2;
	}

	/* One of the expected tokens */
	if (!yyres) {
		return yystrlen(yystr) - (*yystr == '"' ? 2 : 0);
	}

	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */
