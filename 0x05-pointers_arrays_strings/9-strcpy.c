#include "main.h"
#include <stdio.h>

/**
 *_strcpy - Entry point
 *
 *Description: Prints elemnts of array
 *
 *@dest: array of ints
 *@src: member to stop at
 *
 *Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	if (dest == NULL)
		return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (p);
}
