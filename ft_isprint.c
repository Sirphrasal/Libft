/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:52:32 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/12 20:42:15 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (c);
	return (0);
}

/* int	main(void)
{
	int	c;

	c = ' ';
	printf ("Si el valor %d = 0 no es un num print", ft_isprint(c));
}
 */