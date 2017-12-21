#include "monty.h"

/**
 *clear - frees nodes
 *@stack: stack
 */


void clear(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
