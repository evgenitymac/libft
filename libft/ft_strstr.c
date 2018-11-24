/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:55:08 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/24 23:45:57 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*large;
	char	*small;
	size_t	i;

	large = (char *)haystack;
	small = (char *)needle;
	i = 0;
	if (ft_strlen(small) == 0)
		return (large);
	while (large[i])
	{
		if (ft_strcmp(small, &large[i]) == 0)
			return (&large[i]);
		i++;
	}
	return (NULL);
}
