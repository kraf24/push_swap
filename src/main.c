/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:34 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/22 15:41:03 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_lst(t_list *list)
{
	t_list *curent;
	t_list *next;

	curent = list;
	while (curent)
	{
		next = curent->next;
		free(curent);
		curent = next;
	}
	list = NULL;
}

t_list *newnode(void)
{
	t_list	*ls;

	ls = (t_list *)malloc(sizeof(*ls));
	if (!ls)
		return (NULL);
	ls->content = 0;
	ls->next = NULL;
	return (ls);
}

t_list *fill_stack(int argc, char *argv[])
{
	t_list *temp;
	int i;
	t_list *ptr;

	ptr = newnode();
	temp = ptr;
	i = 1;
	while(i < argc)
	{
		if(int_chek(argv[i]))
			error(ptr);
		if(chek_duplicat(argv, i))
			error(ptr);
		temp->content = ft_atoi(argv[i]);	
		if(i < argc - 1)
		{
			temp->next = newnode();
			temp = temp->next;
		}
		i++;
	}
	return (ptr);
}

int main(int argc, char *argv[])
{
	
	t_list *a_stack;
	t_list *b_stack = NULL;

	(void)*b_stack;
	a_stack = fill_stack(argc, argv);
	define(&a_stack, &b_stack);
	// while(a_stack)
	// {
	// ft_printf("%d ", a_stack->content);
	// a_stack = a_stack->next;
	// }
	// ft_printf("\n");
	// 	while(b_stack)
	// {
	// ft_printf("%d ", b_stack->content);
	// b_stack = b_stack->next;
	// }
	
	return (0);
}

