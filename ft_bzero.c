/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:37:55 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/19 21:19:31 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
}

/* int	main(void)
{
	char	s[] = "Hola349467948476987344869++++`ñ```l+k'";
	char	f[] = "Hola349467948476987344869++++`ñ```l+k'";

	ft_bzero(s, 5);
	printf("ceros: %s \n", s);
	bzero(f, 5);
	printf("ceros: %s \n", f);
}
 */