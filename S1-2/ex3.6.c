#include <stdlib.h>
#include <stdio.h>
int INT_MAX = 2147483647;

int main(int argc, char const *argv[])
{
	
	int n;
	int fact = 1;
	printf("Entrez une valeur : ");
	scanf("%d", &n);

	// réalisation de la factorielle
	int i = 1;
	while (i < n)
	{
		if (fact > INT_MAX/i)
		{
			printf("Error : integer overflow\n");
			exit(1);
		}
		fact = fact*i;
		i++;
	}

	
	
	printf("La factorielle de %d est %d\n", n, fact);

	exit(0);
}