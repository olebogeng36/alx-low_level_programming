#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swap the value of two integer
 * @a: this is the first entry
 * @b: this is the second entry
 * return nothing
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	a* = *b;
	*b = changed;
}
