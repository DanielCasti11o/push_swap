/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:52:57 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/05 18:49:34 by dacastil         ###   ########.fr       */
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

void	checkrange(int *n, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (n[i] < -2147483648 || n[i] > 2147483647)
			ft_error("ERROR: Out of range\n", 1);
		i++;
	}
}

int	*init(int *numb, int size)
{
	numb = malloc(size * sizeof(int *));
	if (!numb)
		return (NULL);
	return (numb);
}

int	checkargs(int argc, char **argv)
{
	int	*numb;
	int	i;
	int	tr;
	int	tr1;

	i = 1;
	numb = init(numb, argc - 1);
	while (i < argc)
	{
		tr = checknumb(argv[i]);
		if (tr == 0)
			ft_error("ERROR: Invalid argument\n", 1);
		numb[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	checkrange(numb, argc - 1);
	tr1 = check_repeat(numb, argc);
	if (tr1 == 1)
		ft_error("ERROR: There is at least one repeated argument\n", 1);
	free(numb);
	printf("The argument are valid!\n");
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	res;

	i = 1;
	res = checkargs(argc, argv);
	return (0);
}
