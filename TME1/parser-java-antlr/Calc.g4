grammar Calc;

// Règles syntaxiques

prog : exp EOF ;

exp  : e1=exp op=ADD e2=exp  # Add
     | INT                   # Int
     ;


// Règles lexicales

ADD : '+' ;
INT : '-'?[0-9]+ ;
WHITESPACES : [ \t\r\n]+ -> skip ; // ignorer les caractères d'espacement
