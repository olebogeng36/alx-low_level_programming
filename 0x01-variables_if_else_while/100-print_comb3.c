#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all posible combination of two digit
 *
 * Description: main function
 * print numbers "numbers must be separated by , and space
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = '0'; i <= '8'; i++)
	{
		for (k = '1'; k <= '9'; k++)
			if (i != k && i != k)
		{
			putchar(i);
			putchar(k);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
