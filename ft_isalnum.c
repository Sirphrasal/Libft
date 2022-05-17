/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 21:49:43 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/20 20:56:59 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (!c)
		return (0);
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = 8;
	printf("Es: %d", ft_isalnum(c));
	return (0);
} */
