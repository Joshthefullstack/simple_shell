#include "shell.h"




/**
 * isBuiltin - function to perform builtin functions 
 * 
 * @c: command 
 * @c_buf: command buffer 
 * Return: int 
 */
int isBuiltin(cmd_t c, char *c_buf)
{
	int i;

	if (c.argc == 1)
	{
		if (strncmp(c.argv[0], "exit", 4) == 0)
		{
			free(c_buf);
			free(c.argv);
			exit(0);
		}
		if (strncmp(c.argv[0], "getenv", 6) == 0)
		{
			for (i = 0; environ[i]; i++)
				printf("%s\n", environ[i]);
			return (1);
		}
	}
	else if (c.argc == 2)
	{
		if (strncmp(c.argv[0], "exit", 4) == 0 && (isdigit(c.argv[1])))
		{
			free(c_buf);
			i = atoi(c.argv[1]);
			free(c.argv);
			exit(i);
		}
	}
	return (0);
}



/**
 * handle_command - handles command
 *
 * @command: command structure
 * @envp: environmental variables
 * Return: Integer
 */
int handle_command(cmd_t command, char *command_buf)
{
	pid_t pid;
    int status;

    printf("%s\n", command.argv[0]);
	if (isBuiltin(command, command_buf))
		return(0);
    pid = fork();
    if (pid == -1)
    {
        perror("Error\n");
        return (1);
    }
    if (pid == 0)
    {
        if (execvp(command.argv[0], command.argv) == -1)
        {
            perror("Error executing command\n");
            free(command_buf);
            free(command.argv);
            exit(EXIT_FAILURE);
        }
    }
	wait(&status);
    printf("hello\n");
	return (0);
}