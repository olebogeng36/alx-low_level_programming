#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - copy two values
 * @dest: description
 * @src: source
 * @n: values
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
