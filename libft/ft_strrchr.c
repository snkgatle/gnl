/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:07:56 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/06 16:39:46 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p_s;
	unsigned char	uc;

	uc = (unsigned char)c;
	p_s = NULL;
	while (*s)
	{
		if (*s == uc)
			p_s = (char *)s;
		s++;
	}
	if (uc == '\0')
		p_s = (char *)s;
	return (p_s);
}
