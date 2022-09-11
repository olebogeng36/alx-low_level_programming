#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all posible combination of a single number
 *
 * Description: main funtion
 * print the results "Numbers in asending order
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
