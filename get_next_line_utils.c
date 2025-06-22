/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:24:39 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/06/22 12:10:13 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*newft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*newft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	char	*s3;

	i = 0;
	n = 0;
	s3 = malloc((newft_strlen(s1) + newft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2 && s2[n])
	{
		s3[i + n] = s2[n];
		n++;
	}
	s3[i + n] = '\0';
	return (s3);
}

size_t	newft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*newft_strndup(const char *s, size_t len)
{
	char	*str;
	int		i;
	size_t	s_len;

	s_len = newft_strlen(s);
	i = 0;
	if (len >= s_len)
		return (newft_strdup(""));
	str = malloc((s_len - len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[len])
	{
		str[i] = s[len];
		i++;
		len++;
	}
	str[i] = '\0';
	return (str);
}

char	*newft_strdup(char *s)
{
	char	*str;
	int		i;
	int		l;

	if (s == NULL)
		return (NULL);
	i = 0;
	l = newft_strlen(s);
	str = malloc ((l + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < l)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
