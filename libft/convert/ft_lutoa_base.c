/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lutoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:24:23 by zraunio           #+#    #+#             */
/*   Updated: 2021/01/07 12:23:26 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_base(unsigned long int nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char		*ft_lutoa_base(unsigned long int nb, unsigned long int base)
{
	int					i;
	char				*res;
	unsigned long int	tmp;

	i = 0;
	tmp = nb;
	while (tmp >= base)
		tmp = tmp / base;
	i = dig_count_base(nb, base);
	res = ft_strnew(i);
	res[i + 1] = '\0';
	while (i >= 0)
	{
		tmp = nb % base;
		res[i] = ft_base(tmp);
		nb = nb / base;
		i--;
	}
	return (res);
}
