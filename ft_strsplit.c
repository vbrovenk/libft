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

static int		length_word(const char *s, char c, size_t i)
{
	size_t len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(res[j] = ft_strsub(s, i, length_word(s, c, i))))
				return (NULL);
			i += length_word(s, c, i);
			j++;
		}
		else
			i++;
	}
	res[j] = 0;
	return (res);
}
