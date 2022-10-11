/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_ZEND_ROOT_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ROOT_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 48 "/root/php-src/Zend/zend_language_parser.y"


#line 52 "/root/php-src/Zend/zend_language_parser.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    END = 0,                       /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_NOELSE = 258,                /* T_NOELSE  */
    T_LNUMBER = 259,               /* "integer number (T_LNUMBER)"  */
    T_DNUMBER = 260,               /* "floating-point number (T_DNUMBER)"  */
    T_STRING = 261,                /* "identifier (T_STRING)"  */
    T_VARIABLE = 262,              /* "variable (T_VARIABLE)"  */
    T_INLINE_HTML = 263,           /* T_INLINE_HTML  */
    T_ENCAPSED_AND_WHITESPACE = 264, /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
    T_CONSTANT_ENCAPSED_STRING = 265, /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
    T_STRING_VARNAME = 266,        /* "variable name (T_STRING_VARNAME)"  */
    T_NUM_STRING = 267,            /* "number (T_NUM_STRING)"  */
    T_INCLUDE = 268,               /* "include (T_INCLUDE)"  */
    T_INCLUDE_ONCE = 269,          /* "include_once (T_INCLUDE_ONCE)"  */
    T_EVAL = 270,                  /* "eval (T_EVAL)"  */
    T_REQUIRE = 271,               /* "require (T_REQUIRE)"  */
    T_REQUIRE_ONCE = 272,          /* "require_once (T_REQUIRE_ONCE)"  */
    T_LOGICAL_OR = 273,            /* "or (T_LOGICAL_OR)"  */
    T_LOGICAL_XOR = 274,           /* "xor (T_LOGICAL_XOR)"  */
    T_LOGICAL_AND = 275,           /* "and (T_LOGICAL_AND)"  */
    T_PRINT = 276,                 /* "print (T_PRINT)"  */
    T_YIELD = 277,                 /* "yield (T_YIELD)"  */
    T_YIELD_FROM = 278,            /* "yield from (T_YIELD_FROM)"  */
    T_PLUS_EQUAL = 279,            /* "+= (T_PLUS_EQUAL)"  */
    T_MINUS_EQUAL = 280,           /* "-= (T_MINUS_EQUAL)"  */
    T_MUL_EQUAL = 281,             /* "*= (T_MUL_EQUAL)"  */
    T_DIV_EQUAL = 282,             /* "/= (T_DIV_EQUAL)"  */
    T_CONCAT_EQUAL = 283,          /* ".= (T_CONCAT_EQUAL)"  */
    T_MOD_EQUAL = 284,             /* "%= (T_MOD_EQUAL)"  */
    T_AND_EQUAL = 285,             /* "&= (T_AND_EQUAL)"  */
    T_OR_EQUAL = 286,              /* "|= (T_OR_EQUAL)"  */
    T_XOR_EQUAL = 287,             /* "^= (T_XOR_EQUAL)"  */
    T_SL_EQUAL = 288,              /* "<<= (T_SL_EQUAL)"  */
    T_SR_EQUAL = 289,              /* ">>= (T_SR_EQUAL)"  */
    T_BOOLEAN_OR = 290,            /* "|| (T_BOOLEAN_OR)"  */
    T_BOOLEAN_AND = 291,           /* "&& (T_BOOLEAN_AND)"  */
    T_IS_EQUAL = 292,              /* "== (T_IS_EQUAL)"  */
    T_IS_NOT_EQUAL = 293,          /* "!= (T_IS_NOT_EQUAL)"  */
    T_IS_IDENTICAL = 294,          /* "=== (T_IS_IDENTICAL)"  */
    T_IS_NOT_IDENTICAL = 295,      /* "!== (T_IS_NOT_IDENTICAL)"  */
    T_IS_SMALLER_OR_EQUAL = 296,   /* "<= (T_IS_SMALLER_OR_EQUAL)"  */
    T_IS_GREATER_OR_EQUAL = 297,   /* ">= (T_IS_GREATER_OR_EQUAL)"  */
    T_SPACESHIP = 298,             /* "<=> (T_SPACESHIP)"  */
    T_SL = 299,                    /* "<< (T_SL)"  */
    T_SR = 300,                    /* ">> (T_SR)"  */
    T_INSTANCEOF = 301,            /* "instanceof (T_INSTANCEOF)"  */
    T_INC = 302,                   /* "++ (T_INC)"  */
    T_DEC = 303,                   /* "-- (T_DEC)"  */
    T_INT_CAST = 304,              /* "(int) (T_INT_CAST)"  */
    T_DOUBLE_CAST = 305,           /* "(double) (T_DOUBLE_CAST)"  */
    T_STRING_CAST = 306,           /* "(string) (T_STRING_CAST)"  */
    T_ARRAY_CAST = 307,            /* "(array) (T_ARRAY_CAST)"  */
    T_OBJECT_CAST = 308,           /* "(object) (T_OBJECT_CAST)"  */
    T_BOOL_CAST = 309,             /* "(bool) (T_BOOL_CAST)"  */
    T_UNSET_CAST = 310,            /* "(unset) (T_UNSET_CAST)"  */
    T_NEW = 311,                   /* "new (T_NEW)"  */
    T_CLONE = 312,                 /* "clone (T_CLONE)"  */
    T_EXIT = 313,                  /* "exit (T_EXIT)"  */
    T_IF = 314,                    /* "if (T_IF)"  */
    T_ELSEIF = 315,                /* "elseif (T_ELSEIF)"  */
    T_ELSE = 316,                  /* "else (T_ELSE)"  */
    T_ENDIF = 317,                 /* "endif (T_ENDIF)"  */
    T_ECHO = 318,                  /* "echo (T_ECHO)"  */
    T_DO = 319,                    /* "do (T_DO)"  */
    T_WHILE = 320,                 /* "while (T_WHILE)"  */
    T_ENDWHILE = 321,              /* "endwhile (T_ENDWHILE)"  */
    T_FOR = 322,                   /* "for (T_FOR)"  */
    T_ENDFOR = 323,                /* "endfor (T_ENDFOR)"  */
    T_FOREACH = 324,               /* "foreach (T_FOREACH)"  */
    T_ENDFOREACH = 325,            /* "endforeach (T_ENDFOREACH)"  */
    T_DECLARE = 326,               /* "declare (T_DECLARE)"  */
    T_ENDDECLARE = 327,            /* "enddeclare (T_ENDDECLARE)"  */
    T_AS = 328,                    /* "as (T_AS)"  */
    T_SWITCH = 329,                /* "switch (T_SWITCH)"  */
    T_ENDSWITCH = 330,             /* "endswitch (T_ENDSWITCH)"  */
    T_CASE = 331,                  /* "case (T_CASE)"  */
    T_DEFAULT = 332,               /* "default (T_DEFAULT)"  */
    T_BREAK = 333,                 /* "break (T_BREAK)"  */
    T_CONTINUE = 334,              /* "continue (T_CONTINUE)"  */
    T_GOTO = 335,                  /* "goto (T_GOTO)"  */
    T_FUNCTION = 336,              /* "function (T_FUNCTION)"  */
    T_CONST = 337,                 /* "const (T_CONST)"  */
    T_RETURN = 338,                /* "return (T_RETURN)"  */
    T_TRY = 339,                   /* "try (T_TRY)"  */
    T_CATCH = 340,                 /* "catch (T_CATCH)"  */
    T_FINALLY = 341,               /* "finally (T_FINALLY)"  */
    T_THROW = 342,                 /* "throw (T_THROW)"  */
    T_USE = 343,                   /* "use (T_USE)"  */
    T_INSTEADOF = 344,             /* "insteadof (T_INSTEADOF)"  */
    T_GLOBAL = 345,                /* "global (T_GLOBAL)"  */
    T_STATIC = 346,                /* "static (T_STATIC)"  */
    T_ABSTRACT = 347,              /* "abstract (T_ABSTRACT)"  */
    T_FINAL = 348,                 /* "final (T_FINAL)"  */
    T_PRIVATE = 349,               /* "private (T_PRIVATE)"  */
    T_PROTECTED = 350,             /* "protected (T_PROTECTED)"  */
    T_PUBLIC = 351,                /* "public (T_PUBLIC)"  */
    T_VAR = 352,                   /* "var (T_VAR)"  */
    T_UNSET = 353,                 /* "unset (T_UNSET)"  */
    T_ISSET = 354,                 /* "isset (T_ISSET)"  */
    T_EMPTY = 355,                 /* "empty (T_EMPTY)"  */
    T_HALT_COMPILER = 356,         /* "__halt_compiler (T_HALT_COMPILER)"  */
    T_CLASS = 357,                 /* "class (T_CLASS)"  */
    T_TRAIT = 358,                 /* "trait (T_TRAIT)"  */
    T_INTERFACE = 359,             /* "interface (T_INTERFACE)"  */
    T_EXTENDS = 360,               /* "extends (T_EXTENDS)"  */
    T_IMPLEMENTS = 361,            /* "implements (T_IMPLEMENTS)"  */
    T_OBJECT_OPERATOR = 362,       /* "-> (T_OBJECT_OPERATOR)"  */
    T_DOUBLE_ARROW = 363,          /* "=> (T_DOUBLE_ARROW)"  */
    T_LIST = 364,                  /* "list (T_LIST)"  */
    T_ARRAY = 365,                 /* "array (T_ARRAY)"  */
    T_CALLABLE = 366,              /* "callable (T_CALLABLE)"  */
    T_LINE = 367,                  /* "__LINE__ (T_LINE)"  */
    T_FILE = 368,                  /* "__FILE__ (T_FILE)"  */
    T_DIR = 369,                   /* "__DIR__ (T_DIR)"  */
    T_CLASS_C = 370,               /* "__CLASS__ (T_CLASS_C)"  */
    T_TRAIT_C = 371,               /* "__TRAIT__ (T_TRAIT_C)"  */
    T_METHOD_C = 372,              /* "__METHOD__ (T_METHOD_C)"  */
    T_FUNC_C = 373,                /* "__FUNCTION__ (T_FUNC_C)"  */
    T_COMMENT = 374,               /* "comment (T_COMMENT)"  */
    T_DOC_COMMENT = 375,           /* "doc comment (T_DOC_COMMENT)"  */
    T_OPEN_TAG = 376,              /* "open tag (T_OPEN_TAG)"  */
    T_OPEN_TAG_WITH_ECHO = 377,    /* "open tag with echo (T_OPEN_TAG_WITH_ECHO)"  */
    T_CLOSE_TAG = 378,             /* "close tag (T_CLOSE_TAG)"  */
    T_WHITESPACE = 379,            /* "whitespace (T_WHITESPACE)"  */
    T_START_HEREDOC = 380,         /* "heredoc start (T_START_HEREDOC)"  */
    T_END_HEREDOC = 381,           /* "heredoc end (T_END_HEREDOC)"  */
    T_DOLLAR_OPEN_CURLY_BRACES = 382, /* "${ (T_DOLLAR_OPEN_CURLY_BRACES)"  */
    T_CURLY_OPEN = 383,            /* "{$ (T_CURLY_OPEN)"  */
    T_PAAMAYIM_NEKUDOTAYIM = 384,  /* ":: (T_PAAMAYIM_NEKUDOTAYIM)"  */
    T_NAMESPACE = 385,             /* "namespace (T_NAMESPACE)"  */
    T_NS_C = 386,                  /* "__NAMESPACE__ (T_NS_C)"  */
    T_NS_SEPARATOR = 387,          /* "\\ (T_NS_SEPARATOR)"  */
    T_ELLIPSIS = 388,              /* "... (T_ELLIPSIS)"  */
    T_COALESCE = 389,              /* "?? (T_COALESCE)"  */
    T_POW = 390,                   /* "** (T_POW)"  */
    T_POW_EQUAL = 391,             /* "**= (T_POW_EQUAL)"  */
    T_ERROR = 392                  /* T_ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define END 0
#define YYerror 256
#define YYUNDEF 257
#define T_NOELSE 258
#define T_LNUMBER 259
#define T_DNUMBER 260
#define T_STRING 261
#define T_VARIABLE 262
#define T_INLINE_HTML 263
#define T_ENCAPSED_AND_WHITESPACE 264
#define T_CONSTANT_ENCAPSED_STRING 265
#define T_STRING_VARNAME 266
#define T_NUM_STRING 267
#define T_INCLUDE 268
#define T_INCLUDE_ONCE 269
#define T_EVAL 270
#define T_REQUIRE 271
#define T_REQUIRE_ONCE 272
#define T_LOGICAL_OR 273
#define T_LOGICAL_XOR 274
#define T_LOGICAL_AND 275
#define T_PRINT 276
#define T_YIELD 277
#define T_YIELD_FROM 278
#define T_PLUS_EQUAL 279
#define T_MINUS_EQUAL 280
#define T_MUL_EQUAL 281
#define T_DIV_EQUAL 282
#define T_CONCAT_EQUAL 283
#define T_MOD_EQUAL 284
#define T_AND_EQUAL 285
#define T_OR_EQUAL 286
#define T_XOR_EQUAL 287
#define T_SL_EQUAL 288
#define T_SR_EQUAL 289
#define T_BOOLEAN_OR 290
#define T_BOOLEAN_AND 291
#define T_IS_EQUAL 292
#define T_IS_NOT_EQUAL 293
#define T_IS_IDENTICAL 294
#define T_IS_NOT_IDENTICAL 295
#define T_IS_SMALLER_OR_EQUAL 296
#define T_IS_GREATER_OR_EQUAL 297
#define T_SPACESHIP 298
#define T_SL 299
#define T_SR 300
#define T_INSTANCEOF 301
#define T_INC 302
#define T_DEC 303
#define T_INT_CAST 304
#define T_DOUBLE_CAST 305
#define T_STRING_CAST 306
#define T_ARRAY_CAST 307
#define T_OBJECT_CAST 308
#define T_BOOL_CAST 309
#define T_UNSET_CAST 310
#define T_NEW 311
#define T_CLONE 312
#define T_EXIT 313
#define T_IF 314
#define T_ELSEIF 315
#define T_ELSE 316
#define T_ENDIF 317
#define T_ECHO 318
#define T_DO 319
#define T_WHILE 320
#define T_ENDWHILE 321
#define T_FOR 322
#define T_ENDFOR 323
#define T_FOREACH 324
#define T_ENDFOREACH 325
#define T_DECLARE 326
#define T_ENDDECLARE 327
#define T_AS 328
#define T_SWITCH 329
#define T_ENDSWITCH 330
#define T_CASE 331
#define T_DEFAULT 332
#define T_BREAK 333
#define T_CONTINUE 334
#define T_GOTO 335
#define T_FUNCTION 336
#define T_CONST 337
#define T_RETURN 338
#define T_TRY 339
#define T_CATCH 340
#define T_FINALLY 341
#define T_THROW 342
#define T_USE 343
#define T_INSTEADOF 344
#define T_GLOBAL 345
#define T_STATIC 346
#define T_ABSTRACT 347
#define T_FINAL 348
#define T_PRIVATE 349
#define T_PROTECTED 350
#define T_PUBLIC 351
#define T_VAR 352
#define T_UNSET 353
#define T_ISSET 354
#define T_EMPTY 355
#define T_HALT_COMPILER 356
#define T_CLASS 357
#define T_TRAIT 358
#define T_INTERFACE 359
#define T_EXTENDS 360
#define T_IMPLEMENTS 361
#define T_OBJECT_OPERATOR 362
#define T_DOUBLE_ARROW 363
#define T_LIST 364
#define T_ARRAY 365
#define T_CALLABLE 366
#define T_LINE 367
#define T_FILE 368
#define T_DIR 369
#define T_CLASS_C 370
#define T_TRAIT_C 371
#define T_METHOD_C 372
#define T_FUNC_C 373
#define T_COMMENT 374
#define T_DOC_COMMENT 375
#define T_OPEN_TAG 376
#define T_OPEN_TAG_WITH_ECHO 377
#define T_CLOSE_TAG 378
#define T_WHITESPACE 379
#define T_START_HEREDOC 380
#define T_END_HEREDOC 381
#define T_DOLLAR_OPEN_CURLY_BRACES 382
#define T_CURLY_OPEN 383
#define T_PAAMAYIM_NEKUDOTAYIM 384
#define T_NAMESPACE 385
#define T_NS_C 386
#define T_NS_SEPARATOR 387
#define T_ELLIPSIS 388
#define T_COALESCE 389
#define T_POW 390
#define T_POW_EQUAL 391
#define T_ERROR 392

/* Value type.  */




int zendparse (void);


#endif /* !YY_ZEND_ROOT_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */
