#include <stdio.h>
#include <stdlib.h>

/**
 * fuunction - 'main'
 * @argc: argument count
 * @argv: argument
 * Return: 'main'
 */

int main(int argc, char *argv[])
{
	int i;

	for (i  = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
