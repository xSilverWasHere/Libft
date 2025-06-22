/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:35:29 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/06/22 12:09:20 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

//main functions
char	*get_next_line(int fd);

//utils
size_t	newft_strlen(const char *str);
char	*newft_strchr(const char *s, int c);
char	*newft_strjoin(char const *s1, char const *s2);
char	*newft_strndup(const char *s, size_t len);
char	*newft_strdup(char *s);
#endif
