/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:35:05 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:36:01 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	close_file(t_file *file)
{
	if (file->line != 0)
	{
		free(file->line);
		file->line = 0;
	}
	if (file->fd <= 0)
		return (0);
	close(file->fd);
	return (1);
}
