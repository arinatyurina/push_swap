/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_biggest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:54:15 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 15:10:38 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest(long int *a, int a_len)
{
	long int	smallest;
	int			index;
	int			i;

	i = 1;
	smallest = a[0];
	index = 0;
	while (i < a_len)
	{
		if (a[i] < smallest)
		{
			smallest = a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_biggest(long int *a, int a_len)
{
	long int	biggest;
	int			index;
	int			i;

	i = 1;
	biggest = a[0];
	index = 0;
	while (i < a_len)
	{
		if (a[i] > biggest)
		{
			biggest = a[i];
			index = i;
		}
		i++;
	}
	return (index);
}
