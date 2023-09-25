#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	for (int i = 65; i <= 90; ++i)
	{
		printf("char : \'%c\'     dec. : %d     hex. : %x\n", i,i,i);
	}
	
	for (int i = 48; i <= 57; ++i)
	{
		printf("char : \'%c\'     dec. : %d     hex. : %x\n", i,i,i);
	}

	exit(0);
}