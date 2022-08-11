#include "shell.h"


/**
 * init_myShell - Shows intro to shell
 *
 * Return: void
 */
void init_myShell(void)
{
	int i = 0;

	clear();
	printf("\n\n");
	printf("*************************************************************");
	printf("\n\n");
	printf("\t****** THIMEE'S SHELL ******");
	printf("\n\n");
	printf("\t A Simple implementation of shell");
	printf("\n\n");
	printf("\t\tlogging in.");
	fflush(stdout);
	sleep(1);
	while (i < 1)
	{
		printf(".");
		fflush(stdout);
		sleep(1);
		i++;
	}

	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bLogged in as %s\n\n", getenv("USER"));
	printf("\n*************************************************************");
	printf("\n\n");
	fflush(stdout);
}


/**
 * main - simple shell program
 * Return: 0
 */
int main(void)
{
	char *cmdLine;
	char **argv;
	int status;

	init_myShell();
	while (1)
	{
		printPrompt();
		cmdLine = read_line();
		argv = tokenizer(cmdLine);

		if (strcmp(cmdLine, "exit") == 0)
		{
			if (argv[1])
			{
				status = atoi(argv[1]);
				free(argv);
				free(cmdLine);
				exit(status);
			}
			free(cmdLine);
			free(argv);
			exit(EXIT_SUCCESS);
		}
		if (strcmp(cmdLine, "env") == 0)
		{
			_print_env();
		}

		execute_cmd(argv, cmdLine);

	}
	free(cmdLine);
	return (0);
}