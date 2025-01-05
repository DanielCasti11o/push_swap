/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:04:04 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/01/05 18:23:17 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max(int *stack, int size)
{
	int i;
	int max;

	if (size <= 0)
		return (-1);
	i = 1;
	max = stack[0];
	while (stack[i])
	{
		if (max < stack[i])
			max = stack[i];
		i++;
	}
	return (max);
}
