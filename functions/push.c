/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:55:39 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/22 17:35:30 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_list **stack_from, t_list **stack_where)
{
	t_list  *temp;

	if(!*stack_from)
		return ;
	temp = *stack_from;
	*stack_from = (*stack_from)->next;
	ft_lstadd_front(stack_where, temp);
}

void push_a(t_list **stack_a, t_list **stack_b)
{
	write(1, "pa\n", 3);
	push(stack_b, stack_a);
}

void push_b(t_list **stack_a, t_list **stack_b)
{
	write(1, "pb\n", 3);
	push(stack_a, stack_b);
}