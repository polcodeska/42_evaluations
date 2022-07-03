/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:15:43 by awagner           #+#    #+#             */
/*   Updated: 2021/12/08 18:18:03 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isdigit() takes integer as an argument, character is passed to the function.
	Internally, the character is converted to its ASCII value for the check.
	https://www.programiz.com/c-programming/library-function/ctype.h/isdigit
*/

int	ft_isdigit(int i)
{
	if (i <= '9' && i >= '0')
		return (1);
	else
		return (0);
}
