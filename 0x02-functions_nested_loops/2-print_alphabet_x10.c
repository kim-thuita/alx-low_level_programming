#include "main.h"
/**
*print_alphabet_x10- check the code.
*
*Return:0 (success)
*/
void print_alphabet_x10(void)
{
	int a;
	char c;

	for (a = 0; a <= 10; a++)

		for (c = 'a'; c <= 'z'; c++)

			_putchar(c);
			_putchar('\n');
}
