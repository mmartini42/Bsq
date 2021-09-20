/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:50 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/20 20:05:31 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H

# include "libft.h"

/*
** Get the len of a str. Add 1 to get the len with '\0'
** /STR/FT_STRLEN.C
*/

int		ft_strlen(char *str);

/*
**	Copy characters from src to dest (always null terminated)
**	/STR/FT_STRCPY.C
*/

char	*ft_strcpy(char *dest, char *src);

/*
**	Copy n characters from src to dest (always null terminated)
**	/STR/FT_STRNCPY.C
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*
**	Append a str with another str
**	/STR/FT_STRAPPEND_STR.C
*/

char	*ft_strappend_str(char *source, char *to_append);

/*
**	Append a str with a char
**	/STR/FT_STRAPPEND_CHAR.C
*/

char	*ft_strappend_char(char *source, char c);

/*
**	Compare two strings
**	/STR/FT_STRCMP.C
*/

int		ft_strcmp(char *s1, char *s2);

/*
**	Compare two strings from 0 to n characters
**	/STR/FT_STRNCMP.C
*/

int		ft_strncmp(char *s1, char *s2, unsigned int n);

#endif
