#include "shell.h"

/**
 * _strdup - duplicates string into newly allocated space
 * @str: String to duplicate
 * Return: pointer to duplicated syring in allocated memory
 */
char * _strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL) /* validate string input */
		return (NULL);

	while (*(str + len))
		len++; /* gets length */
	len++; /* add null terminator to length */

	duplicate = malloc(len * sizeof(char)); /*allocate memory */
	if (duplicate == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate + i) = *(str + i);
		i++;
	}

	return (duplicate);
}