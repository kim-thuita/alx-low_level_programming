#include "main.h"

/**
*is_upper - main function
*
*Description - We are supposed tocheck for the letter c if its uppercase
*
*Return: (1) if success (0) otherwise
*/
int _isupper(int c)
{
	if ( c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
