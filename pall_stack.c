#include "monty.h"

/**
 *pall_stack - prints all items in stack
 *@stack: double head to stack
 *@line_number: file line number
 *Return: none
 */

void pall_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
