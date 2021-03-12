/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:46:20 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/06 19:31:12 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_itoa(int n)
{
	int		num;
	char	*s;

	num = ft_count_digit(n);
	if (!(s = (char*)malloc(sizeof(char) * num + 2)))
		return (NULL);
	s = ft_memset(s, 0, num);
	s[num--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		if (n == -2147483648)
		{
			s[num--] = '8';
			n = -214748364;
		}
		n *= -1;
	}
	while (num >= 0 && s[num] != '-')
	{
		s[num--] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (s);
}
