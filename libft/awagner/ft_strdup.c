/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:54:02 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:16:20 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	his function returns a pointer to a null-terminated byte string, which is a
	duplicate of the string pointed to by s. The memory obtained is done
	dynamically using malloc and hence it can be freed using free(). 
	It returns a pointer to the duplicated string s.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
