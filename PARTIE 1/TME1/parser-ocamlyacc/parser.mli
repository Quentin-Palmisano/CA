type token =
  | ADD
  | MINUS
  | MULT
  | DIV
  | LPAREN
  | RPAREN
  | SUP
  | EQUAL
  | INF
  | AND
  | OR
  | NOT
  | PRINT
  | SEQ
  | EOF
  | INT of (int)

val prog :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Ast.inst
