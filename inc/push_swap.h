/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:25 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/05 19:53:23 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/inc/ft_printf.h"
#include <stdbool.h>

int		int_chek(char *argv);
void	error(t_list *ptr);
void	free_lst(t_list *list);
int		chek_duplicat(char **all_str, int i);

void	define( t_list **a_stack, t_list **b_stack);
int		lst_size(t_list *list);

	//rotate
void	rotate(t_list **stack);
void	rotate_a(t_list ** stack);
void	rotate_b(t_list ** stack);
void	rotate_both(t_list ** a_stack, t_list ** b_stack);