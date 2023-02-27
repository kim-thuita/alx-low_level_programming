#include "main.h"

/**
 *swap_int -  swapping values of two integer
 *
 *Description - function is going to swap values
 *
 *@a: first value
 *@b: second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;

}


