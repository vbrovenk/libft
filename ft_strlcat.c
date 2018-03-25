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
	unsigned int res;

	i = 0;
	len = 0;
	src_len = 0;
	while (dst[len])
		len++;
	while (src[src_len])
		src_len++;
	res = src_len + len;
	while (len < (dstsize - 1) && src[i])
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	return (res);
}
