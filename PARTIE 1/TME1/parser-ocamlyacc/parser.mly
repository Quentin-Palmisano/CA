%{
%}

%token ADD MINUS MULT DIV
%token LPAREN RPAREN
%token SUP EQUAL INF
%token AND OR 
%token NOT
%token PRINT SEQ
%token EOF 
%token<int> INT

%start prog

%type <Ast.inst> prog
%type <Ast.expr> expr
%type <Ast.inst> inst

%left ADD

%%

prog : inst EOF { $1 } ;

inst : PRINT seq {Ast.PRINT($2)} ;

seq : expr SEQ seq { $1::$3 }
    | expr SEQ { ($1, false) }
    | expr { ($1, true) }
    ;

expr : expr ADD expr { Ast.Add($1,$3) }
     | INT { Ast.Int($1) }
     ;

%%
