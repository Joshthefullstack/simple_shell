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
	sleep(1);
}


/**
 * main - simple shell program
 * Return: 0
 */
int main(void)
{
	/* env_ptr env; */
	size_t bufsize = COMMAND_BUF_SIZE;
	char *cmdLine = NULL;

	init_myShell();
	/* env = createEnvLinkedList(envr); */
	while (1)
	{
		/* int childPid; */
		printPrompt();
		getline(&cmdLine, &bufsize, stdin);
		
	}
	/* free_linked_list(env); */
	free(cmdLine);
	return (0);
}
