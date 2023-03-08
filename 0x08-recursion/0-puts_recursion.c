#include "main.h"
/**
 *_puts_recursion - Entry point to the function
 *
 *@s:string to be printted out
 *Description: should print a new line at the end
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
