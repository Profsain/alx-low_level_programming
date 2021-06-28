#include "holberton.h"

/**
 * print_rev - print string in a reverse form , follow by new line to stdout
 * @s: string to print
 */

void print_rev(char *s)
{
	while (*s != '\0')
		_putchar(*s--);
	_putchar('\n');
}
