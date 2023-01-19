#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type strin
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointer by `dest`
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
