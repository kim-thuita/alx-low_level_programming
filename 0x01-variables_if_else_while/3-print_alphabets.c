#include <stdio.h>
#include <ctype.h>
/*more headers go here */

/**
*main - Entry point
*
*Return:0 (show success)
*/
int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
		putchar(toupper(i));
		putchar('\n');
	}
	return (0);
}

