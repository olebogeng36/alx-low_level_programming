#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument
 * Return: 'main'
 */

int main(int argc, char *argv[])
{
	int i;
	int results;

	for (i = 0; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		results = results + x;
	}
	printf("%d\n", results);
	return (0);
}
