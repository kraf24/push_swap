/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:34:09 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/13 17:26:06 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"

void define( t_list **a_stack, t_list **b_stack)
{
	int size;
	(void)*b_stack;

	size = lst_size(*a_stack);
	//ft_printf("%d", size);
	if(size == 2 && (*a_stack)->content > (*a_stack)->next->content)
	//ft_printf("%d", size);
		{push_b(a_stack, b_stack);
		push_a(a_stack, b_stack);
		push_a(a_stack, b_stack);}
	//else if (size == 3)
		//simpliest(a_stack);
	//else if (size <= 6)
		//simpl(a_stack, b_stack, );
	//else if (size > 6)
		//complicated();
}
