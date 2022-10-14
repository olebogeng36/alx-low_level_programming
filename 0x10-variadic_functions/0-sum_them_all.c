#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameter
 * @var_list: results
 * @var_start: results
 * @var_end: return sum
 * if n == 0 return 0
 * Return sum_them_alum_them_all;
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list ap;
	unsigned int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
	sum += va_arg (ap, unsigned int);
	}

	var_end (ap);
	return (sum);
}
