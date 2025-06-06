/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:19:18 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/16 15:24:30 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (size > 0)
	{
		while (src[l] && l < size - 1)
		{
			dst[l] = src[l];
			l++;
		}
		dst[l] = '\0';
	}
	return (ft_strlen(src));
}
