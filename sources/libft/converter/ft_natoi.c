/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_natoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:32:41 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:32:46 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_natoi(char *str, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;
	int				is_negative;

	i = 0;
	result = 0;
	is_negative = 1;
	while (str[i] && is_whitespace(str[i]) && i < n)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+') && i < n)
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9' && i < n)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)result * is_negative);
}
