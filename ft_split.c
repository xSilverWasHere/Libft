/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:05:49 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/23 15:08:34 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freemem(char **result, int i)
{
	int	index;

	index = 0;
	while (index < i)
	{
		free(result[index]);
		index++;
	}
	free(result);
	return (NULL);
}

static int	count_words(const char *str, char delimiter)
{
	int	words;
	int	index;

	index = 0;
	words = 0;
	if (!str)
		return (0);
	while (str[index])
	{
		while (str[index] && str[index] == delimiter)
			index++;
		if (str[index] && str[index] != delimiter)
		{
			words++;
		}
		while (str[index] && str[index] != delimiter)
			index++;
	}
	return (words);
}

static char	*extract_word(char const *str, char delimiter)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i] && str[i] != delimiter)
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != delimiter)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		i;
	char	**result;

	i = 0;
	index = 0;
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		if (s[index] != c && s[index] != '\0')
		{
			result[i] = extract_word(&s[index], c);
			if (!result[i])
				return (freemem(result, i));
			i++;
		}
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = "hello!zzzzzzzz";
	char **s2;
	int	i;

	i = 0;
	s2 = ft_split(s, 'z');
	while (s2[i])
	{
		printf("%s\n", s2[i]);
		i++;
	}
}*/
