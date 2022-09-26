#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate a charecter in a string
 * @s: string to check
 * @c: charecter to check for
 *
 * Return: pointer to spot in with c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
