/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:42:00 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/19 20:39:09 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/* 
int	main(void)
{
	char	b[] = "hola que tal";

	printf("%s", ft_memset(b, 32, 9));
}
 */
/* (char )b se utiliza para modificar los tipos de variable
	sin modificar su valor
	str = *b asigna el punt de memoria de b a str */