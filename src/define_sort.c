/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:34:09 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/25 14:14:05 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void	free_lst(t_list *list)
{
	t_list	*curent;
	t_list	*next;

	curent = list;
	while (curent)
	{
		next = curent->next;
		free(curent);
		curent = next;
	}
	list = NULL;
}

t_list	*newnode(void)
{
	t_list	*ls;

	ls = (t_list *)malloc(sizeof(*ls));
	if (!ls)
		return (NULL);
	ls->content = 0;
	ls->next = NULL;
	return (ls);
}

t_list	*fill_stack(int argc, char *argv[])
{
	t_list	*temp;
	int		i;
	t_list	*ptr;
	long	x;

	ptr = newnode();
	temp = ptr;
	i = 1;
	while (i < argc)
	{
		if (int_chek(argv[i]))
			error(ptr);
		if (chek_duplicat(argv, i))
			error(ptr);
		x = ft_atoi(argv[i]);
		if (x > INT32_MAX || x < INT32_MIN)
			error(ptr);
		temp->content = ft_atoi(argv[i]);
		if (i < argc - 1)
		{
			temp->next = newnode();
			temp = temp->next;
		}
		i++;
	}
	return (ptr);
}

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
		if (!check_sorted(temp))
			simpl(a_stack, b_stack, size);
	else
		return ;
	else if (size > 6)
		if (!check_sorted(temp))
			complicated(a_stack, b_stack, size);
	return ;
}
