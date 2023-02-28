#include "main.h"
/**
 *puts_half - Entry point
 *
 *Description: print second half of the string
 *
 *@str: number to be used
 *
 */
void puts_half(char *str)
{

	unsigned int len, n;

	len = 0;

	/*Extracting the length of string*/

	while (str[len] != '\0')
		len++;

	/* Print the second half*/

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (str[n] != '\0')
		_putchar(str[n++]);
	_putchar('\n');
}
