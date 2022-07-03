/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:26:43 by awagner           #+#    #+#             */
/*   Updated: 2022/01/16 13:19:17 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	bzero() function copies n bytes, each with a value of zero, into string s.
*/

void	ft_bzero(void *s, int count)
{
	int	i;
	int	ch;

	i = 0;
	ch = 0;
	while (i < count)
	{
		((unsigned char *)s)[i] = ch;
		i++;
	}
	return ;
}
