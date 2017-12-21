#include "monty.h"

/**
 *main - this is the file that launches and runs monty. opens, reads, tokenizes
 * then executes
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	FILE *fp;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}

