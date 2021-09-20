/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:46:21 by lduplain          #+#    #+#             */
/*   Updated: 2020/09/29 14:36:46 by lduplain         ###   ########lyon.fr   */
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
