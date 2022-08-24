# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admin <admin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:57:26 by gpinchuk          #+#    #+#              #
#    Updated: 2022/08/23 19:00:48 by admin            ###   ########.fr        #
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

BONUS = cheker

GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;34m
DEF_COLOR = \033[0;39m

all: $(NAME) bonus

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS) $(LIB_ALL) $^ -o $@
	@echo "$(GREEN)push-swap compiled!$(DEF_COLOR)"

$(OBJ)/%.o:	$(SRC)/%.c $(OBJ)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ):
	@mkdir -p $(OBJ)
	@mkdir -p $(LIB)
	@make -C $(LIB_D)
	@echo "$(BLUE)libft is done!$(DEF_COLOR)"
	@make -C $(LIB_F)
	@echo "$(BLUE)functions are done!$(DEF_COLOR)"

bonus: $(BONUS)

$(BONUS):
	$(CC) -Wall -Wextra -Werror -I $(INC) $(LIB_ALL) checker.c -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(BONUS)
	@rm -rf $(LIB)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIB_D)
	@make fclean -C $(LIB_F)
	@echo "$(YELLOW)Evrything was cleaned $(DEF_COLOR)"

re: fclean all