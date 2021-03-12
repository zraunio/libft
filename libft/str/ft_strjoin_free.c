/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:21:03 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/06 10:29:03 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strjoin_free(char *s1, char *s2, size_t flag)
{
	char	*out;

	out = ft_strjoin(s1, s2);
	if (out == NULL)
		return (NULL);
	if (flag == 1)
		ft_strdel(&s1);
	else if (flag == 2)
		ft_strdel(&s2);
	else if (flag == 3)
	{
		ft_strdel(&s1);
		ft_strdel(&s2);
	}
	return (out);
}
