/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:46:20 by zraunio           #+#    #+#             */
/*   Updated: 2021/01/07 12:21:54 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		num;
	int		dig;
	char	*s;

	num = ft_count_digit(n);
	if (!(s = (char*)malloc(sizeof(char) * num + 2)))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	s[num + 1] = '\0';
	if (n == 0)
		s[num] = '0';
	while (n)
	{
		dig = n % 10;
		s[num--] = ft_abs(dig) + '0';
		n = n / 10;
	}
	return (s);
}
