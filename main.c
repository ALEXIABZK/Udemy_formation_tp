#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void dessin (char tab[][3]);
void Joueur(char tab[][3], char);
/*void joueurO(char tab[][3]);*/
int controle(char tab[][3], char);
int fin_partie(char tab[][3],int, char);
int grille_pleine(char tab[][3]);

int main ()
{
	char grille [3][3] = {{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};
	char joueur = 'X';
	int fin = 0;
	int recommencer = 0;
	do
	{
	do
	{
	dessin(grille);
	Joueur (grille, joueur);
	fin = controle(grille, joueur);
	if (fin_partie(grille, fin, joueur) == 1)
	{
		dessin(grille);
		break;
	}
	else if (grille_pleine (grille) == 1)
	{
		printf("Match null!!\n");
		break;
	}
	else if(joueur == 'X')
		joueur = 'O';
	else
		joueur = 'X';
	}
	while( fin_partie(grille, fin, joueur) == 0 || grille_pleine(grille) == 0);
	
	printf("Voulez vous recommencer ? (1-OUI 2-NON)\n");
	scanf("%d", &recommencer);
	}
	while(recommencer == 1);


	return 0; 
}

void dessin (char tab[][3])
{
	for(int i = 0; i < 3; i ++)
	printf("|%c|%c|%c|\n", tab[i][0], tab[i][1], tab[i][2]);
}


void Joueur(char tab[][3], char joueur)
{
	int a = 0; 
	int b = 0; 
	do
	{
		do
		{
		printf("Joueur %c ou voulez-vous jouer (x y) ?\n", joueur);
		scanf("%d%d", &a, &b);
		}
		while ((a<0 || a>2) || (b<0 || b>2));
		
		if(tab[a][b] != '.')
		{	 
		printf("Case déjà occupée, recommencez\n");
		}
	}
	while(tab[a][b] != '.');

	tab[a][b] = joueur;
}
/*
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
*/
int controle(char tab[][3],char joueur)
{
	for(int x = 0; x<3; x++)
	{
		if(tab[x][0] == joueur && tab[x][1] == joueur && tab[x][2] == joueur)
		return 1;
	}

	for(int y = 0; y<3; y++)
	{
		if(tab[0][y] == joueur && tab[1][y] == joueur && tab[2][y] == joueur)
			return 1;
	}

	if(tab[0][0] == joueur && tab[1][1] == joueur && tab[2][2] == joueur)
		return 1;

	if(tab[0][2] == joueur && tab[1][1] == joueur && tab[2][0] == joueur)
		return 1;

	else
		return 0;
}

int fin_partie(char tab[][3], int h, char joueur)
{
	if (h == 1 )
	{
		printf("Victoire du joueur %c!!\n", joueur);
		return 1;
	}
	else 
		return 0;
}

int grille_pleine(char tab[][3])
{
	for(int x = 0; x < 3; x++)
	{
		for(int y = 0; y < 3; y++)
		{
			if(tab[x][y] == '.')
			{
				return 0;
			break;
			}
		}
	}

	return 1;
}				
					




				
