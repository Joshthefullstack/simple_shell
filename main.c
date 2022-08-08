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
int main(int argc, char *[argv])
{
	init_myShell();
	while
	{
		printf("hello world\n");
		return (0);
	}
}
