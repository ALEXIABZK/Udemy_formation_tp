#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int cote_carre = 0;

	printf("Quelle est la taille d'un côté du carré ?\n");
	scanf("%d", &cote_carre);

       printf("ce carré a pour périmètre %d\n", cote_carre*4);

 	printf("Ce carre a pour surface %d\n", cote_carre*cote_carre);

	int hauteur = 0;
	int largeur = 0;

	printf("Quelle est la hauteur et la largeur du rectangle ?\n");
	scanf("%d %d", &hauteur, &largeur);

	printf("Ce rectangle a pour périmètre %d\n", (hauteur+largeur)*2);
	printf("Ce rectangle a pour surface %d\n", hauteur*largeur);

return 0;
}	
