/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:31:25 by awagner           #+#    #+#             */
/*   Updated: 2021/12/08 18:26:16 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The isascii() function tests for an ASCII character (in the range 0 to 127).
	Returns nonzero if c is an ASCII character; otherwise, zero.
*/

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}
