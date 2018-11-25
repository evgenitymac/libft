#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char symb;
	
	symb = (unsigned char)c;
	if (ft_isalpha(symb) || (ft_isdigit(symb)) != 0)
		return (1);
	return (0);
}
