#include "main.h"
/**
 *_memset - fill memory with a constant byte
 *@n:bytes to be filled
 *@s:memory to be filled
 *@b:constant byte to fill
 *
 *Return: memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
