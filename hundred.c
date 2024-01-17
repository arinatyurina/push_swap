/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:28:06 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 16:31:34 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunks(long int *a, long int *b, int *a_len, int *b_len)
{
	int			c[2];
	int			j;
	int			idx;
	int			chunk_size;
	long int	*key_nbrs;

	c[0] = 0;
	c[1] = 0;
	j = *a_len / 2;
	chunk_size = *a_len / 4;
	key_nbrs = key_numbers(a, *a_len);
	while (c[0] < 3)
	{
		c[1] = 0;
		while (c[1] < chunk_size)
		{
			idx = find_in_chunk(a, *a_len, key_nbrs[c[0]]);
			while (idx != 0)
				make_idx_zero(a, *a_len, &idx, j);
			pb(a, b, a_len, b_len);
			c[1]++;
		}
		c[0]++;
	}
	free(key_nbrs);
}

void	make_idx_zero_b(long int *b, int b_len, int *idx, int j)
{
	if (*idx < j)
	{
		rb(b, b_len);
		*idx -= 1;
	}
	else if (*idx >= j)
	{
		rrb(b, b_len);
		if (*idx == (b_len - 1))
			*idx = 0;
		else
			*idx += 1;
	}
	if (*idx == 1)
	{
		sb(b, b_len);
		*idx = 0;
	}
}

void	push_to_a(long int *a, long int *b, int *a_len, int *b_len)
{
	int	idx;
	int	j;

	j = *b_len / 2;
	idx = find_biggest(b, *b_len);
	while (idx != 0)
	{
		make_idx_zero_b(b, *b_len, &idx, j);
	}
	pa(a, b, a_len, b_len);
}

void	size_hundred(long int *a, long int *b, int *a_len, int *b_len)
{
	push_chunks(a, b, a_len, b_len);
	while (*a_len != 0)
		push_to_b(a, b, a_len, b_len);
	while (*b_len != 0)
		push_to_a(a, b, a_len, b_len);
}
