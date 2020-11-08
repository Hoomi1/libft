/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:12:29 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/06 20:22:15 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	while (n)
	{
		d[i] = s[i];
		if (d[i] == (char)c)
			return (dest + i);
		i++;
		n--;
	}
	return (dest);
}
