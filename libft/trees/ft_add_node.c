/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:22:03 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/12 14:29:43 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** Add a new node to a binary tree.
** < and > can check if node is higher or lower in hierarchy
*/

void	ft_add_node(t_bitree **root, t_bitree *node)
{
	t_bitree *temp;

	temp = *root;
	if (temp = NULL)
	{
		temp = node;
		root = temp;
	}
	else if (node->item < temp->item)
		ft_add_node(&(temp->left), node);
	else if (node->item > temp->item)
		ft_add_node(&(temp->right), node);
}
