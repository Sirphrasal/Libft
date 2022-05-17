/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:12:55 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/21 21:44:47 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i])
		i++;
	return (i);
}
//Devuelve el length del src y copia dstsize caracteres en *dst

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	num;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	num = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[num] && num < dstsize - 1)
		{
			dst[num] = src[num];
			num++;
		}
		dst[num] = '\0';
	}
	return (srcsize);
}
/* 
int	main (void)
{
	char	dst[50];
	char	src[] = "     3466&()&=(?Ç¨*__****HIHOU";

	printf("Numero de letras del source : %zu\n", ft_strlcpy(dst, src, 34));
}
 */