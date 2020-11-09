/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:01:30 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/09 19:06:41 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int ch);
int			ft_isdigit(int ch);
int			ft_isprint(int ch);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *array, int c, size_t n);
int			ft_memcmp(const void *buf1, const void *buf2, size_t count);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *destination, const void *source, size_t n);
void		*ft_memset(void *dest, int c, size_t n);
char		*ft_strchr(const char *str, int ch);
char		*ft_strdup(const char *str);
char 		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *string1, const char *string2, size_t num);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strrchr(const char *str, int ch);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int ch);

#endif

