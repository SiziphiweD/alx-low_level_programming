#include "main.h"

/**
 * print_line - print into straight line using '_'
 * @n: of '_' to be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
