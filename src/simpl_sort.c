/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simpl_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:50:46 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/17 13:35:29 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"

static void	ft_push_smallest_a_help(t_list **stack_a, int n, int size)
{
	if (n < 3)
	{
		while (n > 0)
		{
			rotate_a(stack_a);
			n--;
		}
	}
	else
	{
		while (n < size)
		{
			reverse_a(stack_a);
			n++;
		}
	}
}

void	ft_push_smallest_a(t_list **stack_a, t_list **stack_b, int size)
{
	int		i;
	int		x;
	int		n;
	t_list	*temp;

	i = 0;
	n = 0;
	temp = *stack_a;
	x = temp->content;
	while (temp->next)
	{
		temp = temp->next;
		i++;
		if (x > temp->content)
		{
			n = i;
			x = temp->content;
		}
	}
		ft_push_smallest_a_help(stack_a, n, size);
	push_b(stack_a, stack_b);
}

void simpl(t_list **stack_a, t_list **stack_b, int size)
{
	int i;

	i = 0;
	while (i < size - 3)
	{
		ft_push_smallest_a(stack_a, stack_b, (size - i));
		i++;	
	}
	simpliest(stack_a);
	while(i-- > 0)
		push_a(stack_a, stack_b);
	
}

void simpliest(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content && (*stack)->content < (*stack)->next->next->content)
		swap_a(stack);
	else if((*stack)->content > (*stack)->next->content && (*stack)->next->content > (*stack)->next->next->content)
	{
		swap_a(stack);
		reverse_a(stack);
	}
	else if ((*stack)->content > (*stack)->next->next->content && (*stack)->content > (*stack)->next->content)
		rotate_a(stack);
	else if ((*stack)->next->next->content < (*stack)->next->content && (*stack)->next->next->content < (*stack)->content)
		reverse_a(stack);
	else if ((*stack)->next->content > (*stack)->content && (*stack)->next->content > (*stack)->next->next->content)
	{
		swap_a(stack);
		rotate_a(stack);
	}
}