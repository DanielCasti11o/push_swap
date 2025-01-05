/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:33:32 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/04 14:19:08 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stacks *sts)
{
	int	i;
	int	temp;

	i = 0;
	if (i < sts->ib)
	{
		temp = sts->b[0];
		while (i < sts->ib - 1)
		{
			sts->b[i] = sts->b[i + 1];
			i++;
		}
		sts->b[sts->ib - 1] = temp;
		write (1, "rb\n", 3);
	}
}
