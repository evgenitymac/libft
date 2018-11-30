/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:02:30 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/30 21:56:07 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int 	count;
	int		cache;
	char	*str;
	int		i;

	cache = n;
	count = ft_need_for_int_to_str(n);
	i = 0;
	if (!(str = ft_strnew(count)))
		return (NULL);
	while (count - 1)
	{
		str[i] = '0' + cache / 10 * count;
		cache = cache % count * 10;
		count--;
	}
	return (str);
}

int main()
{
	ft_itoa(1245);
	return (0);
}
