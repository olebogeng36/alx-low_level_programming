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
	var_list ap;

	var_start(ap, n);

	unsigned int i;
	unsigned int sum = 0;

	for (i = 0; i < n; i++)
		if (n == 0)
		{
			return (0);
		}
	sum += var_arg(ap, unsigned int);

	var_end(ap);
	return (sum);
}
