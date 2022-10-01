#include <stdio.h>

/**
 * Main function - prints the number of arguments passed into it
 * @argc: count argument
 * @argv: agrgumets
 * main return: success
 * Return: 'main'
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		int results = strtol(argv[i], NULL, 10);
		printf("%d\n", results);
	}
	return (0);
}
