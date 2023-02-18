#include <stdio.h>

/**
*main- Entry point
*
*Return: 0 (success)
*/
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			if ((char)a != '8' || (char)b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
