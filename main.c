#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int nombre1 = 0;
	int nombre2 = 0;
	char operateur = ' ';
	int resultat = 0;

	printf("Entrez une opération mathématique à résoudre (sans espace) sous la forme par exemple 2+3\nVous pouvez utiliser les opérateurs +, -, *, /\n");
	scanf("%d""%c""%d", &nombre1, &operateur, &nombre2);

	if (operateur == '+')
	{
		resultat = nombre1 + nombre2;
		printf("%d%c%d = %d\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '-')
	{
		resultat = nombre1 - nombre2;
		printf("%d%c%d = %d\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '*')
	{
		resultat = nombre1 * nombre2;
		printf("%d%c%d = %d\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '/')
	{
		if (nombre2 == 0)
		{
			printf("la division par 0 est impossible\n");
		}
		else
		{
		double resultat = ((double) nombre1) /((double) nombre2);
		printf("%d%c%d = %f\n", nombre1, operateur, nombre2,(double) resultat);
		}
	}
	else 
	{
		printf("Opérateur non valide, utilisez uniquement +, -, *, /\n");
	}

	return 0; 
}
		

