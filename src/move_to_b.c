/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:41:57 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/23 12:20:27 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"

int	ft_find_smallest(t_list **stack_a)
{
	int		x;
	t_list	*temp;

	temp = *stack_a;
	x = temp->content;
	while (temp->next)
	{
		temp = temp->next;
		if (x > temp->content)
			x = temp->content;
	}
	return (x);
}

int	ft_find_mid(t_list **stack_a)
{
	int		x;
	int		*arr;
	int		len;
	t_list	*temp;

	x = 0;
	temp = *stack_a;
	len = ft_lstsize(*stack_a);
	arr = (int *)malloc(sizeof(int) * len);
	while (temp->next)
	{
		arr[x] = temp->content;
		temp = temp->next;
		x++;
	}
	x = ft_bubble_sort(arr, len);
	free(arr);
	return (x);
}

int	ft_find_bigest(t_list **stack_a)
{
	int		x;
	t_list	*temp;

	temp = *stack_a;
	x = temp->content;
	while (temp->next)
	{
		temp = temp->next;
		if (x < temp->content)
			x = temp->content;
	}
	return (x);
}

int	cheker(t_list **stack_a, int *arr)
{
	int	i;

	i = -1;
	while (i++ < 2)
	{
		if (arr[i] == (*stack_a)->content)
			return (1);
	}
	return (0);
}

void	push_to_b(t_list **stack_a, t_list **stack_b, int size)
{
	int	num[3];
	int	x;

	x = 0;
	num[0] = ft_find_smallest(stack_a);
	num[1] = ft_find_bigest(stack_a);
	num[2] = ft_find_mid(stack_a);
	while (x < size)
	{
		if (cheker(stack_a, num))
			rotate_a(stack_a);
		else
			push_b(stack_a, stack_b);
		x++;
	}
}
