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

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	ft_put(char *s, int n, int len)
{
	int i;
	int end;

	i = len;
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
		end = 1;
	}
	else
		end = 0;
	len -= 1;
	while (len >= end)
	{
		s[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	s[i] = '\0';
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_size(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (n == (-2147483648))
	{
		ft_strcpy(str, "-2147483648");
		return (str);
	}
	ft_put(str, n, len);
	return (str);
}
