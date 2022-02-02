
1. Télécharger **antlr-4.9.3-complete.jar** : *https://www.antlr.org/download/antlr-4.9.3-complete.jar*

2. Placer **antlr-4.9.3-complete.jar** dans le dossier courant.

3. Lancer l'exemple :

```bash
$ export CLASSPATH=".:antlr-4.9.3-complete.jar:$CLASSPATH"
$ make
$ java Main tests/e1.txt
(((1 + 2) + 3) + 4)
~> 10
$ make clean
```