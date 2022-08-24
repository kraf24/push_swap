/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:34 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/24 19:11:25 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a_stack;
	t_list	*b_stack;

	b_stack = NULL;
	a_stack = fill_stack(argc, argv);
	define(&a_stack, &b_stack);
	free_lst(a_stack);
	if (b_stack)
		free_lst(b_stack);
	return (0);
}
