/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:14:09 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/04/30 19:18:06 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				len;

	str = (unsigned char *)s;
	len = 0;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (str[len] == (char)c)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	s[] = "Hola que tal";

	printf("se encuentra el valor?: %s \n", strrchr("Hola que tal", 32));
	printf("se encuentra el valor?: %s\n", ft_strrchr(s, 32));
	return (0);
}
 */