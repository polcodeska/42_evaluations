/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:54:13 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:11:47 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	calloc() reserviert ein Array von Speicherblöcken. Hierbei wird die Größe
	eines einzelnen Speicherblocks angegeben, sowie die Anzahl der benötigten
	Speicherblöcke. Die Speicherblöcke liegen entsprechend eines Arrays direkt
	hintereinander. Es wird also die Anzahl der Blöcke mit der Größe eines
	einzelnen Blocks multipliziert und entsprechend Speicher mit malloc
	angefordert. Zusätzlich wird der Speicherbereich initialisiert, so dass
	alle Bytes auf 0 gesetzt sind. Der Zeiger auf das erste Byte wird
	zurückgegeben oder NULL, falls kein Speicher alloziiert werden konnte.
	num: Anzahl der Speicherblöcke
	size: Größe eines einzelnen Speicherblocks 
*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	msize;
	void	*dst;

	msize = size * num;
	dst = malloc(msize);
	if (!(dst))
		return (0);
	ft_memset(dst, 0, msize);
	return (dst);
}
