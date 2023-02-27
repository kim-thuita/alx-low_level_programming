#include "main.h"

/**
 *_puts- function that prints a string
 *
 @str:pointer - char array
 *
 *Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);

		str = str + 1;
	}
}
