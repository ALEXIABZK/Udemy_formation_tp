#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	int nombre_mystere = 0, nombre_utilisateur = 0;
	const int VALEUR_MIN = 1, VALEUR_MAX = 100;
	int recommencer = 0;

	do
	{
	srand(time(NULL));
	nombre_mystere = (rand()%(VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN; 

	printf("Devinez le nombre mystère. Indice c'est un nombre compris entre %d et %d\n", VALEUR_MIN, VALEUR_MAX);
	
		for(int tentative = 1; tentative <11; tentative++)
		{
			printf("Tentative %d/10 =>", tentative);
			scanf("%d", &nombre_utilisateur);

			if(nombre_utilisateur < 0 || nombre_utilisateur > 100)
			{
				printf("Nombre invalide, il doit être compris entre %d et %d\n", VALEUR_MIN, VALEUR_MAX);
			}	
			else if(nombre_utilisateur < nombre_mystere)
			{
				printf("c'est plus grand\n");
			}
			else if(nombre_utilisateur > nombre_mystere)
			{
				printf("c'est plus petit\n");
			}
			else
			{
				printf("Bravo! le nombre mystère est bien %d\n", nombre_mystere);
				break;
			}
		}
	
	printf("Voulez-vous faire une nouvelle partie (1-Oui, 2-Non)\n");
	scanf("%d", &recommencer);
	}
	while(recommencer == 1);

	return 0;
}
