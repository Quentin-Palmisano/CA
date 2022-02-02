
ANTLR4_SRC=antlr-4.9.3-complete.jar

ANTLR4=java -Xmx500M org.antlr.v4.Tool

GRAMMAR=Calc

all:
	$(ANTLR4) $(GRAMMAR).g4;
	javac -Xlint *.java

clean:
	rm -rf *.interp *.tokens *.class $(GRAMMAR)BaseListener.java $(GRAMMAR)Lexer.java $(GRAMMAR)Parser.java $(GRAMMAR)Listener.java
