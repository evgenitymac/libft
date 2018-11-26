/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:24:46 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/26 18:54:40 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;
	size_t cache_len;

	i = 0;
	k = 0;
	cache_len = len;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[k] == haystack[i] && needle[k] && i - k < cache_len)
		{
			i++;
			k++;
			cache_len--;
		}
		if (needle[k] == '\0')
			return ((char *)&haystack[i - k]);
		k = 0;
		i++;
		cache_len = len;
	}
	return (0);
}
