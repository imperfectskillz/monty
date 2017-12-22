#include "monty.h"

/**
 *swap_stack- swaps top two elements
 *@stack: double head
 *@line_number: line number
 *Return: none
 */

void swap_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = malloc(sizeof(stack_t));
	(void) line_number;

	temp->n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp->n;
}
