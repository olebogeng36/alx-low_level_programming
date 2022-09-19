#include <stdio.h>
#include "main.h"

/**
 * swap values of integers
 * Description: main function
 *
 * return nothing
 */

void swap_int(int *a, int *b);

int main(void)
{
	/* local variable definition */
	int a = 98;
	int b = 42;

	swap(&a, &b);
	putchar(a);
	putchar('\n');
	putchar(b);
	putchar('\n');

	return (0);
}
