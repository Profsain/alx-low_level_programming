#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point of the app
 *Return: Always 0 - Success
 */

int main(void)
{
	int n;
	int ldigit;

	/* generate random number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;

	print("Last digit of %i is %i and is ", n, (n % 10));

	if (ldigit == 0)
	{
		printf("0\n");
	}
	else if (ldigit > 5)
	{
		printf("greater that 5\n");
	}
	else
	{
		printf("less that 6 and not 0\n");
	}
	
	return (0);
}
