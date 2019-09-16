#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

typedef int bool;

bool anagramme(char *s1, char *s3)
{
	int i, j ;
	bool echec = false ;
	char *s2 ;

	// longueurs identiques ?
	if (strlen(s1)!=strlen(s3)) return false ;

	// on va travailler sur une copie que l'on pourra modifier
	s2 = strdup(s3) ;

	// mêmes caractères avec mêmes occurences ?
	for (i=0 ; s1[i]!='\0' && !echec ; i++)
	{
		for (j=0 ; s2[j]!='\0' && s1[i]!=s2[j] ; j++) ;
	    // cette boucle est vide, mais utile

		if (s1[i]!=s2[j])
			echec = true ;   // s1[i] pas trouvé dans s2
		else
			s2[j] = ' ' ;  // on grille le caractère utilisé
	}

	free(s2) ; // nécessité par strdup, cf man

	return !echec ;
}	