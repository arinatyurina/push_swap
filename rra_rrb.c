/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:59:31 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/11 12:28:24 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//нижний элемент идет на самый верх,
//остальные опускаются на один шаг

#include "push_swap.h"

void	rra(long int *a, int a_len)
{
	long int	temp;
	int			i;

	if (a_len > 1)
	{
		temp = a[a_len - 1];
		i = a_len - 1;
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[0] = temp;
		ft_putstr("rra\n");
	}
}

void	rrb(long int *a, int a_len)
{
	long int	temp;
	int			i;

	if (a_len > 1)
	{
		temp = a[a_len - 1];
		i = a_len - 1;
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[0] = temp;
		ft_putstr("rrb\n");
	}
}

static void	rra_rrr(long int *a, int a_len)
{
	long int	temp;
	int			i;

	if (a_len > 1)
	{
		temp = a[a_len - 1];
		i = a_len - 1;
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[0] = temp;
	}
}

static void	rrb_rrr(long int *a, int a_len)
{
	long int	temp;
	int			i;

	if (a_len > 1)
	{
		temp = a[a_len - 1];
		i = a_len - 1;
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[0] = temp;
	}
}

void	rrr(long int *a, long int *b, int a_len, int b_len)
{
	rra_rrr(a, a_len);
	rrb_rrr(b, b_len);
	ft_putstr("rrr\n");
}
