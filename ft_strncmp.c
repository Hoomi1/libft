/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:25:44 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/06 18:53:50 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *string1, const char *string2, size_t num)
{
	while ((*string1 == *string2) && *string1 && num)
	{
		string1++;
		string2++;
		num--;
	}
	if (num == 0)
		return (0);
	else
	{
		return (*string1 - *string2);
	}
}
