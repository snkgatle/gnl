/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 20:41:46 by skgatle           #+#    #+#             */
/*   Updated: 2017/08/03 14:24:42 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include <fcntl.h>
# include <string.h>
# include "libft/libft.h"

int							get_next_line(int const fd, char **line);
typedef struct				s_info
{
	int									fd;
	char								*cnt_tmp;
	struct s_info				*next;
}											t_info;

#endif
