/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:16:26 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/23 18:00:49 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *sts)
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
