all: systems7.o
	gcc -o program systems7.o

systems7.o: systems7.c
	gcc -c systems7.c

run:
	./program
