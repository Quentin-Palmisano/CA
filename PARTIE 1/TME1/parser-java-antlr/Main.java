import org.antlr.v4.runtime.*;

public class Main {

    public static void main(String[] args) throws Exception {
        for (String s : args) {
            CharStream cc = CharStreams.fromFileName(s);
            CalcLexer lexer = new CalcLexer(cc);
            CalcParser parser = new CalcParser(new CommonTokenStream(lexer));
            CalcParser.ExpContext tree = parser.exp();

            PrettyPrinter.pretty_print(tree);

            System.out.println("\n~> " + Eval.eval(tree));
        }
    }
}
