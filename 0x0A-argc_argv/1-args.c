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
	int results = 1;

	for (i = 0; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		results = x;
		printf("%d", results);
	}
	return (0);
}
