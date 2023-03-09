#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of number
 *@n: int number
 *Return: no natural square root, return -1, return natural
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 *help - helper function to solve _sqrt_recursion
 *@c: numbe to determine the square root
 *@i: incremental to compare against 'c'
 *Return: square root if natural sqaure root, or -1 if none found
 */

int help(int c, int i)
{
	int square;

	square = i * i;

	if (square == c)
	{
		return (i);
	}
	else if (square < c)
	{
		return (help(c, i + 1));
	}
	else
	{
		return (-1);
	}
}
