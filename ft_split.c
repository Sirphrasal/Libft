/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:14:57 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/17 18:48:01 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	num_substrings(char const *s, char c)
{
	size_t	words;
	char	flag;

	words = 0;
	flag = 1;
	while (*s)
	{
		if (*s++ == c)
			flag = 1;
		else
		{
			words = words + flag;
			flag = 0;
		}
		if (!words && flag)
			return (0);
		if (!words)
			return (1);
	}
	return (words);
}

char	**save_substrings(char **mem, char *str, size_t words, char flag)
{
	size_t	str_len;
	size_t	i;
	size_t	aux_words;

	str_len = 0;
	i = 0;
	while (aux_words < words)
	{
		if (str[i] == flag || i >= ft_strlen(str))
		{
			if (str_len != 0)
				mem[aux_words++] = ft_substr(str, i - str_len, str_len);
			str_len = 0;
		}
		else
			str_len++;
		i++;
	}
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	words;

	if (!s)
		return (NULL);
	words = num_substrings(s, c);
	output = (char **)malloc(sizeof(char *) * (words + 1));
	if (output)
	{
		save_substrings(output, s, words, c);
		output[words] = NULL;
	}
	return (output);
}
