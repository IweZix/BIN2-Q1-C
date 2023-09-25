#include <stdlib.h>
#include <stdio.h>
int INT_MAX = 2147483647;

int main(int argc, char const *argv[])
{
	
	int n;
	int fact = 1;
	printf("Entrez une valeur : ");
	scanf("%d", &n);

	// vérification car la factorielle d'un nombre plus grand que 12 en C n'est pas calculable
	if (n == 13 || n > 13)
	{
		printf("La factorielle n'est pas possible en C car la valeurs maximal possible est %d\n", INT_MAX);
		exit(1);
	}

	// réalisation de la factorielle
	for (int i = 1; i <= n; ++i)
	{
		
		fact = fact*i;
	}
	
	printf("La factorielle de %d est %d\n", n, fact);

	exit(0);
}