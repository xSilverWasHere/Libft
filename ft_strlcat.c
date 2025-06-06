/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:17:51 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/16 15:36:33 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	str;

	i = 0;
	l = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	str = i + ft_strlen(src);
	if (size > i)
	{
		while ((src[l] != '\0') && (i + l < size - 1))
		{
			dst[i + l] = src[l];
			l++;
		}
		dst[i + l] = '\0';
	}
	else
	{
		return (size + ft_strlen(src));
	}
	return (str);
}
