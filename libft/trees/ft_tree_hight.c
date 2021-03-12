/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_hight.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:41:10 by zraunio           #+#    #+#             */
/*   Updated: 2021/03/12 14:48:41 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_tree_height(t_bitree *root)
{
	int i;
	
	i = root ? 1 + FT_MAX(ft_tree_height(root->left), \
	ft_tree_height(root->right)) : 0;
	return (i);
}
