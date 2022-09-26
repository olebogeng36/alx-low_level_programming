#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of byte to be copied
 * Return: poiner to the memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
