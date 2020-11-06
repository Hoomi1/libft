/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:57:16 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/06 20:52:22 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *destination, const void *source, size_t n)
{
	char *src;
	char *dest;

	src = (char *)source;
	dest = (char *)destination;
	if (!*src && !*dest)
		return (NULL);
	if (src > dest)
		while (n)
		{
			dest = src;
			dest++;
			src++;
			n--;
		}
	else
	{
		src = ft_strlen(source);
		dest = ft_strlen(destination);
		while (n--)
		{
			*dest-- = *src--;
		}
	}
}
