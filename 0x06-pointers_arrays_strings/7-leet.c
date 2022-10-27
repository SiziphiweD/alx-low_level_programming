#include "main.h"

/**
 * leet - encodes a string to a 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
	int i, l;
	char sl[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[i] == sl[l])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
