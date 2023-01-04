/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:43:33 by amarna            #+#    #+#             */
/*   Updated: 2022/06/22 11:46:48 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stddef.h>
# include <stdint.h>
# include <limits.h>

typedef struct s_list
{
	int				nb;
	int				index;
	struct s_list	*next;
}					t_list;

int			swap(t_list **stack);
int			sa(t_list **a);
int			sb(t_list **b);
int			ss(t_list **a, t_list **b);
int			pa(t_list **a, t_list **b);
int			pb(t_list **b, t_list **a);
int			rotate(t_list **stack);
int			ra(t_list **a);
int			rb(t_list **b);
int			rr(t_list **a, t_list **b);
int			reverse_rotate(t_list **stack);
int			rra(t_list **a);
int			rrb(t_list **b);
int			rrr(t_list **a, t_list **b);

int			already_sort(t_list **stack_a);
void		radix_sort(t_list **stack_a, t_list **stack_b);
void		sort_for_2(t_list **stack_a);
void		sort_for_3(t_list **stack_a);
void		sort_for_4(t_list **stack_a, t_list **stack_b);
void		sort_for_5(t_list **stack_a, t_list **stack_b);
void		sorting(t_list **stack_a, t_list **stack_b);
void		find_lowest_nb_4(t_list **stack);
void		find_lowest_nb_5(t_list **stack);
int			check_int(char *av);
int			check_err(char **av);
int			err_msg(int a);
t_list		*fill_stack(t_list *s, int i);
void		free_stacks(t_list **a);
void		set_index(t_list **stack_a);
void		init_index(t_list *stack_a);
long		ft_atol(const char *str);
int			ft_atoi(const char *str);
int			ft_lstsize(t_list *lst);
int			ft_isdigit(int c);
t_list		*ft_lstlast(t_list *lst);

#endif
