/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 10:19:23 by zraunio           #+#    #+#             */
/*   Updated: 2021/02/28 09:49:44 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static double	calc_float(const char *str, double res)
{
	int		i;

	i = 0;
	while (ft_isdigit(*str) == 1 && *str == '.')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	str++;
	if (*str == '\0')
		return (res);
	while (ft_isdigit(*str) == 1)
	{
		res = res * 10 + (*str - 48);
		str++;
		i++;
	}
	while (i)
	{
		res = res / 10;
		i--;
	}
	return (res);
}

double			ft_atof(const char *str)
{
	double	res;
	double	n;

	n = 1;
	res = 0;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		str++;
		if (*str == '-')
			n = -1;
	}
	res = calc_float(str, res);
	return (res * n);
}
