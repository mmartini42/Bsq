
#include "libft.h"

char	*ft_strappend_str(char *source, char *to_append)
{
	char	*append;
	int		append_size;

	append_size = ft_strlen(source) + ft_strlen(to_append) + 1;
	if (!(append = malloc(append_size * sizeof(char))))
		return (0);
	ft_strcpy(append, source);
	ft_strcpy(&append[ft_strlen(source)], to_append);
	free(source);
	free(to_append);
	return (append);
}
