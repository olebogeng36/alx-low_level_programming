#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _pow_recursion - return the value of x raised  to power y
 * @y: value to be powered
 * @x: value to be returned
 * Return: -1 if y value is less than 0
 */

int _pow_recursion(int x, int y)
{
	int lp;

	lp = pow(x, y);
	if (y < 0)
		return (-1);
	else
		return (lp);
}
