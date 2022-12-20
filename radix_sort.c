/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:21:58 by amarna            #+#    #+#             */
/*   Updated: 2022/12/20 17:45:17 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_parse(t_list **stack)
{
	t_list	*tmp;
	t_list	*temp2;
	int		swapped;

	temp2 = NULL;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		tmp = *stack;
		while (tmp->next != temp2)
		{
			if (tmp->nb > tmp->next->nb)
			{
				ft_swap(&tmp->nb, &tmp->next->nb);
				swapped = 1;
			}
			tmp = tmp->next;
		}
		temp2 = tmp;
	}
	tmp = *stack;
	sort_tmp(tmp);
}

int	get_max_bits(int max)
{
	int	max_bits;

	max_bits = 0;
	while (max >> max_bits)
		max_bits++;
	return (max_bits);
}

void	pre_rdx_sort(t_list **stack_a, t_list **stack_b, int size, int max_bits)
{
	t_list	*tmp;
	int		i;
	int		j;

	tmp = *stack_a;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			tmp = *stack_a;
			if (((tmp->nb >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int		size;
	int		max_bits;

	simple_parse(stack_a);
	size = ft_lstsize(*stack_a);
	max_bits = get_max_bits(size);
	pre_rdx_sort(stack_a, stack_b, size, max_bits);
}
