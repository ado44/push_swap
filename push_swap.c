/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:21:23 by amarna            #+#    #+#             */
/*   Updated: 2022/06/27 12:21:27 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (*a)
	{
		*a = (*a)->next;
		free(tmp);
		tmp = *a;
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	check_err(av);
	stack_a = NULL;
	stack_b = NULL;
	i = ac - 1;
	while (i >= 1)
	{
		stack_a = fill_stack(stack_a, ft_atoi(av[i]));
		i--;
	}
	sorting(&stack_a, &stack_b);
	free_stacks(&stack_a);
	free(stack_b);
	return (0);
}
