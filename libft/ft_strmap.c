#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*mal_str;
	unsigned int	i;

	mal_str = ft_strdup(s);
	i = 0;
	while (s[i] && f)
	{
		mal_str[i] = f(s[i]);
		i++;
	}
	return (mal_str);
}
