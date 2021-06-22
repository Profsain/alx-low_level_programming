#include "holberton.h"

/**
 * _abs - to computes the absolute value of an integer
 * @int: integer to checks
 * Return: the absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
