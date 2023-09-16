#include "shell.h"

/**
 * _substr : function that cut a string from start to end (index)
 * @strg: the string
 * @st: the starting index
 * @lc: the last char at index (e)
 * Return: the substring pointer
 */

char	*_substr(char *strg, int st, int lc)
{
	char	*res;
	int	size;
	int	i;

	i = 0;
	if (!strg)
		return (NULL);
	if (st >= lc)
		return (_strdup(""));
	size = lc - st + 2;
	res = malloc(size * sizeof(char));
	while (st <= lc)
	{
		res[i++] = strg[st++];
	}
	res[i] = '\0';
	return (res);
}
