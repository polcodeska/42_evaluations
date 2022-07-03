/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:43:36 by awagner           #+#    #+#             */
/*   Updated: 2022/01/19 23:58:32 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The C library function char *strrchr(const char *str, int c) searches for
	the last occurrence of the character c (an unsigned char) in the string 
	pointed to, by the argument str.
*/
#include "libft.h"

char	*ft_strrchr(const char *str, int val)
{
	int			i;
	const char	*ini;

	ini = str;
	i = ft_strlen(str);
	str = (str + i);
	while (*str != *ini && val != *str)
		str--;
	if (val == *str)
		return ((char *)str);
	return (0);
}
