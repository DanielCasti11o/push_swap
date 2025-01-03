/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:09:28 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/17 18:15:47 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list *lst)
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
