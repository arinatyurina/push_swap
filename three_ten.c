/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_ten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:30:49 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 14:33:05 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_three(long int *a, int a_len)
{
	if (a[1] > a[2] && a[1] < a[0])
	{
		sa(a, a_len);
		rra(a, a_len);
	}
	else if (a[0] < a[1] && a[0] > a[2])
		rra(a, a_len);
	else if (a[2] > a[0] && a[2] < a[1])
	{
		rra(a, a_len);
		sa(a, a_len);
	}
	else if (a[2] < a[0] && a[2] > a[1])
		ra(a, a_len);
	else if (a[0] > a[1] && a[0] < a[2])
		sa(a, a_len);
}

void	size_ten(long int *a, long int *b, int *a_len, int *b_len)
{
	while (*a_len > 3)
	{
		push_to_b(a, b, a_len, b_len);
	}
	if (*a_len == 3)
		size_three(a, *a_len);
	while (*b_len != 0)
		pa(a, b, a_len, b_len);
}

void	make_idx_zero(long int *a, int a_len, int *idx, int j)
{
	if (*idx < j)
	{
		ra(a, a_len);
		*idx -= 1;
	}
	else if (*idx >= j)
	{
		rra(a, a_len);
		if (*idx == (a_len - 1))
			*idx = 0;
		else
			*idx += 1;
	}
	if (*idx == 1)
	{
		sa(a, a_len);
		*idx = 0;
	}
}

void	push_to_b(long int *a, long int *b, int *a_len, int *b_len)
{
	int	idx;
	int	j;

	j = *a_len / 2;
	idx = find_smallest(a, *a_len);
	while (idx != 0)
	{
		make_idx_zero(a, *a_len, &idx, j);
	}
	pb(a, b, a_len, b_len);
}
