/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:55:50 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/10/29 15:14:04 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsigned(unsigned int n)
{
	int	c;

	c = 0;
	if (n > 9)
	{
		c += ft_putnbr(n / 10);
		c += ft_putnbr(n % 10);
		return (c);
	}
	n = n + 48;
	c += write(1, &n, 1);
	return (c);
}
