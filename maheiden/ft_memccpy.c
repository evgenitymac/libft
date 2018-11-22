#include "libft.h"


void  *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *char_dst = (unsigned char *)dst;
	const unsigned char *char_src = (unsigned char *)src;
	size_t i;

	i = 0;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		if (char_dst[i] == (unsigned char)c)
		   		return  (dst + i);

		i++;
	}
	return (0);
}
/*
int main()
{
	char a[6] = "hello";
	char b[] = "ihwegwegwegwwgeßc4";
	ft_memccpy(b, a, 'e', 4);
	//memccpy(b, a,'z',4);
	printf("%s", b);
	return (0);
}
*/
