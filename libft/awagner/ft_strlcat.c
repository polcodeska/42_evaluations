/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:13:00 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:00:12 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Strlcat may be used as a less ambiguous alternative to strncat.
	Strlcat returns the length of the concatenated string whether or not it was
	possible to copy it all. This makes it easier to calculate the required
	buffer size.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		src_size;
	size_t	dest_size;
	size_t	i;

	i = 0;
	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	if (dstsize == 0)
		return (src_size);
	while (dest_size < dstsize && dst[dest_size])
		dest_size++;
	if (dstsize <= dest_size)
		return (dstsize + src_size);
	i = 0;
	while (dstsize && (--dstsize - dest_size) && src[i])
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (src_size + dest_size);
}
