#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 *
 * description: using the main function
 * This program prints the alphabet
 * return 0 success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
