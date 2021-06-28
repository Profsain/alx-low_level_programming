#include "holberton.h"

/**
 * _strlength - returns the length of a string
 * @s: string pass in
 * Return: length
 */

int _strlength(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - Reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlength(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
