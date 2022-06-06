/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreijo- <sfreijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:34:30 by sfreijo-          #+#    #+#             */
/*   Updated: 2022/05/28 19:35:32 by sfreijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), \
void (*del)(void *))
{
	t_list	*new;
	t_list	*result;

	if (lst || f || del)
	{
		result = NULL;
		while (lst)
		{
			new = ft_lstnew((*f)(lst->content));
			if (!new)
			{
				ft_lstclear(&result, del);
				return (NULL);
			}
			ft_lstadd_back(&result, new);
			lst = lst->next;
		}
		return (result);
	}
	return (NULL);
}
