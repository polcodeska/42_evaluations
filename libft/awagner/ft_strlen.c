/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:46:24 by awagner           #+#    #+#             */
/*   Updated: 2022/01/19 23:59:32 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlen() function takes a string as an argument and returns its length.
	The returned value is of type size_t (the unsigned integer type).
	https://www.programiz.com/c-programming/library-function/string.h/strlen
*/

#include "libft.h"

size_t	ft_strlen(const char *p)
{
	size_t	i;

	i = 0;
	while (p[i] != '\0')
		i++;
	return (i);
}
