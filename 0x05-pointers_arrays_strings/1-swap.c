#include "holbertone.h"
#include <stdio.h>

/**
 * void swap_int(int *a, int *b) - Swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap with
 */

void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
