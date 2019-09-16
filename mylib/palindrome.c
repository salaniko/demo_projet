#include <stdio.h>
#include <string.h>

void palindrome(char s[])
{
	int i=0, j ;

	j = strlen(s)-1 ;
	while (i<j && s[i]==s[j]) { i++ ; j-- ; }
	printf("%s %s un palindrome\n",s,s[i]==s[j]?"est":"n'est pas") ;
}