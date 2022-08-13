#include "shell.h"

/**
 * parse_command - parses a line on the command line into arguments
 *
 * @str: string to be parsed
 * @len: length of string
 * @argn: pointer to no of arguments
 * Return: array of strings
 */
cmd_t parse_command(char *str)
{
	cmd_t command;
	char *token;
	size_t i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i - 1] == ' ')
			str[i] = str[i + 1];
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n')
			i++;
	}

	if ((command.argv = malloc(sizeof(char*) * i)) == NULL)
		exit(1);
	token = strtok(str, DELIMITER);
	i = 0;
	while (token != NULL)
	{
		command.argv[i] = token;
		token = strtok(NULL, DELIMITER);
		i++;
	}
	command.argc = i;
	return (command);
}