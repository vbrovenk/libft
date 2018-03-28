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
	t_list *res;


	res = ft_lstnew(lst->content, lst->content_size);
	while (lst)
	{
		res = f(lst);
		res = res->next;
		lst = lst->next;
	}
	return (res);
}
