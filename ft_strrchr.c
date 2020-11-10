/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:05:26 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/10 20:39:26 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	int l;

	l = ft_strlen((char *)str);
	while (str[l])
	{
		if (str[l] == ch)
		{
			return ((char *)str + l);
		}
		l--;
	}
	if (str[l] == ch)
	{
		return ((char *)str + l);
	}
	return (NULL);
}
