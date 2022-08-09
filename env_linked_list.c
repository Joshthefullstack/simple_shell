#include "shell.h"

/**
 * createEnvLinkedList - creates linked lists from
 * environmental variables
 * @env: environmental variables
 * Return: linked list
 */
env_ptr createEnvLinkedList(char **env)
{
	env_ptr head;
	int i = 0;

	head = NULL;
	while(env[i] != NULL)
	{
		add_end_node(&head, env[i]);
		i++;
	}
	return (head);
}

/**
 * add_end_node - add node to end of linked list
 * @head: pointer to head of linked list
 * @str: data to new node
 * Return: pointer to new linked list
 */
env_ptr add_end_node(env_ptr *head, char *str)
{
	env_ptr new;
	env_ptr holder;

	if (head == NULL || str == NULL)
		return (NULL); /* checks if address of head is null */
	new = malloc(sizeof(env_node));
	if (new == NULL)
		return (NULL);

	new->var = _strdup(str);
	new->next = NULL;

	holder = *head;
	if (holder != NULL)
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}