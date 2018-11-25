#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char symb;

	symb = (unsigned char)c;
	if (symb >= '0' && symb <= '9')
		return (1);
	return (0);
}
