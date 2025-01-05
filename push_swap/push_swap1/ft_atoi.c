/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:04 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/05 18:23:59 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *nptr)
{
	int	result;
	int	chsg;

	chsg = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
	{
		nptr ++;
	}
	if (*nptr == '-')
	{
		chsg = -1;
		nptr ++;
	}
	else if (*nptr == '+')
	{
		nptr ++;
	}
	while ('0' <= *nptr && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr ++;
	}
	return (result * chsg);
}
