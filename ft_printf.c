/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:01:07 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/10/29 15:44:44 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_format(const char *format, va_list ap)
{
	int	c;

	c = 0;
	if (*format == '%')
		c += ft_putchar('%');
	if (*format == 'c')
		c += ft_putchar(va_arg(ap, int));
	if (*format == 's')
		c += ft_putstr(va_arg(ap, char *));
	if (*format == 'd' || *format == 'i')
		c += ft_putnbr(va_arg(ap, int));
	if (*format == 'u')
		c += ft_putunsigned(va_arg(ap, int));
	if (*format == 'X')
		c += ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	if (*format == 'x')
		c += ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
	if (*format == 'p')
		c += ft_printptr(va_arg(ap, void *));
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		c;

	va_start(ap, format);
	i = 0;
	c = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			c += ft_format(&format[i], ap);
		}
		else
		{
			ft_putchar(format[i]);
			c++;
		}
		i++;
	}
	va_end(ap);
	return (c);
}
