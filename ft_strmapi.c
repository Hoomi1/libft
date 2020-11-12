/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:44:54 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/12 16:44:54 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s);
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, *s);
		s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
