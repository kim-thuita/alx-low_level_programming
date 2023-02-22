#include <stdio.h>

/**
  *print_to_98 - Entry point
  *
  *Description - printing n number u to 98
  *
  *@n: unkown number
  *
  *Return: void
  */
void print_to_98(int n)
{
	int a;

	if (n < 98)
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
			{
				printf("%d\n", a);
			}
			else
			{
				printf("%d, ", a);
			}
		}
	else
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
				printf("%d\n", a);
			else
				printf("%d, ", a);
		}
}
