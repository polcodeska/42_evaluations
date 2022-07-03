/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:34:11 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:04:37 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memchr() sucht ein Zeichen (char) in einem Speicherbereich.
	ptr: Zeiger auf den Speicherblock, der durchsucht werden soll
	val: Zeichen, dass gesucht werden soll. Das Zeichen wird als Integer 
		 übergeben, tatsächlich werden allerdings nur die unteren 8 Bit gesucht.
		 Es sollte also ein char übergeben werden.
	size: gibt an, wie groß der zu durchsuchende Speicherblock ist.
*/

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((char *) ptr)[i] == val)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}
