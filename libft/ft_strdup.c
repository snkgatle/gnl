/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:01:29 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/22 18:39:50 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	char	*p;
	size_t	len;

	len = ft_strlen(s);
	if (!(dup_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	p = dup_s;
	while (*s)
		*dup_s++ = *s++;
	*dup_s = '\0';
	return (p);
}
