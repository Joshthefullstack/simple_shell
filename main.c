#include "shell.h"


/**
 * main - simple shell program
 * Return: 0
 */
int main(void)
{
	char *cmdLine;
	cmd_t command;

	while (1)
	{
		printPrompt();
		if (strcpy((cmdLine = read_line()), "\n") == 0)
			continue;
		command = parse_command(cmdLine);
		handle_command(command, cmdLine);
	// 	if (strcmp(cmdLine, "exit") == 0)
	// 	{
	// 		if (argv[1])
	// 		{
	// 			status = atoi(argv[1]);
	// 			free(argv);
	// 			free(cmdLine);
	// 			exit(status);
	// 		}
	// 		free(cmdLine);
	// 		free(argv);
	// 		exit(EXIT_SUCCESS);
	// 	}
	// 	if (strcmp(cmdLine, "env") == 0)
	// 	{
	// 		_print_env();
	// 	}

	// 	execute_cmd(argv, cmdLine);

	}
	free(cmdLine);
	free(command.argv);
	return (0);
}
