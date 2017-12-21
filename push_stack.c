#include "monty.h"

/**
 *push_stack- push number to stack
 *@stack: double pt stack
 *@line_number: line numb in file
 */

void push_stack(stack_t **stack, unsigned int line_number)
{
	char *second_token;
	int i = 0;
	int n;

	second_token = strtok(NULL, "\n \t \r");
	if (second_token == NULL || temp == NULL)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (second_token[i] != '\0')
	{
		if (!isdigit(second_token[i]))
		{
			printf("L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	n = atoi(second_token);
	push_extended(stack, n);
}
