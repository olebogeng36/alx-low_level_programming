#include <stdio.h>
#include "main.h"

/**
 * _memset - fiils the memory block with a constant byte
 * @s: address to memory block
 *
 * @b: char to be used
 * @n: number of byte to be used
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
