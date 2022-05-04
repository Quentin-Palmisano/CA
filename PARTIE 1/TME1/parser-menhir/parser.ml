
module MenhirBasics = struct
  
  exception Error
  
  type token = 
    | INT of (
# 5 "parser.mly"
      (int)
# 11 "parser.ml"
  )
    | EOF
    | ADD
  
end

include MenhirBasics

let _eRR =
  MenhirBasics.Error

type _menhir_env = {
  _menhir_lexer: Lexing.lexbuf -> token;
  _menhir_lexbuf: Lexing.lexbuf;
  _menhir_token: token;
  mutable _menhir_error: bool
}

and _menhir_state = 
  | MenhirState5
  | MenhirState0

# 1 "parser.mly"
  

# 37 "parser.ml"

let rec _menhir_goto_expr : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 10 "parser.mly"
      (Ast.expr)
# 42 "parser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState0 ->
        let (_menhir_env : _menhir_env) = _menhir_env in
        let (_menhir_stack : 'freshtv23 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 52 "parser.ml"
        )) = Obj.magic _menhir_stack in
        ((assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        match _tok with
        | ADD ->
            let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv9 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 62 "parser.ml"
            )) = Obj.magic _menhir_stack in
            ((let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            match _tok with
            | INT _v ->
                _menhir_run1 _menhir_env (Obj.magic _menhir_stack) MenhirState5 _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState5) : 'freshtv10)
        | EOF ->
            let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv19 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 78 "parser.ml"
            )) = Obj.magic _menhir_stack in
            ((let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv17 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 84 "parser.ml"
            )) = Obj.magic _menhir_stack in
            ((let (_menhir_stack, _menhir_s, (e : (
# 10 "parser.mly"
      (Ast.expr)
# 89 "parser.ml"
            ))) = _menhir_stack in
            let _v : (
# 9 "parser.mly"
      (Ast.expr)
# 94 "parser.ml"
            ) = 
# 16 "parser.mly"
                  ( e )
# 98 "parser.ml"
             in
            let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv15) = _menhir_stack in
            let (_menhir_s : _menhir_state) = _menhir_s in
            let (_v : (
# 9 "parser.mly"
      (Ast.expr)
# 106 "parser.ml"
            )) = _v in
            ((let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv13) = Obj.magic _menhir_stack in
            let (_menhir_s : _menhir_state) = _menhir_s in
            let (_v : (
# 9 "parser.mly"
      (Ast.expr)
# 114 "parser.ml"
            )) = _v in
            ((let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv11) = Obj.magic _menhir_stack in
            let (_menhir_s : _menhir_state) = _menhir_s in
            let ((_1 : (
# 9 "parser.mly"
      (Ast.expr)
# 122 "parser.ml"
            )) : (
# 9 "parser.mly"
      (Ast.expr)
# 126 "parser.ml"
            )) = _v in
            (Obj.magic _1 : 'freshtv12)) : 'freshtv14)) : 'freshtv16)) : 'freshtv18)) : 'freshtv20)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let (_menhir_env : _menhir_env) = _menhir_env in
            let (_menhir_stack : 'freshtv21 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 136 "parser.ml"
            )) = Obj.magic _menhir_stack in
            ((let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s) : 'freshtv22)) : 'freshtv24)
    | MenhirState5 ->
        let (_menhir_env : _menhir_env) = _menhir_env in
        let (_menhir_stack : (('freshtv27 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 145 "parser.ml"
        ))) * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 149 "parser.ml"
        )) = Obj.magic _menhir_stack in
        ((let (_menhir_env : _menhir_env) = _menhir_env in
        let (_menhir_stack : (('freshtv25 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 155 "parser.ml"
        ))) * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 159 "parser.ml"
        )) = Obj.magic _menhir_stack in
        ((let ((_menhir_stack, _menhir_s, (e1 : (
# 10 "parser.mly"
      (Ast.expr)
# 164 "parser.ml"
        ))), _, (e2 : (
# 10 "parser.mly"
      (Ast.expr)
# 168 "parser.ml"
        ))) = _menhir_stack in
        let _v : (
# 10 "parser.mly"
      (Ast.expr)
# 173 "parser.ml"
        ) = 
# 18 "parser.mly"
                           ( Ast.Add(e1,e2) )
# 177 "parser.ml"
         in
        _menhir_goto_expr _menhir_env _menhir_stack _menhir_s _v) : 'freshtv26)) : 'freshtv28)

and _menhir_errorcase : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    match _menhir_s with
    | MenhirState5 ->
        let (_menhir_env : _menhir_env) = _menhir_env in
        let (_menhir_stack : ('freshtv5 * _menhir_state * (
# 10 "parser.mly"
      (Ast.expr)
# 189 "parser.ml"
        ))) = Obj.magic _menhir_stack in
        ((let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s) : 'freshtv6)
    | MenhirState0 ->
        let (_menhir_env : _menhir_env) = _menhir_env in
        let (_menhir_stack : 'freshtv7) = Obj.magic _menhir_stack in
        (raise _eRR : 'freshtv8)

and _menhir_run1 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 5 "parser.mly"
      (int)
# 201 "parser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_env = _menhir_discard _menhir_env in
    let (_menhir_env : _menhir_env) = _menhir_env in
    let (_menhir_stack : 'freshtv3) = Obj.magic _menhir_stack in
    let (_menhir_s : _menhir_state) = _menhir_s in
    let ((n : (
# 5 "parser.mly"
      (int)
# 211 "parser.ml"
    )) : (
# 5 "parser.mly"
      (int)
# 215 "parser.ml"
    )) = _v in
    ((let _v : (
# 10 "parser.mly"
      (Ast.expr)
# 220 "parser.ml"
    ) = 
# 19 "parser.mly"
             ( Ast.Int(n) )
# 224 "parser.ml"
     in
    _menhir_goto_expr _menhir_env _menhir_stack _menhir_s _v) : 'freshtv4)

and _menhir_discard : _menhir_env -> _menhir_env =
  fun _menhir_env ->
    let lexer = _menhir_env._menhir_lexer in
    let lexbuf = _menhir_env._menhir_lexbuf in
    let _tok = lexer lexbuf in
    {
      _menhir_lexer = lexer;
      _menhir_lexbuf = lexbuf;
      _menhir_token = _tok;
      _menhir_error = false;
    }

and prog : (Lexing.lexbuf -> token) -> Lexing.lexbuf -> (
# 9 "parser.mly"
      (Ast.expr)
# 243 "parser.ml"
) =
  fun lexer lexbuf ->
    let _menhir_env = {
      _menhir_lexer = lexer;
      _menhir_lexbuf = lexbuf;
      _menhir_token = Obj.magic ();
      _menhir_error = false;
    } in
    Obj.magic (let (_menhir_env : _menhir_env) = _menhir_env in
    let (_menhir_stack : 'freshtv1) = ((), _menhir_env._menhir_lexbuf.Lexing.lex_curr_p) in
    ((let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | INT _v ->
        _menhir_run1 _menhir_env (Obj.magic _menhir_stack) MenhirState0 _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState0) : 'freshtv2))

# 22 "parser.mly"
  

# 267 "parser.ml"

# 269 "<standard.mly>"
  

# 272 "parser.ml"
