/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:34:57 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/14 10:18:04 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *p_dst;

	p_dst = dst;
	while (len-- > 0)
	{
		if (*src != '\0')
			*p_dst++ = *src++;
		else
			*p_dst++ = '\0';
	}
	return (dst);
}
