# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 14:59:49 by gpinchuk          #+#    #+#              #
#    Updated: 2022/08/22 19:53:25 by gpinchuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =functions.a
INC = inc
src = $(wildcard *.c)
obj = $(src:.c=.o)
AR = ar rcs
LIB = lib

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ../$(INC)

all: $(NAME)

$(NAME): $(obj) 
	@$(AR) $(NAME) $(obj)
	@mv $(NAME) ../$(LIB)
clean:
	@rm -rf $(obj)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re