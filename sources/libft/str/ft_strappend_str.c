/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:38:21 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 20:00:38 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend_str(char *source, char *to_append)
{
	char	*append;
	int		append_size;

	append_size = ft_strlen(source) + ft_strlen(to_append) + 1;
	append = malloc(append_size * sizeof(char));
	if (!append)
		return (0);
	ft_strcpy(append, source);
	ft_strcpy(&append[ft_strlen(source)], to_append);
	free(source);
	free(to_append);
	return (append);
}
