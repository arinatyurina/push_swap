/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_than_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:42:11 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 16:51:57 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	*key_numbers_more(long int *a, int a_len)
{
	int			i;
	long int	*k;
	long int	*key_nbrs;
	int			size;

	size = a_len;
	i = 0;
	k = (long int *)malloc(a_len * sizeof(long int));
	key_nbrs = (long int *)malloc(7 * sizeof(long int));
	if (!k || !key_nbrs)
		return (0);
	while (i < a_len)
	{
		k[i] = a[i];
		i++;
	}
	k = bubble_sort(k, a_len);
	i = 0;
	while (i < 7)
	{
		key_nbrs[i] = k[(size / 8) * (i + 1)];
		i++;
	}
	free(k);
	return (key_nbrs);
}

void	push_chunks_more(long int *a, long int *b, int *a_len, int *b_len)
{
	int			c[2];
	int			j;
	int			idx;
	int			chunk_size;
	long int	*key_nbrs;

	c[0] = 0;
	c[1] = 0;
	j = *a_len / 2;
	chunk_size = *a_len / 8;
	key_nbrs = key_numbers_more(a, *a_len);
	while (c[0] < 7)
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

void	size_more(long int *a, long int *b, int *a_len, int *b_len)
{
	push_chunks_more(a, b, a_len, b_len);
	while (*a_len != 0)
		push_to_b(a, b, a_len, b_len);
	while (*b_len != 0)
		push_to_a(a, b, a_len, b_len);
}
