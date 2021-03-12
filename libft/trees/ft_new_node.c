/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:03:07 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/12 14:39:48 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** allocate a new binary tree element
** in itiate size_t to given item and all else to NULL
*/

t_bitree	*ft_new_node(void *item)
{
	t_bitree	*node;

	if (!(node = (t_bitree*)malloc(sizeof(t_bitree))))
		return (NULL);
	node = ft_memmaloc(sizeof(node));
	node->item = item;
	return (node);
}
