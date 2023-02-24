#include "main.h"

/**
  *_isdigit(int c);
  *@c:number that should be checked
  *Return:Either return (0) or (1) according to the number entered
  */
int _isdigit(int c)
{
	if (c => 48 && <= 57)
		return (1);
	else
		return (0);
}
