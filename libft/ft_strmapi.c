#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*mal_str;
	unsigned int	i;
	
	mal_str = ft_strdup(s);
	i = 0;
	while (s[i] && f)
	{
		mal_str[i] = f(i, s[i]);
		i++;
	}
	return (mal_str);
}
