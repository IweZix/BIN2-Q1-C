#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	int fact = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		fact = fact*i;
	}
	
	printf("La factorielle de %d est %d\n", n, fact);


	exit(0);
}