/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:12:29 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/10 19:09:55 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (char)c)
			return ((void *)dest + i + 1);
		i++;
	}
	return (NULL);
}
