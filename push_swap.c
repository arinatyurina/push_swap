/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:05:35 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/11 11:56:49 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push_swap(long int *a, int size)
{
	long int	*b;
	int			b_len;
	int			a_len;

	a_len = size;
	b_len = 0;
	if (sorted(a, size) == 1)
		return ;
	b = (long int *)malloc(size * sizeof(long int));
	if (!b)
		return ;
	if (size == 3)
		size_three(a, a_len);
	else if (size <= 10)
		size_ten(a, b, &a_len, &b_len);
	else if (size > 10 && size <= 100)
		size_hundred(a, b, &a_len, &b_len);
	else if (size > 100)
		size_more(a, b, &a_len, &b_len);
	free(b);
}

int	size_of_k(char **k)
{
	int	i;

	i = 0;
	while (k[i])
		i++;
	return (i);
}

void	two_argc(char **argv)
{
	char		**k;
	int			split;
	long int	*a;
	int			i;

	i = 0;
	k = ft_split(argv[1], ' ');
	a = (long int *)malloc((size_of_k(k)) * sizeof(long int));
	if (!a)
		return ;
	split = 1;
	while (k[i])
	{
		a[i] = ft_atoi_m(k[i]);
		i++;
	}
	if ((err(argv + 1, 0) == 0) && (dupl(a, i) == 0 && m_int(a, i) == 0))
		push_swap(a, i);
	else
		ft_putstr("Error\n");
	free_split(k, split);
	free(a);
}

void	more_argc(int argc, char **argv)
{
	long int		*a;
	int				i;
	int				s;

	s = argc - 1;
	i = 0;
	a = (long int *)malloc((argc - 1) * sizeof(long int));
	if (!a)
		return ;
	while (i < argc - 1)
	{
		a[i] = ft_atoi_m(argv[i + 1]);
		i++;
	}
	if ((err(argv + 1, s) == 0) && (dupl(a, s) == 0 && m_int(a, s) == 0))
		push_swap(a, argc - 1);
	else
		ft_putstr("Error\n");
	free(a);
}

int	main(int argc, char **argv)
{
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
		two_argc(argv);
	else if (argc > 2)
		more_argc(argc, argv);
}
