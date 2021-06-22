#include "holberton.h"

/**
 * print_sign - prints the sign of a number n
 * @n: character to checks
 * Return: 1 if n is greater then 1, 0 if n is equal to 0 and -1 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
