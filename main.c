#include<stdio.h>
#include<stdlib.h>

void dessin (char tab[][3], int, int);
void joueurX(char tab[][3]);
void joueurO(char tab[][3]);

int main ()
{
	char grille [3][3] = {{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};

	dessin(grille, 3, 3);
	joueurX (grille);
	dessin(grille, 3, 3);
	joueurO (grille);
	dessin (grille, 3, 3);

	return 0; 
}

void dessin (char tab[][3], int ligne, int colonne)
{
	for( int i = 0; i < ligne; i++)
	{
		printf("|%c|%c|%c|\n", tab[i][0], tab[i][1], tab[i][2]);
	}
}

void joueurX(char tab[][3])
{
	int a = 0; 
	int b = 0; 
	do
	{
		do
		{
		printf("Joueur X ou voulez-vous jouer (x y) ?\n");
		scanf("%d%d", &a, &b);
		}
		while ((a<0 || a>2) || (b<0 || b>2));
		
		if(tab[a][b] == 'O')
		{	 
		printf("Case déjà occupée, recommencez\n");
		}
	}
	while(tab[a][b] == 'O');

	tab[a][b] ='X';
}

void joueurO(char tab[][3])
{
	int c = 0; 
	int d = 0; 
	do
	{
		do
		{
		printf("Joueur O où voulez vous jouer (x y) ?\n");
		scanf("%d%d", &c, &d);
		}
		while ((c<0 || c>2) || (d<0 || d>2));

		if(tab[c][d] == 'X')
		{
			printf("Case déjà occupée, recommencez\n");
		}
	}
	while(tab[c][d] == 'X');

	tab[c][d] = 'O'; 
}

