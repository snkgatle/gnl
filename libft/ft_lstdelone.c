/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 06:17:38 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/20 19:52:48 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || !del)
		return ;
	if ((*alst)->content != NULL)
		(*del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
