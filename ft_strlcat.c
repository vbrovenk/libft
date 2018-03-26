/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 08:40:27 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/22 08:40:29 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int i;
	unsigned int len;
	unsigned int src_len;

	i = 0;
	len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (i + len < (dstsize - 1) && src[i])
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[i + len] = '\0';
	if ((len + src_len) < dstsize)
		return (len);
	else
		return (dstsize);
}
