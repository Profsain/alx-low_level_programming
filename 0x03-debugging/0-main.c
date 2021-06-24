#include <stdio.h>
#include "holberton.h"
#include "main.c"

/**
 * main - tests function for correct ouptu when given a case of 0
 * Return: 0
 */

int main(void)
{
	assert positive_or_negative(0) == 0;

	return (0);
}
