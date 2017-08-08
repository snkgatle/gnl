/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:27:43 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/23 07:09:35 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nw_lnk;
	t_list *nl;

	if (!lst || !f)
		return (NULL);
	nw_lnk = f(lst);
	nl = nw_lnk;
	while (!(lst = lst->next) && (nl = nl->next))
		nl = f(lst);
	nl->next = NULL;
	return (nw_lnk);
}
