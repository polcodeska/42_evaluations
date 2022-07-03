/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:33:41 by lorfanu           #+#    #+#             */
/*   Updated: 2021/12/29 18:01:12 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* appends the NUL-terminated string src to the end of dst.
* will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result
* return: the total length of the string they tried to create
* if size <= dst's length -> return value: src len + size
* if size > dst's length -> return value: src len + dst len
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;
	size_t	d;
	size_t	res;

	i = 0;
	s = strlen(src);
	d = strlen(dst);
	if (size <= d)
		res = s + size;
	else
		res = s + d;
	while (src[i] && size > d + 1)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (res);
}
