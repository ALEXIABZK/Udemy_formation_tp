#include<stdio.h>
#include<stdlib.h>

int main ()
{
	const char CODE [4] = {'R', 'V', 'B', 'J'};
	char saisie_utilisateur[4] = {0}; 
	int tentatives = 0; 

	do
	{
	int couleur_placee = 0; 
	int couleur_mal_placee = 0; 

	printf("Donnez un code de 4 couleurs différentes et sans espace parmis : R, V, B, J, O :\n");
	fflush(stdin);
	scanf("%s", saisie_utilisateur);
	
	for(int i = 0; i<4; i++)
	{
		if(*(saisie_utilisateur+i) ==*(CODE+i))
		couleur_placee++;
		if(*(saisie_utilisateur+i) != *(CODE+i))
		couleur_mal_placee++;	
	}

	if(couleur_placee == 4)
	{
	printf("Bravo! Tu as gagné\n");
	break; 
	}
	

	printf("Couleurs bien placees = %d\n", couleur_placee);	
	printf("Couleurs mal placee = %d\n", couleur_mal_placee);
	tentatives++; 
	printf("tentative %d/3\n", tentatives);
	}
	while(tentatives<3);

	return 0; 
}
