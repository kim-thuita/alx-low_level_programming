#include "main.h"
/**
 * rev_string - Entry Point
 *
 * Description: replace a string with its reverse
 * @str: string - char array
 *
 * Return: void
 */

void rev_string(char *s)
{

	char *r_ptr = str;

	while (*(r_ptr + 1) != '\0')
		r_ptr++;

	while (r_ptr > str)
	{
		char tmp = *r_ptr;
		*r_ptr-- = *str;
		*str++ = tmp
	}
}
