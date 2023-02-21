#include "main.h"

/**
*_isalpha-checks for alphabetical character
*@c: the character to be checked
*Return: 1 if c is a leeter, 0otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z')));
}

