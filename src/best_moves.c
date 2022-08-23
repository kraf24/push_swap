/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:10:20 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/23 16:44:17 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"

void	sub_exec(t_values *temp, t_list **stack_a, t_list **stack_b)
{
	if (temp->value[0] < 0)
	{
		reverse_a(stack_a);
		temp->value[0] += 1;
	}
	else if (temp->value[1] < 0)
	{
		reverse_b(stack_b);
		temp->value[1] += 1;
	}
	else if (temp->value[0] > 0)
	{
		rotate_a(stack_a);
		temp->value[0] -= 1;
	}
	else if (temp->value[1] > 0)
	{
		rotate_b(stack_b);
		temp->value[1] -= 1;
	}
}

void	exec(t_values temp, t_list **stack_a, t_list **stack_b)
{
	while (temp.value[0] != 0 || temp.value[1] != 0)
	{
		if (temp.value[0] > 0 && temp.value[1] > 0)
		{
			rotate_both(stack_a, stack_b);
			temp.value[0] -= 1;
			temp.value[1] -= 1;
		}
		else if (temp.value[0] < 0 && temp.value[1] < 0)
		{
			reverse_ab(stack_a, stack_b);
			temp.value[0] += 1;
			temp.value[1] += 1;
		}
		sub_exec(&temp, stack_a, stack_b);
	}
	push_a(stack_a, stack_b);
}

int	best_move_a(int value, t_list *stack_a)
{
	t_list	*prev;
	t_list	*temp;
	int		size;
	int		i;

	size = ft_lstsize(stack_a);
	prev = stack_a;
	temp = stack_a->next;
	stack_a = stack_a->next;
	i = 1;
	while (temp)
	{
		if (temp->content > value && prev->content < value)
			return (move(i, size));
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (move(i, size));
}

t_values	*best_move_b(t_list *stack_a, t_list *stack_b, int *t_size)
{
	t_list		*temp;
	t_values	*price;
	int			i;
	int			size;

	i = 0;
	temp = stack_b;
	size = ft_lstsize(stack_b);
	price = (t_values *)malloc(sizeof(t_values) * size);
	while (temp)
	{
		price[i].value[0] = best_move_a(temp->content, stack_a);
		if (i <= size / 2)
			price[i].value[1] = i;
		else
			price[i].value[1] = i - size;
		temp = temp->next;
		i++;
	}
	*t_size = size;
	return (price);
}

int	pick_best_move(t_values *temp, int size)
{
	int	i;
	int	x;
	int	best_move;
	int	cmp_move;

	best_move = INT32_MAX;
	x = 0;
	while (x < size)
	{
		if (temp[x].value[0] * temp[x].value[1] > 0)
		{
			if (abs(temp[x].value[0]) > abs(temp[x].value[1]))
				cmp_move = abs(temp[x].value[0]);
			else
				cmp_move = abs(temp[x].value[1]);
		}
		else
		{
			cmp_move = abs(temp[x].value[0]) + abs(temp[x].value[1]);
		}
		bst_move(cmp_move, &best_move, &i, x);
		x++;
	}
	return (i);
}
