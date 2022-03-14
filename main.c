#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main ()
{
	const char MOT_A_TROUVER [] = "LUDO";

	char saisie_utilisateur[1]; 
	char mot_trouve[] ="----"; 
	int nb_vie = 10;
	
	do
	{
	printf("Proposition de lettre >");
	fflush(stdin);
	fgets(saisie_utilisateur, 2, stdin);

	if(saisie_utilisateur[0] == 'L')
	{
		        mot_trouve[0] = 'L';	
			printf("La lettre L fait partie du mot %s, il vous reste %d vies\n", mot_trouve, nb_vie);	
	}
	else if(saisie_utilisateur[0] == 'U')
	{
			mot_trouve[1] = 'U';
			printf("La lettre U fait partie du mot %s, il vous reste %d vies\n", mot_trouve, nb_vie);
	}
	else if(saisie_utilisateur[0] == 'D')
	{
			mot_trouve[2] = 'D'; 
			printf("La lettre D fait partie du mot %s, il vous reste %d vies\n", mot_trouve, nb_vie);
	}
	else if(saisie_utilisateur[0] == 'O')
	{
			mot_trouve[3] = 'O'; 
			printf("La lettre O fait partie du mot %s, il vous reste %d vies\n", mot_trouve, nb_vie);
	}
	else
	{
		printf("La lettre %c ne fait pas partie du mot %s, il vous reste %d vies\n",saisie_utilisateur[0], mot_trouve, --nb_vie);
	}

	if(strcmp(MOT_A_TROUVER, mot_trouve) == 0)
	{
		printf("Bravo vous avez gagné!\n");
		break;
	}
	}
	while (nb_vie >0);

	if(nb_vie == 0)
	{
		printf("Vous avez perdu, le mot à trouver était %s\n", MOT_A_TROUVER);
	}

	
	return 0; 
}	
