/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:01:39 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 14:02:59 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p_s1;
	unsigned char *p_s2;

	if (n == 0)
		return (0);
	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	while ((*p_s1 == *p_s2) && n-- > 1)
	{
		p_s1++;
		p_s2++;
	}
	return (*p_s1 - *p_s2);
}
