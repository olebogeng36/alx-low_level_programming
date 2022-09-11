#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print  is the althabet is upper and lower case
 *
 * description: using main funtion
 * this "program should print the results
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
