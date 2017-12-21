#include "monty.h"

/**
 *push_extended- continues push by manipulating nodes
 *@stack: double head stack
 *@n: content of node
 *Return: nothing
 */

void push_extended(stack_t **stack, int n)
{
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = *stack;
		new->n = n;
	}
	if (*stack != NULL)
	{
		new->prev = NULL;
		new->next = *stack;
		new->n = n;
		*stack->prev = new;
	}
	*stack = new;
}
