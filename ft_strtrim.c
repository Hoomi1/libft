#include "libft.h"

int		ft_first(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int		ft_last(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len]) == 0)
			break;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		f;
	char	*str2;

	if (s1 == NULL)
		return (NULL);
	first = ft_first(s1, set);
	last = ft_last(s1, set);
	if (f >= l)
		return (ft_strdup(""));
	str2 = ft_substr(s1, f, l - f + 1);
	return (str2);
}