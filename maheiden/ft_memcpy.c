#include "libft.h"
#include <stdlib.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *char_src = (unsigned char*)src;
	unsigned char *char_dst = (unsigned char*)dst;
	size_t i;

	i = 0;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);

}

/*
int main()
{
	char a[6] = "hello";
	char b[6];

	ft_memcpy(a, b, 1);
	printf("%s", b);

	return (0);
}
*/
