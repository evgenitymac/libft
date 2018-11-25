/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 20:15:04 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/25 20:15:32 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	unsigned char symb;

	symb = (unsigned char)c;
	if (ft_isalpha(symb) || (ft_isdigit(symb)) != 0)
		return (1);
	return (0);
}
