/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:46:21 by awagner           #+#    #+#             */
/*   Updated: 2022/01/17 18:48:46 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	 atoi konvertiert einen ASCII-String in eine Integer. Zunächst werden
	 sämtliche Whitespaces (Leerzeichen, Tabs) übersprungen, bis die ersten
	 Ziffern gefunden werden. Es darf ein + bzw. - der Zahl vorangestellt sein. 
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}
