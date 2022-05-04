type expr =
  | Add of expr * expr
  | Int of int