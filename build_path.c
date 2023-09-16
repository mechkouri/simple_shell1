#include "shell.h"

/**
 * loop_ev : loop throw env
 * @ev: the envirment
 * @cmd: the new cmd to execute
 * Return: the index of PATH in evn **
 */

int	loop_ev(char **ev, char **cmd)
{
	char	**check;
	int	cmp;
	int	i;

	i = 0;
	cmd += 0;
	while (ev[i])
	{
		check = _split(ev[i], '=');
		cmp = _strcmp(check[0], "PATH");
		if (cmp != 0)
			i++;
		else
		{
			*cmd = _strdup(check[1]);
			free_split(check);
			return (i);
		}
		free_split(check);
	}
	return (i);
}

/**
 * build_path : build the path of the cmd 
 * @pt: the pointer to the struct
 * @ev: the envirment vaiable
 */

int	build_path(t_shell *pt, char **ev)
{
	int	ret;
	char	*cmd;
	int	i;
	char	**path;
	char	*temp;

	i = 0;
	cmd = NULL;
	pt->args = _split(pt->line, ' ');
	if (!pt->args[0])
		return (404);
	ret = access(pt->args[0], F_OK);
	if (ret == 0)
	{
		free(pt->line);
		pt->line = _strdup(pt->args[0]);
		return (0);
	}
	i = loop_ev(ev, &cmd);
	if (ev[i] == NULL)
		return (-1);
	path = _split(cmd, ':');
	free(cmd);
	i = 0;
	temp = _strjoin("/", pt->args[0]);
	while (path[i])
	{
		free(pt->line);
		pt->line = _strjoin(path[i], temp);
		ret = access(pt->line, F_OK);
		if (ret == 0)
			return (free_split(path), free(temp), 0);
		i++;
	}
	return (free_split(path), free(temp), -1);
}
