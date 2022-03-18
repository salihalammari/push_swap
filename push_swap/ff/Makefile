# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 13:23:33 by mfagri            #+#    #+#              #
#    Updated: 2022/02/25 18:48:55 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CHECKER = checker
INC = push_swap.h

CFLAGS = -Wall -Wextra -Werror

M_SRCS = utils.c \
		operation.c \
		moves.c \
		sort_small_nb.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_split.c \
		ft_strjoin.c \
		ft_calloc.c\
		ft_bzero.c\
		ft_strlcat.c \
		ft_strlcpy.c \
		get_next.c \
		sort_small_nb.c \
		sort2.c \
		utils2.c \
		ft_strlen.c \
		utils3.c \
		longest_increasing_sub.c \
		args.c \
		push_swap.c\
		
M_SRCB = args.c\
		operation.c \
		moves.c\
		ft_atoi.c\
		ft_isdigit.c\
		ft_split.c\
		ft_strlen.c\
		ft_strjoin.c\
		ft_calloc.c\
		ft_bzero.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		get_next.c\
		utils.c\
		checker.c

M_OBJS = $(M_SRCS:.c=.o)

M_OBJB = $(M_SRCB:.c=.o)

all : $(NAME)

$(NAME) : $(M_OBJS)
	$(CC) $(CFLAGS) $^ -o $@


%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
	
bonus : $(CHECKER) $(NAME)

$(CHECKER) : $(M_OBJB)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(M_OBJS) $(M_OBJB)

fclean: clean
	rm -rf $(NAME) $(CHECKER)

re: fclean all
