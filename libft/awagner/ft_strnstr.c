/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:46:12 by awagner           #+#    #+#             */
/*   Updated: 2022/01/19 23:58:02 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strnstr() sucht einen Zeichenkette innerhalb eines Strings. 
	str: Der zu durchsuchende String
	pat: Eine Zeichenkette, der im ersten gesucht wird.
	len: Länge in Bytes die durchsucht werden soll.
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pat, size_t len)
{
	size_t	i;
	size_t	j;

	if (pat[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == pat[j])
		{
			while (i + j < len && str[i + j] == pat[j])
			{
				j++;
				if (!pat[j])
					return ((char *)&str[i]);
			}
		}
		i++;
	}
	return (0);
}
