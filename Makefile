all: ex03.exe

ex03.exe: ex03.o funcs.o
	gcc ex03.o funcs.o -o ex03

ex03.o: ex03.c
	gcc -c ex03.c

funcs.o: funcs.c
	gcc -c funcs.c

