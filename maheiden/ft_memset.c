#include "libft.h"

void 	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *symb;

	symb = b;
	i = 0;
	while(i < len)
	{
		symb[i] = (unsigned char)c;
 		i++;
	}
	return (b);
}

/*
int main()
{
	char str[6] = "hello";
	printf("\nBefore memset(): %s\n", str);

	ft_memset(str,'n', 4);
	printf("After memset(): %s", str);
}
*/
