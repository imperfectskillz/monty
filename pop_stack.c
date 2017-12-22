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

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = temp->next;
	free(temp);
}
