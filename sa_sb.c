/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:00:50 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 14:49:30 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////////////////
// sa sb ss  ///
////////////////

#include "push_swap.h"

void	sa(long int *a, int a_len)
{
	long int	temp;

	if (a_len >= 2)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		ft_putstr("sa\n");
	}
}

void	sb(long int *b, int b_len)
{
	long int	temp;

	if (b_len >= 2)
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		ft_putstr("sb\n");
	}
}

static void	sa_ss(long int *a, int a_len)
{
	long int	temp;

	if (a_len >= 2)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
}

static void	sb_ss(long int *b, int b_len)
{
	long int	temp;

	if (b_len >= 2)
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
	}
}

void	ss(long int *a, long int *b, int a_len, int b_len)
{
	sa_ss(a, a_len);
	sb_ss(b, b_len);
	ft_putstr("ss\n");
}
