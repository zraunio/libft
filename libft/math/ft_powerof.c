/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powerof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:56:10 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/12 15:05:36 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long long int		ft_powerof(long int nb, unsigned int p)
{
	long long int	tmp;

	tmp = nb;
	if (p == 0)
		return (1);
	while (--p)
		tmp *= nb;
	return (tmp);
}
