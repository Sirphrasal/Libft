/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:32:36 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/28 15:45:26 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	num;

	if (!lst)
		return (0);
	num = 0;
	while (lst)
	{
		lst = lst ->next;
		num++;
	}
	return (num);
}
