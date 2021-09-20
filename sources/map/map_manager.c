/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:41:51 by lfilloux          #+#    #+#             */
/*   Updated: 2021/09/20 19:42:02 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	free_map(t_map *map, int height)
{
	int	y;

	y = 0;
	while (y < height)
	{
		free(map->map[y]);
		y++;
	}
	free(map->map);
	return (1);
}

int	free_all_map(t_map *map)
{
	return (free_map(map, map->height));
}
