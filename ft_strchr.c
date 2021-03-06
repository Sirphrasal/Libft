/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:09:22 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/25 19:41:18 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s != (char)c)
		return (0);
	return ((char *)s);
}
/* int	main(void)
{
    const char  c[] = "susana";
    printf("se encuentra el valor?: %s\n", strchr(c, 'a'));
	printf("se encuentra el valor?: %s\n", ft_strchr(c, 'a'));
    return (0);
}
 */
/* The strchr() function locates the first occurrence of c 
(converted to a char) 
in the string pointed to by s. /
The terminating null
character is considered to be part of the string; therefore if 
c is `\0', the functions locate the terminating `\0'. */

/* RETURN VALUES
The functions strchr() and strrchr() return a pointer to 
the located character, or NULL if the character does not appear in the
string. */