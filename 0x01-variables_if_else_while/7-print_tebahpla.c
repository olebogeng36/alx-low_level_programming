#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the lowercase in reverse
 *
 * Description: main function
 * print the alphabet in reverse "from z to a
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
