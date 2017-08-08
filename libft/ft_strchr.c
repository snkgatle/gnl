/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 16:30:28 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/06 07:58:10 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*p_s;

	p_s = (char *)s;
	uc = (unsigned char)c;
	while (*p_s)
	{
		if (*p_s == uc)
			return (p_s);
		p_s++;
	}
	if (*p_s == uc)
		return (p_s);
	return (NULL);
}
