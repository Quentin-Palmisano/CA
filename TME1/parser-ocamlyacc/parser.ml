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

open Parsing;;
let _ = parse_error;;
# 2 "parser.mly"
# 23 "parser.ml"
let yytransl_const = [|
  257 (* ADD *);
  258 (* MINUS *);
  259 (* MULT *);
  260 (* DIV *);
  261 (* LPAREN *);
  262 (* RPAREN *);
  263 (* SUP *);
  264 (* EQUAL *);
  265 (* INF *);
  266 (* AND *);
  267 (* OR *);
  268 (* NOT *);
  269 (* PRINT *);
  270 (* SEQ *);
    0 (* EOF *);
    0|]

let yytransl_block = [|
  271 (* INT *);
    0|]

let yylhs = "\255\255\
\001\000\003\000\004\000\004\000\004\000\002\000\002\000\000\000"

let yylen = "\002\000\
\002\000\002\000\003\000\002\000\001\000\003\000\001\000\002\000"

let yydefred = "\000\000\
\000\000\000\000\000\000\008\000\000\000\007\000\000\000\002\000\
\001\000\000\000\000\000\006\000\003\000"

let yydgoto = "\002\000\
\004\000\007\000\005\000\008\000"

let yysindex = "\001\000\
\244\254\000\000\245\254\000\000\003\000\000\000\255\254\000\000\
\000\000\245\254\245\254\000\000\000\000"

let yyrindex = "\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\005\000\000\000\
\000\000\000\000\006\000\000\000\000\000"

let yygindex = "\000\000\
\000\000\253\255\000\000\254\255"

let yytablesize = 13
let yytable = "\010\000\
\003\000\001\000\009\000\006\000\005\000\004\000\012\000\000\000\
\013\000\000\000\000\000\000\000\011\000"

let yycheck = "\001\001\
\013\001\001\000\000\000\015\001\000\000\000\000\010\000\255\255\
\011\000\255\255\255\255\255\255\014\001"

let yynames_const = "\
  ADD\000\
  MINUS\000\
  MULT\000\
  DIV\000\
  LPAREN\000\
  RPAREN\000\
  SUP\000\
  EQUAL\000\
  INF\000\
  AND\000\
  OR\000\
  NOT\000\
  PRINT\000\
  SEQ\000\
  EOF\000\
  "

let yynames_block = "\
  INT\000\
  "

let yyact = [|
  (fun _ -> failwith "parser")
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 1 : Ast.inst) in
    Obj.repr(
# 23 "parser.mly"
                ( _1 )
# 108 "parser.ml"
               : Ast.inst))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 0 : 'seq) in
    Obj.repr(
# 25 "parser.mly"
                 (Ast.PRINT(_2))
# 115 "parser.ml"
               : Ast.inst))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 2 : Ast.expr) in
    let _3 = (Parsing.peek_val __caml_parser_env 0 : 'seq) in
    Obj.repr(
# 27 "parser.mly"
                   ( _1::_3 )
# 123 "parser.ml"
               : 'seq))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 1 : Ast.expr) in
    Obj.repr(
# 28 "parser.mly"
               ( (_1, false) )
# 130 "parser.ml"
               : 'seq))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : Ast.expr) in
    Obj.repr(
# 29 "parser.mly"
           ( (_1, true) )
# 137 "parser.ml"
               : 'seq))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 2 : Ast.expr) in
    let _3 = (Parsing.peek_val __caml_parser_env 0 : Ast.expr) in
    Obj.repr(
# 32 "parser.mly"
                     ( Ast.Add(_1,_3) )
# 145 "parser.ml"
               : Ast.expr))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : int) in
    Obj.repr(
# 33 "parser.mly"
           ( Ast.Int(_1) )
# 152 "parser.ml"
               : Ast.expr))
(* Entry prog *)
; (fun __caml_parser_env -> raise (Parsing.YYexit (Parsing.peek_val __caml_parser_env 0)))
|]
let yytables =
  { Parsing.actions=yyact;
    Parsing.transl_const=yytransl_const;
    Parsing.transl_block=yytransl_block;
    Parsing.lhs=yylhs;
    Parsing.len=yylen;
    Parsing.defred=yydefred;
    Parsing.dgoto=yydgoto;
    Parsing.sindex=yysindex;
    Parsing.rindex=yyrindex;
    Parsing.gindex=yygindex;
    Parsing.tablesize=yytablesize;
    Parsing.table=yytable;
    Parsing.check=yycheck;
    Parsing.error_function=parse_error;
    Parsing.names_const=yynames_const;
    Parsing.names_block=yynames_block }
let prog (lexfun : Lexing.lexbuf -> token) (lexbuf : Lexing.lexbuf) =
   (Parsing.yyparse yytables 1 lexfun lexbuf : Ast.inst)
;;
