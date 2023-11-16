#include "monty.h"
#include <string.h>

/**
*push - new node
*@stack: param
*@line_number: param
*/

void push(stack_t **stack, char *n, unsigned int line_number)
{
	stack_t *newNode = NULL;
	int i;

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (n == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; n[i]; i++)
	{
		if (n[0] == '-' && i == 0)
			continue;
		if (n[i] < 48 || n[i] > 57)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	newNode->n = atoi(n);
	newNode->prev = NULL;
	newNode->next = NULL;
	if (*stack != NULL)
	{
		newNode->next = *stack;
		(*stack)->prev = newNode;
	}
	*stack = newNode;
}
