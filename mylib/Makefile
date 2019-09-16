libmylib.a: palindrome.o anagramme.o trim.o
	ar -rs libmylib.a palindrome.o anagramme.o trim.o

palindrome.o: palindrome.c mylib.h
	gcc -Wall -c palindrome.c

anagramme.o: anagramme.c mylib.h
	gcc -Wall -c anagramme.c

trim.o: trim.c mylib.h
	gcc -Wall -c trim.c