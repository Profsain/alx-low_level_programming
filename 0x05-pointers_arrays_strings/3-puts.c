#include "holberton.h"

/**
 * _puuts - print a string, follow by new line to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
