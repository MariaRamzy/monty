#include "monty.h"

/**
 * stack - converts a queue to a stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	(void)line_number;
}


/**
 * queue - converts a stack to a queue
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = QUEUE;
	(void)line_number;
}
