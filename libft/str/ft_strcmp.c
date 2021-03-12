/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 12:22:36 by zraunio           #+#    #+#             */
/*   Updated: 2021/01/11 10:25:09 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char*)s1;
	q = (unsigned char*)s2;
	i = 0;
	while (p[i] != '\0' && q[i] != '\0' && p[i] == q[i])
		i++;
	return ((unsigned char)p[i] - (unsigned char)q[i]);
}
