/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:34:03 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/30 19:09:34 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(const char *haystack, const char *needle);
void	*ft_memmove(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);



#endif