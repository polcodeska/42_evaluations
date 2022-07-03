/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:56:56 by awagner           #+#    #+#             */
/*   Updated: 2022/01/19 23:59:06 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strncmp() vergleicht zwei Strings bis max zum angegebenen Zeichen oder
	in einem der beiden Strings ein Nullbyte gefunden wurde.
	fst: erster String
	sec: zweiter String
	size: Anzahl maximal zu vergleichender Zeichen
*/

#include "libft.h"

int	ft_strncmp(const char *fst, const char *sec, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (fst[i] == sec[i] && fst[i] != '\0')
	{
		if (i < (size - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(fst[i]) - (unsigned char)(sec[i]));
}
