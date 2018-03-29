/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 09:08:05 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/28 09:08:06 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst2;
	t_list *lst2_temp;

	if (!lst || !f)
		return (NULL);
	lst2 = f(lst);
	lst = lst->next;
	lst2_temp = lst2;
	while (lst)
	{
		lst2_temp->next = f(lst);
		lst2_temp = lst2_temp->next;
		lst = lst->next;
	}
	return (lst2);
}
