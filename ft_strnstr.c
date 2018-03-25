/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 11:45:41 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/23 11:45:42 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	int				pos;
	char			*res;

	res = (char *)haystack;
	i = 0;
	j = 0;
	while (i < len && res[i])
	{
		j = 0;
		pos = i;
		while (i < len && res[i] == needle[j] && needle[j])
		{
			i++;
			j++;
		}
		if (res[i] != needle[0])
			i++;
		if (!needle[j])
			return (&res[pos]);
	}
	return (0);
}
