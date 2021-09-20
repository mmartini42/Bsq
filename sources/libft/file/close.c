
#include "libft.h"

int		close_file(t_file *file)
{
	if (file->line != 0)
	{
		free(file->line);
		file->line = 0;
	}
	if (file->fd <= 0)
		return (0);
	close(file->fd);
	return (1);
}
