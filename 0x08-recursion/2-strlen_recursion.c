#include "main.h"

/**
 *_strlen_recursion - returns length of a string
 *
 *@s:string
 *
 *Return: legth of the string
 */

int _strlen_recursion(char *s)
{

	int a = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		a = 1 + _strlen_recursion(s + 1);
	}

	return (a);
}
