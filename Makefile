# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 17:03:23 by pprejith          #+#    #+#              #
#    Updated: 2025/06/12 03:35:23 by pprejith         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = src/pipex.c\
	   src/processes.c\
	   includes/libft/libft.a

$(NAME) : 
		make all -C libft
		gcc $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
		 $(RM) $(NAME)
		 make fclean -c libft

clean : $(RM) $(NAME)
		make clean -C libft

re : fclean all
