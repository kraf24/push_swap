/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:30:20 by admin             #+#    #+#             */
/*   Updated: 2022/08/23 18:56:33 by admin            ###   ########.fr       */
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
	else if (!ft_strncmp(input, "sstack_a\n", 3))
		swap(stack_a);
	else if (!ft_strncmp(input, "sb\n", 3))
		swap(stack_b);
	else if (!ft_strncmp(input, "ss\n", 3))
   {
		swap(stack_a);
      swap(stack_b);
   }
	else if (!ft_strncmp(input, "ra\n", 3))
		rotate(stack_a);
	else if (!ft_strncmp(input, "rb\n", 3))
		rotate(stack_b);
	else if (!ft_strncmp(input, "rr\n", 3))
   {
		rotate(stack_a);
      rotate(stack_b);      
   }
	else if (!ft_strncmp(input, "rra\n", 3))
		reverse(stack_a);
	else if (!ft_strncmp(input, "rrb\n", 3))
		reverse(stack_b);
	else if (!ft_strncmp(input, "rrr\n", 3))
   {
		reverse(stack_a);
      reverse(stack_b);
   }
	else
		return (0);
	return (1);
}

// void output(t_list *stack_a)
// {
//    while (stack_a)

// }

int main(int argc, char *argv[])
{
   t_list *stack_a;
   t_list *stack_b;
   char *input;

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
   //output(stack_a);
   free_lst(stack_a);
   free_lst(stack_b);
   return (0);
}
