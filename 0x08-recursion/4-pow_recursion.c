#include "main.h"

/**
 *_pow_recursion - Returns the value of x raised to y
 *
 *@x: value
 *
 *@y: power of the value
 *
 *Return: value of x raised to that of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 1)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
