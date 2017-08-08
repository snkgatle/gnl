/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:27:48 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 10:31:01 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char *p_big;
	char *p_lil;

	p_big = (char *)big;
	p_lil = (char *)little;
	if (*p_lil == '\0')
		return (p_big);
	while (*p_big)
	{
		if (*p_big == *p_lil)
		{
			if (!ft_strncmp(p_big, p_lil, ft_strlen(p_lil)))
				return (p_big);
		}
		p_big++;
	}
	return (NULL);
}
