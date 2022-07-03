/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:13:03 by awagner           #+#    #+#             */
/*   Updated: 2022/01/16 16:25:16 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strchr() sucht ein Zeichen (char) in einem Speicherbereich.
	str: Zeiger auf den Speicherblock, der durchsucht werden soll
	val: Zeichen, dass gesucht werden soll. Das Zeichen wird als Integer 
	übergeben, tatsächlich werden allerdings nur die unteren 8 Bit gesucht. 
	Es sollte also ein Char übergeben werden.
	Return value: Zeiger auf das gefundene Element oder null. 
*/

char	*ft_strchr(const char *str, int val)
{
	while (*str != '\0' && val != *str)
		str++;
	if (val == *str)
		return ((char *)str);
	else
		return (0);
}
