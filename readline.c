#include "shell.h"

/**
 * read_line - function that uses getline() to accept user input
 *
 * Return: line from user passed from stdin
 */

char *read_line(void)
{
	char *line;
	size_t length;

	length = 0;
	line = NULL;
	signal(SIGINT, SIG_DFL);
	if (getline(&line, &length, stdin) == -1)
	{
		perror("Error reading line\n");
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
