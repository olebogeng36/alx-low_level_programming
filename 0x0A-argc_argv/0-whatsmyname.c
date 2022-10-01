#include <stdio.h>

/**
 * function main - main function
 * @argc: count arguments
 * @argv: argumets
 * Return main
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
