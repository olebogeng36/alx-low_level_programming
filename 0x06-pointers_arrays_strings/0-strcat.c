#include <stdio.h>
#include "main.h"

/**
 *strcat - conncatenate two strings
 *@c: The character to print
 *
 *Return: *dust
 */

char *_strcat(char *dest, char *src)
{
	*dest = "hello";
	*src = "world";

	strcat(*dest, *src);
	_putchar(*dest);

	return (*dest);
}
