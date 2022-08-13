#ifndef SHELL_H
#define SHELL_H

/* Preprocessor commands */
#include <stdio.h>     /* printf, getline */
#include <stdlib.h>    /* malloc, free, getenv */
#include <unistd.h>    /* write, sleep */
#include <sys/types.h>
#include <string.h>    /* strcpy */
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h> /* pid_t */
#include <ctype.h>
#define COMMAND_BUF_SIZE 100
#define clear() printf("\033[H\033[J")
#define DELIMITER "\n\t\r "
#define EXIT_FAILURE    1       /* Failing exit status.  */
#define EXIT_SUCCESS    0       /* Successful exit status.  */

extern char **environ;

typedef struct command
{
	char **argv;
	size_t argc;
} cmd_t; 

/* function prototypes */
void printPrompt(void);
char *read_line(void);
cmd_t parse_command(char *str);
int handle_command(cmd_t command, char *command_buf);

char *build_path(char *token, char *value);
#endif