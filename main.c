#include "monty.h"

char *second_token;
/**
 *main - this is the file that launches and runs monty. opens, reads, tokenizes
 * then executes
 *@argc: number of arguments
 *@argv: arguments
 *Return: nothing
 */

int main(int argc, char *argv[])
{
	FILE *fp;
	char *file_line = NULL;
	char *token;
	size_t size = 0;
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&file_line, &size, fp) != -1)
	{
		token = strtok(file_line, "\n\t ");
	
		second_token = strtok(NULL, "\n\t ");
		if (token != NULL)
		{
			get_func(token, &stack, line_number);
		}
		line_number++;
	}
	clear(stack);
	fclose(fp);
	exit(EXIT_SUCCESS);
}
