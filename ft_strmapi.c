#include "libft.h"

char *ft_strmapi(char const *s, char(*f)(unsigned int, char)){	char *str;	int i;	size_t l;	i = 0;	//l = (char *)ft_strlen(s);	if (!s)		return (NULL);	if (!(str = (char *)malloc(sizeof(char) * ((char *)ft_strlen(s) + 1))))		return (NULL);	while (str[i])	{		str[i] = f(i, *s);		s++;		i++;	}	str[i] = '\0';	return (str);}