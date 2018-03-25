/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 08:42:27 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/23 08:42:29 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*s_dst;
	char			*s_src;

	i = 0;
	s_dst = (char *)dst;
	s_src = (char *)src;
	while (i < len)
	{
		s_dst[i] = s_src[i];
		i++;
	}
	return (s_dst);
}
