/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:01:51 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 13:10:04 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *s_new;
	char *p_s_new;
	char *p_s;

	if (!s || !f)
		return (NULL);
	s_new = (char *)ft_strnew(ft_strlen(s));
	if (s_new != NULL)
	{
		p_s = (char *)s;
		p_s_new = s_new;
		while (*p_s)
			*p_s_new++ = f(*p_s++);
		*p_s_new = '\0';
	}
	return (s_new);
}
