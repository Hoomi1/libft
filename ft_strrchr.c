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
	char *res;
	int i;

	i = 0;
	l = ft_strlen((char *)str);
	while (i < l && str)
	{
		if (*(str + i) == (char)ch)
			res = (char *)(str + i);
		i++;
	}
	if (*(str + i) == (char)ch)
		res = (char *)(str + i);
	return (res);
}