/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:29:31 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/14 12:44:21 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	size_t			l;
	unsigned char	*p;

	l = 0;
	p = (unsigned char *)s;
	while (l < n)
	{
		p[l] = 0;
		l++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char *s = "Hello World";
	ft_bzero(s, '5');
	printf("%s\n", s);
}*/
