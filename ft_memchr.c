/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:35:50 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/09 19:35:53 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *array, int c, size_t n)
{
	const char	*arr;
	int			i;

	arr = array;
	i = 0;
	while (i < n)
	{
		if (arr[i] == (char)c)
			return (array + i);
		i++;
	}
	return (NULL);
}
