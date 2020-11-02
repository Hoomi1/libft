/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:43:57 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/02 19:29:33 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		strlcpy(char *dst, const char *src, size_t size)
{
	int i;

	i = 0;
	if (dst == '\0' || src == '\0')
		return (0);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] == '\0';
	return (ft_strlen(src));
}
