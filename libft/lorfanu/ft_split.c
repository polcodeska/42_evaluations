/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:45:39 by lorfanu           #+#    #+#             */
/*   Updated: 2021/12/29 15:37:07 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* Allocates (with malloc(3)) and returns an array of strings 
* obtained by splitting ’s’ using the character ’c’ as a delimiter.
* The array must be ended by a NULL pointer.
*/

static char	**ft_get_words(char const *s, char c, char **tab, size_t nb_words)
{
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		if ((end - start) > 0)
		{
			tab[nb_words] = ft_substr(s, start, end - start);
			nb_words++;
		}
	}
	tab[nb_words] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_words;
	char	**tab;

	nb_words = 0;
	tab = (char **)malloc(sizeof(*tab) * ft_strlen(s));
	if (s && tab)
		ft_get_words(s, c, tab, nb_words);
	return (tab);
}

// int main()
// {
// 	char *str = "VladZisZhereZnow";
// 	char **res = ft_split(str, 'Z');

// 	int i = 0;
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res[i]);
// 	free(res);
// 	return 0;
// }