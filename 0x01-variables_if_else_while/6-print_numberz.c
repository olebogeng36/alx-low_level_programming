#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the output of putchar
 *
 * Description: main function
 * print the program "putchar from 0 to base 10
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
