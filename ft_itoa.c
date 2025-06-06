/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com      +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:30:50 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/23 12:03:27 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

static int	len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		size;
	int		i;

	nbr = (long) n;
	size = len(nbr);
	str = malloc((size + 1) * sizeof (char));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	i = size - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str[i--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[size] = '\0';
	return (str);
}
