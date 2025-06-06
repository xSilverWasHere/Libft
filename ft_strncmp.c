/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:04:03 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/24 11:11:02 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char	*s1, char *s2, unsigned	int n);

int	ft_strncmp(char	*s1, char *s2, unsigned	int n)
{
	size_t			 i;
	unsigned char	 *p1;
	unsigned char	 *p2;
	
	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < n && p1[i] != '\0' && p1[i] == p2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (p1[i] - p2[i]);
}
