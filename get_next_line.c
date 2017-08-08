/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 20:41:46 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/28 15:20:06 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	t_info	*ft_ini_list(int fd)
{
	t_info *link;

	if ((link = (t_info *)malloc(sizeof(t_info))))
	{
		link->fd = fd;
		if ((link->cnt_tmp = ft_strnew(BUFF_SIZE + 1)))
			if (read(fd, link->cnt_tmp, BUFF_SIZE) != -1 && !(link->next = NULL))
				return (link);
	}
	return (NULL);
}

static	t_info	*ft_currlink(t_info *head, int fd)
{
	t_info *nxt_link;

	while (head)
	{
		if (head->fd == fd)
			return (head);
		if (head->next == NULL)
			break ;
		head = head->next;
	}
	nxt_link = ft_ini_list(fd);
	if (!nxt_link || !(head->next = nxt_link))
		return (NULL);
	return (nxt_link);
}

static	void		ft_line_cpy(t_info *c_link, char **ln, char *pos)
{
	char	*part_ln;
	char	*res_content;
	char	*tmp;
	size_t	l;
	size_t	cnt_ln;

	l = pos - c_link->cnt_tmp;
	cnt_ln = ft_strlen(c_link->cnt_tmp);
	part_ln = ft_strsub(c_link->cnt_tmp, 0, l);
	tmp = *ln;
	*ln = ft_strjoin(*ln, part_ln);
	ft_memdel((void **)&tmp);
	res_content = ft_strsub(c_link->cnt_tmp, l + 1, cnt_ln);
	ft_memdel((void **)&(c_link->cnt_tmp));
	ft_memdel((void **)&part_ln);
	c_link->cnt_tmp = res_content;
}

static	int			ft_read_line(int fd, t_info *curr_link, char **ln)
{
	int		len;
	int		tmnt;
	char	*pos;
	char	*tmp;

	tmnt = 1;
	while (tmnt > 0)
	{
		if ((pos = ft_strchr(curr_link->cnt_tmp, '\n')))
		{
			ft_line_cpy(curr_link, ln, pos);
			return (1);
		}
		tmp = *ln;
		*ln = ft_strjoin(*ln, curr_link->cnt_tmp);
		ft_memdel((void **)&tmp);
		len = ft_strlen(curr_link->cnt_tmp);
		ft_memdel((void **)&(curr_link->cnt_tmp));
		if (!(curr_link->cnt_tmp = ft_strnew(BUFF_SIZE + 1)))
			return (-1);
		tmnt = read(fd, curr_link->cnt_tmp, BUFF_SIZE);
		if (!len && !tmnt)
			return (0);
	}
	return (1);
}

int					get_next_line(int const fd, char **line)
{
	int					result;
	static t_info	*head;
	t_info			*curr_link;

	if (fd < 0 || BUFF_SIZE <= 0 || !line)
		return (-1);
	if (!head)
	{
		head = ft_ini_list(fd);
		if (!head)
			return (-1);
	}
	*line = ft_strnew(1);
	if (!(curr_link = ft_currlink(head, fd)))
		return (-1);
	if ((result = ft_read_line(fd, curr_link, line)) > 0)
		return (1);
	else if (result == 0)
		return (0);
	else
		return (-1);
}
