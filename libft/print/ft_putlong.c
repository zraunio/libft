/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:21:27 by zraunio           #+#    #+#             */
/*   Updated: 2021/02/05 14:27:10 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putlong(long int nb)
{
	long long int	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		if (nb == -9223372036854775807 - 1)
			i = 9223372036854775807;
		else
			i *= -1;
	}
	if (i > 9)
	{
		ft_putlong(i / 10);
		ft_putlong(i % 10);
	}
	else
		ft_putchar(i + '0');
}
