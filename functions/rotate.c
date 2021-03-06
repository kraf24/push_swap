/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:25:19 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/11 15:43:01 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_list **stack)
{
	t_list *temp;

	temp = *stack;
	*stack = (*stack)->next;
	ft_lstadd_back(stack , temp);
	temp->next = NULL;
}

void rotate_a(t_list ** stack)
{
	rotate(stack);
	write(1, "ra\n", 4);
}

void rotate_b(t_list ** stack)
{
	rotate(stack);
	write(1, "rb\n", 4);
}

void rotate_both(t_list ** a_stack, t_list ** b_stack)
{
	rotate(b_stack);
	rotate(a_stack);
	write(1, "rr\n", 4);
}