#include "shell.h"

/**
 * _strdup - alloc for a copy of a string
 * @strg: the string
 * Return: the new string allocated with malloc
 */
char	*_strdup(char *strg)
{
	char	*new;
	int	i;
	i = 0;
	if (!strg)
		return (NULL);
	new = malloc((_strlen(strg) + 1) * sizeof(char));
	while (strg[i])
	{
		new[i] = strg[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
