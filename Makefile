main.o: main.c
	gcc main.c -o main.o -L mylib -l mylib -Wall