#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, temp;
	printf("Entrez la valeur de a : ");
	scanf("%d", &a);
	printf("Entrez la valeur de b : ");
	scanf("%d", &b);
	printf("a = %d, b = %d\n", a, b);

	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d", a, b);

	exit(0);
}