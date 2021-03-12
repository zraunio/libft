/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dig_count_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:56:14 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/05 11:54:56 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		dig_count_base(long long int nb, long int base)
{
	size_t	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		if (base == 16)
			return (7);
		else if (base == 8)
			return (9);
	}
	while (nb >= base)
	{
		i++;
		nb = nb / base;
	}
	return (i);
}
