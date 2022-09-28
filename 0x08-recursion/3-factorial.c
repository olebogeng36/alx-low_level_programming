#include <stdio.h>
#include "main.h"

/**
 * factorial - return the given number
 * @n: given number
 * Return: o if n is less than zero
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
