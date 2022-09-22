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
	int dest_len = strlen(dest);

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[dest_len + m] = src[m];
		dest[dest_len + m] = '\0';

	return (dest);
}
