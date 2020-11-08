/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:12:48 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/06 17:12:50 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s;
	char		*d;
	size_t		i;

	i = 0;
	s = src;
	d = dest;
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
