#include <stdio.h>
/*if we may include other headers */

/**
*main -Entry point
*
*/
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if(c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
