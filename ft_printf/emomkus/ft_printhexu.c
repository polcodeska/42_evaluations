/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emomkus <emomkus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:49:54 by emomkus           #+#    #+#             */
/*   Updated: 2021/11/22 22:50:50 by emomkus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	printhexu(unsigned int n, int ct)
{
	int		last_digit;

	if (n < 0)
		return (0);
	if (n > 15)
	{
		ct = printhexu(n / 16, ct);
	}
	last_digit = n % 16;
	ct += write(1, &"0123456789ABCDEF"[last_digit], 1);
	return (ct);
}
