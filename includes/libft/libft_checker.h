/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:36 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/20 20:03:38 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECKER_H
# define LIBFT_CHECKER_H

# include "libft.h"

/*
**	Check if c is a space
**	/CHECKER/IS_SPACE.C
*/

int		is_space(char c);

/*
**	Check if c is a whitespace
**	/CHECKER/IS_WHITESPACE.C
*/

int		is_whitespace(char c);

/*
**	Check if c is numeric
**	/CHECKER/IS_NUMERIC.C
*/

int		is_numeric(char c);

/*
**	Check if c is uppercase
**	/CHECKER/IS_UPPERCASE.C
*/

int		is_uppercase(char c);

/*
**	Check if c is lowercase
**	/CHECKER/IS_LOWERCASE.C
*/

int		is_lowercase(char c);

/*
**	Check if c is alpha
**	/CHECKER/IS_ALPHA.C
*/

int		is_alpha(char c);

/*
**	Check if c is alpha
**	/CHECKER/IS_ALPHANUMERIC.C
*/

int		is_alphanumeric(char c);

/*
**	Check if c is printable
**	/CHECKER/IS_PRINTABLE.C
*/

int		is_printable(char c);

#endif
