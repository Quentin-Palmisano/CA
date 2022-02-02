public class PrettyPrinter {

    private static void pretty_print(CalcParser.IntContext ctx){
        System.out.print(ctx.INT());
    }
    private static void pretty_print(CalcParser.AddContext ctx){
        System.out.print("(");
        pretty_print(ctx.e1);
        System.out.print(" + ");
        pretty_print(ctx.e2);
        System.out.print(")");
    }
    public static void pretty_print(CalcParser.ExpContext ctx){
        if (ctx instanceof CalcParser.IntContext){
            pretty_print((CalcParser.IntContext) ctx);
        }
        if (ctx instanceof CalcParser.AddContext){
            pretty_print((CalcParser.AddContext) ctx);
        }
    }
}
