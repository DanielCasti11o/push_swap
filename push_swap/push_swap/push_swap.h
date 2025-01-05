/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:14 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/04 23:23:42 by daniel-cast      ###   ########.fr       */
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
	t_stacks *st_a;
	t_stacks *st_b;
	size_t ia;
	size_t ib;
}t_pile;

int		ft_strlen(const char *s);
int		ft_atoi(char *nptr);
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



#endif
