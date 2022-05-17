/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:59:10 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/04 21:13:59 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*size1;
	char	*size2;

	size1 = (char *)dst;
	size2 = (char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			size1[len] = size2[len];
	}
	else
	{
		while (i < len)
		{
			*(size1 + i) = *(size2 + i);
			i++;
		}
	}
	return (dst);
}

/* int main()
{
   char dest[] = "oldstring";
   const char src[]  = "newst";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
  memmove(dest, src,7);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   printf("La nueva memoria = %s\n", ft_memmove(dest, src, 7));
   return (0);
} */
