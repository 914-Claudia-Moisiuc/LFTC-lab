
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


