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

#ifndef YY_ASM_MIPS_Y_TAB_H_INCLUDED
# define YY_ASM_MIPS_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int asm_mipsdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ALIGN_ = 258,                 /* _ALIGN_  */
    _ASCII_ = 259,                 /* _ASCII_  */
    _ASCIIZ_ = 260,                /* _ASCIIZ_  */
    _BYTE_ = 261,                  /* _BYTE_  */
    _COMM_ = 262,                  /* _COMM_  */
    _END_ = 263,                   /* _END_  */
    _ENT_ = 264,                   /* _ENT_  */
    _EQU_ = 265,                   /* _EQU_  */
    _EXTERN_ = 266,                /* _EXTERN_  */
    _GLOBAL_ = 267,                /* _GLOBAL_  */
    _LCOMM_ = 268,                 /* _LCOMM_  */
    _NOREORDER_ = 269,             /* _NOREORDER_  */
    _REORDER_ = 270,               /* _REORDER_  */
    _SECTION_ = 271,               /* _SECTION_  */
    _SET_ = 272,                   /* _SET_  */
    _SKIP_ = 273,                  /* _SKIP_  */
    _SPACE_ = 274,                 /* _SPACE_  */
    _WORD_ = 275,                  /* _WORD_  */
    ARegister = 276,               /* ARegister  */
    Ampersand = 277,               /* Ampersand  */
    Bar = 278,                     /* Bar  */
    CarriageReturn = 279,          /* CarriageReturn  */
    Circomflex = 280,              /* Circomflex  */
    Codop_hint_mem = 281,          /* Codop_hint_mem  */
    Codop_label = 282,             /* Codop_label  */
    Codop_n = 283,                 /* Codop_n  */
    Codop_od_rs = 284,             /* Codop_od_rs  */
    Codop_rd = 285,                /* Codop_rd  */
    Codop_rd_si16 = 286,           /* Codop_rd_si16  */
    Codop_rd_rs = 287,             /* Codop_rd_rs  */
    Codop_rd_rs_rt = 288,          /* Codop_rd_rs_rt  */
    Codop_rd_rt_sham = 289,        /* Codop_rd_rt_sham  */
    Codop_rd_rt_rs = 290,          /* Codop_rd_rt_rs  */
    Codop_rd_rs_si16 = 291,        /* Codop_rd_rs_si16  */
    Codop_rd_rs_ui16 = 292,        /* Codop_rd_rs_ui16  */
    Codop_rd_mem = 293,            /* Codop_rd_mem  */
    Codop_rs = 294,                /* Codop_rs  */
    Codop_rs_label = 295,          /* Codop_rs_label  */
    Codop_rs_rt = 296,             /* Codop_rs_rt  */
    Codop_rs_rt_label = 297,       /* Codop_rs_rt_label  */
    Codop_rs_si16 = 298,           /* Codop_rs_si16  */
    Codop_rt_cop0r = 299,          /* Codop_rt_cop0r  */
    Codop_rt_cop2r = 300,          /* Codop_rt_cop2r  */
    Codop_rt_mem = 301,            /* Codop_rt_mem  */
    Codop_ui20 = 302,              /* Codop_ui20  */
    Colon = 303,                   /* Colon  */
    Comma = 304,                   /* Comma  */
    Cop0Register = 305,            /* Cop0Register  */
    DoubleGreat = 306,             /* DoubleGreat  */
    DoubleLess = 307,              /* DoubleLess  */
    Identifier = 308,              /* Identifier  */
    IntegerRegister = 309,         /* IntegerRegister  */
    LeftParen = 310,               /* LeftParen  */
    Litteral = 311,                /* Litteral  */
    Macro_label = 312,             /* Macro_label  */
    Macro_n = 313,                 /* Macro_n  */
    Macro_rd_i32 = 314,            /* Macro_rd_i32  */
    Macro_rd_rs = 315,             /* Macro_rd_rs  */
    Macro_rd_rt = 316,             /* Macro_rd_rt  */
    Macro_rd_label = 317,          /* Macro_rd_label  */
    Macro_rs_label = 318,          /* Macro_rs_label  */
    Minus = 319,                   /* Minus  */
    Plus = 320,                    /* Plus  */
    Register = 321,                /* Register  */
    RightParen = 322,              /* RightParen  */
    Slash = 323,                   /* Slash  */
    Star = 324,                    /* Star  */
    String = 325,                  /* String  */
    String2 = 326,                 /* String2  */
    GCC_operator = 327,            /* GCC_operator  */
    Tilda = 328,                   /* Tilda  */
    Arobase = 329                  /* Arobase  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define _ALIGN_ 258
#define _ASCII_ 259
#define _ASCIIZ_ 260
#define _BYTE_ 261
#define _COMM_ 262
#define _END_ 263
#define _ENT_ 264
#define _EQU_ 265
#define _EXTERN_ 266
#define _GLOBAL_ 267
#define _LCOMM_ 268
#define _NOREORDER_ 269
#define _REORDER_ 270
#define _SECTION_ 271
#define _SET_ 272
#define _SKIP_ 273
#define _SPACE_ 274
#define _WORD_ 275
#define ARegister 276
#define Ampersand 277
#define Bar 278
#define CarriageReturn 279
#define Circomflex 280
#define Codop_hint_mem 281
#define Codop_label 282
#define Codop_n 283
#define Codop_od_rs 284
#define Codop_rd 285
#define Codop_rd_si16 286
#define Codop_rd_rs 287
#define Codop_rd_rs_rt 288
#define Codop_rd_rt_sham 289
#define Codop_rd_rt_rs 290
#define Codop_rd_rs_si16 291
#define Codop_rd_rs_ui16 292
#define Codop_rd_mem 293
#define Codop_rs 294
#define Codop_rs_label 295
#define Codop_rs_rt 296
#define Codop_rs_rt_label 297
#define Codop_rs_si16 298
#define Codop_rt_cop0r 299
#define Codop_rt_cop2r 300
#define Codop_rt_mem 301
#define Codop_ui20 302
#define Colon 303
#define Comma 304
#define Cop0Register 305
#define DoubleGreat 306
#define DoubleLess 307
#define Identifier 308
#define IntegerRegister 309
#define LeftParen 310
#define Litteral 311
#define Macro_label 312
#define Macro_n 313
#define Macro_rd_i32 314
#define Macro_rd_rs 315
#define Macro_rd_rt 316
#define Macro_rd_label 317
#define Macro_rs_label 318
#define Minus 319
#define Plus 320
#define Register 321
#define RightParen 322
#define Slash 323
#define Star 324
#define String 325
#define String2 326
#define GCC_operator 327
#define Tilda 328
#define Arobase 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 63 "asm_mips.yac"

  struct utchn  *pchn    ;
  unsigned int   uval    ;
  char          *text    ;
  

#line 222 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int asm_mipsparse (void);


#endif /* !YY_ASM_MIPS_Y_TAB_H_INCLUDED  */
