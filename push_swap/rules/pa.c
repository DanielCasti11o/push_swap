/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:44:59 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/17 18:08:58 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *lst)
{
	int	i;

	i = 0;
	i = lst->ia;
	lst->ib = lst->ib - 1;
	lst->ia = lst->ia + 1;
	while (i > 0)
	{
		swap(lst->a[i], lst->a[i - 1]);
		i--;
	}
	lst->a[0] = lst->b[0];
	i = 0;
	while (i <= lst->ib)
	{
		lst->b[i] = lst->b[i + 1];
		i++;
	}
	write (1, "pa\n", 3);
}

	// int	i;

	// i = 0;
	// if (!sta || !stb)
	// 	return ;
	// if (sta[i] && stb[i])
// 	{
// 		stb
// 	}
