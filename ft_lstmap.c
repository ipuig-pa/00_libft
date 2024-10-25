/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:25:09 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/10/25 16:05:23 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//NOT FINISHED!!!! NOT WORKING!!!!
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	current = lst;
	while (current != NULL)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		new->content = f(current->content);
		new->next = 
		new_list = ft_lstnew(new);
		ft_lstadd_back(&new_list, new);
		current = current->next;
	}
}
