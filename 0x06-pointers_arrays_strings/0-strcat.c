#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	*dest = "hello";
	*src = "world";

	strcat (*dest, *src);
	_putchar(*dest);

	return (*dest);
}
