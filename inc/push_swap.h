/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:25 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/22 18:18:25 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/inc/ft_printf.h"
#include <stdbool.h>

typedef struct s_values
{
	int value[2];
}		t_values; 


int		int_chek(char *argv);
void	error(t_list *ptr);
int		ft_find_smallest(t_list **stack_a);
void	free_lst(t_list *list);
int		chek_duplicat(char **all_str, int i);
int move(int i, int size);
void push_to_b(t_list **stack_a, t_list **stack_b, int size);

void	define( t_list **a_stack, t_list **b_stack);
int		lst_size(t_list *list);
void	simpliest(t_list **stack);
void	simpl(t_list **stack_a, t_list **stack_b, int size);
int	ft_bubble_sort(int *arr, int n);
void	ft_push_smallest_a(t_list **stack_a, t_list **stack_b, int size);
void	complicated(t_list **stack_a, t_list **stack_b, int size);
t_values *best_move_b(t_list *stack_a, t_list *stack_b, int *t_size);
int pick_best_move(t_values *temp, int size);
void exec(t_values temp, t_list **stack_a, t_list **stack_b);