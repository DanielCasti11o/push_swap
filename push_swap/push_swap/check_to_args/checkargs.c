/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:52:57 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/04 23:51:42 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *msj, int n)
{
	int	i;

	i = 0;
	while (msj[i])
	{
		write (1, &msj[i], 1);
		i++;
	}
	exit(n);
}

void	checkrange(int *n)
{
	int	i;

	i = 0;
	while (n[i])
	{
		if (n[i] < -2147483648 || n[i] > 2147483647)
			ft_error("ERROR: Out of range\n", 1);
		i++;
	}
}

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
			ft_error("ERROR: Invalid argument\n", 1);
		else
		{
			numb[i - 1] = ft_atoi(argv[i]);
		}
		if(numb)
		{
			checkrange(numb);
		}
		i++;
	}
	tr1 = check_repeat(numb, argc);
	if (tr1 == 1)
		ft_error("ERROR: There is at least one repeated argument\n", 1);
	printf("The argument are valid!\n");
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	res;

	i = 1;
	res = checkargs(argc, argv);
	printf("\nres:\n%d\n", res);
	return (0);
}
