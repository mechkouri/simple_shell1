#include "shell.h"

/**
 * fd_putstr - put a string in a STD (1, 2 , 3 , ...)
 * @strg: the string 
 * @fid: the file descriptor
 */

void	fd_putstr(char *stg, int fid)
{
	int	i;
	i = 0;
	while (strg[i])
		write(fid, &strg[i++], 1);
}
