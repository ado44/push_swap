/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:31:27 by amarna            #+#    #+#             */
/*   Updated: 2023/01/03 15:09:06 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_index(t_list *stack_a)
{
	while (stack_a)
	{
		stack_a->index = 0;
		stack_a = stack_a->next;
	}
}

void	set_index(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		i;

	tmp = *stack_a;
	init_index(tmp);
	while (tmp)
	{
		tmp1 = *stack_a;
		i = 0;
		while (tmp1)
		{
			if (tmp->nb > tmp1->nb)
			{
				tmp->index = i + 1;
				i++;
			}
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}
