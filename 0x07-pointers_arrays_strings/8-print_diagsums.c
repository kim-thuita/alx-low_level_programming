#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print the sum of the two diagonals
 *of a square matrix of ints
 *@a: 2d array of int types
 *@size: size of the array(square)
 *
 *Return:void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p;

	int I, r;

	i = 0;

	r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		I += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", I, r);
}
