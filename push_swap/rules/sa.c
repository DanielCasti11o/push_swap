/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:08 by dacastil          #+#    #+#             */
/*   Updated: 2024/12/08 21:44:17 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *sta)
{
	int	temp;

	temp = sta[0];
	sta[0] = sta[1];
	sta[1] = temp;

	write (1, "sa\n", 3);
}
