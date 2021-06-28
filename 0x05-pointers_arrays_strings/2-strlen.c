#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to returns its length
 * Return: length
 */

int _strlen(char *s)
{
	int lent = 0;

	while(*s != '\0')
	{
		lent++;
		*s++;
	}

	return (lent);
}
