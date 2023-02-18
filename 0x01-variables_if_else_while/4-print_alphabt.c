#include <stdio.h>

/*if we may include other headers */

/**
*main- Entry point
*
Return:0 (success)
*/
int main(void)
{

	char n;

	for (n = 'a'; n <= 'z'; n++)

	{
		if (n == 'e' || n == 'q')

			continue;

		putchar(n);
	}
	putchar('\n');

	return (0);
}

