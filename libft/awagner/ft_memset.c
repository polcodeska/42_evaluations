/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:35:04 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:03:18 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memset() function takes three arguments: dest, ch and count. 
The character represented by ch is first converted to unsigned char and then 
copies it into the first count characters of the object pointed to by dest.
dest: 	Pointer to the object to copy the character.
ch:		The character to copy.
count: 	Number of times to copy.
https://www.programiz.com/cpp-programming/library-function/cstring/memset
*/

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)dest)[i] = ch;
		i++;
	}
	return (dest);
}
