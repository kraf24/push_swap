/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:25 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/24 19:17:37 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/inc/ft_printf.h"
# include <stdbool.h>

typedef struct s_values
{
	int	value[2];
}		t_values;

/*best_move*/
int			pick_best_move(t_values *temp, int size);
t_values	*best_move_b(t_list *stack_a, t_list *stack_b, int *t_size);
void		exec(t_values temp, t_list **stack_a, t_list **stack_b);

void		complicated(t_list **stack_a, t_list **stack_b, int size);

void		define( t_list **a_stack, t_list **b_stack);

/*error*/
void		error(t_list *ptr);
int			int_chek(char *argv);

int			ft_find_smallest(t_list **stack_a);

int			ft_bubble_sort(int *arr, int n);

void		push_to_b(t_list **stack_a, t_list **stack_b, int size);

/*define_sort*/
void		free_lst(t_list *list);
t_list		*fill_stack(int argc, char *argv[]);

/*utilits*/
void		bst_move(int cmp_move, int *best_move, int *i, int x);
int			chek_duplicat(char **all_str, int i);
int			move(int i, int size);
int			lst_size(t_list *list);
int			check_sorted(t_list *stack);

/*simpl_sort*/
void		simpliest(t_list **stack);
void		simpl(t_list **stack_a, t_list **stack_b, int size);
void		ft_push_smallest_a(t_list **stack_a, t_list **stack_b, int size);

#endif