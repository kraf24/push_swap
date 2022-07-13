/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:35:44 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/13 18:53:04 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse(t_list **stack)
{
	t_list *temp;
	while((*stack)->next->next)
	temp = *stack;
	
}

void reverse_a(t_list **stack)
{
	write(1, "rra\n", 4);
	reverse(stack);
}

void reverse_b(t_list **stack)
{
	write(1, "rrb\n", 4);
	reverse(stack);
}

void reverse_ab(t_list **stack_a, t_list **stack_b)
{
	write(1, "rrr\n", 4);
	reverse(stack_a);
	reverse(stack_b);
}