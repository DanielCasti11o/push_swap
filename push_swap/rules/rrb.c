/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:50:28 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/22 17:54:06 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list *sts)
{
	int	i;
	int	temp;

	i = sts->ib - 1;
	if (sts->ib > 1)
	{
		temp = sts->b[sts->ib - 1];
		while (i > 0)
		{
			sts->b[i] = sts->b[i - 1];
			i--;
		}
		sts->b[i] = temp;
		write (1, "rrb", 4);
	}
}