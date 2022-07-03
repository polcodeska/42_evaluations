/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:30:49 by awagner           #+#    #+#             */
/*   Updated: 2021/12/08 18:11:54 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isalpha() checks whether a character is an alphabet (a to z and A-Z) or not.
	If a character passed to isalpha() is an alphabet, it returns
	a non-zero integer, if not it returns 0.
	The isalpha() function is defined in <ctype.h> header file.
	https://www.programiz.com/c-programming/library-function/ctype.h/isalpha
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
