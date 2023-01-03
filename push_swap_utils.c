/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <amarna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:21:44 by amarna            #+#    #+#             */
/*   Updated: 2023/01/03 15:30:30 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

long	ft_atol(const char *str)
{
	size_t	res;
	int		i;
	int		sign;
	long	res2;

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
	res2 = res * sign;
	return (res2);
}

int	check_int(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '-' || av[i] == '+')
	{
		if (!ft_isdigit(av[i + 1]))
			return (-1);
		i++;
	}
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (-1);
		i++;
	}
	return (1);
}

int	check_err(char **av)
{
	int		i;
	int		n;
	long	res;

	i = 1;
	while (av[i])
	{
		res = ft_atoi(av[i]);
		if (check_int(av[i]) == -1 || av[i][0] == '\0')
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		if (ft_atol(av[i]) < INT_MIN || ft_atol(av[i]) > INT_MAX)
			err_msg(1);
		n = 1;
		while (n < i)
		{
			if (res == ft_atoi(av[n]))
				err_msg(1);
			n++;
		}
		i++;
	}
	return (1);
}

int	err_msg(int a)
{
	write(a, "Error\n", 6);
	exit(EXIT_FAILURE);
}
