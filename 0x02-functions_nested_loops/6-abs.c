 #include "main.h"

/**
 *_abs - Serves as the point
 *
 *Description: Return the absolute value of an integer
 *
 *@a: integer value to check and return its sign
 *Return: 1, 0, or -1
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		(a *- 1);
	}

}
