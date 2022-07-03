/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:54:31 by awagner           #+#    #+#             */
/*   Updated: 2022/01/15 21:33:02 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The tolower() function converts a uppercase alphabet to an lowercase alphabet.
*/

int	ft_tolower(int ch)
{
	char	c;

	c = ch;
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
