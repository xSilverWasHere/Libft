/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:19:11 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/10/29 15:21:53 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printptr(void *ptr)
{
	int	c;

	c = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	c += ft_putstr("0x");
	c += ft_puthex((unsigned long)ptr, "0123456789abcdef");
	return (c);
}
