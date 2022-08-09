#include "shell.h"


/**
 * init_myShell - Shows intro to shell
 * 
 * Return: void
 */
void init_myShell()
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
	while (i < 3)
	{
		printf(".");
		fflush(stdout);
		sleep(1);
		i++;
	}

	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bLogged in as %s\n\n", getenv("USER"));
	printf("\n*************************************************************");
	printf("\n\n");
	sleep(1);
}


/**
 * main - psimple shell program to print hello world.
 * argc: number of argument
 * argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv, char **env)
{
	(void)argc;
	(void)argv;
	int command_line_no = 0, exit_stat = 0, init = 0;
	char *buffer;

	buffer = malloc(COMMAND_BUF_SIZE * sizeof(char));
	if (buffer == NULL)
		return (1);
	while(1)
	{
		command_line_no++;
		if(isatty(STDIN_FILENO))
		{
			if (init == 0)
			{
				init_myShell();
				init = 1;
			}
			printPrompt(buffer, env);
		}
		else
			non_interactive(env);
		printf("hello world\n");
	}
	return (0);
}
