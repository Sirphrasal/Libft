/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:04:24 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/25 21:04:00 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	int			c;
	const char	s[] = "hola que tal";

	c = 'o';
	printf ("%s esta", ft_memchr(&s, c, 9));
	return (0);
}
 */

/* The program *memchr(const void *str, int c, size_t n)
searches for the first occurrence of 
the character c (an unsigned char) 
in the first n bytes of the string pointed to, by the argument str. */

/* str − This is the pointer to the block of memory where the 
		search is performed.

c − This is the value to be passed as an int, but the function performs 
	a byte per byte search using the unsigned char conversion of this value.

n − This is the number of bytes to be analyzed. */