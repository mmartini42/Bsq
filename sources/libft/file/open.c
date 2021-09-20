
#include "libft.h"

int		open_file(t_file *file)
{
	if (file->fd == 0)
		return (1);
	if ((file->fd = open(file->file_path, O_RDONLY)) == -1)
		return (0);
	return (1);
}
