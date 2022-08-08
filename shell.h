#ifndef SHELL_H
#define SHELL_H

/* Preprocessor commands */
#include <stdio.h> /* printf, getline */
#include <stdlib.h> /* malloc, free, getenv */
#include <unistd.h>/* write, sleep */
#include <sys/types.h>
#include <string.h>

#define clear() printf("\033[H\033[J")

/* function prototypes */
void printPrompt();
int handle_tokens(char ** tokens);
char **getTokens(char *str);
int getString(char *str);

#endif