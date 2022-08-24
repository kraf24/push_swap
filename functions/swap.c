/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:16:48 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/24 19:29:36 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	swap_a(t_list **stack)
{
	swap(stack);
	write(1, "sa\n", 3);
}

void	swap_b(t_list **stack)
{
	swap(stack);
	write(1, "sb\n", 3);
}

void	swap_ab(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}

void	swap_ab_no_output(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
