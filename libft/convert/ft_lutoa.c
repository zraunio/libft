/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lutoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:02:52 by zraunio           #+#    #+#             */
/*   Updated: 2021/02/05 14:43:15 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_lutoa(unsigned long int nb)
{
	char	*res;
	int		len;

	len = ft_count_digit(nb);
	if (!(res = ft_strnew(len)))
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	while (nb != 0 && len >= 0)
	{
		res[len-- - 1] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
