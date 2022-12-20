/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:46 by amarna            #+#    #+#             */
/*   Updated: 2022/11/15 18:00:03 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*tmp;

	tmp = *stack;
	last = ft_lstlast(tmp);
	first = tmp;
	tmp = tmp->next;
	first->next = NULL;
	last->next = first;
	*stack = tmp;
	return (1);
}

int	ra(t_list **a)
{
	if (!a)
		return (0);
	if (rotate(a) == 0)
		return (0);
	write(1, "ra\n", 3);
	return (1);
}

int	rb(t_list **b)
{
	if (!b)
		return (0);
	if (rotate(b) == 0)
		return (0);
	write(1, "rb\n", 3);
	return (1);
}

int	rr(t_list **a, t_list **b)
{
	if (ra(a) && rb(b) == 0)
		return (0);
	write(1, "rr\n", 2);
	return (1);
}
