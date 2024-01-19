
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "./parser.y"

extern int yylex(void);
#include <stdio.h>
#include <stdlib.h>

int yyerror(char *s);

#define YYDEBUG 1


/* Line 189 of yacc.c  */
#line 84 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DEFFUN = 258,
     INT = 259,
     STR = 260,
     CHAR = 261,
     FLOAT = 262,
     BOOLEAN = 263,
     LIST = 264,
     READ = 265,
     IF = 266,
     ELSE = 267,
     WRITE = 268,
     WHILE = 269,
     IN = 270,
     FOR = 271,
     SEND_BACK = 272,
     MAIN = 273,
     ELSE_IF = 274,
     INTERVAL = 275,
     BREAK = 276,
     TRUE = 277,
     FALSE = 278,
     CALL_FUNC = 279,
     PLUS = 280,
     MINUS = 281,
     TIMES = 282,
     DIV = 283,
     LESS = 284,
     LESSEQ = 285,
     EQ = 286,
     NEQ = 287,
     BIGGEREQ = 288,
     EQQ = 289,
     BIGGER = 290,
     AND = 291,
     OR = 292,
     MOD = 293,
     ADD1 = 294,
     DOT = 295,
     SEMICOLON = 296,
     OPEN = 297,
     CLOSE = 298,
     BRACKETOPEN = 299,
     BRACKETCLOSE = 300,
     COMMA = 301,
     POINTS = 302,
     POINTS2 = 303,
     IDENTIFIER = 304,
     INTCONSTANT = 305,
     STRINGCONSTANT = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 177 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    18,    21,    23,    25,    27,    29,
      31,    33,    35,    37,    39,    44,    47,    53,    55,    57,
      59,    61,    63,    68,    73,    76,    81,    85,    89,    91,
      93,    98,   102,   106,   110,   112,   116,   118,   120,   123,
     128,   137,   149,   157,   162,   174,   181,   185,   189,   199,
     203,   205,   209,   211,   215,   218,   221,   224,   230,   236,
     240,   242,   244,   246,   248,   250,   252,   254
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,     3,    18,    42,    54,    43,    -1,     3,
      49,    44,    56,    45,    42,    54,    43,    -1,    55,    54,
      -1,    55,    -1,    56,    -1,    58,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    69,    -1,    70,    -1,    57,
      49,    46,    56,    -1,    57,    49,    -1,     9,    49,    44,
      49,    45,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    57,    49,    31,    59,    -1,    57,    49,
      31,    51,    -1,    49,    39,    -1,    49,    25,    31,    59,
      -1,    59,    25,    61,    -1,    59,    26,    61,    -1,    60,
      -1,    61,    -1,    49,    44,    61,    45,    -1,    61,    27,
      62,    -1,    61,    28,    62,    -1,    61,    38,    62,    -1,
      62,    -1,    42,    59,    43,    -1,    49,    -1,    50,    -1,
      26,    49,    -1,    11,    71,    47,    54,    -1,    11,    71,
      47,    54,    19,    71,    47,    54,    -1,    11,    71,    47,
      54,    19,    71,    47,    54,    12,    47,    54,    -1,    11,
      71,    47,    54,    12,    47,    54,    -1,    14,    71,    47,
      54,    -1,    16,    49,    15,    20,    44,    62,    46,    62,
      45,    47,    54,    -1,    16,    49,    15,    49,    47,    54,
      -1,    13,    48,    59,    -1,    13,    48,    51,    -1,    13,
      48,    24,    44,    49,    44,    68,    45,    45,    -1,    49,
      48,    67,    -1,    49,    -1,    49,    46,    68,    -1,    49,
      -1,    10,    48,    67,    -1,    17,    23,    -1,    17,    22,
      -1,    17,    49,    -1,    59,    72,    59,    36,    71,    -1,
      59,    72,    59,    37,    71,    -1,    59,    72,    59,    -1,
      29,    -1,    30,    -1,    34,    -1,    32,    -1,    33,    -1,
      35,    -1,    36,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    70,    71,    73,    74,    75,    76,
      77,    78,    79,    80,    82,    83,    84,    86,    87,    88,
      89,    90,    92,    93,    94,    95,    97,    98,    99,   100,
     102,   104,   105,   106,   107,   109,   110,   111,   112,   114,
     115,   116,   117,   119,   121,   122,   124,   125,   126,   128,
     129,   130,   131,   132,   134,   135,   136,   138,   139,   140,
     142,   143,   144,   145,   146,   147,   148,   149
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFFUN", "INT", "STR", "CHAR", "FLOAT",
  "BOOLEAN", "LIST", "READ", "IF", "ELSE", "WRITE", "WHILE", "IN", "FOR",
  "SEND_BACK", "MAIN", "ELSE_IF", "INTERVAL", "BREAK", "TRUE", "FALSE",
  "CALL_FUNC", "PLUS", "MINUS", "TIMES", "DIV", "LESS", "LESSEQ", "EQ",
  "NEQ", "BIGGEREQ", "EQQ", "BIGGER", "AND", "OR", "MOD", "ADD1", "DOT",
  "SEMICOLON", "OPEN", "CLOSE", "BRACKETOPEN", "BRACKETCLOSE", "COMMA",
  "POINTS", "POINTS2", "IDENTIFIER", "INTCONSTANT", "STRINGCONSTANT",
  "$accept", "Program", "CompoundStatement", "Statement",
  "DeclarationStatement", "Type", "AssignmentStatement", "Expression",
  "ArrayExpression", "Term", "Factor", "IfStatement", "WhileStatement",
  "ForStatement", "PrintStatement", "MultipleRead", "ListIdentifiers",
  "ReadStatement", "ReturnStatement", "Condition", "Relation", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      60,    61,    61,    61,    61,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    70,    70,    70,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     8,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     5,     1,     1,     1,
       1,     1,     4,     4,     2,     4,     3,     3,     1,     1,
       4,     3,     3,     3,     1,     3,     1,     1,     2,     4,
       8,    11,     7,     4,    11,     6,     3,     3,     9,     3,
       1,     3,     1,     3,     2,     2,     2,     5,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     0,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,    36,    37,
       0,    28,    29,    34,     0,     0,     0,     0,    55,    54,
      56,     0,    24,     2,     4,    15,     0,    15,     0,    50,
      53,    38,     0,     0,     0,     0,    60,    61,    63,    64,
      62,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      47,    46,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,    26,    27,    59,    31,    32,    33,    39,
       0,    43,     0,     0,    25,    23,    22,    14,     0,    16,
      49,    30,     0,     0,     0,     0,     0,     0,     0,     3,
      57,    58,     0,     0,     0,     0,    45,    42,     0,    52,
       0,     0,    40,     0,     0,     0,     0,    51,    48,     0,
       0,     0,    41,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    21,    22,    23,    24,    25,    40,    41,    42,
      43,    26,    27,    28,    29,    60,   130,    30,    31,    44,
      74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
      18,   -10,    24,   -13,    -9,   -71,     9,   116,   -71,   -71,
     -71,   -71,   -71,    20,    -8,    22,    27,    22,    30,   -12,
      11,    14,     9,   -71,    43,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,    48,    45,    53,    56,    60,    22,    58,   -71,
      78,   -71,    49,   -71,    69,     4,    70,    80,   -71,   -71,
     -71,    95,   -71,   -71,   -71,    -4,    85,    82,    81,    83,
     -71,   -71,     6,    36,    36,    36,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,    22,    36,    36,    36,     9,    88,
     -71,    57,     9,   -11,    22,    17,   116,     9,    84,    56,
     -71,   -71,    46,    49,    49,     8,   -71,   -71,   -71,    51,
      86,   -71,    89,    87,    57,   -71,    57,   -71,    93,   -71,
     -71,   -71,    22,    22,    90,    22,    94,    36,     9,   -71,
     -71,   -71,     9,    92,    91,    96,   -71,   -71,     9,    97,
      99,    36,   129,    91,   100,   101,   102,   -71,   -71,   103,
       9,     9,   -71,   -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -71,   -22,   -71,    -6,    -5,   -71,   -33,   -71,    25,
     -70,   -71,   -71,   -71,   -71,    59,    19,   -71,   -71,   -14,
     -71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      54,    32,    33,    46,    62,    96,    97,    98,     3,   102,
      48,    49,    81,     8,     9,    10,    11,    12,    13,    14,
      15,     1,    16,    17,     5,    18,    19,    85,    79,     6,
      36,    64,    65,    64,    65,     7,    51,    50,   103,     4,
      35,    95,    86,    36,   112,   113,    37,   125,    36,    90,
      52,   104,   106,    38,    39,    80,    99,    53,    20,    37,
     101,   135,    36,   114,    37,   108,    38,    39,   105,    34,
     115,    38,    39,    75,    76,    45,    75,    76,    37,    47,
     107,    33,    64,    65,    77,    91,    39,    77,    92,    93,
      94,   111,    55,    56,    57,    83,   126,    58,   120,   121,
     127,   123,    63,    64,    65,    59,   132,    66,    67,    61,
      68,    69,    70,    71,    72,    73,    78,    82,   142,   143,
       8,     9,    10,    11,    12,    13,    84,    87,    86,   109,
      88,    89,   100,   117,   118,   116,   119,   122,   124,   128,
     129,   136,   131,   133,   134,   138,   139,     0,   110,   140,
     141,     0,   137
};

static const yytype_int16 yycheck[] =
{
      22,     7,     7,    17,    37,    75,    76,    77,    18,    20,
      22,    23,    45,     4,     5,     6,     7,     8,     9,    10,
      11,     3,    13,    14,     0,    16,    17,    31,    24,    42,
      26,    25,    26,    25,    26,    44,    25,    49,    49,    49,
      48,    74,    46,    26,    36,    37,    42,   117,    26,    43,
      39,    84,    85,    49,    50,    51,    78,    43,    49,    42,
      82,   131,    26,    12,    42,    87,    49,    50,    51,    49,
      19,    49,    50,    27,    28,    48,    27,    28,    42,    49,
      86,    86,    25,    26,    38,    49,    50,    38,    63,    64,
      65,    45,    49,    45,    49,    15,   118,    44,   112,   113,
     122,   115,    44,    25,    26,    49,   128,    29,    30,    49,
      32,    33,    34,    35,    36,    37,    47,    47,   140,   141,
       4,     5,     6,     7,     8,     9,    31,    42,    46,    45,
      49,    48,    44,    44,    47,    49,    43,    47,    44,    47,
      49,    12,    46,    46,    45,    45,    45,    -1,    89,    47,
      47,    -1,   133
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    18,    49,     0,    42,    44,     4,     5,
       6,     7,     8,     9,    10,    11,    13,    14,    16,    17,
      49,    54,    55,    56,    57,    58,    63,    64,    65,    66,
      69,    70,    56,    57,    49,    48,    26,    42,    49,    50,
      59,    60,    61,    62,    71,    48,    71,    49,    22,    23,
      49,    25,    39,    43,    54,    49,    45,    49,    44,    49,
      67,    49,    59,    44,    25,    26,    29,    30,    32,    33,
      34,    35,    36,    37,    72,    27,    28,    38,    47,    24,
      51,    59,    47,    15,    31,    31,    46,    42,    49,    48,
      43,    49,    61,    61,    61,    59,    62,    62,    62,    54,
      44,    54,    20,    49,    59,    51,    59,    56,    54,    45,
      67,    45,    36,    37,    12,    19,    49,    44,    47,    43,
      71,    71,    47,    71,    44,    62,    54,    54,    47,    49,
      68,    46,    54,    46,    45,    62,    12,    68,    45,    45,
      47,    47,    54,    54
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 67 "./parser.y"
    { printf("Program -> deffun main [ CompoundStatement ]\n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 68 "./parser.y"
    { printf("Program -> deffun IDENTIFIER ( DeclarationStatement )  [ CompoundStatement ]\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 70 "./parser.y"
    { printf("CompoundStatement -> Statement CompoundStatement\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 71 "./parser.y"
    { printf("CompoundStatement -> Statement\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 73 "./parser.y"
    { printf("Statement -> DeclarationStatement\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "./parser.y"
    { printf("Statement -> AssignmentStatement\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 75 "./parser.y"
    { printf("Statement -> IfStatement\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "./parser.y"
    { printf("Statement -> WhileStatement\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 77 "./parser.y"
    { printf("Statement -> ForStatement\n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 78 "./parser.y"
    { printf("Statement -> PrintStatement\n"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 79 "./parser.y"
    { printf("Statement -> ReadStatement\n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 80 "./parser.y"
    { printf("Statement -> ReturnStatement\n"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 82 "./parser.y"
    { printf("DeclarationStatement -> Type IDENTIFIER , DeclarationStatement\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 83 "./parser.y"
    { printf("DeclarationStatement -> Type IDENTIFIER\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 84 "./parser.y"
    { printf("DeclarationStatement -> list IDENTIFIER ( IDENTIFIER )\n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 86 "./parser.y"
    { printf("Type -> integer\n"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 87 "./parser.y"
    { printf("Type -> string\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 88 "./parser.y"
    { printf("Type -> char\n"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 89 "./parser.y"
    { printf("Type -> float\n"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 90 "./parser.y"
    { printf("Type -> boolean\n"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 92 "./parser.y"
    { printf("AssignmentStatement -> Type IDENTIFIER = Expression\n"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 93 "./parser.y"
    { printf("AssignmentStatement -> Type IDENTIFIER = STRINGCONSTANT\n"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 94 "./parser.y"
    { printf("AssignmentStatement -> Type IDENTIFIER++\n"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 95 "./parser.y"
    { printf("AssignmentStatement -> IDENTIFIER += Expression\n"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 97 "./parser.y"
    { printf("Expression -> Expression + Term\n"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 98 "./parser.y"
    { printf("Expression -> Expression - Term\n"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 99 "./parser.y"
    { printf("Expression -> ArrayExpression\n"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 100 "./parser.y"
    { printf("Expression -> Term\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 102 "./parser.y"
    { printf("ArrayExpression -> IDENTIFIER ( Term )\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 104 "./parser.y"
    { printf("Term -> Term * Factor\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 105 "./parser.y"
    { printf("Term -> Term / Factor\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 106 "./parser.y"
    { printf("Term -> Term mod Factor\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 107 "./parser.y"
    { printf("Term -> Factor\n"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 109 "./parser.y"
    { printf("Factor -> ( Expression )\n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 110 "./parser.y"
    { printf("Factor -> IDENTIFIER\n"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 111 "./parser.y"
    { printf("Factor -> INTCONSTANT\n"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 112 "./parser.y"
    { printf("Factor -> - IDENTIFIER\n"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 114 "./parser.y"
    { printf("IfStatement -> if Expression : CompoundStatement \n"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 115 "./parser.y"
    { printf("IfStatement -> if Expression : CompoundStatement else_if Expression : CompoundStatement\n"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 116 "./parser.y"
    { printf("IfStatement -> if Expression : CompoundStatement else_if Expression : CompoundStatement else : CompoundStatement\n"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 117 "./parser.y"
    { printf("IfStatement -> if Expression : CompoundStatement else : CompoundStatement \n"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 119 "./parser.y"
    { printf("WhileStatement -> while Expression : CompoundStatement \n"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 121 "./parser.y"
    { printf("ForStatement -> for IDENTIFIER in interval ( IDENTIFIER , IDENTIFIER ) :  CompoundStatement \n"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 122 "./parser.y"
    { printf("ForStatement -> for IDENTIFIER in IDENTIFIER :  CompoundStatement \n"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 124 "./parser.y"
    { printf("PrintStatement -> write :: Expression \n"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 125 "./parser.y"
    { printf("PrintStatement -> write :: STRINGCONSTANT \n"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 126 "./parser.y"
    { printf("PrintStatement -> write :: call_func ( IDENTIFIER ( ListIdentifiers ) ) \n"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 128 "./parser.y"
    { printf ("MultipleRead -> IDENTIFIER :: MultipleRead\n"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 129 "./parser.y"
    { printf ("MultipleRead -> IDENTIFIER \n"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 130 "./parser.y"
    { printf("ListIdentifiers -> IDENTIFIER , ListIdentifiers\n"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 131 "./parser.y"
    { printf ("MultipleRead -> IDENTIFIER \n"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 132 "./parser.y"
    { printf("ReadStatement -> read [ IDENTIFIER ]\n"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 134 "./parser.y"
    { printf("ReturnStatement -> send_back False\n"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 135 "./parser.y"
    { printf("ReturnStatement -> send_back True\n"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 136 "./parser.y"
    { printf("ReturnStatement -> send_back IDENTIFIER\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 138 "./parser.y"
    { printf("Condition -> Expression Relation Expression AND Condition\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 139 "./parser.y"
    { printf("Condition -> Expression Relation Expression OR Condition\n"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 140 "./parser.y"
    { printf("Condition -> Expression Relation Expression\n"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 142 "./parser.y"
    { printf("Relation -> <\n"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 143 "./parser.y"
    { printf("Relation -> <=\n"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 144 "./parser.y"
    { printf("Relation -> ==\n"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 145 "./parser.y"
    { printf("Relation -> !=\n"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 146 "./parser.y"
    { printf("Relation -> >=\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 147 "./parser.y"
    { printf("Relation -> >\n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 148 "./parser.y"
    { printf("Relation -> and\n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 149 "./parser.y"
    { printf("Relation -> or\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1961 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 151 "./parser.y"

int yyerror(char *s) {
    printf("Error: %s", s);
}

extern FILE *yyin;

int main(int argc, char** argv) {
    if (argc > 1)
        yyin = fopen(argv[1], "r");
    if (!yyparse())
        fprintf(stderr, "\tOK\n");
}
