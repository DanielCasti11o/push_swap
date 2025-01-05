/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:16:26 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/04 14:19:12 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks *sts)
{
	int	i;
	int	temp;

	i = 0;
	if (sts->ia > 1)
	{
		temp = sts->a[0];
		while (i < sts->ia - 1)
		{
			sts->a[i] = sts->a[i + 1];
			i++;
		}
		sts->a[sts->ia] = temp;
	}
	write (1, "ra\n", 3);
}
