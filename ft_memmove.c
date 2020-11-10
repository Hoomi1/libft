/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:57:16 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/10 18:18:29 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *destination, const void *source, size_t n)
{
	char *src;
	char *dest;

	src = (char *)source;
	dest = (char *)destination;
	if (!destination && !source)
		return (NULL);
	if (src > dest)
		while (n--)
		{
			*dest = *src;
			dest++;
			src++;
		}
	else
	{
		src = (char *)source + (n - 1);
		dest = (char *)destination + (n - 1);
		while (n--)
		{
			*dest-- = *src--;
		}
	}
	return (destination);
}
