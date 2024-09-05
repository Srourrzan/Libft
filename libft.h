/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:33:54 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/05 21:13:30 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char	ft_toupper(char c);
char	ft_tolower(char c);
int	ft_isalpha(int c);
int	ft_isdigit(char c);
int	ft_isalnum(char c);
int	ft_isascii(int c);
size_t	ft_strlen(const char *s);
void	ft_memset(void *s, int c, size_t n);
char    *ft_strchr(const char *src, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strrchr(const char *s, int c);
int     ft_isprint(int c);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putendl_fd(char *s, int fd);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strdup(const char *s1);

#endif
