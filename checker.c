/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:30:20 by admin             #+#    #+#             */
/*   Updated: 2022/08/24 19:27:51 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/libft/libft.h"
#include "push_swap.h"
#include "functions.h"

int compair(t_list **stack_a, t_list **stack_b, char *input)
{
	if (!ft_strncmp(input, "pa\n", 3))
		push(stack_a, stack_b);
	else if (!ft_strncmp(input, "pb\n", 3))
		push(stack_b, stack_a);
	else if (!ft_strncmp(input, "sa\n", 3))
		swap(stack_a);
	else if (!ft_strncmp(input, "sb\n", 3))
		swap(stack_b);
	else if (!ft_strncmp(input, "ss\n", 3))
		swap_ab_no_output(stack_a, stack_b);
	else if (!ft_strncmp(input, "ra\n", 3))
		rotate(stack_a);
	else if (!ft_strncmp(input, "rb\n", 3))
		rotate(stack_b);
	else if (!ft_strncmp(input, "rr\n", 3))
		rotate_both_no_output(stack_a, stack_b);
	else if (!ft_strncmp(input, "rra\n", 3))
		reverse(stack_a);
	else if (!ft_strncmp(input, "rrb\n", 3))
		reverse(stack_b);
	else if (!ft_strncmp(input, "rrr\n", 3))
		reverse_ab_no_output(stack_a, stack_b);
	else
		return (0);
	return (1);
}

void output(t_list *stack_a, t_list *stack_b)
{
	if(check_sorted(stack_a) && stack_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int main(int argc, char *argv[])
{
	t_list *stack_a;
	t_list *stack_b;
	char *input;

	if (argc < 2)
		return (0);
	stack_a = fill_stack(argc, argv);
	stack_b = NULL;
	while(1)
	{
		input = get_next_line(STDIN_FILENO);
		if (!input)
			break;
		if (!compair(&stack_a, &stack_b, input))
		{
			error(stack_a);
			free_lst(stack_b);
		}
	}
	//output(stack_a, stack_b);
	free_lst(stack_a);
	free_lst(stack_b);
	return (0);
}
