/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:31:21 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/02 19:54:04 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dest;
	size_t	serc;

	i = 0;
	dest = ft_strlen(dest);
	serc = ft_strlen(serc);
	if (!src)
		return (dest);
	while (i < size - dest - 1 && src[i])
	{
		
	}

}
