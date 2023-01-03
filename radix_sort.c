/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:21:58 by amarna            #+#    #+#             */
/*   Updated: 2023/01/03 15:29:02 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	get_max(int max_num, int max_bits)
{
	max_num -= 1;
	while (max_num >> max_bits)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	int		max_bits;
	int		size;
	t_list	*tmp;

	i = 0;
	size = ft_lstsize(*stack_a);
	max_bits = get_max(size, 0);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			tmp = *stack_a;
			if (((tmp->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
