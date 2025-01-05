/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:53:01 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/01/03 18:03:45 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(int *stack, int size)
{
    int i;
    int min;
    
    i = 1;
    min = stack[0];
    if (size <= 0)
        return (-1);
    while(stack[i])
    {
        if (min > stack[i])
            min = stack[i];
        i++;
    }
    return (min);
}