/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:34:09 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/23 16:46:08 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"

void	define( t_list **a_stack, t_list **b_stack)
{
	int		size;
	t_list	*temp;

	size = lst_size(*a_stack);
	temp = *a_stack;
	if (size == 2 && (*a_stack)->content > (*a_stack)->next->content)
		swap_a(a_stack);
	else if (size == 3)
		simpliest(a_stack);
	else if (size > 3 && size <= 6)
	{
		while (temp->next)
		{
			if (temp->content > temp->next->content)
			{
				simpl(a_stack, b_stack, size);
				return ;
			}
			temp = temp->next;
		}
	}
	else if (size > 6)
		complicated(a_stack, b_stack, size);
	return ;
}
