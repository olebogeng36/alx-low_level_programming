#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverse content of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
