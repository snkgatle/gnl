/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 05:55:02 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/09 17:55:34 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;
	size_t	sz;

	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	sz = content_size;
	if (content == NULL)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		if (!(new_node->content = ft_memalloc(content_size + 1)))
			return (NULL);
		new_node->content = ft_memcpy(new_node->content, (void *)content, sz);
		new_node->content_size = content_size;
	}
	new_node->next = NULL;
	return (new_node);
}
