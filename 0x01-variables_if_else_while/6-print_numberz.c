#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point of the app
 *print 0-9 with putchar
 *Return: Always 0 - Success
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
