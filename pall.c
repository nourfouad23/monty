#include "monty.h"
/**
*pall - print stack
*@line_number: parameter
*@stack: param
*/

void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
stack_t *currentNode = *stack;

if (stack == NULL || *stack == NULL)
return;

while (currentNode != NULL)
{
printf("%d\n", currentNode->n);
currentNode = currentNode->next;
}
}
