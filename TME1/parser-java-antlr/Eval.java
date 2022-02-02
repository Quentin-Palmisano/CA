public class Eval {

    private static int eval(CalcParser.IntContext ctx){
        return Integer.parseInt(ctx.INT().toString());
    }
    private static int eval(CalcParser.AddContext ctx){
        return eval(ctx.e1) + eval(ctx.e2);
    }

    public static int eval(CalcParser.ExpContext ctx){
        if (ctx instanceof CalcParser.IntContext){
            return eval((CalcParser.IntContext) ctx);
        }
        if (ctx instanceof CalcParser.AddContext){
            return eval((CalcParser.AddContext) ctx);
        }
        throw new AssertionError ("This must not happen");
    }
}