#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - copy a string
 * @dest: description
 * @src: source
 * @n: amount of bytes from src
 * Return: the pointer to dust
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	for ( ; m < n; m++)
	{
		dust[m] = '\0';
	}
	return (dest);
}
