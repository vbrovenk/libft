/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 08:29:57 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/28 08:29:59 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->content_size = content_size;
	if (content)
	{
		elem->content = ft_strsub(content, 0, content_size);
	}
	else
	{
		elem->content = NULL;
		elem->content_size = 0;
	}
	elem->next = NULL;
	return (elem);
}
