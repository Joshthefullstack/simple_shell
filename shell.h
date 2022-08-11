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
#define COMMAND_BUF_SIZE 100
#define clear() printf("\033[H\033[J")
#define DELIMITER "\n\t\r\a "
#define EXIT_FAILURE    1       /* Failing exit status.  */
#define EXIT_SUCCESS    0       /* Successful exit status.  */

extern char **environ;

/* function prototypes */
void printPrompt(void);
int getString(char *str);
char *read_line(void);
char **tokenizer(char *str);
int execute_cmd(char **argv, char *cmdLine);
int _print_env(void);
int get_path(char **tokens);

char *build_path(char *token, char *value);
#endif