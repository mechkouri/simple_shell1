#include "shell.h"

/**
 * _strstr : function that search for a string in a big string
 * @strg: the string where to search
 * @sn: the string needed
 */

char	*_strstr(char *strg, char *sn)
{
	int	i;
	int	j;
	int	temp;
	i = 0;
	while (strg && strg[i])
	{
		j = 0;
		if (strg[i] == sn[j])
		{
			temp = i;
			while (strg[i] && (sn[j] == strg[i]))
			{
				j++;
				i++;
			}
			if (j == _strlen(sn))
				return (strg + temp);
			i = temp;
		}
		i++;
	}
	return (NULL);
}
