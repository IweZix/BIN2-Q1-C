#include <stdlib.h>
#include <stdio.h>
double INT_MAX = 2147483647;

int main(int argc, char const *argv[])
{
	
	double n;
	double fact = 1;
	printf("Entrez une valeur : ");
	scanf("%lf", &n);

	// réalisation de la factorielle
	for (int i = 1; i <= n; ++i)
	{
		
		fact = fact*i;
	}
	
	printf("La factorielle de %.0f est %.0f\n", n, fact);

	exit(0);
}