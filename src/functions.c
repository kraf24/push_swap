/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:25:19 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/05 20:01:52 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_list **stack)
{
	t_list *temp;
	t_list *new;
	int data;

	//redo

	data = (*stack)->content;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	temp = *stack;
	new = ft_lstnew(data);
	ft_lstadd_back(stack , new);
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