#include "holberton.h"

/**
 * print_rev - print string in a reverse form , follow by new line to stdout
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = 0;
	int i;
	/* find the length of string */
	while (*s != '\0')
	{
		len++;
		++s;
	}
	/* print in reverse form */
	for (i = len; - > 0; i--)
	{
		_putchar(*s);
		s--;
	}
}
