/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llmax.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:07:28 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/12 15:11:44 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

# define FT_MAX(x, y) (x) > (y) ? (x) : (y)

long long int		ft_llmax(long long x, long long y)
{
	if (x > y)
		return (x);
	else if (y > x)
		return (y);
	else
		return (x + y);
}
