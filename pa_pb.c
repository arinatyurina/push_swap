/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:44:06 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 15:10:02 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(long int *a, long int *b, int *a_len, int *b_len)
{
	int	i;

	if (*a_len > 0)
	{
		i = *b_len;
		while (i > 0)
		{
			b[i] = b[i - 1];
			i--;
		}
		b[0] = a[0];
		i = 0;
		while (i < *a_len - 1)
		{
			a[i] = a[i + 1];
			i++;
		}
		(*a_len)--;
		(*b_len)++;
		ft_putstr("pb\n");
	}
}

void	pa(long int *a, long int *b, int *a_len, int *b_len)
{
	int	i;

	if (*b_len > 0)
	{
		i = *a_len;
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[0] = b[0];
		i = 0;
		while (i < *b_len - 1)
		{
			b[i] = b[i + 1];
			i++;
		}
		(*a_len)++;
		(*b_len)--;
		ft_putstr("pa\n");
	}
}
