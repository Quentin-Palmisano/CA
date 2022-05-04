open Ast

let rec eval e =
  match e with
  | Add(e1,e2) -> eval e1 + eval e2
  | Int n -> n

let rec evalinst i = match i with 
  |([],x)   -> ()
  |([m],x)  -> eval m; if x then print_newline()
  |(n::m,x) -> eval n; evalinst (m,x)


 
