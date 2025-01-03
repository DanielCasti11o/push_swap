/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:33:32 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/22 17:44:19 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list *sts)
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
