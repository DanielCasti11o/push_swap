/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:44:37 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/04 14:18:59 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stacks *sts)
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
