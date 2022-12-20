/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:54:41 by amarna            #+#    #+#             */
/*   Updated: 2022/11/15 17:59:54 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_list **s_to, t_list **s_from)
{
	t_list	*to;
	t_list	*from;
	t_list	*tmp;

	to = *s_to;
	from = *s_from;
	if (!from)
		return (0);
	tmp = from;
	from = from->next;
	*s_from = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*s_to = to;
	}
	else
	{
		tmp->next = to;
		*s_to = tmp;
	}
	return (1);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == 0)
		return (0);
	write(1, "pa\n", 3);
	return (1);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == 0)
		return (0);
	write(1, "pb\n", 3);
	return (1);
}
