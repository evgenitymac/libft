#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = malloc(size * sizeof(str))))
		return (0);
	ft_memset(str, 0 , size);
	return (str);
}
