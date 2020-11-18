/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:57:47 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/18 17:34:00 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_first(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static	int		ft_last(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len]) == 0)
			break ;
		len--;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		f;
	char	*str2;

	if (s1 == NULL)
		return (NULL);
	f = ft_first(s1, set);
	l = ft_last(s1, set);
	if (f >= l)
		return (ft_strdup(""));
	str2 = ft_substr(s1, f, l - f + 1);
	return (str2);
}
