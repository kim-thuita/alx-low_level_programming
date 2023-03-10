#include "main.h"
#include <stdio.h>

/**
 *main-prints number of args
 *@argc: arguement count
 *@argv: arguement vector
 *prints number of arguements passed to it
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return(0);
}

