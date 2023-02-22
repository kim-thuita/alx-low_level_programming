#include <stdio.h>

/**
*main- Entry point
*
*Return: 0 (success)
*/
int main(void)
{
	int a;
	int x;

	for (a = 0; a < 1024; a++)
	{

		if ((a % 3 == 0) && (a % 5 == 0))
				x += a;
	}
	printf("%d\n", );
	return(0);
}
