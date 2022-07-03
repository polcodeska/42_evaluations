/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:13:20 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:00:01 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	With the strlcpy() function only dstsize characters maximum are copied, and
	the value returned is the size of string src. (The value returned is always
	the size of string src regardless of how many characters are copied.)
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t count)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (count == 0)
		return (i);
	i = 0;
	while (src[i] && i < count - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
