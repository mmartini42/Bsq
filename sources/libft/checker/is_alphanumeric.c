
#include "libft.h"

int		is_alphanumeric(char c)
{
	return (is_numeric(c) || is_alpha(c));
}
