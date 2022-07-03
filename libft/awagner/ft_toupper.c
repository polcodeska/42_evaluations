/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:41:37 by awagner           #+#    #+#             */
/*   Updated: 2022/01/15 21:48:45 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The toupper() function converts a lowercase alphabet to an uppercase alphabet.
*/

int	ft_toupper(int ch)
{
	char	c;

	c = ch;
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
