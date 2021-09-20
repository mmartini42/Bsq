
#include "libft.h"

int		is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || is_space(c));
}
