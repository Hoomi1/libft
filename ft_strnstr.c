/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:09:33 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/06 19:21:58 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	src;

	src = ft_strlen(little);
	if (src == 0)
		return ((char *)big);
	if (len < src)
		return (NULL);
	while (*big != '\0' && len >= src)
	{
		if (ft_strncmp(big, little, src) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
