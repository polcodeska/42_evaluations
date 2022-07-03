/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:41:33 by awagner           #+#    #+#             */
/*   Updated: 2022/01/19 23:58:17 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	nstr = (char *)malloc(len + 1);
	if (!s || !(nstr))
		return (0);
	while (i < ft_strlen(s) && j < len)
		nstr[j++] = s[i++];
	nstr[j] = '\0';
	return (nstr);
}
