/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 12:00:07 by vbrovenk          #+#    #+#             */
/*   Updated: 2018/03/26 12:00:09 by vbrovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	size_t	i;
	int		words;
	int		flag;

	i = 0;
	words = 0;
	while (s[i])
	{
		flag = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			flag = 1;
		}
		if (flag)
			words += 1;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	i;
	int		words;
	int		len;
	int		j;
	int		k;

	k = 0;
	j = 0;
	i = 0;
	words = count_words(s, c);
	if (!(res = (char **)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (s[i] && j < words)
	{
		len = 0;
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		res[j] = ft_strnew(len);
		ft_strncpy(res[j], &s[k], len);
		j++;
	}
	res[j] = 0;
	return (res);
}
