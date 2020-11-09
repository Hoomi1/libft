/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:04:37 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/09 17:04:40 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = buf1;
	str2 = buf2;
	while ((*str1 == *str2) && *str1 && count)
	{
		str1++;
		str2++;
		count--;
	}
	if (count == 0)
		return (0);
	else
	{
		return (*str1 - *str2);
	}
}
