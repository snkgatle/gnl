/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 12:51:33 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/23 07:07:51 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *p_str;

	p_str = (unsigned char*)str;
	while (n-- > 0)
	{
		if (*p_str == (unsigned char)c)
			return (p_str);
		p_str++;
	}
	return (NULL);
}
