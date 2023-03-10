#include <stdio.h>

/**
 *prints number of arguements passed to it
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
}

