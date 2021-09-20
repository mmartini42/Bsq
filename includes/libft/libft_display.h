/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:40 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/20 20:04:22 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_H
# define LIBFT_DISPLAY_H

# include "libft.h"

/*
**	Display a char
**	/DISPLAY/FT_PUTCHAR.C
*/

void	ft_putchar(char c);

/*
**	Display a char followed by a new line
**	/DISPLAY/FT_PUTCHARLN.C
*/

void	ft_putcharln(char c);

/*
**	Display a null terminated str
**	/DISPLAY/FT_PUTSTR.C
*/

void	ft_putstr(char *str);

/*
**	Display a null terminated str followed by a new line
**	/DISPLAY/FT_PUTSTRLN.C
*/

void	ft_putstrln(char *str);

/*
**	Display an int
**	/DISPLAY/FT_PUTNBR.C
*/

void	ft_putnbr(int nb);

/*
**	Display an int followed by a new line
**	/DISPLAY/FT_PUTNBRLN.C
*/

void	ft_putnbrln(int nb);

#endif
