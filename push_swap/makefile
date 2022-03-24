# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slammari <slammari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 14:49:24 by slammari          #+#    #+#              #
#    Updated: 2022/03/23 18:18:28 by slammari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CHECKER = checker
INC = 	push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = 	utils/ft_atoi.c\
		utils/ft_calloc.c\
		utils/ft_isdigit.c\
		utils/ft_split.c\
		utils/ft_strlcat.c\
		utils/ft_strlcpy.c\
		utils/ft_strlen.c\
		utils/get_next_line.c\
		utils/ft_strjoin.c\
		utils/ft_bzero.c\
		args.c\
		utils1.c\
		utils2.c\
		utils3.c\
		movement.c\
		longest_increasing_sub.c\
		sort_smaller.c\
		push_swap.c\
		operation_stack.c\
		sort.c\

		 
SRC_BONUS = utils/ft_atoi.c\
			utils/ft_calloc.c\
			utils/ft_isdigit.c\
  			utils/ft_split.c\
   			utils/ft_strlcat.c\
    		utils/ft_strlcpy.c\
	 		utils/ft_strlen.c\
	 		utils/get_next_line.c\
		  	utils/ft_strjoin.c\
		   	utils/ft_bzero.c\
		    args.c\
			utils1.c\
			operation_stack.c\
			movement.c\
			checker.c\

OBJ =  $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ) $(INC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)
	
%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(OBJ_BONUS) $(INC_BONUS)
	gcc $(CFLAGS) $(OBJ_BONUS) -o $(CHECKER)

clean : 
	rm -f *.o 
	rm -f utils/*.o 

fclean : clean
	rm -rf $(NAME)
	rm -rf $(CHECKER)

re : fclean all