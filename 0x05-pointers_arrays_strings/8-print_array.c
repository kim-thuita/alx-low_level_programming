#include "main.h"
#include <stdio.h>

/**
 *print_array - Entry point
 *
 *Description:prints n number of elements in the array
 *
 *@n:number of elments to be printed
 *
 *@a:act as a checker
 *
 *Return:void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}

