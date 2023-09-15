#include "shell.h"

/**
 * _strjoin - join two string
 * @str1: the firt string
 * @str2: the second string
 * Return: the joing string
 */

char	*_strjoin(char *str1, char *str2)
{
	char	*new;
	int	i;
	int	j;

	i = 0;
	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (_strdup(str2));
	if (!str2)
		return (_strdup(str1));
	new = malloc(_strlen(str1) + _strlen(str2) + 1);
	j = 0;
	while (str1[i])
	{
		new[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i])
	{
		new[j] = str2[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
