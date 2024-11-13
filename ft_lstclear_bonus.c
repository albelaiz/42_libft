/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:45:25 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/13 13:23:18 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *str;
	if (!lst || !del)
	return ;
	while (*lst)
	{
		str = (*lst) -> next;
		ft_lstdelone(*lst,del);
		*lst = str;
	}
	free(*lst);
}