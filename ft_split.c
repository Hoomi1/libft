#include "libft.h"


int		ft_ler(const char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			j++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (j);
}

size_t		ft_wordlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char		**ft_deletefree(char **s, int i)
{
	while (i > 0)
		free(s[i--]);
	free(s);
	return (NULL);
}
char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	q;
	char **str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (ft_ler(s, c) + 1))))
		return (NULL);
	while ((q = 0) || s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			while (!(str[j] = (char *)malloc(sizeof(char)
				* (ft_wordlen(s + i, c) + 1))))
				return (ft_deletefree(str, j));
			while (s[i] != '\0' && s[i] != c)
				str[j][q++] = s[i++];
			str[j++][q] = 0;
		}
	}
	str[j] = 0;
	return (str);
}