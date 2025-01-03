/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknumb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:47:53 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/02 19:04:23 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	checknumb(char *str_arg)
{
	int	i;
	int	j;
	int	len_str;

	i = 0;
	j = 0;
	len_str = ft_strlen(str_arg);
	while (str_arg[i])
	{
		if (str_arg[i] <= '9' && str_arg[i] >= '0')
			j++;
		i++;
	}
	if (j == len_str)
		return (1);
	else
		return (0);
}

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	isdigit;

// 	i = 1;
// 	while (argc >= 1 && argv[i])
// 	{
// 		isdigit = checknumb(argv[i]);
// 		i++;
// 	}
// 	printf("1, true // 0, false // the arg is --> %d", isdigit);
// 	return (0);
// }
