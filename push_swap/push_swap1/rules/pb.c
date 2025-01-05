/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:09:28 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/04 14:19:16 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stacks *lst)
{
	int	i;

	i = 0;
	i = lst->ib;
	lst->ia = lst->ia - 1;
	lst->ib = lst->ib + 1;
	while (i < 0)
	{
		swap(lst->b[i], lst->b[i - 1]);
		i--;
	}
	lst->b[0] = lst->a[0];
	i = 0;
	while (i < lst->ia)
	{
		lst->a[i] = lst->a[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
