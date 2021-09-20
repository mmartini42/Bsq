/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:35:14 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:58:10 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	open_file(t_file *file)
{
	if (file->fd == 0)
		return (1);
	file->fd = open(file->file_path, O_RDONLY);
	if (file->fd == -1)
		return (0);
	return (1);
}
