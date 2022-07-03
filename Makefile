# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnajid <mnajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 15:10:33 by mnajid            #+#    #+#              #
#    Updated: 2022/07/03 14:26:13 by mnajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = gcc 

flags = -Wall -Werror -Wextra

srcs = ./src/main.c \
		./src/ft_free.c \
		./src/init.c \
		./src/routrine.c \
		./src/utils.c \
		./src/utils2.c

objs = $(srcs:.c=.o)

HEADER = philo.h 

all : $(NAME)

$(NAME) : $(objs)
		$(CC) $(flags) $^ -o $@

%.o : %.c
		$(CC) $(FLAGS) -c $< -o $@

clean : 
		rm -rf $(objs)

fclean : clean
		rm -rf $(NAME)

re :	fclean all