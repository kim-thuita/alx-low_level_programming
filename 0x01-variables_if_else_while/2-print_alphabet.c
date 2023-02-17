#include <stdio.h>
/*other headers go here */

/**
*main - Enrty point
*
*Return:0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
