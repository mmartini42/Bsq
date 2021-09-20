/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:33:53 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:34:40 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	val;

	val = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		val = nb * -1;
	}
	if ((val / 10) > 0)
		ft_putnbr(val / 10);
	ft_putchar(val % 10 + 48);
}
