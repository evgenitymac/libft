#include "libft.h"
#include <stdlib.h>


void  *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *char_dst = (unsigned char*)dst;
	unsigned char *char_src = (unsigned char*)src;
	unsigned char *buff;
	size_t i;

	i = 0;

	if (!(buff = (unsigned char*)malloc(sizeof(*char_src) * len)))
		return (NULL);

	while (i < len)
	{
		buff[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		char_dst[i] = buff[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
 	char a[] = "hello";
	char b[5];
	ft_memmove(b, a, 5);
	//memmove(b, a, 5);
	printf("%s\n", b);
	return (0);
}
*/
