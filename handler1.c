#include "monty.h"

/**
 * push - Add node to the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void push(stack_t **stack, unsigned int line_number)
{

	int n = 0;

	if (globalvar.token2 == NULL)
	{
		free_dlistint(*stack);
		stderr_int(line_number);
	}
	if (!_isdigit() || stack == NULL)
	{
		free_dlistint(*stack);
		stderr_int(line_number);
	}
	n = atoi(globalvar.token2);
	if (*stack  == NULL)
	{
		create_node_stackfirst(stack, n);
	}
	else
	{
		create_node_stackend(stack, n);
	}
}

/**
 * pall - Print the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void pall(stack_t **stack, unsigned int line_number)
{

	stack_t *temp = NULL;


	if (*stack == NULL)
	{
		return;
	}
	if (*stack == NULL && line_number != 1)
	{
		free_dlistint(*stack);
		free_globalvars();
		exit(EXIT_SUCCESS);
	}
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	while (temp->prev != NULL)
	{
		printf("%d", temp->n);
		temp = temp->prev;
		printf("\n");
	}
	printf("%d\n", temp->n);
}


/**
 * pint - Print the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void pint(stack_t **stack, unsigned int line_number)
{

	stack_t *temp = NULL;

	if (stack == NULL || *stack == NULL)
	{
		pint_e(line_number);
		return;
	}
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;

	printf("%d", temp->n);
	printf("\n");
}

/**
 * pop - Add node to the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (stack == NULL)
	{
		free_dlistint(*stack);
		pop_e(line_number); }
	if (*stack == NULL)
	{
		free_dlistint(*stack);
		pop_e(line_number); }
	temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		flag = 1;
	}
	temp2 = *stack;
	while (j < (i - 1))
	{
		temp2 = temp2->next;
		j++;
	}
	if (i == 0 && flag == 0)
	{

		free(*stack);
		*stack = NULL;
		return;
	}
	else
	{
		temp2->next = NULL;
		free(temp);
		temp = NULL;
		return;
	}
}

/**
 * swap - Print the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int i, j;

	if (*stack == NULL || stack == NULL)
		op_e(line_number, "swap");

	temp = (*stack)->next;
	if ((*stack)->next == NULL)
		op_e(line_number, "swap");
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	i = temp->n;
	j = temp->prev->n;
	temp->n = j;
	temp->prev->n = i;
}
