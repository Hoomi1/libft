/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:04:00 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/09 18:33:23 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t number, size_t size)
{
	char	*s;
	size_t	sum;

	sum = number * size;
	s = (char *)malloc(sum);
	if (!s)
		return (NULL);
	ft_bzero(s, sum);
	return (s);
}
