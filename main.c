#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int mon_int = 12; 
	printf("mon int = %d et fait %ld octets\n", mon_int, sizeof(int));

	long mon_long = 123; 
	printf("mon long = %ld et fait %ld octets\n", mon_long, sizeof(long));

	short mon_short = 2; 
	printf("mon short = %d et fait %ld octets\n", mon_short, sizeof(short));

	float mon_float = 1.45; 
	printf("mon float = %f et fait %ld octets\n", mon_float, sizeof(float));

	double mon_double = 45.890;
	printf("mon double = %f et fait %ld octets\n", mon_double, sizeof(double));

	char mon_char = 'B'; 
	printf("mon char = %c et fait %ld octets\n", mon_char, sizeof(char));

	return 0;
}





