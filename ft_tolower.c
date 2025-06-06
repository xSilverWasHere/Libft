/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:21:40 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/14 12:43:52 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a);

int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		a += 32;
	return (a);
}

/*
int main(void)
{
  char str;
  
  str = 'h';
  printf("%c\n", ft_tolower(str));
}*/
