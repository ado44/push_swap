/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:00:09 by amarna            #+#    #+#             */
/*   Updated: 2022/11/15 17:00:09 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*before_last;

	tmp = *stack;
	last = tmp;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	last->next = tmp;
	before_last->next = NULL;
	*stack = last;
	return (1);
}

int	rra(t_list **a)
{
	if (!a)
		return (0);
	if (reverse_rotate(a) == 0)
		return (0);
	write(1, "rra\n", 4);
	return (1);
}

int	rrb(t_list **b)
{
	if (!b)
		return (0);
	if (reverse_rotate(b) == 0)
		return (0);
	write(1, "rrb\n", 4);
	return (1);
}

int	rrr(t_list **a, t_list **b)
{
	if (rra(a) && rrb(b) == 0)
		return (0);
	write(1, "rrr\n", 4);
	return (1);
}
