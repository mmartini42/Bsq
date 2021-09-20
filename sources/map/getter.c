/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:40:42 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:40:57 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_value(t_map *map, int y, int x)
{
	if (x < 0 || y < 0)
		return (0);
	return (map->map[y][x]);
}

int	get_top_value(t_map *map, int y, int x)
{
	if (y - 1 < 0)
		return (0);
	return (get_value(map, y - 1, x));
}

int	get_left_value(t_map *map, int y, int x)
{
	if (x - 1 < 0)
		return (0);
	return (get_value(map, y, x - 1));
}

int	get_top_left_value(t_map *map, int y, int x)
{
	if (y - 1 < 0 || x - 1 < 0)
		return (0);
	return (get_value(map, y - 1, x - 1));
}
