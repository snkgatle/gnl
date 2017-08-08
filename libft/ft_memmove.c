/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 12:07:14 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/19 15:12:08 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dst;
	size_t	i;

	p_src = (char *)src;
	p_dst = (char *)dst;
	i = 0;
	if (p_src == p_dst)
	{
		return (dst);
	}
	else if (p_src > p_dst)
	{
		while (n-- > 0)
			*p_dst++ = *p_src++;
	}
	else if (p_src < p_dst)
	{
		while (n-- > 0)
		{
			p_dst[n] = p_src[n];
		}
	}
	return (dst);
}
