#include "header.h"

int		free_map(t_map *map, int height)
{
	int y;

	y = 0;
	while (y < height)
	{
		free(map->map[y]);
		y++;
	}
	free(map->map);
	return (1);
}

int		free_all_map(t_map *map)
{
	return (free_map(map, map->height));
}
