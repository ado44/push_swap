/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:55:30 by amarna            #+#    #+#             */
/*   Updated: 2022/11/15 18:00:06 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	int		tmp;

	first = *stack;
	second = first->next;
	tmp = first->nb;
	first->nb = second->nb;
	second->nb = tmp;
	return (1);
}

int	sa(t_list **a)
{
	if (!a)
		return (0);
	if (swap(a) == 0)
		return (0);
	write(1, "sa\n", 3);
	return (1);
}

int	sb(t_list **b)
{
	if (!b)
		return (0);
	if (swap(b) == 0)
		return (0);
	write(1, "sb\n", 3);
	return (1);
}

int	ss(t_list **a, t_list **b)
{
	if (!a || !b)
		return (0);
	if (swap(a) == 0 || swap(b) == 0)
		return (0);
	write(1, "ss\n", 3);
	return (1);
}
