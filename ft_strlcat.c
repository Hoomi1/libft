/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:31:21 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/10 17:52:02 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest;
	size_t	serc;

	i = 0;
	dest = ft_strlen(dst);
	serc = ft_strlen(src);
	if (!src)
		return (dest);
	if (dest >= size)
		return (serc + size);
	while (i < size - dest - 1 && src[i])
	{
		dst[i + dest] = src[i];
		i++;
	}
	dst[i + dest] = '\0';
	return (dest + serc);
}
