#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if the alphabet is lower except q and e
 *
 * Description: main funtion
 * this program prints "Alphabet
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
