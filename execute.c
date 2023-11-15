#include "monty.h"

/**
 * execute - executes
 * @content: line content
 * @stack: head liked list
 * @counter: line counter
 * @file: pointer
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t = {
			{"push", push}, {"pall", pall},
			{"pint", pint},
			{"pop", pop},
			{"swap", swap},
			{"add", add},
			{"nop", nop},
			{"sub", sub},
			{"div", div},
			{"mul", mul},
			{"mod", mod},
			{"pchar", pchar},
			{"pstr", pstr},
			{"rotl", rotl},
			{"rotr", rotr},
			{"stack", stack},
			{"queue", queue},
			{NULL, NULL}
			};
}
