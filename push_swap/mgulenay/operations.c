/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:05:36 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 20:10:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **head)
{
	swap_ab(head);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **head)
{
	swap_ab(head);
	write(1, "sb\n", 3);
}

void	swap_both(t_stack **head)
{
	swap_a(head);
	swap_b(head);
	write(1, "ss\n", 3);
}

void	rotate_a(t_stack **head)
{
	rotate_ab(head);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **head)
{
	rotate_ab(head);
	write(1, "rb\n", 3);
}
