/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:24:46 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/25 01:07:22 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*large;
	char	*small;
	size_t	i;

	large = (char *)haystack;
	small = (char *)needle;
	i = 0;
	if (ft_strlen(small) == 0)
		return (large);
	if (ft_strlen(small) > ft_strlen(large))
		return (NULL);
	while (large[i])
	{
		if (ft_strncmp(small, &large[i], len) == 0)
			return (&large[i]);
		i++;
	}
	return (NULL);
}
