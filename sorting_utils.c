/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:15:45 by amarna            #+#    #+#             */
/*   Updated: 2022/12/20 21:00:01 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_sort(t_list **stack)
{
	t_list	*stack_a;

	stack_a = *stack;
	while (stack_a->next)
	{
		if (stack_a->nb > stack_a->next->nb)
			return (0);
		stack_a = stack_a->next;
	}
	free_stacks(stack);
	return (1);
}

void	find_lowest_nb_4(t_list **stack_a)
{
	t_list	*stack;
	t_list	*tmp;
	int		min;

	stack = *stack_a;
	tmp = stack;
	min = tmp->nb;
	while (tmp)
	{
		if (min > tmp->nb)
			min = tmp->nb;
		tmp = tmp->next;
	}
	if (min == stack->next->nb)
		ra(stack_a);
	else if (min == stack->next->next->nb)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min == stack->next->next->next->nb)
		rra(stack_a);
}

void	find_low_5_bis(t_list *tmp, int min)
{
	while (tmp)
	{
		if (min > tmp->nb)
			min = tmp->nb;
		tmp = tmp->next;
	}
}

void	find_lowest_nb_5(t_list **stack_a)
{
	t_list	*stack;
	t_list	*tmp;
	int		min;

	stack = *stack_a;
	tmp = stack;
	min = tmp->nb;
	while (tmp)
	{
		if (min > tmp->nb)
			min = tmp->nb;
		tmp = tmp->next;
	}
	if (min == stack->next->nb)
		ra(stack_a);
	else if (min == stack->next->next->nb)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min == stack->next->next->next->nb)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min == stack->next->next->next->next->nb)
		rra(stack_a);
}
