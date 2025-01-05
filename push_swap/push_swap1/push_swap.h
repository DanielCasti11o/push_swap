/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:14 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/05 20:10:28 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <math.h>
# include <unistd.h>

typedef struct s_stacks
{
	int	*content;
	int	index;
	int	post_init;
}	t_stacks;

typedef struct s_pile
{
	t_stacks	*st_a;
	t_stacks	*st_b;
	int			ia;
	int			ib;
}	t_pile;

int		ft_strlen(const char *s);
int		ft_atoi(char *nptr);
long	ft_atol(char *nptr);
void	swap(int *argv1, int *argv2);
void	ss(int *sta, int *stb);
void	sa(int *sta);
void	sb(int *stb);
void	pa(t_stacks *lst);
void	pb(t_stacks *lst);
void	ra(t_stacks *sts);
void	rb(t_stacks *sts);
void	rr(t_stacks *sts);
void	rra(t_stacks *sts);
void	rrb(t_stacks *sts);
void	rrr(t_stacks *sts);
int		checknumb(char *str_arg);
int		check_repeat(int *arr, int size);
int		checkargs(int argc, char **argv);
void	ft_error(char *msj, int n);
t_pile	*init_pile(int size);

#endif
