/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:49:27 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/16 18:16:54 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		if (n < 0)
			n *= -1;
		n = n / 10;
		i++;
	}
	return (i);
}

int		ft_equals(int c)
{
	if (c > 0)
		return (1);
	else
		return (2);
}

char	*ft_itoa(int n)
{
	size_t				l;
	char				*str;
	long int			number;

	number = n;
	l = (ft_equals(n) + ft_check(number));
	if (!(str = (char *)ft_calloc(l, 1)))
		return (NULL);
	if (number == 0)
		*str = '0';
	if (number < 0)
	{
		*str = '-';
		number *= -1;
	}
	while (number)
	{
		l--;
		str[l - 1] = (number % 10) + 48;
		number = number / 10;
	}
	l = ft_equals(n) + ft_check(n);
	str[l - 1] = '\0';
	return (str);
}
