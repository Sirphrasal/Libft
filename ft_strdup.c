/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:43:31 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/27 22:14:24 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mem;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(s1) + 1;
	mem = (char *)malloc(sizeof(char) * n);
	if (!mem)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)mem)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	*(mem + n) = '\0';
	return (mem);
}
