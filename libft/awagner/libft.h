/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:36:21 by awagner           #+#    #+#             */
/*   Updated: 2022/01/20 00:39:55 by awagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int i);
int		ft_isalpha(int c);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_memcmp(const void *fst, const void *sec, size_t size);
int		ft_strncmp(const char *fst, const char *sec, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t count);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *p);

void	*ft_memset(void *dest, int ch, size_t count);
void	ft_bzero(void *s, int count);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memchr(const void *ptr, int val, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t count);
void	*ft_memmove(void *dst, const void *src, size_t count);

char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *str, const char *pat, size_t len);
char	*ft_strrchr(const char *str, int val);
char	*ft_strchr(const char *str, int val);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
