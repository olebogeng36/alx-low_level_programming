#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
		
	if( n > 5 ) 
	{
	printf("the string %d and is greater than 5\n", n, l);
	}

	else if( n == 0 ) 
	{
	printf("the string %d and is 0\n", n, l);
	}

	else 
	{
	printf("the string %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
