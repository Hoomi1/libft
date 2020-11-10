/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:35:50 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/10 17:46:21 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *array, int c, size_t n)
{
	const char	*arr;
	size_t		i;

	arr = array;
	i = 0;
	while (i < n)
	{
		if (arr[i] == (char)c)
			return ((void *)array + i);
		i++;
	}
	return (NULL);
}
