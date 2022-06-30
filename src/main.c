/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:34 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/06/30 15:25:24 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int lst_size(t_list *list)
{
	int i;

	i = 0;
	while(list)
	{
		ft_printf("%d ", list->content);
		list = list->next;
		i++;
	}
	return (i);
}

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
		// if(i < argc)
		// {
		// 	free_lst(ptr);
		// 	return (0);
		// }
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
	//t_list *b_stack;

	if(!(a_stack = fill_stack(argc, argv)))
	{
		write(2, "Error\n", 6);
			return (0);	
	}

	lst_size(a_stack);
	return (0);
	
}