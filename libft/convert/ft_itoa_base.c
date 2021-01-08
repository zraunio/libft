/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:32:28 by zraunio           #+#    #+#             */
/*   Updated: 2021/01/07 10:58:10 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_base(int nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char			*ft_itoa_base(unsigned long int nb, unsigned long int base)
{
	int						i;
	int						flg;
	char					*res;
	unsigned long int		tmp;

	i = 0;
	tmp = nb;
	flg = 0;
	while (tmp >= base)
		tmp = tmp / base;
	i = dig_count_base(nb, base);
	if (nb < 0)
		flg = 1;
	if (!(res = ft_strnew(i)))
		return (NULL);
	res[i] = '\0';
	while (i >= flg)
	{
		tmp = nb % base;
		res[i] = ft_base(tmp);
		nb = nb / base;
		i--;
	}
	return (res);
}
