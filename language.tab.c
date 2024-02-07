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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "language.y"

#include <iostream>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include "IdList.h"
using namespace std;
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class IdList ids;
class IdList local_list;
class IdList user_var_list;
class ClassList clslist;
class MethodList mthlist;

#line 90 "language.tab.c"

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

#include "language.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DBGIN = 3,                      /* DBGIN  */
  YYSYMBOL_DEND = 4,                       /* DEND  */
  YYSYMBOL_GBGIN = 5,                      /* GBGIN  */
  YYSYMBOL_GEND = 6,                       /* GEND  */
  YYSYMBOL_GFUNCBGIN = 7,                  /* GFUNCBGIN  */
  YYSYMBOL_GFUNCEND = 8,                   /* GFUNCEND  */
  YYSYMBOL_BGIN = 9,                       /* BGIN  */
  YYSYMBOL_END = 10,                       /* END  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_NR = 12,                        /* NR  */
  YYSYMBOL_CLASS = 13,                     /* CLASS  */
  YYSYMBOL_BEGINCLASS = 14,                /* BEGINCLASS  */
  YYSYMBOL_ENDCLASS = 15,                  /* ENDCLASS  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_GRE = 25,                       /* GRE  */
  YYSYMBOL_LOW = 26,                       /* LOW  */
  YYSYMBOL_EGRE = 27,                      /* EGRE  */
  YYSYMBOL_ELOW = 28,                      /* ELOW  */
  YYSYMBOL_MUL = 29,                       /* MUL  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_PINC = 33,                      /* PINC  */
  YYSYMBOL_MINC = 34,                      /* MINC  */
  YYSYMBOL_TYPEOF = 35,                    /* TYPEOF  */
  YYSYMBOL_EVAL = 36,                      /* EVAL  */
  YYSYMBOL_NEW = 37,                       /* NEW  */
  YYSYMBOL_ACCESS_FIELD = 38,              /* ACCESS_FIELD  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_TYPE = 40,                      /* TYPE  */
  YYSYMBOL_UMINUS = 41,                    /* UMINUS  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '['  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_50_ = 50,                       /* '"'  */
  YYSYMBOL_51_ = 51,                       /* '-'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_progr = 53,                     /* progr  */
  YYSYMBOL_sections = 54,                  /* sections  */
  YYSYMBOL_if_statement = 55,              /* if_statement  */
  YYSYMBOL_if_else_statement = 56,         /* if_else_statement  */
  YYSYMBOL_while_statement = 57,           /* while_statement  */
  YYSYMBOL_for_statement = 58,             /* for_statement  */
  YYSYMBOL_for_initializer = 59,           /* for_initializer  */
  YYSYMBOL_for_update = 60,                /* for_update  */
  YYSYMBOL_condition = 61,                 /* condition  */
  YYSYMBOL_block = 62,                     /* block  */
  YYSYMBOL_statements = 63,                /* statements  */
  YYSYMBOL_user_data_types = 64,           /* user_data_types  */
  YYSYMBOL_global_variables = 65,          /* global_variables  */
  YYSYMBOL_global_functions = 66,          /* global_functions  */
  YYSYMBOL_user_declarations = 67,         /* user_declarations  */
  YYSYMBOL_user_decl = 68,                 /* user_decl  */
  YYSYMBOL_69_1 = 69,                      /* $@1  */
  YYSYMBOL_class_lines = 70,               /* class_lines  */
  YYSYMBOL_constructor = 71,               /* constructor  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_con_params_options = 73,        /* con_params_options  */
  YYSYMBOL_con_with_params = 74,           /* con_with_params  */
  YYSYMBOL_con_params = 75,                /* con_params  */
  YYSYMBOL_con_without_params = 76,        /* con_without_params  */
  YYSYMBOL_members = 77,                   /* members  */
  YYSYMBOL_methods = 78,                   /* methods  */
  YYSYMBOL_methods_decl = 79,              /* methods_decl  */
  YYSYMBOL_80_3 = 80,                      /* $@3  */
  YYSYMBOL_81_4 = 81,                      /* $@4  */
  YYSYMBOL_m_block = 82,                   /* m_block  */
  YYSYMBOL_content = 83,                   /* content  */
  YYSYMBOL_without_content = 84,           /* without_content  */
  YYSYMBOL_list_method_param = 85,         /* list_method_param  */
  YYSYMBOL_method_param = 86,              /* method_param  */
  YYSYMBOL_method_block = 87,              /* method_block  */
  YYSYMBOL_method_instructions = 88,       /* method_instructions  */
  YYSYMBOL_declarations = 89,              /* declarations  */
  YYSYMBOL_decl = 90,                      /* decl  */
  YYSYMBOL_func_declarations = 91,         /* func_declarations  */
  YYSYMBOL_func_decl = 92,                 /* func_decl  */
  YYSYMBOL_93_5 = 93,                      /* $@5  */
  YYSYMBOL_94_6 = 94,                      /* $@6  */
  YYSYMBOL_f_block = 95,                   /* f_block  */
  YYSYMBOL_f_content = 96,                 /* f_content  */
  YYSYMBOL_f_without_content = 97,         /* f_without_content  */
  YYSYMBOL_list_param = 98,                /* list_param  */
  YYSYMBOL_param = 99,                     /* param  */
  YYSYMBOL_func_block = 100,               /* func_block  */
  YYSYMBOL_instructions = 101,             /* instructions  */
  YYSYMBOL_102_7 = 102,                    /* $@7  */
  YYSYMBOL_103_8 = 103,                    /* $@8  */
  YYSYMBOL_entry_point = 104,              /* entry_point  */
  YYSYMBOL_list = 105,                     /* list  */
  YYSYMBOL_statement = 106,                /* statement  */
  YYSYMBOL_107_9 = 107,                    /* $@9  */
  YYSYMBOL_booleanExpression = 108,        /* booleanExpression  */
  YYSYMBOL_expression = 109,               /* expression  */
  YYSYMBOL_func_oper = 110,                /* func_oper  */
  YYSYMBOL_111_10 = 111,                   /* $@10  */
  YYSYMBOL_112_11 = 112,                   /* $@11  */
  YYSYMBOL_call_list = 113                 /* call_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 23 "language.y"

     // Declare a global variable to store the ID from user_decl
     char* sharedID = NULL;
     char* methodSharedId = NULL;
     char* def_class = NULL;
     int numberOfParameters = 0;
     char *currentMethod = NULL;

#line 246 "language.tab.c"


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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    47,    51,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    69,    71,    73,    75,    77,    78,    79,    82,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   109,   110,   113,   114,   117,   118,   119,   124,   125,
     128,   136,   136,   153,   154,   155,   161,   161,   171,   172,
     174,   176,   177,   180,   186,   190,   199,   200,   202,   202,
     204,   204,   208,   209,   211,   213,   215,   216,   219,   222,
     223,   226,   227,   228,   229,   237,   238,   241,   242,   243,
     244,   252,   263,   264,   266,   266,   266,   278,   278,   290,
     291,   293,   294,   296,   297,   300,   303,   304,   307,   308,
     309,   309,   309,   315,   318,   319,   323,   324,   327,   338,
     344,   349,   354,   360,   375,   382,   386,   386,   393,   413,
     428,   431,   448,   460,   461,   462,   463,   466,   469,   472,
     475,   478,   487,   489,   490,   491,   496,   498,   500,   504,
     504,   504,   512,   513,   514,   515
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
  "\"end of file\"", "error", "\"invalid token\"", "DBGIN", "DEND",
  "GBGIN", "GEND", "GFUNCBGIN", "GFUNCEND", "BGIN", "END", "ASSIGN", "NR",
  "CLASS", "BEGINCLASS", "ENDCLASS", "CONST", "IF", "ELSE", "FOR", "WHILE",
  "AND", "OR", "NOT", "EQUAL", "GRE", "LOW", "EGRE", "ELOW", "MUL", "DIV",
  "PLUS", "MINUS", "PINC", "MINC", "TYPEOF", "EVAL", "NEW", "ACCESS_FIELD",
  "ID", "TYPE", "UMINUS", "'('", "')'", "'{'", "'}'", "';'", "','", "'['",
  "']'", "'\"'", "'-'", "$accept", "progr", "sections", "if_statement",
  "if_else_statement", "while_statement", "for_statement",
  "for_initializer", "for_update", "condition", "block", "statements",
  "user_data_types", "global_variables", "global_functions",
  "user_declarations", "user_decl", "$@1", "class_lines", "constructor",
  "$@2", "con_params_options", "con_with_params", "con_params",
  "con_without_params", "members", "methods", "methods_decl", "$@3", "$@4",
  "m_block", "content", "without_content", "list_method_param",
  "method_param", "method_block", "method_instructions", "declarations",
  "decl", "func_declarations", "func_decl", "$@5", "$@6", "f_block",
  "f_content", "f_without_content", "list_param", "param", "func_block",
  "instructions", "$@7", "$@8", "entry_point", "list", "statement", "$@9",
  "booleanExpression", "expression", "func_oper", "$@10", "$@11",
  "call_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-221)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     186,    25,   136,   -23,    47,    29,    35,   101,    38,  -221,
    -221,    79,    20,     8,    96,    81,     6,    84,   110,    15,
     105,  -221,   116,   120,   155,   171,   173,   178,     4,   138,
    -221,  -221,  -221,  -221,    74,   179,  -221,  -221,    38,  -221,
    -221,   109,  -221,   180,  -221,   188,     5,  -221,   183,  -221,
     189,  -221,   184,  -221,   193,    22,   139,    22,   195,    -2,
      -3,   196,   217,   191,   225,  -221,   192,  -221,  -221,   198,
    -221,   228,     1,   229,  -221,   197,  -221,   231,   176,   181,
     200,   233,   199,   136,   203,   204,  -221,   205,    -1,    -1,
     206,   156,  -221,   211,   187,  -221,   214,  -221,  -221,     2,
    -221,  -221,   212,   238,   242,  -221,   216,   207,  -221,   218,
     245,    23,    57,    73,    76,    77,    80,    83,    85,    86,
      87,   246,    88,    22,   246,  -221,  -221,   -11,  -221,  -221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  -221,
     209,   222,    89,  -221,   223,   221,   226,   249,   172,   182,
     220,  -221,  -221,   219,  -221,   253,   232,    64,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
     118,   250,  -221,  -221,   224,  -221,  -221,   187,   187,   187,
     187,   187,  -221,  -221,   194,   194,  -221,   230,  -221,  -221,
     227,   234,   128,  -221,  -221,  -221,    75,  -221,   236,  -221,
     182,   237,  -221,   235,  -221,  -221,   127,  -221,  -221,  -221,
    -221,   253,   218,  -221,   124,  -221,   246,   239,    89,    90,
     240,  -221,   241,   243,   244,   247,  -221,   119,  -221,   251,
    -221,  -221,    16,   252,   130,   248,  -221,  -221,  -221,  -221,
    -221,   255,   254,   149,  -221,  -221,  -221,   256,  -221,   258,
    -221,   259,  -221,    92,  -221,  -221,  -221,   260,  -221,  -221,
     246,  -221,   261,  -221,   263,   257,   151,  -221,  -221,  -221,
      89,  -221,  -221,  -221,   133,  -221,  -221,  -221,  -221,   263,
     259,   227,  -221,    17,   266,   135,   262,  -221,  -221,   264,
      93,    89,  -221,  -221,   265,  -221,  -221,  -221,  -221,   167,
    -221,  -221
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    94,     0,     0,     0,     4,     8,    10,
       2,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,   115,     0,     0,     0,     0,     0,     0,   126,     0,
     133,   134,   135,   136,     0,     0,     1,     3,     5,     6,
       9,     0,    45,     0,    48,     0,    90,    46,     0,    85,
       0,    47,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   114,     0,   116,     7,    51,
      49,     0,     0,     0,    86,    95,    93,     0,    19,    20,
       0,     0,     0,    15,     0,     0,   148,     0,     0,     0,
       0,     0,   123,     0,   125,   119,     0,   149,   127,     0,
     117,    56,     0,     0,     0,    88,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,     0,   146,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,   120,     0,     0,     0,     0,     0,     0,
       0,    50,    91,     0,    87,     0,     0,     0,   103,   122,
      40,    38,    24,    22,    28,    26,    32,    30,    36,    34,
      37,    39,    21,    23,    25,    27,    29,    31,    33,    35,
       0,    11,    17,    16,     0,    13,   147,   141,   137,   138,
     139,   140,   144,   145,   142,   143,   124,     0,   152,   153,
     150,     0,     0,    57,    58,    59,     0,    52,     0,    53,
       0,     0,    54,     0,    66,    89,     0,    98,    99,   100,
     105,     0,     0,    41,     0,    43,     0,     0,     0,     0,
       0,   121,     0,     0,     0,    68,    64,     0,    55,     0,
      67,   102,     0,     0,     0,     0,    96,   104,    42,    44,
      12,     0,     0,     0,   154,   155,   151,    61,    63,     0,
      70,     0,    65,     0,   110,   113,   101,     0,   106,    18,
       0,   132,     0,    60,     0,     0,     0,    76,   109,   108,
       0,   107,    14,    62,     0,    71,    72,    73,    78,     0,
       0,   111,    75,     0,     0,     0,     0,    69,    77,     0,
       0,     0,    84,    74,     0,    79,   112,    82,    81,     0,
      80,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   -52,
    -123,  -221,  -221,   272,    18,  -221,   270,  -221,  -221,  -142,
    -221,  -221,  -221,    13,  -221,  -221,   125,  -145,  -221,  -221,
       3,  -221,  -221,  -221,    -4,  -221,     0,   267,   -13,  -221,
     279,  -221,  -221,    91,  -221,  -221,  -221,    78,  -221,    58,
    -221,  -221,   303,  -221,   -34,  -221,  -221,   -58,  -221,  -221,
    -221,  -220
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    30,    31,    32,    33,    82,   252,    80,
     181,   224,     7,     8,     9,    12,    13,   102,   147,   103,
     145,   203,   204,   234,   205,   148,   149,   150,   261,   274,
     285,   286,   287,   276,   277,   295,   296,    16,    17,    19,
      20,   109,   155,   217,   218,   219,   157,   158,   244,   245,
     280,   299,    10,    34,    35,    63,    90,    91,    98,   142,
     230,   200
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   185,    94,    48,   213,    84,   209,   212,   253,    86,
      86,    86,    47,   105,   143,    60,    72,    18,   135,   136,
     137,   138,    14,    51,    42,    39,    40,   263,   300,    36,
     127,   128,   186,    11,    78,   160,    92,    87,    11,    88,
      88,    88,    61,    62,     4,     3,    15,    93,    89,    89,
      89,   106,   144,    73,    44,    18,    68,    21,   264,   301,
     291,    79,   161,    22,    23,   213,    24,    25,   238,   162,
      48,   184,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   309,    26,    27,    65,   164,    28,    29,   166,   168,
      22,    23,   170,    24,    25,   172,   163,   174,   176,   178,
     182,   198,   254,   250,   278,   307,     2,   221,     3,    26,
      27,   222,   165,    28,    29,   167,   169,   235,    41,   171,
      46,   236,   173,    69,   175,   177,   179,   183,   199,   255,
      49,   279,   308,   223,    22,    23,    45,    24,    25,   248,
      22,    23,   241,    24,    25,   266,   225,   282,   292,    50,
     303,    53,    14,    26,    27,    14,    54,    28,    29,    26,
      27,   235,    55,    28,    29,   262,   242,   243,   232,   242,
     243,   233,   293,   294,   293,   294,    15,    64,    81,    15,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     1,
     249,     2,   271,     3,   289,     4,   229,    56,   290,   139,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     311,   101,   208,    57,   229,    58,   135,   136,   137,   138,
      59,   101,   211,   135,   136,    67,    70,    71,    96,    74,
      76,    75,    77,    97,    85,    95,    99,   101,   100,   104,
     108,   107,   110,   121,   122,   123,   124,   125,   126,   129,
     140,   141,   146,   151,   152,   153,   154,   159,   156,   196,
     180,   197,   201,   202,   207,   206,   214,   216,   226,   215,
     227,   220,   228,   210,   229,   237,   239,   284,   251,    38,
     257,   240,    43,   256,   231,   283,   298,   259,   269,   258,
     260,   265,   297,   235,   268,   304,   288,   270,    52,   275,
     247,   232,   267,   272,   273,   302,   281,   306,   305,    37,
       0,   310,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      34,   124,    60,    16,   149,    57,   148,   149,   228,    12,
      12,    12,     6,    12,    12,    11,    11,    40,    29,    30,
      31,    32,    16,     8,     4,     7,     8,    11,    11,     0,
      88,    89,    43,    13,    12,    12,    39,    39,    13,    42,
      42,    42,    38,    39,     9,     7,    40,    50,    51,    51,
      51,    50,    50,    48,    46,    40,    38,    10,    42,    42,
     280,    39,    39,    16,    17,   210,    19,    20,   210,    12,
      83,   123,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   301,    35,    36,    10,    12,    39,    40,    12,    12,
      16,    17,    12,    19,    20,    12,    39,    12,    12,    12,
      12,    12,    12,   226,    12,    12,     5,    43,     7,    35,
      36,    47,    39,    39,    40,    39,    39,    42,    39,    39,
      39,    46,    39,    14,    39,    39,    39,    39,    39,    39,
      46,    39,    39,    15,    16,    17,    40,    19,    20,    15,
      16,    17,    15,    19,    20,    15,   180,   270,    15,    39,
      15,    46,    16,    35,    36,    16,    40,    39,    40,    35,
      36,    42,    42,    39,    40,    46,    39,    40,    40,    39,
      40,    43,    39,    40,    39,    40,    40,    39,    39,    40,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
     224,     5,    43,     7,    43,     9,    47,    42,    47,    43,
      24,    25,    26,    27,    28,    24,    25,    26,    27,    28,
      43,    39,    40,    42,    47,    42,    29,    30,    31,    32,
      42,    39,    40,    29,    30,    46,    46,    39,    11,    46,
      46,    42,    39,    42,    39,    39,    11,    39,    46,    11,
      43,    12,    11,    43,    11,    46,    43,    43,    43,    43,
      39,    37,    40,    15,    12,    39,    49,    12,    40,    50,
      14,    39,    39,    42,    15,    39,    46,    14,    18,    50,
      46,    39,    42,   148,    47,    39,    39,    14,    39,     7,
      39,    46,    12,    43,    50,   272,   290,    43,    33,    46,
      43,    39,   289,    42,    46,   295,    39,    43,    19,    40,
     222,    40,   244,    47,    46,    39,    46,    43,    46,     6,
      -1,    46,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     9,    53,    54,    64,    65,    66,
     104,    13,    67,    68,    16,    40,    89,    90,    40,    91,
      92,    10,    16,    17,    19,    20,    35,    36,    39,    40,
      55,    56,    57,    58,   105,   106,     0,   104,    65,    66,
      66,    39,     4,    68,    46,    40,    39,     6,    90,    46,
      39,     8,    92,    46,    40,    42,    42,    42,    42,    42,
      11,    38,    39,   107,    39,    10,   106,    46,    66,    14,
      46,    39,    11,    48,    46,    42,    46,    39,    12,    39,
      61,    39,    59,    89,    61,    39,    12,    39,    42,    51,
     108,   109,    39,    50,   109,    39,    11,    42,   110,    11,
      46,    39,    69,    71,    11,    12,    50,    12,    43,    93,
      11,    24,    25,    26,    27,    28,    24,    25,    26,    27,
      28,    43,    11,    46,    43,    43,    43,   109,   109,    43,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    43,
      39,    37,   111,    12,    50,    72,    40,    70,    77,    78,
      79,    15,    12,    39,    49,    94,    40,    98,    99,    12,
      12,    39,    12,    39,    12,    39,    12,    39,    12,    39,
      12,    39,    12,    39,    12,    39,    12,    39,    12,    39,
      14,    62,    12,    39,    61,    62,    43,   109,   109,   109,
     109,   109,   109,   109,   109,   109,    50,    39,    12,    39,
     113,    39,    42,    73,    74,    76,    39,    15,    40,    71,
      78,    40,    71,    79,    46,    50,    14,    95,    96,    97,
      39,    43,    47,    15,    63,   106,    18,    46,    42,    47,
     112,    50,    40,    43,    75,    42,    46,    39,    71,    39,
      46,    15,    39,    40,   100,   101,    95,    99,    15,   106,
      62,    39,    60,   113,    12,    39,    43,    39,    46,    43,
      43,    80,    46,    11,    42,    39,    15,   101,    46,    33,
      43,    43,    47,    46,    81,    40,    85,    86,    12,    39,
     102,    46,    62,    75,    14,    82,    83,    84,    39,    43,
      47,   113,    15,    39,    40,    87,    88,    82,    86,   103,
      11,    42,    39,    15,    88,    46,    43,    12,    39,   113,
      46,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    55,    56,    57,    58,    59,    59,    59,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    65,    66,    67,    67,
      68,    69,    68,    70,    70,    70,    72,    71,    73,    73,
      74,    75,    75,    76,    77,    77,    78,    78,    80,    79,
      81,    79,    82,    82,    83,    84,    85,    85,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    91,    91,    92,    93,    92,    94,    92,    95,
      95,    96,    97,    98,    98,    99,   100,   100,   101,   101,
     102,   103,   101,   101,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   108,   108,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   111,
     112,   110,   113,   113,   113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     3,     1,     2,
       1,     5,     7,     5,     9,     1,     3,     3,     2,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     2,     3,     3,     3,     2,     3,
       5,     0,     6,     2,     2,     3,     0,     3,     1,     1,
       4,     2,     4,     3,     3,     4,     2,     3,     0,     7,
       0,     6,     1,     1,     3,     2,     1,     3,     2,     2,
       3,     3,     3,     4,     2,     2,     3,     5,     4,     6,
       2,     5,     2,     3,     0,     0,     7,     0,     6,     1,
       1,     3,     2,     1,     3,     2,     2,     3,     3,     3,
       0,     0,     6,     2,     3,     2,     2,     3,     2,     3,
       4,     6,     5,     3,     5,     3,     0,     3,     4,     4,
       4,     4,     8,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     0,
       0,     5,     1,     1,     3,     3
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


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
  case 2: /* progr: entry_point  */
#line 56 "language.y"
                     {printf("The programme is correct!\n");}
#line 1423 "language.tab.c"
    break;

  case 3: /* progr: sections entry_point  */
#line 57 "language.y"
                              {printf("The programme is correct!\n");}
#line 1429 "language.tab.c"
    break;

  case 50: /* user_decl: CLASS ID BEGINCLASS constructor ENDCLASS  */
#line 128 "language.y"
                                                     {if (!clslist.existClass((yyvsp[-3].string))) {
                                                  clslist.addClass((yyvsp[-3].string));
                                             }
                                        else 
                                        {
                                             yyerror("Redefine a class error!");
                                        }
                                        }
#line 1442 "language.tab.c"
    break;

  case 51: /* $@1: %empty  */
#line 136 "language.y"
                                {sharedID = strdup((yyvsp[-1].string)); 
                                 if (!clslist.existClass((yyvsp[-1].string))) {
                                   clslist.addClass((yyvsp[-1].string));
                              }
                              else 
                              {
                                   yyerror("Redefine a class error!");
                              }
                              }
#line 1456 "language.tab.c"
    break;

  case 52: /* user_decl: CLASS ID BEGINCLASS $@1 class_lines ENDCLASS  */
#line 146 "language.y"
                              {  
                                   if (!clslist.existClass((yyvsp[-4].string))) {
                                        clslist.addClass((yyvsp[-4].string));
                                   }
                              }
#line 1466 "language.tab.c"
    break;

  case 56: /* $@2: %empty  */
#line 161 "language.y"
                 {
               if(!clslist.isConstructor(sharedID,(yyvsp[0].string)))
               {
                    yyerror("The constructor should have same name as the class!");
               }
            }
#line 1477 "language.tab.c"
    break;

  case 64: /* members: TYPE ID ';'  */
#line 186 "language.y"
                      {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1486 "language.tab.c"
    break;

  case 65: /* members: members TYPE ID ';'  */
#line 190 "language.y"
                              {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1495 "language.tab.c"
    break;

  case 68: /* $@3: %empty  */
#line 202 "language.y"
                           {methodSharedId = strdup((yyvsp[-1].string)); clslist.addMethods(sharedID,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1501 "language.tab.c"
    break;

  case 70: /* $@4: %empty  */
#line 204 "language.y"
                                 {methodSharedId = strdup((yyvsp[-2].string)); clslist.addMethods(sharedID,(yyvsp[-3].string),(yyvsp[-2].string));}
#line 1507 "language.tab.c"
    break;

  case 78: /* method_param: TYPE ID  */
#line 219 "language.y"
                       {clslist.getMethods(sharedID)->addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1513 "language.tab.c"
    break;

  case 84: /* method_instructions: TYPE ID  */
#line 229 "language.y"
                   {
          clslist.getMethods(sharedID)->addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));
          }
#line 1521 "language.tab.c"
    break;

  case 87: /* decl: TYPE ID '[' NR ']'  */
#line 241 "language.y"
                               { ids.addArray((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1527 "language.tab.c"
    break;

  case 88: /* decl: TYPE ID ASSIGN NR  */
#line 242 "language.y"
                              {ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));}
#line 1533 "language.tab.c"
    break;

  case 89: /* decl: TYPE ID ASSIGN '"' ID '"'  */
#line 243 "language.y"
                                      {ids.addVar((yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-1].string));}
#line 1539 "language.tab.c"
    break;

  case 90: /* decl: TYPE ID  */
#line 244 "language.y"
                    { if(!ids.existsVar((yyvsp[0].string))) {
                          ids.addVar((yyvsp[-1].string),(yyvsp[0].string));
                     }
                     else 
                     {
                         yyerror("The variable already exist!");    
                     }
                    }
#line 1552 "language.tab.c"
    break;

  case 91: /* decl: CONST TYPE ID ASSIGN NR  */
#line 252 "language.y"
                                    {
               if(!ids.existsConst((yyvsp[-3].string)))
                    ids.addConst((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));
               else 
                    yyerror("The const variable already exist!");   
          }
#line 1563 "language.tab.c"
    break;

  case 95: /* $@5: %empty  */
#line 266 "language.y"
                         {
                         methodSharedId = strdup((yyvsp[-1].string));
                         if(!mthlist.existMethod((yyvsp[-1].string)) && !ids.existsVar((yyvsp[-1].string)) && !ids.existsConst((yyvsp[-1].string)) && !local_list.existsVar((yyvsp[-1].string)) && !local_list.existsConst((yyvsp[-1].string)))
                         {
                              mthlist.addMethod((yyvsp[-2].string),(yyvsp[-1].string));    
                         }
                         else 
                         {
                              yyerror("Redefine a method!");
                         }
          }
#line 1579 "language.tab.c"
    break;

  case 97: /* $@6: %empty  */
#line 278 "language.y"
                             {methodSharedId = strdup((yyvsp[-2].string));
                              if(!mthlist.existMethod((yyvsp[-2].string)))
                              {
                                   mthlist.addMethod((yyvsp[-3].string),(yyvsp[-2].string));    
                              }
                              else
                              {
                                   yyerror("Redefine a method!");
                              }
                         }
#line 1594 "language.tab.c"
    break;

  case 105: /* param: TYPE ID  */
#line 300 "language.y"
                {mthlist.addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1600 "language.tab.c"
    break;

  case 110: /* $@7: %empty  */
#line 309 "language.y"
                  {numberOfParameters = 0;}
#line 1606 "language.tab.c"
    break;

  case 111: /* $@8: %empty  */
#line 309 "language.y"
                                                      { 
          if(numberOfParameters != mthlist.getNumberOfParameters((yyvsp[-3].string)))
          {
               yyerror("The number of parameters is not matched!");
          } 
         }
#line 1617 "language.tab.c"
    break;

  case 113: /* instructions: TYPE ID  */
#line 315 "language.y"
                   {mthlist.addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1623 "language.tab.c"
    break;

  case 118: /* statement: TYPE ID  */
#line 327 "language.y"
                   { //declare new local variables
               if(ids.existsVar((yyvsp[0].string)))
                    yyerror("The variable was already declared");
               else 
               {
                    if(!local_list.existsVar((yyvsp[0].string)))
                         local_list.addVar((yyvsp[-1].string), (yyvsp[0].string));
                    else 
                         yyerror("The variable was already declared");
               }
          }
#line 1639 "language.tab.c"
    break;

  case 119: /* statement: ID ACCESS_FIELD ID  */
#line 338 "language.y"
                              { //access members from the class
               if(!user_var_list.existsVar((yyvsp[-2].string)))
               {
                   yyerror("The variable was not declared"); 
               }
          }
#line 1650 "language.tab.c"
    break;

  case 120: /* statement: TYPE ID ASSIGN NR  */
#line 344 "language.y"
                              {if(local_list.existsVar((yyvsp[-2].string)))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[0].string));
                              }
#line 1660 "language.tab.c"
    break;

  case 121: /* statement: TYPE ID ASSIGN '"' ID '"'  */
#line 349 "language.y"
                                      {if(local_list.existsVar((yyvsp[-4].string)))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar((yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-1].string));
                              }
#line 1670 "language.tab.c"
    break;

  case 122: /* statement: CONST TYPE ID ASSIGN NR  */
#line 354 "language.y"
                                    {
                                        if(!ids.existsConst((yyvsp[-3].string)))
                                             ids.addConst((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));
                                        else 
                                             yyerror("The const variable already exist!");    
                                   }
#line 1681 "language.tab.c"
    break;

  case 123: /* statement: ID ASSIGN ID  */
#line 360 "language.y"
                         {

                              if (!ids.existsVar((yyvsp[-2].string))) {
                                   yyerror("The destination variable was not declared");
                              }
                              if (!ids.existsVar((yyvsp[0].string))) {
                                   yyerror("The source variable was not declared");
                              }

                              if(ids.getType((yyvsp[-2].string))!=ids.getType((yyvsp[0].string)))
                              {
                                   yyerror("It is not the same type!");
                              }
                              ids.updateVarValueID((yyvsp[-2].string), (yyvsp[0].string));
                         }
#line 1701 "language.tab.c"
    break;

  case 124: /* statement: ID ASSIGN '"' ID '"'  */
#line 375 "language.y"
                                 {
                              if (!local_list.existsVar((yyvsp[-4].string)) && !ids.existsVar((yyvsp[-4].string))) {
                                   yyerror("The destination variable was not declared");
                              }

                              local_list.updateVarValueID((yyvsp[-4].string), (yyvsp[-1].string));
                         }
#line 1713 "language.tab.c"
    break;

  case 125: /* statement: ID ASSIGN expression  */
#line 382 "language.y"
                                 { if (!ids.existsVar((yyvsp[-2].string))) {
                                   yyerror("The variable was not declared");
                              }
                                   ids.updateVarValueNR((yyvsp[-2].string), (yyvsp[0].string));}
#line 1722 "language.tab.c"
    break;

  case 126: /* $@9: %empty  */
#line 386 "language.y"
             { //method calls
               currentMethod = strdup((yyvsp[0].string));
               if(!mthlist.existMethod((yyvsp[0].string)))
               {
                    yyerror("The method was not declared");
               }
          }
#line 1734 "language.tab.c"
    break;

  case 128: /* statement: TYPEOF '(' ID ')'  */
#line 393 "language.y"
                             { //TypeOf function

               int ok = 1;
               if(ids.existsVar((yyvsp[-1].string)) || ids.existsConst((yyvsp[-1].string)) || ids.existsArray((yyvsp[-1].string))) {
                    ok = 0;
                    cout << (yyvsp[-1].string) << " has the type: " << ids.getType((yyvsp[-1].string)) << endl;
               }

               if(user_var_list.existsVar((yyvsp[-1].string))) {
                    ok = 0;
                    cout << (yyvsp[-1].string) << " has the type: " << user_var_list.getType((yyvsp[-1].string)) << endl;
               }

               if(local_list.existsVar((yyvsp[-1].string)) || local_list.existsConst((yyvsp[-1].string)) || local_list.existsArray((yyvsp[-1].string))) {
                    ok = 0;
                    cout << (yyvsp[-1].string) << " has the type: " <<  local_list.getType((yyvsp[-1].string)) << endl;
               }
               if(ok == 1)
                    yyerror("The variable was not declared");
         }
#line 1759 "language.tab.c"
    break;

  case 129: /* statement: EVAL '(' ID ')'  */
#line 413 "language.y"
                           {
               int ok = 1;
               if(ids.existsVar((yyvsp[-1].string)) || ids.existsConst((yyvsp[-1].string)) || ids.existsArray((yyvsp[-1].string))) {
                    ok = 0;
                    ids.getEval((yyvsp[-1].string));
               }

               if(local_list.existsVar((yyvsp[-1].string)) || local_list.existsConst((yyvsp[-1].string)) || local_list.existsArray((yyvsp[-1].string))) {
                    ok = 0;
                    local_list.getEval((yyvsp[-1].string));
               }

               if(ok == 1)
                    yyerror("The variable was not declared");
         }
#line 1779 "language.tab.c"
    break;

  case 130: /* statement: EVAL '(' expression ')'  */
#line 428 "language.y"
                                   {
               printf("Eval result: %s\n", (yyvsp[-1].string));
         }
#line 1787 "language.tab.c"
    break;

  case 131: /* statement: EVAL '(' booleanExpression ')'  */
#line 431 "language.y"
                                          {
               printf("Eval result: %s\n", (yyvsp[-1].string));
         }
#line 1795 "language.tab.c"
    break;

  case 132: /* statement: ID ID ASSIGN NEW ID '(' call_list ')'  */
#line 448 "language.y"
                                                 {
               if(!clslist.existClass((yyvsp[-7].string)) || !clslist.isConstructor((yyvsp[-7].string),(yyvsp[-3].string)))
                    yyerror("The class was not declared");
               if(!user_var_list.existsVar((yyvsp[-6].string)) && !ids.existsVar((yyvsp[-6].string)) && !ids.existsConst((yyvsp[-6].string)) && !local_list.existsVar((yyvsp[-6].string)) && !local_list.existsConst((yyvsp[-6].string)))
               {
                    user_var_list.addVar((yyvsp[-7].string),(yyvsp[-6].string));
               }
               else 
               {
                    yyerror("The variable was already declared");
               }
         }
#line 1812 "language.tab.c"
    break;

  case 137: /* booleanExpression: expression GRE expression  */
#line 466 "language.y"
                                               {
                     (yyval.string) = (atoi((yyvsp[-2].string)) > atoi((yyvsp[0].string))) ? strdup("true") : strdup("false");
                 }
#line 1820 "language.tab.c"
    break;

  case 138: /* booleanExpression: expression LOW expression  */
#line 469 "language.y"
                                             {
                     (yyval.string) = (atoi((yyvsp[-2].string)) < atoi((yyvsp[0].string))) ? strdup("true") : strdup("false");
                 }
#line 1828 "language.tab.c"
    break;

  case 139: /* booleanExpression: expression EGRE expression  */
#line 472 "language.y"
                                              {
                     (yyval.string) = (atoi((yyvsp[-2].string)) >= atoi((yyvsp[0].string))) ? strdup("true") : strdup("false");
                 }
#line 1836 "language.tab.c"
    break;

  case 140: /* booleanExpression: expression ELOW expression  */
#line 475 "language.y"
                                              {
                     (yyval.string) = (atoi((yyvsp[-2].string)) <= atoi((yyvsp[0].string))) ? strdup("true") : strdup("false");
                 }
#line 1844 "language.tab.c"
    break;

  case 141: /* booleanExpression: expression EQUAL expression  */
#line 478 "language.y"
                                               {
                     (yyval.string) = (atoi((yyvsp[-2].string)) == atoi((yyvsp[0].string))) ? strdup("true") : strdup("false");
                 }
#line 1852 "language.tab.c"
    break;

  case 142: /* expression: expression PLUS expression  */
#line 487 "language.y"
                                                { (yyval.string) = &std::to_string(atoi((yyvsp[-2].string)) + atoi((yyvsp[0].string)))[0];
						}
#line 1859 "language.tab.c"
    break;

  case 143: /* expression: expression MINUS expression  */
#line 489 "language.y"
                                        { (yyval.string) = &std::to_string(atoi((yyvsp[-2].string)) - atoi((yyvsp[0].string)))[0];}
#line 1865 "language.tab.c"
    break;

  case 144: /* expression: expression MUL expression  */
#line 490 "language.y"
                                      { (yyval.string) = &std::to_string(atoi((yyvsp[-2].string)) * atoi((yyvsp[0].string)))[0];}
#line 1871 "language.tab.c"
    break;

  case 145: /* expression: expression DIV expression  */
#line 491 "language.y"
                                        { if ((yyvsp[0].string) == 0)
							yyerror ("divide by zero");
						else
							(yyval.string) = &std::to_string(atoi((yyvsp[-2].string)) / atoi((yyvsp[0].string)))[0];
						}
#line 1881 "language.tab.c"
    break;

  case 146: /* expression: '-' expression  */
#line 496 "language.y"
                                                { (yyval.string) = &std::to_string(-atoi((yyvsp[0].string)))[0];
						}
#line 1888 "language.tab.c"
    break;

  case 147: /* expression: '(' expression ')'  */
#line 498 "language.y"
                                                { (yyval.string) = strdup((yyvsp[-1].string));
						}
#line 1895 "language.tab.c"
    break;

  case 148: /* expression: NR  */
#line 500 "language.y"
                                                { (yyval.string) = strdup((yyvsp[0].string)); 
                                   }
#line 1902 "language.tab.c"
    break;

  case 149: /* $@10: %empty  */
#line 504 "language.y"
                {numberOfParameters = 0;}
#line 1908 "language.tab.c"
    break;

  case 150: /* $@11: %empty  */
#line 504 "language.y"
                                                    { 
          if(numberOfParameters != mthlist.getNumberOfParameters(currentMethod))
          {
               yyerror("The number of parameters is not matched!");
          } 
         }
#line 1919 "language.tab.c"
    break;

  case 152: /* call_list: NR  */
#line 512 "language.y"
               {numberOfParameters +=1;}
#line 1925 "language.tab.c"
    break;

  case 153: /* call_list: ID  */
#line 513 "language.y"
               {numberOfParameters +=1;}
#line 1931 "language.tab.c"
    break;

  case 154: /* call_list: call_list ',' NR  */
#line 514 "language.y"
                             {numberOfParameters +=1;}
#line 1937 "language.tab.c"
    break;

  case 155: /* call_list: call_list ',' ID  */
#line 515 "language.y"
                             {numberOfParameters +=1;}
#line 1943 "language.tab.c"
    break;


#line 1947 "language.tab.c"

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

#line 517 "language.y"

void yyerror(const char * s){
     printf("error: %s at line:%d\n",s,yylineno);
     exit(EXIT_FAILURE);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
     printf("Global variables and constants :\n");
     ids.printVarsAndConstants();
     local_list.printVarsAndConstants();
     printf("\n\nClasses :\n\n");
     clslist.printClasses();
     printf("\nGlobal methods :\n");
     mthlist.printMethods();
     printf("\nLocal variables and constants :\n");
     local_list.printVarsAndConstants();
     user_var_list.printVarsAndConstants();
}
