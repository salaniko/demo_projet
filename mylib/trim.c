#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


#define N 20

char *trim(char *s)
{
	char * fin;
	
	while( isspace(*s) )
		s++;

	fin = s + strlen(s) - 1;

	while( fin > s && isspace(fin))
		fin--;

	*(fin+1) = '\0';
	return s;
}
