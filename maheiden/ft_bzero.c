#include "libft.h"


void 	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str = (unsigned char *)s;

	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			str[i] = 0;
			i++;
		}
	}
}

/*
int main()
{
	char str[6] = "hello";
	// 0 by '0'
	printf("\nBefore bzero(): %s\n", str);
	ft_bzero(str, 3);
	//ft_bzero(str, 3);
	printf("After bzero(): %s", str);
}
*/
