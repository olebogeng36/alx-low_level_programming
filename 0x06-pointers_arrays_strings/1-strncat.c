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
	strncat(dest, src, n);
	return (dest);
}
