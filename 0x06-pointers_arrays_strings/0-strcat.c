#include <stdio.h>
#include "main.h"

/**
 *_strcat - copy two srings
 *@dest: description
 *@src: source
 *Return: value dust
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; i < src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
