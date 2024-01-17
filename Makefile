# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atyurina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 17:07:38 by atyurina          #+#    #+#              #
#    Updated: 2024/01/11 13:05:32 by atyurina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
SRC :=	push_swap.c hundred.c more_than_hundred.c find_smallest_biggest.c \
	pa_pb.c three_ten.c ps_utils_c.c handle_error.c rra_rrb.c \
	ra_rb.c sa_sb.c utils_libft.c
OBJ := $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
