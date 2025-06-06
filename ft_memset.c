/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:21:40 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/14 12:39:33 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n);

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	l;
	unsigned char	*p;

	l = 0;
	p = (unsigned char *)s;
	while (l < n)
	{
		p[l] = c;
		l++;
	}
	return (s);
}
/*
int main(void) {
  char string[] = "Hello there";

  ft_memset(string, '?', 5);
  printf("%s\n", string);
}*/
