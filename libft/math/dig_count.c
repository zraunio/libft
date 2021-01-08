/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dig_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:58:51 by zraunio           #+#    #+#             */
/*   Updated: 2021/01/07 12:23:52 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digit(unsigned long int nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}
