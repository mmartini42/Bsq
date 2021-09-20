/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/20 20:03:47 by mathmart         ###   ########.fr       */
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
