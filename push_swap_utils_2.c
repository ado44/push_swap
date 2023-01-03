/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:52:30 by amarna            #+#    #+#             */
/*   Updated: 2022/12/21 17:17:51 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
	i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		if (str[i] > 47 && str[i] < 58)
			res = (res * 10) + (str[i] - 48);
	i++;
	}
	return (res * sign);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_list	*fill_stack(t_list *s, int i)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	if (tmp)
	{
		tmp->nb = i;
		tmp->next = s;
	}
	return (tmp);
}

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != 0)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
