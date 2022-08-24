/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:49:07 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/24 19:15:43 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
		{
			return (0);
		}
		stack = stack->next;
	}
	return (1);
}

void	bst_move(int cmp_move, int *best_move, int *i, int x)
{
	if (cmp_move < *best_move)
	{
		*best_move = cmp_move;
		*i = x;
	}
}

int	chek_duplicat(char **all_str, int i)
{
	int	x;

	x = 0;
	while (x < i)
	{
		if (!(ft_strncmp(all_str[i], all_str[x], 42)))
			return (true);
		x++;
	}
	return (false);
}

int	lst_size(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

int	move(int i, int size)
{
	if (i < (size / 2))
		return (i);
	else
		return (i - size);
}
