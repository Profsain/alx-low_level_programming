#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point of the app
 *print number between 0 and 10
 *Return: Always 0 - Success
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}
