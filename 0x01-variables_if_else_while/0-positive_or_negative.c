#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - entry point
*
*Return:0 (success)
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("\"is positive");
	else if (n == 0)
		printf("\"is zero");
	else
		printf("\"is negative");
	return (0);
}
