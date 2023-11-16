#include "monty.h"

/**
*pint - top data
*@stack: param
*@line_number: param
*/

void pint(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
if (stack == NULL || *stack == NULL)
{
printf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
