/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfranke <dfranke@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:31:45 by dfranke           #+#    #+#             */
/*   Updated: 2022/01/23 12:47:32 by dfranke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack *stack, t_node *node)
{
	node->above = stack->bottom;
	stack->bottom = node;
	if (node->above == NULL)
	{
		if (stack->top != NULL)
			terminate(ERR);
		stack->top = node;
	}
	else
		node->above->below = node;
	stack->nbrs += 1;
}

void	create_node(t_stack *stack, int nbr)
{
	t_node		*node;
	static int	i;

	i += 1;
	node = malloc(sizeof(t_node));
	if (!node)
		terminate(ERR);
	node->value = nbr;
	node->index = 0;
	node->pos = i;
	node->above = NULL;
	node->below = NULL;
	fill_stack(stack, node);
}

t_stack	*create_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		terminate(ERR);
	stack->top = NULL;
	stack->bottom = NULL;
	stack->id = A;
	stack->nbrs = 0;
	stack->valid = true;
	stack->chnks = 0;
	stack->c_chnk = 0;
	stack->rb_count = 0;
	stack->trg = -1;
	stack->t_pos = 0;
	return (stack);
}
