/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:50:23 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/23 17:00:14 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	rotate(t_list **stack);
void	rotate_a(t_list **stack);
void	rotate_b(t_list **stack);
void	rotate_both(t_list **a_stack, t_list **b_stack);

void	swap(t_list **stack);
void	swap_a(t_list **stack);
void	swap_b(t_list **stack);
void	swap_ab(t_list **stack_a, t_list **stack_b);

void	push(t_list **stack_from, t_list **stack_where);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

void	reverse(t_list **stack);
void	reverse_a(t_list **stack);
void	reverse_b(t_list **stack);
void	reverse_ab(t_list **stack_a, t_list **stack_b);

#endif