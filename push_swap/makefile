# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slammari <slammari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 14:49:24 by slammari          #+#    #+#              #
#    Updated: 2022/03/17 22:25:47 by slammari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = utils/ft_atoi.c utils/ft_calloc.c utils/ft_isdigit.c utils/ft_split.c utils/ft_strlcat.c utils/ft_strlcpy.c utils/ft_strlen.c
		utils/get_next_line.c utils/ft_strjoin.c utils/ft_bzero.c utils/
SRC_BONUS =

INC =  $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)


all : $(NAME)
$(NAME) : $(OBJ) $(INC)
	gcc $(CFLAGS) $(FRAME) $(OBJ) -o $(NAME)

bonus : $(OBJ_BONUS) $(INC_BONUS)
	gcc $(CFLAGS) $(FRAME) $(OBJ_BONUS) -o $(NAME)

clean : 
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all