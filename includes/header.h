/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:28:09 by lduplain          #+#    #+#             */
/*   Updated: 2020/09/29 16:15:48 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft.h"
# include "map.h"

/*
**	Solve BSQ map
**	./MAP/SOLVER.C
*/

void	solve(t_map *map);

/*
**	Free map contained by t_map from 0 to height
**	./MAP/MAP_MANAGER.C
*/

int		free_map(t_map *map, int height);

/*
**	Free map contained by t_map from 0 to t_map height
**	./MAP/MAP_MANAGER.C
*/

int		free_all_map(t_map *map);

/*
**	Display a t_map
**	./MAP/PRINT_MAP.C
*/

void	print_map_structure(t_map *map);

/*
**	Display a map contained in t_map
**	./MAP/PRINT_MAP.C
*/

void	print_map(t_map *map);

/*
**	Display the result of the NSQ
**	./MAP/PRINT_MAP.C
*/

void	print_result(t_map *map);

/*
**	Complete t_map structure by BSQ map file
**	./MAP/PARSER/PARSER.C
*/

int		parse_map(t_file *file, t_map *map);

/*
**	Get the height of map in the first line of a BSQ map
**	./MAP/PARSER/DATAS/MAP_DATAS.C
*/

int		set_map_height(t_map *map, char *map_datas);

/*
**	Get the chars components in the first line of a BSQ map
**	./MAP/PARSER/DATAS/MAP_DATAS.C
*/

int		set_map_chars(t_map *map, char *map_datas);

/*
**	Get the value at x and y in the map
**	./MAP/GETTER.C
*/

int		get_value(t_map *map, int y, int x);

/*
**	Get the value at x and y - 1 in the map
**	./MAP/GETTER.C
*/

int		get_top_value(t_map *map, int y, int x);

/*
**	Get the value at x - 1 and y in the map
**	./MAP/GETTER.C
*/

int		get_left_value(t_map *map, int y, int x);

/*
**	Get the value at x - 1 and y - 1 in the map
**	./MAP/GETTER.C
*/

int		get_top_left_value(t_map *map, int y, int x);

#endif
