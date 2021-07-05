#include "holberton.h

/**
 * _memset - fills number of  memory with a constant byte
 @s: memory pointer
 @b: constant value to be filled
 @n: number of byte to be filled
 Return: memory pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
