#include "monty.h"

/**
 *add_stack - sum of two n
 *@stack: double head
 *@line_number: line numb
 *Return: none
 */

void add_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
