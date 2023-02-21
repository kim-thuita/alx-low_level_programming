#include <stdio.h>
/* Inclusion of header files */

/**
*main- ENRTY  Point
*
*Return:0 (success)
*/
int  main(void)
{
	int i;

	char c;

	char a[]  = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		c = a[i];

		putchar(c);

	}
	putchar('\n');
	return (0);

}

