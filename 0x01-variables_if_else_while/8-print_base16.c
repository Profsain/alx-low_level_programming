#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point of the app
 *print hexbase 16 in lowercase
 *Return: Always 0 - Success
 */

int main(void)
{
	int n = '0';
	int h_a_to_f = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (h_a_to_f <= 'f') /*print a-f*/
	{
		putchar(h_a_to_f);
		h_a_to_f++;
	}
	putchar('\n');

	return (0);
}
