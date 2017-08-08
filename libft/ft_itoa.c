/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:55:52 by skgatle           #+#    #+#             */
/*   Updated: 2017/07/05 14:44:44 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_strrev(char *s)
{
	char *start;
	char *end;
	char temp;

	start = s;
	end = s;
	while (*s++)
		end++;
	end = end - 1;
	while (start < end)
	{
		temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}

static	int		ft_numcnt(int n)
{
	size_t cnt;

	cnt = 0;
	while ((n % 10 != 0) || n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static	int		ft_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

static	char	*ft_num2str(char *s, int num, int len)
{
	char	*p_s;
	int		rem;
	int		res;

	res = ft_abs(num);
	if (res == 0)
	{
		*s++ = '0';
		*s = '\0';
		return (s - 1);
	}
	p_s = s;
	while (len-- > 0)
	{
		rem = res % 10;
		*p_s++ = '0' + rem;
		res /= 10;
	}
	if (num < 0)
		*p_s++ = '-';
	*p_s = '\0';
	return (s);
}

char			*ft_itoa(int n)
{
	char	*st;
	char	*p_s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	st = ft_strnew(sizeof(char) * (ft_numcnt(n) + 1));
	if (st != NULL)
	{
		p_s = st;
		p_s = ft_num2str(p_s, n, ft_numcnt(n));
		ft_strrev(p_s);
	}
	return (st);
}
