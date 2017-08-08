/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:48:34 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/08 16:30:36 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p_s;
	char	*s_new;
	char	*p_s_new;
	size_t	n;

	if (!s || !f)
		return (NULL);
	n = 0;
	s_new = ft_strnew(ft_strlen(s));
	if (s_new != NULL)
	{
		p_s = (char *)s;
		p_s_new = s_new;
		while (*p_s)
		{
			*p_s_new++ = f(n, *p_s++);
			n++;
		}
	}
	return (s_new);
}
