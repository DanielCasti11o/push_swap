/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:44:37 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/22 17:55:56 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *sts)
{
	int	i;
	int	temp;

	i = sts->ia - 1;
	if (sts->ia > 1)
	{
		temp = sts->a[sts->ia - 1];
		while (i > 0)
		{
			sts->a[i] = sts->a[i - 1];
			i--;
		}
		sts->a[i] = temp;
		write (1, "rra\n", 4);
	}
}
