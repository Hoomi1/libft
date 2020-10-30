/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:05:26 by cyuuki            #+#    #+#             */
/*   Updated: 2020/10/30 19:04:32 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	int l;

	l = ft_strlen(str);
	while (l--)
	{
		if (str[l] == ch)
		{
			return (str + l);
		}
	}
	return (NULL);
}
