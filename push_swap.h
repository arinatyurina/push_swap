/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:25:15 by atyurina          #+#    #+#             */
/*   Updated: 2024/01/11 11:57:19 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

int			main(int argc, char **argv);
void		push_swap(long int *a, int size);
int			sorted(long int *a, int size);
long int	ft_atoi_m(const char *nptr);
int			dupl(long int *nums, int size);
int			err(char **nptr, int size);
int			size_one(char **nptr);
int			m_int(long int *a, int size);
void		sa(long int *a, int a_len);
void		sb(long int *b, int b_len);
void		ss(long int *a, long int *b, int a_len, int b_len);
void		pb(long int *a, long int *b, int *a_len, int *b_len);
void		pa(long int *a, long int *b, int *a_len, int *b_len);
void		ra(long int *a, int a_len);
void		rb(long int *a, int a_len);
void		rr(long int *a, long int *b, int a_len, int b_len);
void		rra(long int *a, int a_len);
void		rrb(long int *a, int a_len);
void		rrr(long int *a, long int *b, int a_len, int b_len);
void		ft_putstr(char *str);
void		ft_putchar(char a);
size_t		ft_strlen(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		**ft_split(char const *s, char c);
void		size_three(long int *a, int a_len);
void		size_ten(long int *a, long int *b, int *a_len, int *b_len);
void		size_hundred(long int *a, long int *b, int *a_len, int *b_len);
int			find_smallest(long int *a, int a_len);
int			find_biggest(long int *a, int a_len);
void		push_to_b(long int *a, long int *b, int *a_len, int *b_len);
void		push_to_a(long int *a, long int *b, int *a_len, int *b_len);
void		*bubble_sort(long int *arr, int size);
long int	*key_numbers(long int *a, int a_len);
int			find_in_chunk(long int *a, int a_len, int n);
void		make_idx_zero(long int *a, int a_len, int *idx, int j);
void		make_idx_zero_b(long int *b, int b_len, int *idx, int j);
void		push_chunks(long int *a, long int *b, int *a_len, int *b_len);
void		ft_putnbr(int nb);
void		free_split(char **k, int split);
void		size_more(long int *a, long int *b, int *a_len, int *b_len);
long int	*key_numbers_more(long int *a, int a_len);
void		push_chunks_more(long int *a, long int *b, int *a_len, int *b_len);

#endif
