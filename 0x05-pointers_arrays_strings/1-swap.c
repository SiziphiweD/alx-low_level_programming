#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @s: pointer 1
 * @b: pointer 2
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
