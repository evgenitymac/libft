/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:55:08 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/26 18:54:47 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[k] == haystack[i] && needle[k])
		{
			i++;
			k++;
		}
		if (needle[k] == '\0')
			return ((char *)&haystack[i - k]);
		k = 0;
		i++;
	}
	return (0);
}
