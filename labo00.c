#define SIZE 100 //taille phrases
#define _CRT_SECURE_NO_WARNINGS//uniquement sous windows
#define ViderBuffer  while(getchar() != '\n') // fonction qui vide le buffer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char phrase[SIZE];//tableau de saisie
	char mots[SIZE];//tableau imprimé
	int n = 1;//nombre de mots

	fgets(phrase , SIZE , stdin);
	
	for (int a = 0; a <= SIZE; a++)
	{
		if (( phrase[a] == ' ') && ( isalnum(phrase[a-1] )))
		{
			mots[a] = '\n';
			n++;
		}
		else
		{
			mots[a] = phrase[a];
		}
		//cas si plusieurs espaces : a faire
	}

	printf("%s", mots);
	printf("\n%d\n", n);

	system("PAUSE");
	return (EXIT_SUCCESS);
}