#include "monty.h"
globales_t globalvar = {NULL, NULL, NULL, 0}

/**
 * main - monty code interpreter
 * @argc: number of argument
 * @argv: monty file
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	char *line_buf;
	FILE *fd;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int number = 0;

	if (argc != 2)
	{
		printf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], "r");
	bus.fd = fd;
	if (!fd)
	{
		printf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		line_buf = NULL;
		read_line = getline(&line_buf, &size, fd);
		bus.line_buf = line_buf;
		number++;
		if (read_line > 0)
		{
			execute(line_buf, &stack, number, fd);
		}
		free(line_buf);
	}
	free_stack(stack);
	close(fd);
	
	return (0);
}
