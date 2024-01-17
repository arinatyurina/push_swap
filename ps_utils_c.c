/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:55:34 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/10 15:01:52 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	*bubble_sort(long int *arr, int size)
{
	long int	temp;
	int			i;
	int			j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

//создала аррай с ки намберс
long int	*key_numbers(long int *a, int a_len)
{
	int			i;
	long int	*k;
	long int	*key_nbrs;
	int			size;

	size = a_len;
	i = 0;
	k = (long int *)malloc(a_len * sizeof(long int));
	key_nbrs = (long int *)malloc(3 * sizeof(long int));
	if (!k || !key_nbrs)
		return (0);
	while (i < a_len)
	{
		k[i] = a[i];
		i++;
	}
	k = bubble_sort(k, a_len);
	key_nbrs[0] = k[size / 4];
	key_nbrs[1] = k[(size / 4) * 2];
	key_nbrs[2] = k[(size / 4) * 3];
	free(k);
	return (key_nbrs);
}

// проверяю в чанке
int	find_in_chunk(long int *a, int a_len, int n)
{
	int	i;

	i = 0;
	while (i < a_len)
	{
		if (a[i] <= n)
			return (i);
		i++;
	}
	return (0);
}

long int	ft_atoi_m(const char *nptr)
{
	int			i;
	int			posneg;
	long int	res;

	i = 0;
	posneg = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			posneg *= (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * posneg);
}

void	free_split(char **k, int split)
{
	int	i;

	if (split == 1)
	{
		i = 0;
		while (k[i])
		{
			free(k[i]);
			i++;
		}
		free(k);
	}
}
