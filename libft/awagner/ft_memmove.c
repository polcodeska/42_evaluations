/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:24:11 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:03:44 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The memmove() function takes three arguments: dest, src and count.
	When the memmove() function is called, it copies count bytes from the
	memory location pointed to by src to the memory location pointed to by dest.
	dest: Pointer to the memory location where the contents are copied to
    src: Pointer to the memory location where the contents are copied from.
    count: Number of bytes to copy from src to dest.
	https://www.programiz.com/cpp-programming/library-function/cstring/memmove
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < count)
	{
		i = count - 1;
		while (i < count)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < count)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
