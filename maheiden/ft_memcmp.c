#include "libft.h"


int memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char str1 = (unsigned char *)s1;
	unsigned char str2 = (unsigned char *)s2;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return 0;
}