#include "shell.h"

/**
 * free_split - free an array that allocated with split
 * @arra: the array
 */

void	free_split(char **arra)
{
	int	i;
	i = 0;
	while (arra[i])
		free(arra[i++]);
	free(arra);
}
