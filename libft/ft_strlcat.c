/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:42:58 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/09 10:56:57 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		bsize;
	size_t		d_len;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	bsize = size;
	while (*d != '\0' && bsize != 0)
	{
		d++;
		bsize--;
	}
	d_len = d - dst;
	bsize = size - d_len;
	if (bsize == 0)
		return (d_len + ft_strlen(s));
	while (*s != '\0' && bsize-- != 1)
		*d++ = *s++;
	d_len = d - dst;
	*d = '\0';
	return (d_len + ft_strlen(s));
}
