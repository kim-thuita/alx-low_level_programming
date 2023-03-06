#include "main.h"

/**
 *_memcpy - copies memory data
 *@dest: bytes of memory that will be moved
 *@src: source of the bytes
 *@n: value to be compared to
 *Return: value that was copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (a = 0; a < n; a++)
	{
		cdest[a] = csrc[a];
	}

	return (dest);
}
