/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:24:07 by awagner           #+#    #+#             */
/*   Updated: 2021/12/08 18:21:11 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The isalnum() function checks whether the argument passed is an
	alphanumeric character (alphabet or number) or not.
	Returns 1 if argument is an alphanumeric character.
	Returns 0 if argument is neither an alphabet nor a digit.
	https://www.programiz.com/c-programming/library-function/ctype.h/isalnum
*/

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')
		|| (i >= '0' && i <= '9'))
		return (1);
	else
		return (0);
}
