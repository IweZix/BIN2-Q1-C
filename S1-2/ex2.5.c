#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	printf("Entrez une valeur : ");
	scanf("%d", &a);

	if (a < 1)
	{
		printf("Erreur : L'entier est plus petit que 1.\n");
		exit(1);
	}


	printf("Les divieurs de %d sont : \n", a);
	for (int i = 1; i < a; ++i)
	{
		if (a%i == 0)
		{
			printf("%d\n", i);
		}
	}

	exit(0);
}