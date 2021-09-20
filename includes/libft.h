
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# include "libft/libft_str.h"
# include "libft/libft_display.h"
# include "libft/libft_checker.h"
# include "libft/libft_file.h"

/*
**	Convert a str to an int
**	/CONVERTER/FT_ATOI.C
*/

int	ft_atoi(char *str);

/*
**	Convert a str to an int from 0 to n characters
**	/CONVERTER/FT_ATOI.C
*/

int	ft_natoi(char *str, unsigned int n);

#endif
