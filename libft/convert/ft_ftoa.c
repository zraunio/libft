/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:51:29 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/06 19:55:12 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_decimal(char *res, long double d, size_t decimal)
{
	char		*rest;
	long double	f;

	d -= (long long)d;
	res = ft_strjoin_free(res, ".", 1);
	if (decimal >= 20)
		decimal = 19;
	while (decimal--)
	{
		d *= 10;
		if (decimal && (int)d == 0)
			res = ft_strjoin_free(res, "0", 1);
	}
	d = d > 0 ? d : -d;
	f = d - (long long)d;
	if ((f * 10) >= 5)
		d += 1;
	rest = ft_litoa((long long)d);
	res = ft_strjoin_free(res, rest, 3);
	return (res);
}

char		*ft_ftoa(long double d, size_t decimal)
{
	char		*res;
	long double	f;

	f = d - (long long)d;
	res = NULL;
	if (decimal == 0 && ft_long_abs((long long)(f * 10)) >= 5
	&& (long long)d % 2 != 0)
	{
		if (d < 0)
			d -= 1;
		else
			d += 1;
	}
	res = ft_litoa((long long)d);
	if (d == 0 && (f * 10) < 0)
		res = ft_strjoin_free("-", res, 2);
	if (decimal > 0)
		res = ft_decimal(res, d, decimal);
	return (res);
}
