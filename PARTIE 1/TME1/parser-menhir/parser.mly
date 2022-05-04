%{
%}

%token ADD EOF
%token<int> INT

%start prog

%type <Ast.expr> prog
%type <Ast.expr> expr

%left ADD

%%

prog : e=expr EOF { e } ;

expr : e1=expr ADD e2=expr { Ast.Add(e1,e2) }
     | n=INT { Ast.Int(n) }
     ;

%%
