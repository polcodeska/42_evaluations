/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:39:06 by awagner           #+#    #+#             */
/*   Updated: 2022/01/16 18:05:36 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Even though, isprint() takes integer as an argument, character is passed to
	the function. Internally, the character is converted to its ASCII value for
	the check. If a character passed to isprint() is a printable character, it
	returns non-zero integer, if not it returns 0.
	https://www.programiz.com/c-programming/library-function/ctype.h/isprint
*/

int	ft_isprint(int i)
{
	if (i >= ' ' && i <= '~')
		return (1);
	else
		return (0);
}
