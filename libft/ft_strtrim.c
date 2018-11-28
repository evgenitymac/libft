/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:39:25 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/28 20:45:42 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t 	end;
	size_t	i;
	char	*str;

	start = 0;
	end = ft_strlen(s);
	i = 0;

	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end++;
	if (!(str = ft_strnew(start - end)))
		return (NULL);
	while (start < end)
	{
		str[i] = str[start];
		i++;
		start++;
	}
	return (str);
}

