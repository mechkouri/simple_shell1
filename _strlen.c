#include "shell.h"

/**
 * _strlen : function that calc the length of a string
 * @strg: the stirng
 * Return: the length of string
 */

int	_strlen(char *strg)
{
	int	j;
	j = 0;
	while (strg[j])
		j++;
	return (j);
}
