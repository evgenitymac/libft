/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:26:21 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/23 18:19:24 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*chr_dst;
	unsigned char	*chr_src;
	size_t			i;

	chr_dst = (unsigned char *)dst;
	chr_src = (unsigned char *)src;
	i = 0;
	if (chr_src > chr_dst)
	{
		ft_memcpy(dst,src,len);
	} 
	else if (chr_src < chr_dst)
		while (len--)
			chr_dst[len] = chr_src[len];
	return (dst);
}
