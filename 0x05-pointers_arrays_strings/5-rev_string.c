#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
