#include "shell.h"


/**
 * printPrompt - prompts user for input
 *
 */
void printPrompt(void)
{
	char *pwd, *ppwd = NULL;
	size_t i, j, k;

	i = strlen(getenv("PWD"));
	j = strlen(getenv("HOME"));

	pwd = malloc(i * sizeof(char));
	if (pwd == NULL)
		exit(1);
	while (j < i)
	{
		pwd[j] = (getenv("PWD"))[j];
		j++;
	}

	if (strncmp(pwd, getenv("HOME"), j) == 0)
	{
		ppwd = malloc((i - j) * sizeof(char));
		if (ppwd == NULL)
			exit(1);
		for (k = 0; k < (i - j); k++)
		{
			ppwd[k] = pwd[j + 1];
		}
		pwd = realloc(pwd, 2);
		pwd = "~";
		printf("pwd is: %s\n and ppwd is: %s\n\n\n", pwd, ppwd);
		pwd = strcat(pwd, ppwd);
	}
	printf("%s@%s:%s", getenv("USER"), getenv("NAME"), pwd);
	printf("$ ");
	free(pwd);
	free(ppwd);
}