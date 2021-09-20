/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:50:30 by lduplain          #+#    #+#             */
/*   Updated: 2020/09/28 23:21:43 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

# include "libft.h"

typedef struct	s_file
{
	int		fd;
	char	*file_path;
	char	*line;
}				t_file;

/*
**	Open a t_file
**	./FILE/OPEN.C
*/

int				open_file(t_file *file);

/*
**	Get a next line of a file
**	./FILE/READER.C
*/

int				next_line(t_file *file);

/*
**	Close a t_file, free the contained line
**	./FILE/CLOSE.C
*/

int				close_file(t_file *file);

#endif
