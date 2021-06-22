#include "holberton.h"

/**
 * _islower - checks for lowercase charater
 * c: character to checks
 * Return: 1 if c is lowercase
 * Return: 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
