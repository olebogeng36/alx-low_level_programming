#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count argument
 * @argv: agrgumets
 * main return: success
 * Return: 'main'
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
