/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:31:34 by lorfanu           #+#    #+#             */
/*   Updated: 2021/12/29 18:31:36 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
*scans the initial n bytes of the memory area pointed to by s
*for the first instance of c <- bot interpreted by unsigned char
*returning a pointer to the matching byte or NULL if the character is not found
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
