/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 07:56:12 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/23 07:03:22 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_strcnt(char *s, char c)
{
	size_t cn;

	if (!s)
		return (0);
	cn = 0;
	if (*s != c)
		cn++;
	while (*s != '\0')
	{
		if (*s == c && (*(s + 1) != c) && *(s + 1) != '\0')
			cn++;
		s++;
	}
	return (cn);
}

static	size_t		ft_wordplace(char **arr, char *s, char c)
{
	size_t i;
	size_t str;
	size_t row;

	i = 0;
	row = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			str = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			arr[row] = ft_strsub(s, str, i - str);
			row++;
		}
	}
	return (row);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**sstr;
	size_t	j;

	j = ft_strcnt((char *)s, c);
	sstr = (char **)malloc(sizeof(char *) * (j + 1));
	if (!s || j == 0)
	{
		sstr[0] = NULL;
		return (sstr);
	}
	if (sstr != NULL)
	{
		sstr[ft_wordplace(sstr, (char *)s, c)] = NULL;
		return (sstr);
	}
	return (NULL);
}
