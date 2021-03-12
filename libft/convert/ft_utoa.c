/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:42:50 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/04 14:29:18 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_utoa(unsigned long int n)
{
	char		*res;
	int			len;

	len = ft_count_digit(n);
	if (!(res = ft_strnew(len)))
		return (NULL);
	if (n == 0)
		res[0] = '0';
	while (n != 0 && len >= 0)
	{
		res[len-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
