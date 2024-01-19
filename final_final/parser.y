%{
extern int yylex(void);
#include <stdio.h>
#include <stdlib.h>

int yyerror(char *s);

#define YYDEBUG 1
%}

%token DEFFUN;
%token INT;
%token STR;
%token CHAR;
%token FLOAT;
%token BOOLEAN;
%token LIST;
%token READ;
%token IF;
%token ELSE;
%token WRITE;
%token WHILE;
%token IN;
%token FOR;
%token SEND_BACK;
%token MAIN;
%token ELSE_IF;
%token INTERVAL;
%token BREAK;
%token TRUE;
%token FALSE;
%token CALL_FUNC;

%token PLUS;
%token MINUS;
%token TIMES;
%token DIV;
%token LESS;
%token LESSEQ;
%token EQ;
%token NEQ;
%token BIGGEREQ;
%token EQQ;
%token BIGGER;
%token AND;
%token OR;
%token MOD;
%token ADD1;
%token DOT;

%token SEMICOLON;
%token OPEN;
%token CLOSE;
%token BRACKETOPEN;
%token BRACKETCLOSE;
%token COMMA;
%token POINTS;
%token POINTS2;

%token IDENTIFIER;
%token INTCONSTANT;
%token STRINGCONSTANT;

%start Program

%%
Program : DEFFUN MAIN OPEN CompoundStatement CLOSE { printf("Program -> deffun main [ CompoundStatement ]\n"); }
	| DEFFUN IDENTIFIER BRACKETOPEN DeclarationStatement BRACKETCLOSE OPEN CompoundStatement CLOSE Program { printf("Program -> deffun IDENTIFIER ( DeclarationStatement )  [ CompoundStatement ]\n"); }
        ;
CompoundStatement : Statement CompoundStatement    { printf("CompoundStatement -> Statement CompoundStatement\n"); }
                  | Statement                       { printf("CompoundStatement -> Statement\n"); }
                  ;
Statement : DeclarationStatement    { printf("Statement -> DeclarationStatement\n"); }
          | AssignmentStatement     { printf("Statement -> AssignmentStatement\n"); }
          | IfStatement             { printf("Statement -> IfStatement\n"); }
          | WhileStatement          { printf("Statement -> WhileStatement\n"); }
          | ForStatement            { printf("Statement -> ForStatement\n"); }
          | PrintStatement          { printf("Statement -> PrintStatement\n"); }
          | ReadStatement           { printf("Statement -> ReadStatement\n"); }
          | ReturnStatement         { printf("Statement -> ReturnStatement\n"); }
          ;
DeclarationStatement : Type IDENTIFIER COMMA DeclarationStatement    { printf("DeclarationStatement -> Type IDENTIFIER , DeclarationStatement\n"); }
                     | Type IDENTIFIER                               { printf("DeclarationStatement -> Type IDENTIFIER\n"); }
                     | LIST IDENTIFIER BRACKETOPEN IDENTIFIER BRACKETCLOSE      { printf("DeclarationStatement -> list IDENTIFIER ( IDENTIFIER )\n"); }
                     ;
Type : INT    { printf("Type -> integer\n"); }
     | STR    { printf("Type -> string\n"); }
     | CHAR   { printf("Type -> char\n"); }
     | FLOAT   { printf("Type -> float\n"); }
     | BOOLEAN   { printf("Type -> boolean\n"); }
     ;
AssignmentStatement : Type IDENTIFIER EQ Expression        { printf("AssignmentStatement -> Type IDENTIFIER = Expression\n"); }
                    | Type IDENTIFIER EQ STRINGCONSTANT    { printf("AssignmentStatement -> Type IDENTIFIER = STRINGCONSTANT\n"); }
                    | IDENTIFIER ADD1                      { printf("AssignmentStatement -> Type IDENTIFIER++\n"); }
                    | IDENTIFIER PLUS EQ Expression        { printf("AssignmentStatement -> IDENTIFIER += Expression\n"); }
                    ;
Expression : Expression PLUS Term     { printf("Expression -> Expression + Term\n"); }
           | Expression MINUS Term    { printf("Expression -> Expression - Term\n"); }
           | ArrayExpression          { printf("Expression -> ArrayExpression\n"); }
           | Term                     { printf("Expression -> Term\n"); }
           ;
ArrayExpression : IDENTIFIER BRACKETOPEN Term BRACKETCLOSE    { printf("ArrayExpression -> IDENTIFIER ( Term )\n"); }
                ;
Term : Term TIMES Factor    { printf("Term -> Term * Factor\n"); }
     | Term DIV Factor      { printf("Term -> Term / Factor\n"); }
     | Term MOD Factor      { printf("Term -> Term mod Factor\n"); }
     | Factor               { printf("Term -> Factor\n"); }
     ;
Factor : OPEN Expression CLOSE    { printf("Factor -> ( Expression )\n"); }
       | IDENTIFIER               { printf("Factor -> IDENTIFIER\n"); }
       | INTCONSTANT              { printf("Factor -> INTCONSTANT\n"); }
       | MINUS IDENTIFIER         { printf("Factor -> - IDENTIFIER\n"); }
       ;
IfStatement : IF Condition POINTS CompoundStatement                                                                               { printf("IfStatement -> if Expression : CompoundStatement \n"); }
            | IF Condition POINTS CompoundStatement ELSE_IF Condition POINTS CompoundStatement                                                   { printf("IfStatement -> if Expression : CompoundStatement else_if Expression : CompoundStatement\n"); }
            | IF Condition POINTS CompoundStatement ELSE_IF Condition POINTS CompoundStatement  ELSE POINTS CompoundStatement     { printf("IfStatement -> if Expression : CompoundStatement else_if Expression : CompoundStatement else : CompoundStatement\n"); }
            | IF Condition POINTS CompoundStatement ELSE POINTS CompoundStatement                                                                         { printf("IfStatement -> if Expression : CompoundStatement else : CompoundStatement \n"); }
            ;
WhileStatement : WHILE Condition POINTS CompoundStatement    { printf("WhileStatement -> while Expression : CompoundStatement \n"); }
               ;
ForStatement : FOR IDENTIFIER IN INTERVAL BRACKETOPEN Factor COMMA Factor BRACKETCLOSE POINTS CompoundStatement     { printf("ForStatement -> for IDENTIFIER in interval ( IDENTIFIER , IDENTIFIER ) :  CompoundStatement \n"); }
             | FOR IDENTIFIER IN IDENTIFIER POINTS CompoundStatement     { printf("ForStatement -> for IDENTIFIER in IDENTIFIER :  CompoundStatement \n"); }
             ;
PrintStatement : WRITE POINTS2 Expression         { printf("PrintStatement -> write :: Expression \n"); }
               | WRITE POINTS2 STRINGCONSTANT     { printf("PrintStatement -> write :: STRINGCONSTANT \n"); }
               | WRITE POINTS2 CALL_FUNC BRACKETOPEN IDENTIFIER BRACKETOPEN ListIdentifiers BRACKETCLOSE BRACKETCLOSE    { printf("PrintStatement -> write :: call_func ( IDENTIFIER ( ListIdentifiers ) ) \n"); }
               ;
MultipleRead : IDENTIFIER POINTS2 MultipleRead { printf ("MultipleRead -> IDENTIFIER :: MultipleRead\n"); }
             | IDENTIFIER { printf ("MultipleRead -> IDENTIFIER \n"); }
ListIdentifiers : IDENTIFIER COMMA ListIdentifiers { printf("ListIdentifiers -> IDENTIFIER , ListIdentifiers\n"); }
                | IDENTIFIER { printf ("MultipleRead -> IDENTIFIER \n"); }
ReadStatement : READ POINTS2 MultipleRead    { printf("ReadStatement -> read [ IDENTIFIER ]\n"); }
              ;
ReturnStatement : SEND_BACK FALSE    { printf("ReturnStatement -> send_back False\n"); }
                | SEND_BACK TRUE    { printf("ReturnStatement -> send_back True\n"); }
                | SEND_BACK IDENTIFIER    { printf("ReturnStatement -> send_back IDENTIFIER\n"); }
              ;
Condition : Expression Relation Expression AND Condition    { printf("Condition -> Expression Relation Expression AND Condition\n"); }
          | Expression Relation Expression OR Condition     { printf("Condition -> Expression Relation Expression OR Condition\n"); }
          | Expression Relation Expression                  { printf("Condition -> Expression Relation Expression\n"); }
          ;
Relation : LESS        { printf("Relation -> <\n"); }
         | LESSEQ      { printf("Relation -> <=\n"); }
         | EQQ         { printf("Relation -> ==\n"); }
         | NEQ         { printf("Relation -> !=\n"); }
         | BIGGEREQ    { printf("Relation -> >=\n"); }
         | BIGGER      { printf("Relation -> >\n"); }
	     | AND         { printf("Relation -> and\n"); }
	     | OR          { printf("Relation -> or\n"); }
         ;
%%
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