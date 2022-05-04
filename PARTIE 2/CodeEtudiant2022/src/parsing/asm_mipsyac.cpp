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
#define yyparse         asm_mipsparse
#define yylex           asm_mipslex
#define yyerror         asm_mipserror
#define yydebug         asm_mipsdebug
#define yynerrs         asm_mipsnerrs

/* First part of user prologue.  */
#line 10 "asm_mips.yac"

#include <iostream>
#include <Program.h>
#include <Directive.h>
#include <Label.h>
#include <stdlib.h>
#include <stdio.h>
extern "C" {
#include "utl200.h"
#include "asm200.h"
}
#include <asm_mipsyac.h>
#include <map>
#include <sstream>

#undef  yylex
#define yylex         asm_mipslex
#define yyrestart     asm_mipsrestart
#define yyin          asm_mipsin

extern "C" {extern int            yylex     (YYSTYPE *);}

extern void           yyrestart ();
extern int            yyparse   ();
extern FILE           *yyin       ;

Program prog ;


map<int,string> strmap ;
static int strmap_id ;

void programparse(string file) {
	// ###------------------------------------------------------### 
	//    initialize global and static variables			
	// ###------------------------------------------------------### 

        // std::cout << "Starting parsing" << std::endl;
	
	strmap_id = 0;

	yyin = fopen(file.c_str(), "r") ;
	yyparse() ;
	// std::cout << "Parsing done" << std::endl;
}


static void yyerror (char * str)
	{ std::cout << "yyerror at line " << ASM_LINENO << " : " << str <<std::endl ;	}


#line 128 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
  

#line 336 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int asm_mipsparse (void);


#endif /* !YY_ASM_MIPS_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ALIGN_ = 3,                    /* _ALIGN_  */
  YYSYMBOL__ASCII_ = 4,                    /* _ASCII_  */
  YYSYMBOL__ASCIIZ_ = 5,                   /* _ASCIIZ_  */
  YYSYMBOL__BYTE_ = 6,                     /* _BYTE_  */
  YYSYMBOL__COMM_ = 7,                     /* _COMM_  */
  YYSYMBOL__END_ = 8,                      /* _END_  */
  YYSYMBOL__ENT_ = 9,                      /* _ENT_  */
  YYSYMBOL__EQU_ = 10,                     /* _EQU_  */
  YYSYMBOL__EXTERN_ = 11,                  /* _EXTERN_  */
  YYSYMBOL__GLOBAL_ = 12,                  /* _GLOBAL_  */
  YYSYMBOL__LCOMM_ = 13,                   /* _LCOMM_  */
  YYSYMBOL__NOREORDER_ = 14,               /* _NOREORDER_  */
  YYSYMBOL__REORDER_ = 15,                 /* _REORDER_  */
  YYSYMBOL__SECTION_ = 16,                 /* _SECTION_  */
  YYSYMBOL__SET_ = 17,                     /* _SET_  */
  YYSYMBOL__SKIP_ = 18,                    /* _SKIP_  */
  YYSYMBOL__SPACE_ = 19,                   /* _SPACE_  */
  YYSYMBOL__WORD_ = 20,                    /* _WORD_  */
  YYSYMBOL_ARegister = 21,                 /* ARegister  */
  YYSYMBOL_Ampersand = 22,                 /* Ampersand  */
  YYSYMBOL_Bar = 23,                       /* Bar  */
  YYSYMBOL_CarriageReturn = 24,            /* CarriageReturn  */
  YYSYMBOL_Circomflex = 25,                /* Circomflex  */
  YYSYMBOL_Codop_hint_mem = 26,            /* Codop_hint_mem  */
  YYSYMBOL_Codop_label = 27,               /* Codop_label  */
  YYSYMBOL_Codop_n = 28,                   /* Codop_n  */
  YYSYMBOL_Codop_od_rs = 29,               /* Codop_od_rs  */
  YYSYMBOL_Codop_rd = 30,                  /* Codop_rd  */
  YYSYMBOL_Codop_rd_si16 = 31,             /* Codop_rd_si16  */
  YYSYMBOL_Codop_rd_rs = 32,               /* Codop_rd_rs  */
  YYSYMBOL_Codop_rd_rs_rt = 33,            /* Codop_rd_rs_rt  */
  YYSYMBOL_Codop_rd_rt_sham = 34,          /* Codop_rd_rt_sham  */
  YYSYMBOL_Codop_rd_rt_rs = 35,            /* Codop_rd_rt_rs  */
  YYSYMBOL_Codop_rd_rs_si16 = 36,          /* Codop_rd_rs_si16  */
  YYSYMBOL_Codop_rd_rs_ui16 = 37,          /* Codop_rd_rs_ui16  */
  YYSYMBOL_Codop_rd_mem = 38,              /* Codop_rd_mem  */
  YYSYMBOL_Codop_rs = 39,                  /* Codop_rs  */
  YYSYMBOL_Codop_rs_label = 40,            /* Codop_rs_label  */
  YYSYMBOL_Codop_rs_rt = 41,               /* Codop_rs_rt  */
  YYSYMBOL_Codop_rs_rt_label = 42,         /* Codop_rs_rt_label  */
  YYSYMBOL_Codop_rs_si16 = 43,             /* Codop_rs_si16  */
  YYSYMBOL_Codop_rt_cop0r = 44,            /* Codop_rt_cop0r  */
  YYSYMBOL_Codop_rt_cop2r = 45,            /* Codop_rt_cop2r  */
  YYSYMBOL_Codop_rt_mem = 46,              /* Codop_rt_mem  */
  YYSYMBOL_Codop_ui20 = 47,                /* Codop_ui20  */
  YYSYMBOL_Colon = 48,                     /* Colon  */
  YYSYMBOL_Comma = 49,                     /* Comma  */
  YYSYMBOL_Cop0Register = 50,              /* Cop0Register  */
  YYSYMBOL_DoubleGreat = 51,               /* DoubleGreat  */
  YYSYMBOL_DoubleLess = 52,                /* DoubleLess  */
  YYSYMBOL_Identifier = 53,                /* Identifier  */
  YYSYMBOL_IntegerRegister = 54,           /* IntegerRegister  */
  YYSYMBOL_LeftParen = 55,                 /* LeftParen  */
  YYSYMBOL_Litteral = 56,                  /* Litteral  */
  YYSYMBOL_Macro_label = 57,               /* Macro_label  */
  YYSYMBOL_Macro_n = 58,                   /* Macro_n  */
  YYSYMBOL_Macro_rd_i32 = 59,              /* Macro_rd_i32  */
  YYSYMBOL_Macro_rd_rs = 60,               /* Macro_rd_rs  */
  YYSYMBOL_Macro_rd_rt = 61,               /* Macro_rd_rt  */
  YYSYMBOL_Macro_rd_label = 62,            /* Macro_rd_label  */
  YYSYMBOL_Macro_rs_label = 63,            /* Macro_rs_label  */
  YYSYMBOL_Minus = 64,                     /* Minus  */
  YYSYMBOL_Plus = 65,                      /* Plus  */
  YYSYMBOL_Register = 66,                  /* Register  */
  YYSYMBOL_RightParen = 67,                /* RightParen  */
  YYSYMBOL_Slash = 68,                     /* Slash  */
  YYSYMBOL_Star = 69,                      /* Star  */
  YYSYMBOL_String = 70,                    /* String  */
  YYSYMBOL_String2 = 71,                   /* String2  */
  YYSYMBOL_GCC_operator = 72,              /* GCC_operator  */
  YYSYMBOL_Tilda = 73,                     /* Tilda  */
  YYSYMBOL_Arobase = 74,                   /* Arobase  */
  YYSYMBOL_YYACCEPT = 75,                  /* $accept  */
  YYSYMBOL_adding_operator = 76,           /* adding_operator  */
  YYSYMBOL_77_a_label_ = 77,               /* .a_label.  */
  YYSYMBOL_align_directive = 78,           /* align_directive  */
  YYSYMBOL_79_an_instruction_ = 79,        /* ..an_instruction..  */
  YYSYMBOL_an_instruction = 80,            /* an_instruction  */
  YYSYMBOL_assembly_file = 81,             /* assembly_file  */
  YYSYMBOL_assembly_instructions = 82,     /* assembly_instructions  */
  YYSYMBOL_byte_immediate_list = 83,       /* byte_immediate_list  */
  YYSYMBOL_84_byte_immediate_ = 84,        /* ...byte_immediate..  */
  YYSYMBOL_CarriageReturn_ERR = 85,        /* CarriageReturn_ERR  */
  YYSYMBOL_cop0_reg = 86,                  /* cop0_reg  */
  YYSYMBOL_cop2_reg = 87,                  /* cop2_reg  */
  YYSYMBOL_effective_instruction = 88,     /* effective_instruction  */
  YYSYMBOL_end_directive = 89,             /* end_directive  */
  YYSYMBOL_ent_directive = 90,             /* ent_directive  */
  YYSYMBOL_91_Identifier_ = 91,            /* .Identifier.  */
  YYSYMBOL_equ_directive = 92,             /* equ_directive  */
  YYSYMBOL_93_expr_addop__expr_ = 93,      /* expr..addop__expr..  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_95_expr__logop__expr_logop__expr_ = 95, /* expr__logop__expr..logop__expr..  */
  YYSYMBOL_96_expr__mulop__expr_mulop__expr_ = 96, /* expr__mulop__expr..mulop__expr..  */
  YYSYMBOL_expr__shfop__expr = 97,         /* expr__shfop__expr  */
  YYSYMBOL_extern_directive = 98,          /* extern_directive  */
  YYSYMBOL_format_hint_mem = 99,           /* format_hint_mem  */
  YYSYMBOL_format_label = 100,             /* format_label  */
  YYSYMBOL_format_n = 101,                 /* format_n  */
  YYSYMBOL_format_od_rs = 102,             /* format_od_rs  */
  YYSYMBOL_format_rd = 103,                /* format_rd  */
  YYSYMBOL_format_rd_mem = 104,            /* format_rd_mem  */
  YYSYMBOL_format_rd_si16 = 105,           /* format_rd_si16  */
  YYSYMBOL_format_rd_rs = 106,             /* format_rd_rs  */
  YYSYMBOL_format_rd_rs_rt = 107,          /* format_rd_rs_rt  */
  YYSYMBOL_format_rd_rs_si16 = 108,        /* format_rd_rs_si16  */
  YYSYMBOL_format_rd_rs_ui16 = 109,        /* format_rd_rs_ui16  */
  YYSYMBOL_format_rd_rt_rs = 110,          /* format_rd_rt_rs  */
  YYSYMBOL_format_rd_rt_sham = 111,        /* format_rd_rt_sham  */
  YYSYMBOL_format_rs = 112,                /* format_rs  */
  YYSYMBOL_format_rs_label = 113,          /* format_rs_label  */
  YYSYMBOL_format_rs_rt = 114,             /* format_rs_rt  */
  YYSYMBOL_format_rs_rt_label = 115,       /* format_rs_rt_label  */
  YYSYMBOL_format_rs_si16 = 116,           /* format_rs_si16  */
  YYSYMBOL_format_rt_cop0r = 117,          /* format_rt_cop0r  */
  YYSYMBOL_format_rt_cop2r = 118,          /* format_rt_cop2r  */
  YYSYMBOL_format_rt_mem = 119,            /* format_rt_mem  */
  YYSYMBOL_format_ui20 = 120,              /* format_ui20  */
  YYSYMBOL_global_directive = 121,         /* global_directive  */
  YYSYMBOL_signed_16_bit_immediate = 122,  /* signed_16_bit_immediate  */
  YYSYMBOL_immediate = 123,                /* immediate  */
  YYSYMBOL_integer_register = 124,         /* integer_register  */
  YYSYMBOL_label = 125,                    /* label  */
  YYSYMBOL_labelable_directive = 126,      /* labelable_directive  */
  YYSYMBOL_logic_operator = 127,           /* logic_operator  */
  YYSYMBOL_macro_instruction = 128,        /* macro_instruction  */
  YYSYMBOL_macro_label = 129,              /* macro_label  */
  YYSYMBOL_macro_n = 130,                  /* macro_n  */
  YYSYMBOL_macro_rd_i32 = 131,             /* macro_rd_i32  */
  YYSYMBOL_macro_rd_label = 132,           /* macro_rd_label  */
  YYSYMBOL_macro_rd_rs = 133,              /* macro_rd_rs  */
  YYSYMBOL_macro_rd_rt = 134,              /* macro_rd_rt  */
  YYSYMBOL_macro_rs_label = 135,           /* macro_rs_label  */
  YYSYMBOL_memory_alloc_directive = 136,   /* memory_alloc_directive  */
  YYSYMBOL_memory_ascii_alloc = 137,       /* memory_ascii_alloc  */
  YYSYMBOL_memory_asciiz_alloc = 138,      /* memory_asciiz_alloc  */
  YYSYMBOL_memory_byte_alloc = 139,        /* memory_byte_alloc  */
  YYSYMBOL_memory_lcomm_alloc = 140,       /* memory_lcomm_alloc  */
  YYSYMBOL_memory_comm_alloc = 141,        /* memory_comm_alloc  */
  YYSYMBOL_memory_space_alloc = 142,       /* memory_space_alloc  */
  YYSYMBOL_memory_skip_alloc = 143,        /* memory_skip_alloc  */
  YYSYMBOL_memory_word_alloc = 144,        /* memory_word_alloc  */
  YYSYMBOL_mips_instruction = 145,         /* mips_instruction  */
  YYSYMBOL_mul_div_operator = 146,         /* mul_div_operator  */
  YYSYMBOL_primary = 147,                  /* primary  */
  YYSYMBOL_section_specification_directive = 148, /* section_specification_directive  */
  YYSYMBOL_set_directive = 149,            /* set_directive  */
  YYSYMBOL_other_directive = 150,          /* other_directive  */
  YYSYMBOL__String = 151,                  /* _String  */
  YYSYMBOL_shift_operator = 152,           /* shift_operator  */
  YYSYMBOL_term = 153,                     /* term  */
  YYSYMBOL_unlabeled_directive = 154,      /* unlabeled_directive  */
  YYSYMBOL_155_unlabeled_instruction_ = 155, /* .unlabeled_instruction.  */
  YYSYMBOL_unsigned_16_bit_immediate = 156, /* unsigned_16_bit_immediate  */
  YYSYMBOL_word_immediate_list = 157,      /* word_immediate_list  */
  YYSYMBOL_158_word_immediate_ = 158       /* ...word_immediate..  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   371

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   329


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   178,   178,   180,   185,   186,   192,   201,   202,   207,
     210,   212,   217,   221,   225,   236,   240,   251,   255,   260,
     265,   266,   270,   276,   283,   284,   289,   300,   302,   314,
     318,   323,   328,   333,   341,   352,   359,   366,   376,   385,
     404,   417,   431,   447,   457,   472,   486,   508,   530,   551,
     573,   585,   600,   616,   645,   662,   679,   696,   715,   734,
     753,   768,   790,   815,   848,   864,   884,   904,   921,   938,
     956,   975,   992,  1010,  1023,  1032,  1037,  1039,  1041,  1043,
    1048,  1050,  1055,  1057,  1062,  1069,  1073,  1075,  1077,  1082,
    1083,  1084,  1085,  1086,  1087,  1088,  1092,  1104,  1114,  1134,
    1157,  1171,  1187,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1211,  1215,  1224,  1233,  1239,  1250,  1263,  1272,  1281,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,
    1308,  1312,  1314,  1319,  1321,  1330,  1335,  1342,  1345,  1348,
    1356,  1366,  1370,  1377,  1384,  1391,  1398,  1405,  1412,  1421,
    1423,  1428,  1430,  1433,  1439,  1440,  1441,  1442,  1443,  1444,
    1445,  1446,  1448,  1452,  1453,  1454,  1458,  1463,  1474,  1478
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
  "\"end of file\"", "error", "\"invalid token\"", "_ALIGN_", "_ASCII_",
  "_ASCIIZ_", "_BYTE_", "_COMM_", "_END_", "_ENT_", "_EQU_", "_EXTERN_",
  "_GLOBAL_", "_LCOMM_", "_NOREORDER_", "_REORDER_", "_SECTION_", "_SET_",
  "_SKIP_", "_SPACE_", "_WORD_", "ARegister", "Ampersand", "Bar",
  "CarriageReturn", "Circomflex", "Codop_hint_mem", "Codop_label",
  "Codop_n", "Codop_od_rs", "Codop_rd", "Codop_rd_si16", "Codop_rd_rs",
  "Codop_rd_rs_rt", "Codop_rd_rt_sham", "Codop_rd_rt_rs",
  "Codop_rd_rs_si16", "Codop_rd_rs_ui16", "Codop_rd_mem", "Codop_rs",
  "Codop_rs_label", "Codop_rs_rt", "Codop_rs_rt_label", "Codop_rs_si16",
  "Codop_rt_cop0r", "Codop_rt_cop2r", "Codop_rt_mem", "Codop_ui20",
  "Colon", "Comma", "Cop0Register", "DoubleGreat", "DoubleLess",
  "Identifier", "IntegerRegister", "LeftParen", "Litteral", "Macro_label",
  "Macro_n", "Macro_rd_i32", "Macro_rd_rs", "Macro_rd_rt",
  "Macro_rd_label", "Macro_rs_label", "Minus", "Plus", "Register",
  "RightParen", "Slash", "Star", "String", "String2", "GCC_operator",
  "Tilda", "Arobase", "$accept", "adding_operator", ".a_label.",
  "align_directive", "..an_instruction..", "an_instruction",
  "assembly_file", "assembly_instructions", "byte_immediate_list",
  "...byte_immediate..", "CarriageReturn_ERR", "cop0_reg", "cop2_reg",
  "effective_instruction", "end_directive", "ent_directive",
  ".Identifier.", "equ_directive", "expr..addop__expr..", "expression",
  "expr__logop__expr..logop__expr..", "expr__mulop__expr..mulop__expr..",
  "expr__shfop__expr", "extern_directive", "format_hint_mem",
  "format_label", "format_n", "format_od_rs", "format_rd", "format_rd_mem",
  "format_rd_si16", "format_rd_rs", "format_rd_rs_rt", "format_rd_rs_si16",
  "format_rd_rs_ui16", "format_rd_rt_rs", "format_rd_rt_sham", "format_rs",
  "format_rs_label", "format_rs_rt", "format_rs_rt_label",
  "format_rs_si16", "format_rt_cop0r", "format_rt_cop2r", "format_rt_mem",
  "format_ui20", "global_directive", "signed_16_bit_immediate",
  "immediate", "integer_register", "label", "labelable_directive",
  "logic_operator", "macro_instruction", "macro_label", "macro_n",
  "macro_rd_i32", "macro_rd_label", "macro_rd_rs", "macro_rd_rt",
  "macro_rs_label", "memory_alloc_directive", "memory_ascii_alloc",
  "memory_asciiz_alloc", "memory_byte_alloc", "memory_lcomm_alloc",
  "memory_comm_alloc", "memory_space_alloc", "memory_skip_alloc",
  "memory_word_alloc", "mips_instruction", "mul_div_operator", "primary",
  "section_specification_directive", "set_directive", "other_directive",
  "_String", "shift_operator", "term", "unlabeled_directive",
  ".unlabeled_instruction.", "unsigned_16_bit_immediate",
  "word_immediate_list", "...word_immediate..", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-223)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-147)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -223,   132,    10,  -223,    -4,   -44,   -28,   -22,   -16,   -42,
     -42,   -13,    -7,   -20,  -223,  -223,   308,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,     8,  -223,  -223,  -223,    -4,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,     9,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,    61,  -223,    16,    67,   -59,   199,
     158,    -8,  -223,  -223,  -223,  -223,     6,    -5,    -2,    61,
      20,    24,     7,    43,    61,    61,    57,  -223,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,    61,    61,  -223,   -18,
     -18,   -18,   -18,   -18,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,    -4,  -223,  -223,    61,
      33,    61,  -223,    61,  -223,  -223,  -223,    61,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,    61,    61,    61,    61,    61,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,    52,    58,  -223,  -223,  -223,  -223,    59,
    -223,  -223,    66,  -223,    69,    70,    75,    77,    79,    97,
      98,   104,  -223,   105,   106,   108,   133,   135,   137,   138,
    -223,  -223,   148,   151,   152,   153,   155,  -223,  -223,  -223,
     139,   141,  -223,  -223,  -223,  -223,  -223,  -223,   156,   154,
     157,   160,    61,   -18,   -38,   -18,   -18,   -18,   -18,   -18,
     -18,   -34,    61,   -18,   -18,    61,   161,   191,   143,    61,
     -18,   -18,    61,    61,  -223,  -223,    61,   165,  -223,    61,
     162,  -223,  -223,  -223,  -223,  -223,   169,   174,   176,   179,
     180,    57,   177,   178,   189,  -223,   186,   196,  -223,  -223,
    -223,  -223,  -223,    57,   193,   197,   189,  -223,  -223,  -223,
    -223,  -223,  -223,   200,  -223,   -18,    57,    61,   -18,   207,
      61,   188,   -18,   -18,   -18,   217,   190,   -18,   -18,  -223,
     192,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     198,   202,  -223,  -223,  -223,  -223,   209,   210,  -223,  -223,
    -223,  -223,  -223
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,    12,     0,     0,    24,     0,     0,     0,
       0,     0,     0,   151,    83,    84,   173,   164,     8,   171,
     170,   166,   168,   167,     0,   165,   169,   172,     0,     1,
      17,    11,     6,    25,    22,    23,     0,    82,    38,    74,
     145,   148,   147,   144,     0,   143,     0,     0,    76,    27,
      78,    77,    79,   149,   161,    32,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,   175,   119,   120,   121,   122,   123,
     124,   131,   125,   126,   127,   128,   129,   130,   132,   133,
     134,   135,   136,   138,   139,   137,   140,   174,    21,    94,
      95,    89,    90,    91,    92,    93,    85,   105,   106,   104,
     110,   109,   108,   107,   103,    20,     0,     5,    10,     0,
       0,     0,   162,     0,   163,     3,     2,     0,    87,    86,
      88,   160,   159,   142,   141,     0,     0,     0,     0,     0,
      81,   153,   156,    80,   157,   158,   152,   154,   155,   111,
     112,   113,    15,     0,     0,   117,   116,   178,   118,     0,
      40,    41,    43,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
      73,    96,     0,     0,     0,     0,     0,     9,    26,    29,
       0,     0,    28,    33,    35,    37,    34,    36,    14,     0,
       0,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    30,     0,     0,   114,     0,
       0,    75,    44,    51,    50,    52,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    61,    62,     0,    66,    18,
      67,    19,    68,     0,     0,     0,    72,    98,   100,   101,
      99,   102,    16,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,    56,    53,    59,    58,    55,    54,   176,    57,    48,
       0,     0,    63,    65,    64,    71,     0,     0,    39,    47,
      46,    70,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     -27,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -114,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -222,   -12,    13,
      14,  -223,   208,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,     4,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   147,    16,    17,     1,    18,     2,     3,   171,   218,
      31,   270,   272,    94,    19,    20,    34,    21,    48,    49,
      50,    51,    52,    22,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    23,   250,   251,   168,
      24,   117,   155,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   156,    54,    25,    26,    27,    56,   157,    55,    28,
     136,   308,   178,   221
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   138,   254,   160,  -146,   145,   146,    41,    42,   263,
      29,    37,    32,   268,    14,    43,   275,    44,    45,    43,
      30,   261,    45,    38,    39,    33,    46,   160,   -82,    15,
      46,    35,   140,   212,   253,    47,   163,    36,   262,    47,
      40,   213,   214,   215,   216,   217,    43,   172,    44,    45,
     142,   144,   177,   179,   180,   161,   137,    46,   139,   162,
     163,   159,   164,   175,   301,   169,    47,   306,   170,    43,
     165,   141,    45,   173,   200,   201,   166,   174,   160,   181,
     167,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   176,
     209,   219,   202,   203,   204,   205,   206,   220,   222,   207,
      43,   163,    44,    45,    43,   223,    44,    45,   224,   225,
      43,    46,   143,    45,   226,    46,   227,   208,   228,   210,
      47,   211,   -13,     4,    47,     5,    -4,    -4,    -4,    -4,
       6,     7,     8,     9,    10,    -4,   229,   230,    11,    12,
      -4,    -4,    -4,   231,   232,   233,    -4,   234,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
     148,   149,   235,   150,   236,    13,   237,   238,    14,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    43,   239,   273,    45,
     240,   241,   242,    15,   243,   246,   244,    46,   245,   249,
     247,   269,   271,   248,   283,   274,    47,   285,   286,   264,
     265,   148,   149,   287,   150,   288,   276,   277,   289,   290,
     280,   281,   292,   293,   282,   294,   252,   284,   255,   256,
     257,   258,   259,   260,   -75,   295,   266,   267,   297,   140,
     151,   152,   298,   278,   279,   309,   299,   315,   158,   318,
      43,   140,    44,    45,     0,   319,     0,   153,   154,   320,
      43,    46,    44,    45,   291,   303,   321,   322,   307,   305,
      47,    46,     0,   314,     0,     0,   296,     0,   313,     0,
      47,     0,     0,     0,     0,     0,     0,     0,   300,   302,
       0,   304,     0,     0,     0,   310,   311,   312,     0,     0,
     316,   317,    57,    58,    59,    60,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,    62,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93
};

static const yytype_int16 yycheck[] =
{
      12,    28,   224,    21,    24,    64,    65,    14,    15,   231,
       0,    53,    56,   235,    56,    53,   238,    55,    56,    53,
      24,    55,    56,     9,    10,    53,    64,    21,    48,    71,
      64,    53,    44,   147,    72,    73,    54,    53,    72,    73,
      53,   155,   156,   157,   158,   159,    53,    59,    55,    56,
      46,    47,    64,    65,    66,    49,    48,    64,    49,    53,
      54,    69,    56,    56,   286,    70,    73,   289,    70,    53,
      64,    55,    56,    53,    86,    87,    70,    53,    21,    66,
      74,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    56,
      67,    49,    89,    90,    91,    92,    93,    49,    49,   136,
      53,    54,    55,    56,    53,    49,    55,    56,    49,    49,
      53,    64,    55,    56,    49,    64,    49,   139,    49,   141,
      73,   143,     0,     1,    73,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    49,    49,    16,    17,
      18,    19,    20,    49,    49,    49,    24,    49,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      22,    23,    49,    25,    49,    53,    49,    49,    56,    57,
      58,    59,    60,    61,    62,    63,    53,    49,    55,    56,
      49,    49,    49,    71,    49,    49,    67,    64,    67,    49,
      56,    50,    21,    56,    49,    72,    73,    55,    49,   231,
     232,    22,    23,    49,    25,    49,   238,   239,    49,    49,
     242,   243,    55,    55,   246,    49,   223,   249,   225,   226,
     227,   228,   229,   230,    55,    49,   233,   234,    55,   261,
      51,    52,    55,   240,   241,    67,    56,    67,    50,    67,
      53,   273,    55,    56,    -1,    67,    -1,    68,    69,    67,
      53,    64,    55,    56,   261,   287,    67,    67,   290,    72,
      73,    64,    -1,   295,    -1,    -1,   273,    -1,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
      -1,   288,    -1,    -1,    -1,   292,   293,   294,    -1,    -1,
     297,   298,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,    81,    82,     1,     3,     8,     9,    10,    11,
      12,    16,    17,    53,    56,    71,    77,    78,    80,    89,
      90,    92,    98,   121,   125,   148,   149,   150,   154,     0,
      24,    85,    56,    53,    91,    53,    53,    53,   125,   125,
      53,    14,    15,    53,    55,    56,    64,    73,    93,    94,
      95,    96,    97,   123,   147,   153,   151,     4,     5,     6,
       7,    13,    18,    19,    20,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    57,    58,    59,
      60,    61,    62,    63,    88,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   126,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   155,    48,    85,    49,
     123,    55,   147,    55,   147,    64,    65,    76,    22,    23,
      25,    51,    52,    68,    69,   127,   146,   152,   127,    69,
      21,    49,    53,    54,    56,    64,    70,    74,   124,    70,
      70,    83,   123,    53,    53,    56,    56,   123,   157,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     123,   123,   124,   124,   124,   124,   124,    85,   123,    67,
     123,   123,    94,    94,    94,    94,    94,    94,    84,    49,
      49,   158,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    67,    67,    49,    56,    56,    49,
     122,   123,   124,    72,   122,   124,   124,   124,   124,   124,
     124,    55,    72,   122,   123,   123,   124,   124,   122,    50,
      86,    21,    87,    55,    72,   122,   123,   123,   124,   124,
     123,   123,   123,    49,   123,    55,    49,    49,    49,    49,
      49,   124,    55,    55,    49,    49,   124,    55,    55,    56,
     124,   122,   124,   123,   124,    72,   122,   123,   156,    67,
     124,   124,   124,    71,   123,    67,   124,   124,    67,    67,
      67,    67,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    76,    77,    77,    78,    79,    79,    80,
      80,    80,    81,    82,    83,    84,    84,    85,    86,    87,
      88,    88,    89,    90,    91,    91,    92,    93,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    97,    98,    99,
     100,   100,   101,   102,   102,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   108,   108,   109,   110,   111,
     112,   113,   114,   114,   115,   115,   116,   117,   118,   119,
     119,   119,   119,   120,   121,   122,   123,   123,   123,   123,
     124,   124,   125,   125,   125,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   155,   155,   156,   157,   158,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     0,     2,     3,
       2,     2,     1,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     2,     2,     0,     1,     4,     1,     3,     3,
       4,     4,     1,     3,     3,     3,     3,     3,     2,     7,
       2,     2,     1,     2,     4,     2,     7,     7,     6,     4,
       4,     4,     4,     6,     6,     6,     6,     6,     6,     6,
       2,     4,     4,     6,     6,     6,     4,     4,     4,     7,
       7,     6,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     4,     4,
       4,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     4,     6,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     2,     0,     3
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
  YY_USE (yykind);
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 2: /* adding_operator: Plus  */
#line 179 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__PLUS ; }
#line 1746 "y.tab.c"
    break;

  case 3: /* adding_operator: Minus  */
#line 181 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__MINUS; }
#line 1752 "y.tab.c"
    break;

  case 5: /* .a_label.: label Colon  */
#line 188 "asm_mips.yac"
                { prog.add_line(new Label((yyvsp[-1].text))) ; }
#line 1758 "y.tab.c"
    break;

  case 6: /* align_directive: _ALIGN_ Litteral  */
#line 194 "asm_mips.yac"
                {	std::ostringstream lit ;
		    lit << (yyvsp[0].uval);
			prog.add_line(new Directive(".align",lit.str())) ;
		}
#line 1767 "y.tab.c"
    break;

  case 14: /* byte_immediate_list: immediate ...byte_immediate..  */
#line 227 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    bylist << (int) (yyvsp[-1].uval) << strmap[(yyvsp[0].uval)] ;
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[0].uval) ;
		}
#line 1777 "y.tab.c"
    break;

  case 15: /* ...byte_immediate..: %empty  */
#line 236 "asm_mips.yac"
                {	strmap_id++ ;
			strmap[strmap_id] = "" ;
			(yyval.uval) = strmap_id ;
		}
#line 1786 "y.tab.c"
    break;

  case 16: /* ...byte_immediate..: ...byte_immediate.. Comma immediate  */
#line 243 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    bylist << strmap[(yyvsp[-2].uval)] << "," << (yyvsp[0].uval);
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[-2].uval) ;
		}
#line 1796 "y.tab.c"
    break;

  case 18: /* cop0_reg: Cop0Register  */
#line 256 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval); }
#line 1802 "y.tab.c"
    break;

  case 19: /* cop2_reg: ARegister  */
#line 261 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval) & 0x00003fff; }
#line 1808 "y.tab.c"
    break;

  case 22: /* end_directive: _END_ .Identifier.  */
#line 272 "asm_mips.yac"
                {	prog.add_line(new Directive(".end",(yyvsp[0].text),false)) ; }
#line 1814 "y.tab.c"
    break;

  case 23: /* ent_directive: _ENT_ Identifier  */
#line 278 "asm_mips.yac"
                { prog.add_line(new Directive(".ent",(yyvsp[0].text),true)) ; }
#line 1820 "y.tab.c"
    break;

  case 24: /* .Identifier.: %empty  */
#line 283 "asm_mips.yac"
                { (yyval.text) = NULL; }
#line 1826 "y.tab.c"
    break;

  case 25: /* .Identifier.: Identifier  */
#line 285 "asm_mips.yac"
                { (yyval.text) = (yyvsp[0].text)  ; }
#line 1832 "y.tab.c"
    break;

  case 26: /* equ_directive: _EQU_ Identifier Comma immediate  */
#line 293 "asm_mips.yac"
                {	std::ostringstream lit ;
		    lit << (yyvsp[-2].text) << ",	" << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".equ",lit.str())) ;
		}
#line 1841 "y.tab.c"
    break;

  case 27: /* expr..addop__expr..: expression  */
#line 301 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval); }
#line 1847 "y.tab.c"
    break;

  case 28: /* expr..addop__expr..: expr..addop__expr.. adding_operator expression  */
#line 305 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__PLUS)
			{(yyval.uval) = (yyvsp[-2].uval) + (yyvsp[0].uval);}
		else
			{(yyval.uval) = (yyvsp[-2].uval) - (yyvsp[0].uval);}
		}
#line 1858 "y.tab.c"
    break;

  case 29: /* expression: LeftParen immediate RightParen  */
#line 317 "asm_mips.yac"
                { (yyval.uval) =   (yyvsp[-1].uval); }
#line 1864 "y.tab.c"
    break;

  case 30: /* expression: Tilda LeftParen immediate RightParen  */
#line 322 "asm_mips.yac"
                { (yyval.uval) = ~ (yyvsp[-1].uval); }
#line 1870 "y.tab.c"
    break;

  case 31: /* expression: Minus LeftParen immediate RightParen  */
#line 327 "asm_mips.yac"
                { (yyval.uval) = - (yyvsp[-1].uval); }
#line 1876 "y.tab.c"
    break;

  case 32: /* expression: term  */
#line 329 "asm_mips.yac"
                { (yyval.uval) =   (yyvsp[0].uval); }
#line 1882 "y.tab.c"
    break;

  case 33: /* expr__logop__expr..logop__expr..: expression logic_operator expression  */
#line 336 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__OR  ) (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__AND ) (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__XOR ) (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval);
		}
#line 1892 "y.tab.c"
    break;

  case 34: /* expr__logop__expr..logop__expr..: expr__logop__expr..logop__expr.. logic_operator expression  */
#line 344 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__OR  ) (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__AND ) (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval);
		if   ((yyvsp[-1].uval) == ASM_OPR__XOR ) (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval);
		}
#line 1902 "y.tab.c"
    break;

  case 35: /* expr__mulop__expr..mulop__expr..: expression mul_div_operator expression  */
#line 355 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__MUL ) (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval);
		else                       (yyval.uval) = (yyvsp[-2].uval) / (yyvsp[0].uval);
		}
#line 1911 "y.tab.c"
    break;

  case 36: /* expr__mulop__expr..mulop__expr..: expr__mulop__expr..mulop__expr.. Star expression  */
#line 362 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval); }
#line 1917 "y.tab.c"
    break;

  case 37: /* expr__shfop__expr: expression shift_operator expression  */
#line 369 "asm_mips.yac"
                {
		if   ((yyvsp[-1].uval) == ASM_OPR__SHL ) (yyval.uval) = (yyvsp[-2].uval) << (yyvsp[0].uval);
		else                       (yyval.uval) = (yyvsp[-2].uval) >> (yyvsp[0].uval);
		}
#line 1926 "y.tab.c"
    break;

  case 38: /* extern_directive: _EXTERN_ label  */
#line 378 "asm_mips.yac"
                {	std::ostringstream lab ;
		    lab << (yyvsp[0].text);
			prog.add_line(new Directive(".extern",lab.str())) ;
		}
#line 1935 "y.tab.c"
    break;

  case 39: /* format_hint_mem: Codop_hint_mem immediate Comma signed_16_bit_immediate LeftParen integer_register RightParen  */
#line 392 "asm_mips.yac"
                {	t_Operator op ;
			string m = strmap[(yyvsp[-5].uval)] ;
			
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__PREF : op = t_Operator::pref ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_hint_mem for format_hint_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPImmediate((yyvsp[-5].uval)),new OPImmediate((int) ((signed short) (yyvsp[-3].uval))),new OPRegister((yyvsp[-1].uval),Src))) ;	
		}
#line 1949 "y.tab.c"
    break;

  case 40: /* format_label: Codop_label immediate  */
#line 406 "asm_mips.yac"
                {	t_Operator op ;
			string m = strmap[(yyvsp[0].uval)] ;
			
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__J : op = t_Operator::j ; break ;
				case ASM_MPS__JAL : op = t_Operator::jal ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_label for format_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPLabel(m))) ;	
		}
#line 1964 "y.tab.c"
    break;

  case 41: /* format_label: Codop_label integer_register  */
#line 419 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__J : op = t_Operator::jr ; break ;
				case ASM_MPS__JAL : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_label for format_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 1978 "y.tab.c"
    break;

  case 42: /* format_n: Codop_n  */
#line 432 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[0].uval)) {
				case ASM_MPS__SYSCALL : op = t_Operator::syscallu ; break ;
				case ASM_MPS__WAIT : op = t_Operator::waitn ; break ;
				case ASM_MPS__RFE : op = t_Operator::rfe ; break ;
				case ASM_MPS__ERET : op = t_Operator::eret ; break ;
				case ASM_MPS__SYNC : op = t_Operator::sync_ ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[0].uval) << "is not an valid Codop_n for format_n" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op)) ;
		}
#line 1995 "y.tab.c"
    break;

  case 43: /* format_od_rs: Codop_od_rs integer_register  */
#line 449 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__JALR : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_od_rs for format_od_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2008 "y.tab.c"
    break;

  case 44: /* format_od_rs: Codop_od_rs integer_register Comma integer_register  */
#line 461 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__JALR : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_od_rs for format_od_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2021 "y.tab.c"
    break;

  case 45: /* format_rd: Codop_rd integer_register  */
#line 474 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__MFHI : op = t_Operator::mfhi ; break ;
				case ASM_MPS__MFLO : op = t_Operator::mflo ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_rd for format_rd" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Dst))) ;
		}
#line 2035 "y.tab.c"
    break;

  case 46: /* format_rd_mem: Codop_rd_mem integer_register Comma signed_16_bit_immediate LeftParen integer_register RightParen  */
#line 493 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Dst),new OPImmediate((int) ((signed short) (yyvsp[-3].uval))),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2055 "y.tab.c"
    break;

  case 47: /* format_rd_mem: Codop_rd_mem integer_register Comma GCC_operator LeftParen integer_register RightParen  */
#line 515 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Dst),new OPExpression((yyvsp[-3].text)),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2075 "y.tab.c"
    break;

  case 48: /* format_rd_mem: Codop_rd_mem integer_register Comma LeftParen integer_register RightParen  */
#line 536 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2095 "y.tab.c"
    break;

  case 49: /* format_rd_mem: Codop_rd_mem integer_register Comma immediate  */
#line 555 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2115 "y.tab.c"
    break;

  case 50: /* format_rd_si16: Codop_rd_si16 integer_register Comma signed_16_bit_immediate  */
#line 577 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__LUI : op = t_Operator::lui ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_si16 for format_rd_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2128 "y.tab.c"
    break;

  case 51: /* format_rd_si16: Codop_rd_si16 integer_register Comma GCC_operator  */
#line 589 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__LUI : op = t_Operator::lui ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_si16 for format_rd_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPExpression((yyvsp[0].text)))) ;
		}
#line 2141 "y.tab.c"
    break;

  case 52: /* format_rd_rs: Codop_rd_rs integer_register Comma integer_register  */
#line 604 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__CLO : op = t_Operator::clo ; break ;
				case ASM_MPS__CLZ : op = t_Operator::clz ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rd_rs for format_rd_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2155 "y.tab.c"
    break;

  case 53: /* format_rd_rs_rt: Codop_rd_rs_rt integer_register Comma integer_register Comma integer_register  */
#line 622 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ADD :	op = t_Operator::add; break ;
				case ASM_MPS__ADDU :op = t_Operator::addu ; break ;
				case ASM_MPS__AND :	op = t_Operator::and_ ; break ;
				case ASM_MPS__MUL :	op = t_Operator::mul ; break ;
				case ASM_MPS__NOR :	op = t_Operator::nor ; break ;
				case ASM_MPS__OR :	op = t_Operator::or_ ; break ;
				case ASM_MPS__SLT :	op = t_Operator::slt ; break ;
				case ASM_MPS__SLTU :op = t_Operator::sltu ; break ;
				case ASM_MPS__SUB :	op = t_Operator::sub ; break ;
				case ASM_MPS__SUBU :op = t_Operator::subu ; break ;
				case ASM_MPS__XOR :	op = t_Operator::xor_ ; break ;
				case ASM_MPS__MOVN :op = t_Operator::movn ; break ;
				case ASM_MPS__MOVZ :op = t_Operator::movz ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_rt for format_rd_rs_rt" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2180 "y.tab.c"
    break;

  case 54: /* format_rd_rs_si16: Codop_rd_rs_si16 integer_register Comma integer_register Comma signed_16_bit_immediate  */
#line 651 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ADDI : op = t_Operator::addi ; break ;
				case ASM_MPS__ADDIU : op = t_Operator::addiu ; break ;
				case ASM_MPS__SLTI : op = t_Operator::slti ; break ;
				case ASM_MPS__SLTIU : op = t_Operator::sltiu ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2196 "y.tab.c"
    break;

  case 55: /* format_rd_rs_si16: Codop_rd_rs_si16 integer_register Comma integer_register Comma GCC_operator  */
#line 668 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ADDI : op = t_Operator::addi ; break ;
				case ASM_MPS__ADDIU : op = t_Operator::addiu ; break ;
				case ASM_MPS__SLTI : op = t_Operator::slti ; break ;
				case ASM_MPS__SLTIU : op = t_Operator::sltiu ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPExpression((yyvsp[0].text)))) ;
		}
#line 2212 "y.tab.c"
    break;

  case 56: /* format_rd_rs_si16: Codop_rd_rs_rt integer_register Comma integer_register Comma signed_16_bit_immediate  */
#line 685 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SLT : op = t_Operator::slti ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2225 "y.tab.c"
    break;

  case 57: /* format_rd_rs_ui16: Codop_rd_rs_ui16 integer_register Comma integer_register Comma unsigned_16_bit_immediate  */
#line 702 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__ANDI : op = t_Operator::andi ; break ;
				case ASM_MPS__ORI : op = t_Operator::ori ; break ;
				case ASM_MPS__XORI : op = t_Operator::xori ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rs_ui16 for format_rd_rs_ui16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2240 "y.tab.c"
    break;

  case 58: /* format_rd_rt_rs: Codop_rd_rt_rs integer_register Comma integer_register Comma integer_register  */
#line 721 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SLLV : op = t_Operator::sllv ; break ;
				case ASM_MPS__SRLV : op = t_Operator::srlv ; break ;
				case ASM_MPS__SRAV : op = t_Operator::srav ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rt_rs for format_rd_rt_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2255 "y.tab.c"
    break;

  case 59: /* format_rd_rt_sham: Codop_rd_rt_sham integer_register Comma integer_register Comma immediate  */
#line 740 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SLL : op = t_Operator::sll ; break ;
				case ASM_MPS__SRL : op = t_Operator::srl ; break ;
				case ASM_MPS__SRA : op = t_Operator::sra ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rd_rt_sham for format_rd_rt_sham" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2270 "y.tab.c"
    break;

  case 60: /* format_rs: Codop_rs integer_register  */
#line 755 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__JR : op = t_Operator::jr ; break ;
				case ASM_MPS__MTHI : op = t_Operator::mthi ; break ;
				case ASM_MPS__MTLO : op = t_Operator::mtlo ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_rs for format_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2285 "y.tab.c"
    break;

  case 61: /* format_rs_label: Codop_rs_label integer_register Comma immediate  */
#line 772 "asm_mips.yac"
                {
			t_Operator op ;
			string m = strmap[(yyvsp[0].uval)] ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__BGEZ : op = t_Operator::bgez ; break ;
				case ASM_MPS__BGEZAL : op = t_Operator::bgezal ; break ;
				case ASM_MPS__BGTZ : op = t_Operator::bgtz ; break ;
				case ASM_MPS__BLEZ : op = t_Operator::blez ; break ;
				case ASM_MPS__BLTZ : op = t_Operator::bltz ; break ;
				case ASM_MPS__BLTZAL : op = t_Operator::bltzal ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
		}
#line 2304 "y.tab.c"
    break;

  case 62: /* format_rs_rt: Codop_rs_rt integer_register Comma integer_register  */
#line 794 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__MULT: op = t_Operator::mult; break ;
				case ASM_MPS__MULTU: op = t_Operator::multu; break ;
				case ASM_MPS__DIV: op = t_Operator::div_ ; break ;
				case ASM_MPS__DIVU: op = t_Operator::divu ; break ;
				case ASM_MPS__MADD: op = t_Operator::madd; break ;
				case ASM_MPS__MADDU: op = t_Operator::maddu; break ;
				case ASM_MPS__MSUB: op = t_Operator::msub; break ;
				case ASM_MPS__MSUBU: op = t_Operator::msubu; break ;
				case ASM_MPS__TEQ: op = t_Operator::teq; break ;
				case ASM_MPS__TGE: op = t_Operator::tge; break ;
				case ASM_MPS__TGEU: op = t_Operator::tgeu; break ;
				case ASM_MPS__TLT: op = t_Operator::tlt; break ;
				case ASM_MPS__TLTU: op = t_Operator::tltu; break ;
				case ASM_MPS__TNE: op = t_Operator::tne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2330 "y.tab.c"
    break;

  case 63: /* format_rs_rt: Codop_rs_rt integer_register Comma integer_register Comma integer_register  */
#line 821 "asm_mips.yac"
                {
			t_Operator op ;
			if ((yyvsp[-4].uval) != 0 ) {
				std::cerr << "Invalid $zero register for Codop_rs_label" << std::endl ;
			}
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__MULT: op = t_Operator::mult; break ;
				case ASM_MPS__MULTU: op = t_Operator::multu; break ;
				case ASM_MPS__DIV: op = t_Operator::div_ ; break ;
				case ASM_MPS__DIVU: op = t_Operator::divu ; break ;
				case ASM_MPS__MADD: op = t_Operator::madd; break ;
				case ASM_MPS__MADDU: op = t_Operator::maddu; break ;
				case ASM_MPS__MSUB: op = t_Operator::msub; break ;
				case ASM_MPS__MSUBU: op = t_Operator::msubu; break ;
				case ASM_MPS__TEQ: op = t_Operator::teq; break ;
				case ASM_MPS__TGE: op = t_Operator::tge; break ;
				case ASM_MPS__TGEU: op = t_Operator::tgeu; break ;
				case ASM_MPS__TLT: op = t_Operator::tlt; break ;
				case ASM_MPS__TLTU: op = t_Operator::tltu; break ;
				case ASM_MPS__TNE: op = t_Operator::tne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Dst),new OPRegister((yyvsp[-2].uval),Src),new OPRegister((yyvsp[0].uval),Src))) ;
		}
#line 2359 "y.tab.c"
    break;

  case 64: /* format_rs_rt_label: Codop_rs_rt_label integer_register Comma integer_register Comma immediate  */
#line 854 "asm_mips.yac"
                {
			t_Operator op ;
			string m = strmap[(yyvsp[0].uval)] ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__BEQ : op = t_Operator::beq ; break ;
				case ASM_MPS__BNE : op = t_Operator::bne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rs_rt_label for format_rs_rt_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
		}
#line 2374 "y.tab.c"
    break;

  case 65: /* format_rs_rt_label: Codop_rs_rt_label integer_register Comma integer_register Comma String2  */
#line 870 "asm_mips.yac"
                {
			t_Operator op ;
			std::ostringstream lit ;
		    lit  << (yyvsp[0].text) ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__BEQ : op = t_Operator::beq ; break ;
				case ASM_MPS__BNE : op = t_Operator::bne ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rs_rt_label for format_rs_rt_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(lit.str()))) ;
		}
#line 2390 "y.tab.c"
    break;

  case 66: /* format_rs_si16: Codop_rs_si16 integer_register Comma signed_16_bit_immediate  */
#line 888 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__TEQI: op = t_Operator::teqi; break ;
				case ASM_MPS__TGEI: op = t_Operator::tgei; break ;
				case ASM_MPS__TGEIU: op = t_Operator::tgeiu; break ;
				case ASM_MPS__TLTI: op = t_Operator::tlti; break ;
				case ASM_MPS__TLTIU: op = t_Operator::tltiu; break ;
				case ASM_MPS__TNEI: op = t_Operator::tnei; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rs_si16 for format_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[0].uval))))) ;
		}
#line 2408 "y.tab.c"
    break;

  case 67: /* format_rt_cop0r: Codop_rt_cop0r integer_register Comma cop0_reg  */
#line 908 "asm_mips.yac"
                {
			t_Operator op ;
			t_Src_Dst spin, spinc0 ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__MFC0: op = t_Operator::mfc0; spin = Dst ; spinc0 = CopSrc ; break ;
				case ASM_MPS__MTC0: op = t_Operator::mtc0; spin = Src ; spinc0 = CopDst ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rt_cop0r for format_rt_cop0r" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),spin),new OPRegister((yyvsp[0].uval),spinc0))) ;
		}
#line 2423 "y.tab.c"
    break;

  case 68: /* format_rt_cop2r: Codop_rt_cop2r integer_register Comma cop2_reg  */
#line 925 "asm_mips.yac"
                {
			t_Operator op ;
			t_Src_Dst spin, spinc0 ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__MFC2: op = t_Operator::mfc2; spin = Dst ; spinc0 = CopSrc ; break ;
				case ASM_MPS__MTC2: op = t_Operator::mtc2; spin = Src ; spinc0 = CopDst ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rt_cop2r for format_rt_cop2r" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),spin),new OPRegister((yyvsp[0].uval),spinc0))) ;
		}
#line 2438 "y.tab.c"
    break;

  case 69: /* format_rt_mem: Codop_rt_mem integer_register Comma signed_16_bit_immediate LeftParen integer_register RightParen  */
#line 945 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Src),new OPImmediate((int) ((signed short) (yyvsp[-3].uval))),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2454 "y.tab.c"
    break;

  case 70: /* format_rt_mem: Codop_rt_mem integer_register Comma GCC_operator LeftParen integer_register RightParen  */
#line 963 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-6].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-6].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-5].uval),Dst),new OPExpression((yyvsp[-3].text)),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2470 "y.tab.c"
    break;

  case 71: /* format_rt_mem: Codop_rt_mem integer_register Comma LeftParen integer_register RightParen  */
#line 981 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-5].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-5].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-4].uval),Src),new OPRegister((yyvsp[-1].uval),Src))) ;
		}
#line 2486 "y.tab.c"
    break;

  case 72: /* format_rt_mem: Codop_rt_mem integer_register Comma immediate  */
#line 996 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-3].uval)) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister((yyvsp[-2].uval),Src),new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2502 "y.tab.c"
    break;

  case 73: /* format_ui20: Codop_ui20 immediate  */
#line 1012 "asm_mips.yac"
                {
			t_Operator op ;
			switch((yyvsp[-1].uval)) {
				case ASM_MPS__BREAK: op = t_Operator::break_ ; break ;
				default: std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Codop_ui20 for format_ui20" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPImmediate((yyvsp[0].uval)))) ;
		}
#line 2515 "y.tab.c"
    break;

  case 74: /* global_directive: _GLOBAL_ label  */
#line 1025 "asm_mips.yac"
                {	std::ostringstream lab ;
		    lab << (yyvsp[0].text);
			prog.add_line(new Directive(".globl",lab.str())) ;
		}
#line 2524 "y.tab.c"
    break;

  case 75: /* signed_16_bit_immediate: immediate  */
#line 1033 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval) & 0xffffffff; }
#line 2530 "y.tab.c"
    break;

  case 76: /* immediate: expr..addop__expr..  */
#line 1038 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2536 "y.tab.c"
    break;

  case 77: /* immediate: expr__mulop__expr..mulop__expr..  */
#line 1040 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2542 "y.tab.c"
    break;

  case 78: /* immediate: expr__logop__expr..logop__expr..  */
#line 1042 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2548 "y.tab.c"
    break;

  case 79: /* immediate: expr__shfop__expr  */
#line 1044 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2554 "y.tab.c"
    break;

  case 80: /* integer_register: IntegerRegister  */
#line 1049 "asm_mips.yac"
                {  (yyval.uval) = (yyvsp[0].uval); }
#line 2560 "y.tab.c"
    break;

  case 81: /* integer_register: ARegister  */
#line 1051 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval) & 0x0000001f; }
#line 2566 "y.tab.c"
    break;

  case 82: /* label: Identifier  */
#line 1056 "asm_mips.yac"
                { (yyval.text) = (yyvsp[0].text); }
#line 2572 "y.tab.c"
    break;

  case 83: /* label: Litteral  */
#line 1058 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].uval);
			(yyval.text) = const_cast<char*>(str.str().c_str()) ;
		}
#line 2581 "y.tab.c"
    break;

  case 84: /* label: String2  */
#line 1063 "asm_mips.yac"
                { 
		std::cout << "Label String2 " << (yyvsp[0].text) << std::endl ;
		(yyval.text) = (yyvsp[0].text); }
#line 2589 "y.tab.c"
    break;

  case 86: /* logic_operator: Bar  */
#line 1074 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__OR   ; }
#line 2595 "y.tab.c"
    break;

  case 87: /* logic_operator: Ampersand  */
#line 1076 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__AND  ; }
#line 2601 "y.tab.c"
    break;

  case 88: /* logic_operator: Circomflex  */
#line 1078 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__XOR  ; }
#line 2607 "y.tab.c"
    break;

  case 96: /* macro_label: Macro_label immediate  */
#line 1094 "asm_mips.yac"
                { // GCC uses B as inconditionnal jump
			string m = strmap[(yyvsp[0].uval)] ;
	  		if ((yyvsp[-1].uval) != ASM_MPS__B) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-1].uval) << "is not an valid Macro_label" << std::endl ;
			}
			prog.add_line(new Instruction(t_Operator::j,new OPLabel(m))) ;
		}
#line 2619 "y.tab.c"
    break;

  case 97: /* macro_n: Macro_n  */
#line 1105 "asm_mips.yac"
                {
	  		if ((yyvsp[0].uval) != ASM_MPS__NOP) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[0].uval) << "is not an valid Macro_n" << std::endl ;
			}
			prog.add_line(new Instruction(t_Operator::add,new OPRegister(0,Dst),new OPRegister(0,Src),new OPRegister(0,Src))) ;
		}
#line 2630 "y.tab.c"
    break;

  case 98: /* macro_rd_i32: Macro_rd_i32 integer_register Comma immediate  */
#line 1118 "asm_mips.yac"
                {
	  		if ((yyvsp[-3].uval) != ASM_MPS__LI) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_i32" << std::endl ;
			}
			int hi, lo ;
			hi = ((yyvsp[0].uval) >> 16) &  0x0000FFFF ;
			lo = ((yyvsp[0].uval)      ) &  0x0000FFFF ;
						
			prog.add_line(new Directive(".set","noat")) ; 
			prog.add_line(new Instruction(t_Operator::lui,new OPRegister(1,Dst),new OPImmediate(hi))) ;
			prog.add_line(new Instruction(t_Operator::ori,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(1,Src),new OPImmediate(lo))) ;
			prog.add_line(new Directive(".set","at")) ; 
		}
#line 2648 "y.tab.c"
    break;

  case 99: /* macro_rd_label: Macro_rd_label integer_register Comma immediate  */
#line 1138 "asm_mips.yac"
                {
			string m = strmap[(yyvsp[0].uval)] ;
		    std::ostringstream oss_hi ;
		    std::ostringstream oss_lo ;
	  		if ((yyvsp[-3].uval) != ASM_MPS__LI) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_i32" << std::endl ;
			}

		    oss_hi << "%hi(" << m << ")" ;
		    oss_lo << "%lo(" << m << ")" ;
						
			prog.add_line(new Directive(".set","noat")) ; 
			prog.add_line(new Instruction(t_Operator::lui,new OPRegister(1,Dst),new OPExpression(oss_hi.str()))) ;
			prog.add_line(new Instruction(t_Operator::ori,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(1,Src),new OPExpression(oss_lo.str()))) ;
			prog.add_line(new Directive(".set","at")) ; 
		}
#line 2669 "y.tab.c"
    break;

  case 100: /* macro_rd_rs: Macro_rd_rs integer_register Comma integer_register  */
#line 1161 "asm_mips.yac"
                {
	  		if ((yyvsp[-3].uval) != ASM_MPS__MOVE) {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_rs" << std::endl ;
			}
						
			prog.add_line(new Instruction(t_Operator::or_,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister((yyvsp[0].uval),Src),new OPRegister(0,Src))) ;
		}
#line 2681 "y.tab.c"
    break;

  case 101: /* macro_rd_rt: Macro_rd_rt integer_register Comma integer_register  */
#line 1175 "asm_mips.yac"
                {
	  		if ((yyvsp[-3].uval) == ASM_MPS__NEG) {
				prog.add_line(new Instruction(t_Operator::sub,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(0,Src),new OPRegister((yyvsp[0].uval),Src))) ;
			} else if ((yyvsp[-3].uval) == ASM_MPS__NEGU) {
				prog.add_line(new Instruction(t_Operator::subu,new OPRegister((yyvsp[-2].uval),Dst),new OPRegister(0,Src),new OPRegister((yyvsp[0].uval),Src))) ;
			} else {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rd_rt" << std::endl ; break ;
			}
		}
#line 2695 "y.tab.c"
    break;

  case 102: /* macro_rs_label: Macro_rs_label integer_register Comma immediate  */
#line 1191 "asm_mips.yac"
                {
			string m = strmap[(yyvsp[0].uval)] ;
	  		if ((yyvsp[-3].uval) == ASM_MPS__BEQZ) {
				prog.add_line(new Instruction(t_Operator::beq,new OPRegister(0,Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
			} else if ((yyvsp[-3].uval) == ASM_MPS__BNEZ) {
				prog.add_line(new Instruction(t_Operator::bne,new OPRegister(0,Src),new OPRegister((yyvsp[-2].uval),Src),new OPLabel(m))) ;
			} else {
				std::cerr<< "asm_mips.yac : " << (yyvsp[-3].uval) << "is not an valid Macro_rs_label" << std::endl ; break ;
			}
		}
#line 2710 "y.tab.c"
    break;

  case 111: /* memory_ascii_alloc: _ASCII_ String  */
#line 1217 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].text) ;
			prog.add_line(new Directive(".ascii",str.str())) ;
		}
#line 2719 "y.tab.c"
    break;

  case 112: /* memory_asciiz_alloc: _ASCIIZ_ String  */
#line 1226 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].text) ;
			prog.add_line(new Directive(".asciiz",str.str())) ;
		}
#line 2728 "y.tab.c"
    break;

  case 113: /* memory_byte_alloc: _BYTE_ byte_immediate_list  */
#line 1235 "asm_mips.yac"
                        {prog.add_line(new Directive(".byte",strmap[(yyvsp[0].uval)])) ;}
#line 2734 "y.tab.c"
    break;

  case 114: /* memory_lcomm_alloc: _LCOMM_ Identifier Comma Litteral  */
#line 1243 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[-2].text) << "," << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".lcomm",str.str())) ;
		}
#line 2743 "y.tab.c"
    break;

  case 115: /* memory_comm_alloc: _COMM_ Identifier Comma Litteral Comma Litteral  */
#line 1256 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[-4].text) << "," << (yyvsp[-2].uval) << "," << (yyvsp[0].uval);
			prog.add_line(new Directive(".comm",str.str())) ;
		}
#line 2752 "y.tab.c"
    break;

  case 116: /* memory_space_alloc: _SPACE_ Litteral  */
#line 1265 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".space",str.str())) ;
		}
#line 2761 "y.tab.c"
    break;

  case 117: /* memory_skip_alloc: _SKIP_ Litteral  */
#line 1274 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << (yyvsp[0].uval) ;
			prog.add_line(new Directive(".skip",str.str())) ;
		}
#line 2770 "y.tab.c"
    break;

  case 118: /* memory_word_alloc: _WORD_ word_immediate_list  */
#line 1283 "asm_mips.yac"
                        {prog.add_line(new Directive(".word",strmap[(yyvsp[0].uval)])) ;}
#line 2776 "y.tab.c"
    break;

  case 141: /* mul_div_operator: Star  */
#line 1313 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__MUL  ; }
#line 2782 "y.tab.c"
    break;

  case 142: /* mul_div_operator: Slash  */
#line 1315 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__DIV  ; }
#line 2788 "y.tab.c"
    break;

  case 143: /* primary: Litteral  */
#line 1320 "asm_mips.yac"
                { (yyval.uval) = (yyvsp[0].uval); }
#line 2794 "y.tab.c"
    break;

  case 144: /* primary: Identifier  */
#line 1322 "asm_mips.yac"
                {	
			strmap_id++ ;
			strmap[strmap_id] = (yyvsp[0].text) ;
			(yyval.uval) = strmap_id ;
		}
#line 2804 "y.tab.c"
    break;

  case 145: /* section_specification_directive: _SECTION_ Identifier  */
#line 1332 "asm_mips.yac"
                { 	
			prog.add_line(new Directive(".section",(yyvsp[0].text))) ;
		}
#line 2812 "y.tab.c"
    break;

  case 146: /* section_specification_directive: Identifier  */
#line 1336 "asm_mips.yac"
                {
			prog.add_line(new Directive((yyvsp[0].text))) ;
		}
#line 2820 "y.tab.c"
    break;

  case 147: /* set_directive: _SET_ _REORDER_  */
#line 1344 "asm_mips.yac"
                {	prog.add_line(new Directive(".set","reorder")) ; }
#line 2826 "y.tab.c"
    break;

  case 148: /* set_directive: _SET_ _NOREORDER_  */
#line 1347 "asm_mips.yac"
                {	prog.add_line(new Directive(".set","noreorder")) ; }
#line 2832 "y.tab.c"
    break;

  case 149: /* set_directive: _SET_ immediate  */
#line 1350 "asm_mips.yac"
                {	string m = strmap[(yyvsp[0].uval)] ;
			prog.add_line(new Directive(".set",m)) ; }
#line 2839 "y.tab.c"
    break;

  case 150: /* other_directive: Identifier _String  */
#line 1358 "asm_mips.yac"
                {	std::ostringstream dir ;
		    dir << (yyvsp[-1].text) ;
			prog.add_line(new Directive(dir.str(),strmap[strmap_id])) ;
		}
#line 2848 "y.tab.c"
    break;

  case 151: /* _String: %empty  */
#line 1366 "asm_mips.yac"
                {	strmap_id++ ;
			strmap[strmap_id] = "" ;
			(yyval.uval) = strmap_id ;
		}
#line 2857 "y.tab.c"
    break;

  case 152: /* _String: _String String  */
#line 1372 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << " " << (yyvsp[0].text);
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2867 "y.tab.c"
    break;

  case 153: /* _String: _String Comma  */
#line 1379 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "," ;
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2877 "y.tab.c"
    break;

  case 154: /* _String: _String Arobase  */
#line 1386 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "@";
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2887 "y.tab.c"
    break;

  case 155: /* _String: _String integer_register  */
#line 1393 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "$" << (yyvsp[0].uval) ;
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2897 "y.tab.c"
    break;

  case 156: /* _String: _String Identifier  */
#line 1400 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << (yyvsp[0].text);
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2907 "y.tab.c"
    break;

  case 157: /* _String: _String Litteral  */
#line 1407 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << (yyvsp[0].uval);
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2917 "y.tab.c"
    break;

  case 158: /* _String: _String Minus  */
#line 1414 "asm_mips.yac"
                {	std::ostringstream str ;
		    str << strmap[(yyvsp[-1].uval)] << "-";
			strmap[strmap_id] = str.str() ;
			(yyval.uval) = (yyvsp[-1].uval) ;
		}
#line 2927 "y.tab.c"
    break;

  case 159: /* shift_operator: DoubleLess  */
#line 1422 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__SHL  ; }
#line 2933 "y.tab.c"
    break;

  case 160: /* shift_operator: DoubleGreat  */
#line 1424 "asm_mips.yac"
                { (yyval.uval) = ASM_OPR__SHR  ; }
#line 2939 "y.tab.c"
    break;

  case 161: /* term: primary  */
#line 1429 "asm_mips.yac"
                { (yyval.uval) =   (yyvsp[0].uval); }
#line 2945 "y.tab.c"
    break;

  case 162: /* term: Minus primary  */
#line 1432 "asm_mips.yac"
                { (yyval.uval) = - (yyvsp[0].uval); }
#line 2951 "y.tab.c"
    break;

  case 163: /* term: Tilda primary  */
#line 1435 "asm_mips.yac"
                { (yyval.uval) = ~ (yyvsp[0].uval); }
#line 2957 "y.tab.c"
    break;

  case 176: /* unsigned_16_bit_immediate: immediate  */
#line 1459 "asm_mips.yac"
                {	(yyval.uval) = (yyvsp[0].uval) & 0x0000ffff; }
#line 2963 "y.tab.c"
    break;

  case 177: /* word_immediate_list: immediate ...word_immediate..  */
#line 1465 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    	bylist << (int) (yyvsp[-1].uval) << strmap[(yyvsp[0].uval)] ;
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[0].uval) ;
		}
#line 2973 "y.tab.c"
    break;

  case 178: /* ...word_immediate..: %empty  */
#line 1474 "asm_mips.yac"
                {	strmap_id++ ;
			strmap[strmap_id] = "" ;
			(yyval.uval) = strmap_id ;
		}
#line 2982 "y.tab.c"
    break;

  case 179: /* ...word_immediate..: ...word_immediate.. Comma immediate  */
#line 1481 "asm_mips.yac"
                {	std::ostringstream bylist ;
		    	bylist << strmap[(yyvsp[-2].uval)] << "," << (yyvsp[0].uval);
			strmap[strmap_id] = bylist.str() ;
			(yyval.uval) = (yyvsp[-2].uval) ;
		}
#line 2992 "y.tab.c"
    break;


#line 2996 "y.tab.c"

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

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
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

#line 1488 "asm_mips.yac"

