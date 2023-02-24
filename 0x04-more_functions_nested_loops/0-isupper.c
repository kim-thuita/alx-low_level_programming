#include "main.h"

/**
 * _isupper - checks if a char is upper case latter or not
 *
 * @c: character to check
 *
 * Return: 1 Success.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
