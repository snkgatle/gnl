/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 08:05:39 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/18 19:19:52 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t len)
{
	unsigned char *p_d;
	unsigned char uc;

	p_d = (unsigned char*)d;
	uc = (unsigned char)c;
	while (len-- > 0)
		*p_d++ = uc;
	return (d);
}
