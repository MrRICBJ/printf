/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:19:21 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/27 11:36:58 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	t_list	*tmp;
	int		i;
	int		k;
	char	*c;

	i = -1;
	k = 0;
	c = (char *)s;
	tmp = (t_list *) malloc (sizeof(t_list));
	if (!tmp)
		return (-1);
	tmp->k = 0;
	va_start(tmp->ap, s);
	while (c[++i])
	{
		ft_initialise_tmp(tmp);
		if (c[i] == '%' && c[i])
			i = ft_flags(tmp, c, i + 1);
		else
			k += write (1, &c[i], 1);
	}
	va_end(tmp->ap);
	k += tmp->k;
	free(tmp);
	return (k);
}
