/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizetoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:29:42 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/06 10:32:40 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_sizetoa(size_t nb)
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
