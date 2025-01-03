/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:52:57 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/03 16:45:53 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkargs(int argc, char **argv)
{
	int	i;
	int	tr;
	int	tr1;
	int	numb[argc - 1];

	i = 1;
	while (i < argc)
	{
		tr = checknumb(argv[i]);
		if (tr == 0)
			return (1);
		else
		{
			numb[i - 1] = ft_atoi(argv[i]);
		}
		i++;
	}
	tr1 = check_repeat(numb, argc);
	if (tr1 == 1)
		return (1);
	printf("Todos los args son validos");
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (i < argc)
	{
		res = checkargs(argc, argv);
		i++;
	}
	printf("resultado:\n%d", res);
	return (0);
}
