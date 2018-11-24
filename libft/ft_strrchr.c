/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:44:30 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/24 19:55:10 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	first;
	size_t	last;
	char	*str;

	first = 0;
	last = ft_strlen(s);
	str = (char *)s;
	while (last > first)
	{
		if (str[last] == c)
			return (&str[last]);
		last--;
	}
	return (NULL);
}
