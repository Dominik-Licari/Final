#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;//must declare for loop counter out side, can still initialize it inside
	for (i = 1; i < 101; i++)
	{
		if(!(i % 15)) //conditionals use numbers instead of booleans. 0 is false and nonzero is true, otherwise it is the same
		{
			printf("FizzBuzz");
		}
		else if(!(i % 3))
		{
			printf("Fizz");
		}
		else if(!(i % 5))
		{
			printf("Buzz");
		}
		else
		{
		       	printf("%d",i);
		}
		printf("\n");
		
	}
}
