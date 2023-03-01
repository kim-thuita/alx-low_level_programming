#include "main.h"

/**
 *_strcat - Entry point
 *
 *Description: concatinate 2 strings
 *@s1: first string
 *@s2: second string
 *
 *Return: void
 */


char *strcat(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (dest[a] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
