/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:58:54 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/16 19:09:43 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_stacks(int size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return ;
	new->a = (int *)malloc(sizeof(int) * size);
	new->b = (int *)malloc(sizeof(int) * size);
	new->ia = 0;
	new->ib = 0;
	new->sorted = NULL;
	return (new);
}
