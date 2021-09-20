/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:35:14 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:37:33 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	open_file(t_file *file)
{
	if (file->fd == 0)
		return (1);
	if ((file->fd = open(file->file_path, O_RDONLY)) == -1) //changer cette ligne
		return (0);
	return (1);
}
