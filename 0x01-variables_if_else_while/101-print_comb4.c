#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all different combination of three digit
 *
 * Description: main function
 * print the "Numbers as expected
 * Return: 0
 */

int main(void)
{
	int i, k, m;

	for (i = '0'; i < '8'; i++)
	{
		for (k = '1'; k <= '8'; k++)
		{
			for (m = '2'; m <= '9'; m++)
			{
				if (i != k && i != m && k != m && k != i && m != i && m != k)
				{
					putchar(i);
					putchar(k);
					putchar(m);
					if (i == '7' && k == '8' && m == '9')
						continue;
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
