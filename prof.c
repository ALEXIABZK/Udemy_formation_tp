#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	int nb_vie = 10; 

	char mot_secret[] = "PROGRAMMATION";
	int taille_mot = strlen(mot_secret);
	
	char saisie_utilisateur[taille_mot+1];
	char mot_trouve[taille_mot+1];

	for (int i = 0; i < taille_mot; i++) 
		mot_trouve[i] = '-';
	mot_trouve[taille_mot] = '\0';

	do
	{
		printf("Donnez une lettre >");
		fflush(stdin);
		fgets(saisie_utilisateur, taille_mot+1, stdin);

		int lettre_presente = 0;
		for(int i = 0; i < taille_mot; i++)
		{
			if(mot_secret[i] == saisie_utilisateur[0])
			{
				lettre_presente = 1; 
				mot_trouve[i] = saisie_utilisateur[0];
			}
		}

		if(lettre_presente == 1)
		{
			printf("La lettre %c est bien presente dans le mot %s \n", saisie_utilisateur[0], mot_trouve);
		}
		else
		{
			nb_vie--;
			printf("La lettre %c n'est pas présente dans le mot %s, et il vous reste %d vies\n", saisie_utilisateur[0], mot_trouve, nb_vie);
		}

		if(strcmp(mot_secret, mot_trouve) == 0)
		{
			printf("Bravo vous avez trouvé le mot %s\n", mot_secret);
			break;
		}

	}
	while(nb_vie > 0);

	if(nb_vie == 0)
	{
		printf("Vous avez perdu, le mot à trouver était %s\n", mot_secret);
	}

	return 0; 
}

