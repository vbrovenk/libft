/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 08:15:07 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/27 08:15:09 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_size(int n)
{
	int	i;

	i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		flag;

	flag = 0;
	len = ft_size(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		flag = 1;
	}
	while (n)
	{
		if (flag)
			str[len - 1] = (n % 10 + '0');
		else
			str[len - 2] = (n % 10 + '0');
		n /= 10;
		len--;
	}
	return (str);
}
