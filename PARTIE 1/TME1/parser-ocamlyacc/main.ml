let process file =
  let ic = open_in file in 
  let lexbuf = Lexing.from_channel ic in
  let ast = Parser.prog Lexer.token lexbuf in
  
  let fmt = Format.std_formatter in

  (*Pretty_printer.pprint fmt ast;*)

  (Eval.evalinst ast)

let _ =
  for i = 1 to Array.length Sys.argv - 1 do
    process Sys.argv.(i)
  done
