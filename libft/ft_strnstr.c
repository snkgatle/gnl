/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:50:05 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 10:38:43 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	char	*p_big;
	char	*p_lil;
	size_t	l_size;

	p_big = (char *)big;
	p_lil = (char *)little;
	l_size = ft_strlen(p_lil);
	if (*p_lil == '\0')
		return (p_big);
	while ((l > 0) && *p_big != '\0')
	{
		if (*p_big == *p_lil && l >= l_size)
		{
			if (!ft_strncmp(p_big, p_lil, l_size))
				return (p_big);
		}
		l--;
		p_big++;
	}
	return (NULL);
}
