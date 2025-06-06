/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:43:52 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/22 14:33:49 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	char		*trimmed;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
	{
		start++;
	}
	if (*start == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
	{
		end--;
	}
	len = end - start + 1;
	trimmed = malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, start, len + 1);
	return (trimmed);
}
