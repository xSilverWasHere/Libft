/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:19:18 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/08 13:21:32 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	l;

	l = 0;
	while ((l < n) && (src[l] != '\0'))
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int n = 50;
	char src[] = "Hello World!"; 
	char dest[20] = "";
	
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}*/
