#include "libft.h"
#include <stdio.h>

void  *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char*)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

//otricatelnie chisla ogranichit'?

/*
int main(void)
{
    char str[] = "ABCDEFG";
    char *ps = ft_memchr(str,'D',7);
    if (ps != NULL)
       printf ("search character found:  %s\n", ps);
    else
       printf ("search character not found\n");

    return 0;
}
*/
