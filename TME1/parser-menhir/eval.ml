open Ast

let rec eval e =
  match e with
  | Add(e1,e2) -> eval e1 + eval e2
  | Int n -> n
