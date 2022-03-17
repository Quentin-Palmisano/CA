type token =
  | ADD
  | EOF
  | PRINT
  | SEMICOL
  | SUB
  | MULT
  | DIV
  | LOWER
  | GREATER
  | EQUAL
  | AND
  | OR
  | NOT
  | INT of (int)
  | FLOAT of (float)

val prog :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Ast.inst
