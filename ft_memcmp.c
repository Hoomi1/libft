/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:04:37 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/10 19:53:27 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)buf1;
	str2 = (unsigned char *)buf2;
	while (*(str1 + i) == *(str2 + i) && count)
	{
		count--;
		i++;
	}
	if (count == 0)
		return (0);
	else
	{
		return (*(str1 + i) - *(str2 + i));
	}
}
