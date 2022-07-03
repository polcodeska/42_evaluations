/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:33:33 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:04:12 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcmp() vergleicht zwei Speicherbereiche über eine wählbare Größe.
	Der Rückgabewert ist 0, wenn die Speicherbereiche gleich sind. 
	fst: Speicherblock (mindestens der Größe size)
	sec: zu vergleichender Speicherblock (mindestens der Größe size)
	size: Anzahl maximal zu vergleichender Bytes 
*/

#include "libft.h"

int	ft_memcmp(const void *fst, const void *sec, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)fst)[i] != ((unsigned char *)sec)[i])
			return (((unsigned char *)fst)[i] - ((unsigned char *)sec)[i]);
		i++;
	}
	return (0);
}
