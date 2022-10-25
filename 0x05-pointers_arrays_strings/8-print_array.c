#include "main.h"
#include <stdio.h>

/**
 * print _array - print `n` elements of an array of integers
 * @a: int type aray pointer
 * @n: int type integer
 * Description: Numbers must be seperated by comma and space.
 * Numbers should be displayed in the same order as an array
 * you can only use
 * -putchar to print.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
