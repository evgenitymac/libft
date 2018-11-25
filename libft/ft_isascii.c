#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127) || (c >= 140 && c <= 177))
		return (1);
	return (0);
}
