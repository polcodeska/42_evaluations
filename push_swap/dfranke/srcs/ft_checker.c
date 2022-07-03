/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfranke <dfranke@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:53:49 by dfranke           #+#    #+#             */
/*   Updated: 2022/01/23 12:48:06 by dfranke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_out(t_stack *stack_a, t_stack *stack_b)
{
	if (issorted(stack_a) && !stack_b->top
		&& (stack_a->trg != 0 || stack_b->trg != 0))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

void	use_op(t_stack *stack_a, t_stack *stack_b, char *name)
{
	if (!ft_strcmp(name, "sa\n"))
		sx(stack_a);
	else if (!ft_strcmp(name, "sb\n"))
		sx(stack_b);
	else if (!ft_strcmp(name, "ra\n"))
		rx(stack_a);
	else if (!ft_strcmp(name, "rb\n"))
		rx(stack_b);
	else if (!ft_strcmp(name, "rra\n"))
		rrx(stack_a);
	else if (!ft_strcmp(name, "rrb\n"))
		rrx(stack_b);
	else if (!ft_strcmp(name, "pa\n"))
		px(stack_b, stack_a);
	else if (!ft_strcmp(name, "pb\n"))
		px(stack_a, stack_b);
	else if (!ft_strcmp(name, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(name, "rrr\n"))
		rrr(stack_a, stack_b);
}

void	get_ops(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*op;
	t_list	*tmp;
	int		nl;

	stack_b->id = B;
	op = NULL;
	while (op == NULL || op)
	{
		ft_lstadd_back(&op, ft_lstnew(get_next_line(0)));
		tmp = ft_lstlast(op);
		nl = ((int *)tmp->content)[0];
		if (!tmp->content || nl == '\n')
			break ;
	}
	while (op)
	{
		tmp = op->next;
		use_op(stack_a, stack_b, op->content);
		free(op->content);
		free(op);
		op = tmp;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (2 <= argc)
	{
		stack_a = parse(argv, argc);
		if (stack_a->valid)
		{
			stack_b = create_stack();
			get_ops(stack_a, stack_b);
			print_out(stack_a, stack_b);
			free_stack(stack_b);
		}
		free_stack(stack_a);
	}
	return (0);
}
