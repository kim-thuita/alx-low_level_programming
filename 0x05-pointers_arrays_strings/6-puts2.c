#include "main.h"

/**
 *puts2 - Entry point
 *
 *Description: prints a string skip one
 *@str: string - char array
 *
 *Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		if (i % 2 == 0)
			_putchar(str[i++]);
		else
			i++;
	_putchar('\n');
}
