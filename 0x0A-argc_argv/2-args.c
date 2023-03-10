#include "main.h"
#include <stdio.h>

/**
 *main - prints all arguements it receives
 *@argc: arguemented counter
 *@argv: list of what is pinted
 *Return: 1
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
