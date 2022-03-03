#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int rayon = 0;
	float diametre = 0; 
	float aire = 0;
	float circonference = 0;

	printf("Quel est le rayon du cercle ?");
	scanf("%d", &rayon);
	
	diametre = rayon*2; 
	aire =M_PI*rayon*rayon;
	circonference = 2*M_PI*rayon;

	printf("Ce cercle a pour diamètre %d\nCe cercle a pour circonférence %f\nCe cercle a pour aire %f\n", (int)diametre, circonference, aire);

	return 0;
}

