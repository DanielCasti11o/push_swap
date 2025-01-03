/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:14 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/02 18:23:57 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int	*a;
	int	*b;
	int	ia;
	int	ib;
	int	*sorted;
}	t_list;
int		ft_strlen(const char *s);
int		ft_atoi(char *nptr);
void	swap(int *argv1, int *argv2);
void	ss(int *sta, int *stb);
void	sa(int *sta);
void	sb(int *stb);
void	pa(t_list *lst);
void	pb(t_list *lst);
void	ra(t_list *sts);
void	rb(t_list *sts);
void	rr(t_list *sts);
void	rra(t_list *sts);
void	rrb(t_list *sts);
void	rrr(t_list *sts);
int		checknumb(char *str_arg);
int		check_repeat(int *arr, int size);
int		checkargs(int argc, char **argv);



#endif
