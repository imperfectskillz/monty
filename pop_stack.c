#include "monty.h"

/**
 *pop_stack- removes top element
 *@stack: double head
 *@line_number: line numb
 *Return: nothing
 */

void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	*stack = temp->next;
	free(temp);
}
