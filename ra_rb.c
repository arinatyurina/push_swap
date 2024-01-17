/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:58:45 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 14:53:58 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////////////////
// ra rb rr  ///
////////////////
//ra and rb: 
//верхний элемент идет в самый низ,
//остальные поднимаются на один шаг

#include "push_swap.h"

void	ra(long int *a, int a_len)
{
	long int	temp;
	int			i;

	if (a_len > 1)
	{
		i = 0;
		temp = a[0];
		while (i < a_len - 1)
		{
			a[i] = a[i + 1];
			i++;
		}
		a[a_len - 1] = temp;
		ft_putstr("ra\n");
	}
}

void	rb(long int *b, int b_len)
{
	long int	temp;
	int			i;

	i = 0;
	temp = b[0];
	while (i < b_len - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[b_len - 1] = temp;
	ft_putstr("rb\n");
}

static void	ra_rr(long int *a, int a_len)
{
	long int	temp;
	int			i;

	i = 0;
	temp = a[0];
	while (i < a_len - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[a_len - 1] = temp;
}

static void	rb_rr(long int *b, int b_len)
{
	long int	temp;
	int			i;

	i = 0;
	temp = b[0];
	while (i < b_len - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[b_len - 1] = temp;
}

void	rr(long int *a, long int *b, int a_len, int b_len)
{
	ra_rr(a, a_len);
	rb_rr(b, b_len);
	ft_putstr("rr\n");
}
