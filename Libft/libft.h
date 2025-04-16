/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:23:39 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/16 14:25:53 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>

int		ft_isalpha(int c);
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(const char *str);
int		ft_strncmp(char	*s1, char *s2, unsigned	int n);
int		ft_toupper(int a);
int		ft_tolower(int a);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strlcat(char *dst, const char *src, size_t size);

#endif
