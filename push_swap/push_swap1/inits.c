/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:58:54 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/05 21:01:42 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*init_stack(int size)
{
	t_stacks	*stack;

	stack = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stack)
		return (NULL);
	stack->content = (int *)malloc(sizeof(int) * size);
	if (!stack->content)
		return (free(stack), NULL);
	stack->index = -1;
	stack->post_init = -1;
	return (stack);
}


t_pile	*init_pile(int size_a, int size_b)
{
	t_pile	*new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if (!new)
		return (NULL);
	new->st_a = init_stack(size_a);
	new->st_b = init_stack(size_b);
	if (!new->st_a || !new->st_b)
		return (free(new), NULL);
	new->ia = size_a;
	new->ib = size_b;
	return (new);
}
