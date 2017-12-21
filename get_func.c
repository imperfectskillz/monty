#include "monty.h"

/**
 *get_func - runs selected function
 *@token: tokenized operation to run
 *@stack: double pointer
 *@line_number: line number of monty file
 */

void get_func(char *function, stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t func[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stack},
		{"nop", nop_stack},
		{NULL, NULL}
	};

	while (func[i].opcode != NULL)
	{
		if (strcmp(function, func[i].opcode) == 0)
		{
			func[i].f(stack, line_number);
		}
	}

	printf("L%d: unknown instruction %s\n", line_number, function);
	exit(EXIT_FAILURE);
}
