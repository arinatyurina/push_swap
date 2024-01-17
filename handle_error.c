/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:24:09 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/11 11:56:58 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(long int *a, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	dupl(long int *nums, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (nums[j] == nums[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	size_one(char **nptr)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (nptr[j][i])
	{
		if ((!(nptr[j][i] >= '0' && nptr[j][i] <= '9')) && nptr[j][i] != '\0' &&
nptr[j][i] != '-' && nptr[j][i] != '+' && nptr[j][i] != ' ')
			return (1);
		else
			i++;
	}
	return (0);
}

int	err(char **nptr, int size)
{
	int	i;
	int	j;

	j = 0;
	if (size == 0)
		return (size_one(nptr));
	while (j < size && nptr[j])
	{
		i = 0;
		if (nptr[j][i] == '-' || nptr[j][i] == '+')
			i++;
		while ((nptr[j][i] >= 9 && nptr[j][i] <= 13) || nptr[j][i] == 32)
			i++;
		while (nptr[j][i] >= '0' && nptr[j][i] <= '9')
			i++;
		if ((nptr[j][i] != '\0' && (nptr[j][i] <= '0' || nptr[j][i] >= '9')))
			return (1);
		j++;
	}
	return (0);
}

int	m_int(long int *a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[i] > 2147483647 || a[i] < -2147483648)
			return (1);
		i++;
	}
	return (0);
}
