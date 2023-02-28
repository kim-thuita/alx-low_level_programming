#include "main.h"
/**
 *rev_string: Entry point to reverse a atring
 *Descriptio: Reverse a string
 *@s: number to be checked
 *
 *Description: Using pointers to reverse a string
 *
 *Return:void
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
