/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:57:47 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/18 23:19:59 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	size_t	f;
	char	*str2;

	l = 0;
	if (!s1 || !set)
		return (NULL);
	f = ft_strlen(s1);
	while (ft_strchr(set, s1[l]))
		l++;
	if (l == f)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[f]))
		f--;
	str2 = ft_substr(s1, l, f - l + 1);
	return (str2);
}
