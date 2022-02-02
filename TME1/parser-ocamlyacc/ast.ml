type expr =
  | Add of expr * expr
  | Int of int

type seq = (expr list) * bool

type inst = PRINT of seq
