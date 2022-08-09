#include "shell.h"


/**
 * ctrl_c - ignore Ctrl-C input
 * @n: int from signal
 */
void ctrl_c(int n)
{
	(void)n;
}


void printPrompt(char *buffer, char **en)
{
	(void)en;
    // env_ptr env;
	size_t i = 0, bufsize = COMMAND_BUF_SIZE;
	char *pwd = getenv("PWD");

	printf("%s@%s:%s", getenv("USER"), getenv("NAME"), pwd);
	printf("$ ");
	(signal(SIGINT, ctrl_c));

	if (getch() == '\033') { // if the first value is esc
    getch(); // skip the [
    switch(getch()) { // the real value
        case 'A':
            // code for arrow up
            break;
        case 'B':
            // code for arrow down
            break;
    }
}
	i = getline(&buffer, &bufsize, STDIN_FILENO);
	if (i == 0) /* handles Ctrl+D */
	{
		free(buffer); /* exit with newline if in shell */
		if (isatty(STDIN_FILENO))/* ctrl+d prints newline */
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
}