/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:37:45 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:38:01 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend_char(char *source, char c)
{
	char	*char_to_append;

	if (!(char_to_append = malloc(2 * sizeof(char)))) // changer assignement
		return (0);
	char_to_append[0] = c;
	char_to_append[1] = 0;
	return (ft_strappend_str(source, char_to_append));
}
