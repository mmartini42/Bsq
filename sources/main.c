/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:23:46 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:24:42 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	ft_err_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	execute(t_file *file, t_map *map, char *file_path, int fd)
{
	file->file_path = file_path;
	file->fd = fd;
	if (!parse_map(file, map))
	{
		return (0);
	}
	solve(map);
	print_result(map);
	free_all_map(map);
	return (1);
}

int	main(int argc, char **argv)
{
	t_file	file;
	t_map	map;
	int		i;

	if (argc == 1)
	{
		execute(&file, &map, 0, 0);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		execute(&file, &map, argv[i], -2);
		if (i < argc - 1)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
