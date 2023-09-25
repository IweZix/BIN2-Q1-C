#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	printf("Entrez la valeur de a : ");
	scanf("%d", &a);
	printf("Entrez la valeur de b : ");
	scanf("%d", &b);
	
	if (a < 0 || b < 0)
	{
		printf("Error : les valeurs ne peuvent pas être plus petites que 0.\n");
		exit(1);
	}

	if (a > b)
	{
		if (b == 0)
		{
			while(b == 0)
			{
				printf("Entrez une nouvelle valeur pour b : ");
				scanf("%d", &b);
			}
			if (b > a)
			{
				c = b/a;
				printf("%d/%d = %d", b, a, c);
				exit(0);
			}
		}
		c = a/b;
		printf("%d/%d = %d", a, b, c);
		exit(0);
	} 
		else 
	{
		if (a == 0)
		{
			while(a == 0)
			{
				printf("Entrez une nouvelle valeur pour a : ");
				scanf("%d", &a);
			}
			if (a > b)
			{
				c = a/b;
				printf("%d/%d = %d", a, b, c);
				exit(0);
			}
		}
		c = b/a;
		printf("%d/%d = %d", b, a, c);
		exit(0);
	}

	exit(1);
}