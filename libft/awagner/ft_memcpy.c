/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:05:31 by awagner           #+#    #+#             */
/*   Updated: 2022/01/16 16:47:27 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcpy() copies specified bytes of data from the source to the destination.
	dst - pointer to the mem location where the contents are copied to. void*
    src - pointer to the mem location where the contents are copied from. void*
    count - number of bytes to copy from src to dst. It is of size_t type.
	https://www.programiz.com/cpp-programming/library-function/cstring/memcpy
*/

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	void	*i;

	i = dst;
	if (!dst && !src)
		return (0);
	while (count--)
	{
		*((unsigned char *)dst++) = *((unsigned char *)src++);
	}
	return (i);
}
