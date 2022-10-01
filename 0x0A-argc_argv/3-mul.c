#include <stdio.h>
#include <stdlib.h>

/**
 * Function main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument
 *
 * Return: 'main'
 */
int main(int argc, char *argv[])
{
	int i;
	int results = 1;
	

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		results = results * x;
		printf("%d\n", results);
	}
	return (0);
}
