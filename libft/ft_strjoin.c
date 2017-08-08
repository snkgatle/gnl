/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 21:03:32 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 14:43:57 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *sjoin;
	char *p_s1;
	char *p_s2;
	char *p_sjoin;

	if (!s1 || !s2)
		return (NULL);
	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	sjoin = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(s2));
	if (sjoin != NULL)
	{
		p_sjoin = sjoin;
		while (*p_s1)
			*p_sjoin++ = *p_s1++;
		while (*p_s2)
			*p_sjoin++ = *p_s2++;
		*p_sjoin = '\0';
		return (sjoin);
	}
	return (NULL);
}
