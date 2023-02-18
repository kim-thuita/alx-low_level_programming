#include <stdio.h>

/**
*main- Entry point
*
*Return: 0(success)
*/
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 59; a++)
	{
		for (b = 48 + 1; b <= 59; b++)
		{
			for (c = 48 + 1; c <= 59; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if ((char)a != '7' || (char)b != '8' || (char)c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
