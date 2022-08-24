/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:35:44 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/24 19:26:29 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_list **stack)
{
	t_list	*tmp_last;
	t_list	*previous;
	t_list	*start;

	if (!stack)
		return ;
	if (!(*stack)->next)
		return ;
	start = *stack;
	tmp_last = start;
	while (tmp_last->next)
	{
		previous = tmp_last;
		tmp_last = tmp_last->next;
	}
	tmp_last->next = start;
	previous->next = NULL;
	*stack = tmp_last;
}

void	reverse_a(t_list **stack)
{
	write(1, "rra\n", 4);
	reverse(stack);
}

void	reverse_b(t_list **stack)
{
	write(1, "rrb\n", 4);
	reverse(stack);
}

void	reverse_ab(t_list **stack_a, t_list **stack_b)
{
	write(1, "rrr\n", 4);
	reverse(stack_a);
	reverse(stack_b);
}

void	reverse_ab_no_output(t_list **stack_a, t_list **stack_b)
{	
	reverse(stack_a);
	reverse(stack_b);
}
