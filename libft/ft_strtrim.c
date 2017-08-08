/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 22:02:30 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 14:22:21 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strstart(char const *s)
{
	char const *p_start;

	p_start = s;
	while (*p_start == ' ' || *p_start == '\n' || *p_start == '\t')
		p_start++;
	return ((char *)p_start);
}

static	char	*ft_strend(char const *s)
{
	char const *p_end;

	p_end = s;
	while (*p_end == ' ' || *p_end == '\n' || *p_end == '\t')
		p_end--;
	return ((char *)p_end);
}

char			*ft_strtrim(char const *s)
{
	char *strim;
	char *p_st;
	char *p_start;
	char *p_end;

	if (!s)
		return (NULL);
	p_end = (char *)s;
	while (*p_end)
		p_end++;
	p_start = ft_strstart(s);
	p_end = p_end - 1;
	if (*p_start == '\0')
		return (p_start);
	p_end = ft_strend(p_end);
	strim = ft_strnew(p_end - p_start + 1);
	if (strim != NULL)
	{
		p_st = strim;
		while (p_start <= p_end)
			*p_st++ = *p_start++;
		*p_st = '\0';
		return (strim);
	}
	return (NULL);
}
