#include<stdio.h>
#include<stdlib.h>

void dessin (char tab[][3], int, int);

int main ()
{
	char grille [3][3] = {{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};

	dessin(grille, 3, 3);




	return 0; 
}

void dessin (char tab[][3], int ligne, int colonne)
{
	for( int i = 0; i < ligne; i++)
	{
		printf("|%c|%c|%c|\n", tab[i][0], tab[i][1], tab[i][2]);
	}
}
