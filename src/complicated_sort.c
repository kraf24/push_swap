/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complicated_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:25:25 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/23 16:11:50 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"

int	find_min(t_list *stack_a)
{
	int	i;

	i = 0;
	while (stack_a->content != ft_find_smallest(&stack_a))
	{
		stack_a = stack_a->next;
		i++;
	}
	return (i);
}

void	complicated(t_list **stack_a, t_list **stack_b, int size)
{
	t_values	*temp;
	int			i;
	int			order;
	int			t_size;

	i = 0;
	push_to_b(stack_a, stack_b, size);
	simpliest(stack_a);
	while (*stack_b)
	{
		temp = best_move_b(*stack_a, *stack_b, &t_size);
		order = pick_best_move(temp, t_size);
		exec(temp[order], stack_a, stack_b);
		free(temp);
	}
	i = find_min(*stack_a);
	if (i < size / 2)
		while (i-- > 0)
			rotate_a(stack_a);
	else
		while (i++ < size)
			reverse_a(stack_a);
}
