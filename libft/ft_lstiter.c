/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 07:25:42 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/14 07:35:21 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *hd;

	if (!lst || !f)
		return ;
	hd = lst;
	while (hd != NULL)
	{
		(*f)(hd);
		hd = hd->next;
	}
}
