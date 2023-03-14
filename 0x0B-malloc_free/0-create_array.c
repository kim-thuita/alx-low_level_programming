#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of chars, initialize it
 *
 *@size: size of array
 *
 *@c:specific char
 *
 *@c: specific char
 *Return: return according to decision
 */

char *create_array(unsigned int size, char c)
{

	char *a;

	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;

	return (a);
}

