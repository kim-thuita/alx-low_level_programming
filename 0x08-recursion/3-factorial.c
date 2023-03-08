#include "main.h"

/**
 *factorial - factorial of a number
 *
 *@n: the number
 *
 *Return: factorial of the number
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
