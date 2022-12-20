/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:31:27 by amarna            #+#    #+#             */
/*   Updated: 2022/12/20 17:31:45 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_tmp(t_list *tmp)
{
	int	i;

	i = 0;
	while (tmp)
	{
		tmp->nb = i;
		tmp = tmp->next;
		i++;
	}
}
