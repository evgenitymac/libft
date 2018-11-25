/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 20:13:28 by maheiden          #+#    #+#             */
/*   Updated: 2018/11/25 20:43:45 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char symb;

	symb = (unsigned char)c;
	if ((symb >= 'A' && symb <= 'Z') || (symb >= 'a' && symb <= 'z'))
		return (1);
	return (0);
}