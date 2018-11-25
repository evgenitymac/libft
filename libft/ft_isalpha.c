#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char symb;

	symb = (unsigned char)c;	
	if ((symb >= 'A' && symb <= 'Z') || (symb >= 'a' && symb <= 'z'))
		return (1);
	return (0);
}
