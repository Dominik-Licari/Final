#include <stdio.h>
int main(int argc, char *argv[])
{
	if (! argc > 1)
	{
		printf("usage: %s 'string to print'", argv[0]);
	}
	for (int i = 1; i < argc; i++)
	{
		printf(argv[i]);
	}
	printf("\n");
	return 1;
}
