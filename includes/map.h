
#ifndef MAP_H
# define MAP_H

typedef struct	s_map
{
	int		height;
	int		width;

	int		sol_x;
	int		sol_y;
	int		sol_size;

	char	void_char;
	char	barrier_char;
	char	filler_char;

	int		**map;
}				t_map;

#endif
