/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 17:00:09 by lorfanu           #+#    #+#             */
/*   Updated: 2021/12/29 18:04:36 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
*copies up to size - 1 characters from the NUL-terminated string src to dst, 
*NUL-terminating the result
*return: the total length of the string they tried to create
* size = 0 / 1 -> the original fct returns the length of src, copies nothing
*/

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		length;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (size == 0 || size == 1)
		return (length);
	i = 0;
	while (src[i] != '\0' && size > i + 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}
