#include "shell.h"


/**
 * printPrompt - prompts user for input
 * 
 */
void printPrompt(void)
{
	char *pwd = getenv("PWD");
	char *ppwd = pwd;
	size_t home_length;

	while (*(ppwd++) != '\0')
		home_length++;

	if (strncmp(pwd, getenv("HOME"), home_length) == 0)
	{
		*ppwd = pwd[home_length + 1];
		pwd = "~";
		pwd = strcat(pwd, ppwd);
	}

	printf("%s@%s:%s", getenv("USER"), getenv("NAME"), pwd);
	printf("$ ");
}