/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:45:52 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:50:19 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	validate_row(t_file *file, t_map *map, int line_size)
{
	int	x;

	x = 0;
	while (x < line_size)
	{
		if (file->line[x] != map->void_char)
			if (file->line[x] != map->barrier_char)
				return (0);
		x++;
	}
	return (1);
}

int	*create_row(t_file *file, t_map *map, int y, int line_size)
{
	int	*row;
	int	x;

	if (!validate_row(file, map, line_size))
		return (0);
	if (!(row = malloc(line_size * sizeof(int)))) // change line
		return (0);
	x = 0;
	while (x < line_size)
	{
		if (file->line[x] == map->void_char)
			row[x] = 1;
		else if (file->line[x] == map->barrier_char)
			row[x] = 0;
		else
			row[x] = -1;
		x++;
	}
	map->map[y] = row;
	return (row);
}

int	set_map(t_file *file, t_map *map)
{
	int	y;
	int	line_size;

	y = 0;
	while (next_line(file))
	{
		if (y == 0)
			line_size = ft_strlen(file->line) - 1;
		if (y >= map->height)
			return (0);
		if (ft_strlen(file->line) - 1 != line_size)
			if (free_map(map, y))
				return (0);
		if (!create_row(file, map, y, line_size))
			return (0);
		y++;
		if (file->fd == 0 && y == map->height)
			break ;
	}
	if (y < map->height)
		return (0);
	map->width = line_size;
	return (1);
}

int	parse_map(t_file *file, t_map *map)
{
	open_file(file);
	if (!next_line(file))
		return (0);
	if (!set_map_height(map, file->line) || !set_map_chars(map, file->line))
		return (0);
	if (!(map->map = malloc(map->height * sizeof(int *)))) // change line
		return (0);
	if (!set_map(file, map))
		return (0);
	close_file(file);
	return (1);
}
