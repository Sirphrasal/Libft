/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:38:44 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/23 19:15:18 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	lennum(long n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*int2str(long n, char *box, unsigned int len)
{
	if (n == 0)
	{
		box[0] = '0';
		return (box);
	}
	if (n < 0)
		n *= -1;
	while (len--)
	{
		box[len] = (n % 10) + '0';
		n /= 10;
	}
	if (box[0] == '0')
		box[0] = '-';
	return (box);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = lennum(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str)
		str = int2str(n, str, len);
	return (str);
}

/* Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse. */
