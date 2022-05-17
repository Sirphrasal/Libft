/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 21:44:27 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/12 21:08:01 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	lendst;
	char	*s;

	s = (char *)src;
	lendst = ft_strlen(dst);
	len = ft_strlen(s);
	i = 0;
	if (dstsize <= lendst)
	{
		return (len + dstsize);
	}
	while (src[i] && lendst + 1 < dstsize)
	{
		dst[lendst] = s[i];
		lendst++;
		i++;
	}
	dst[lendst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&s[i]));
}

/* int	main(void)
{
	char	dst[35] = "Esta vez ";
	char	src[35] = "esta bien si que si";
	size_t	dstsize;

	dstsize = 30;
	printf("Value returned: %zu",ft_strlcat(dst, src, dstsize));
} */
