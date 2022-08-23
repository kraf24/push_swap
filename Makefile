# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admin <admin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:57:26 by gpinchuk          #+#    #+#              #
#    Updated: 2022/08/23 10:33:38 by admin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB = lib
LIB_D = ft_printf
LIB_F = functions
SRC = src
INC = inc
OBJ = obj
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INC)
SRC_F = $(wildcard $(SRC)/*.c)
INC_F = $(wildcard $(INC)/*.h)
LIB_ALL = $(wildcard $(LIB)/*.a)
OBJ_F = $(SRC_F:.c=.o)
OBJS = $(subst $(SRC),$(OBJ),$(OBJ_F))


GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;34m
DEF_COLOR = \033[0;39m

all: $(NAME)

$(NAME): $(OBJS) $(LIB_ALL)
	@$(CC) $(FLAGS) $^ -o $@
	@echo "$(GREEN)pipex compiled!$(DEF_COLOR)"

$(OBJ)/%.o:	$(SRC)/%.c $(OBJ)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ):
	@mkdir -p $(OBJ)
	@mkdir -p $(LIB)
	@make -C $(LIB_D)
	@echo "$(BLUE)libft is done!$(DEF_COLOR)"
	@make -C $(LIB_F)
	@echo "$(BLUE)functions is done!$(DEF_COLOR)"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIB_D)
	@make fclean -C $(LIB_F)
	@echo "$(YELLOW)Evrything was cleaned $(DEF_COLOR)"

re: fclean all