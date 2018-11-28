/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:41:58 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/28 13:42:03 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*mal_str;
	unsigned int	i;

	mal_str = ft_strdup(s);
	i = 0;
	while (s[i] && f)
	{
		mal_str[i] = f(s[i]);
		i++;
	}
	return (mal_str);
}
