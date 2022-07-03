/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwagner <dwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:31:45 by dwagner           #+#    #+#             */
/*   Updated: 2022/01/17 10:32:47 by dwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*alts;

	alts = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (alts + i);
	while (i != 0)
	{
		if (alts[i] == (char)c)
			return (alts + i);
		i--;
	}
	if (s[0] == (char)c)
		return (alts);
	return (0);
}
