/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:21:51 by amarna            #+#    #+#             */
/*   Updated: 2022/11/15 18:28:21 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for_2(t_list **stack)
{
	t_list	*stack_a;

	stack_a = *stack;
	if (stack_a->nb > stack_a->next->nb)
		sa(stack);
}

void	sort_for_3(t_list **stack)
{
	t_list	*stack_a;
	int		pos1;
	int		pos2;
	int		pos3;

	stack_a = *stack;
	pos1 = stack_a->nb;
	pos2 = stack_a->next->nb;
	pos3 = stack_a->next->next->nb;
	if (pos1 > pos2 && pos2 < pos3 && pos3 > pos1)
		sa(stack);
	else if (pos1 > pos2 && pos2 > pos3 && pos3 < pos1)
	{
		sa(stack);
		rra(stack);
	}
	else if (pos1 > pos2 && pos2 < pos3 && pos3 < pos1)
		ra(stack);
	else if (pos1 < pos2 && pos2 > pos3 && pos3 > pos1)
	{
		sa(stack);
		ra(stack);
	}
	else if (pos1 < pos2 && pos2 > pos3 && pos3 < pos1)
		rra(stack);
}

void	sort_for_4(t_list **stack_a, t_list **stack_b)
{
	find_lowest_nb_4(stack_a);
	if (already_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_for_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_for_5(t_list **stack_a, t_list **stack_b)
{
	find_lowest_nb_5(stack_a);
	pb(stack_a, stack_b);
	sort_for_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sorting(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 0 || ft_lstsize(*stack_a) == 1)
		return ;
	else if (already_sort(stack_a))
		return ;
	else if (ft_lstsize(*stack_a) == 2)
		sort_for_2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_for_3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort_for_4(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort_for_5(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5)
		radix_sort(stack_a, stack_b);
}
