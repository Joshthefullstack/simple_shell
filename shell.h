#ifndef SHELL_H
#define SHELL_H

/* Preprocessor commands */
#include <stdio.h> /* printf, getline */
#include <stdlib.h> /* malloc, free, getenv */
#include <unistd.h>/* write, sleep */
#include <sys/types.h>
#include <string.h>
#include <signal.h>
#define COMMAND_BUF_SIZE 100

#define clear() printf("\033[H\033[J")


/**
 * struct list - linked list for environmental variables
 * @var: holds environmental variable string
 * @next: points to next node
 */
typedef struct list
{
	char *var;
	struct list *next;
} env_node, * env_ptr;

/* function prototypes */
void printPrompt(char *str, char **env);
int handle_tokens(char ** tokens);
char **getTokens(char *str);
int getString(char *str);
env_ptr createEnvLinkedList(char **env);
env_ptr add_end_node(env_ptr *head, char *str);
char *add_history(char *str);
char *up_history(char *str);
char *down_history(char *str);
void non_interactive(char **env);

/* Helper Functions*/
char * _strdup(char *str);
char getche(void);
char getch(void);



#endif